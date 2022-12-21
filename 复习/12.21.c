#include<stdio.h>
//int main()
//{
//	const char * pstr="hello world.";
//	printf("%s\n",pstr);
//	return 0;
//}

//int main()
//{
//	char str[]="abcd";
//	char *pstr=str;
//	printf("%s\n",str);
//	printf("%s\n",pstr);
//	printf("%p\n",pstr);//地址
//	printf("%p\n",str);//地址
//	return 0;
//}

//int main()
//{
//	int arr1[]={1,2,3,4};
//	int arr2[]={2,3,4,5};
//	int arr3[]={3,4,5,6};
//	int i,j;
//	int *pa[]={arr1,arr2,arr3};
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//			printf("%d ",*(pa[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int (*pa)[10]=&arr;//数组指针
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",(*pa)[i]);//pa是数组的地址 *pa就相当于数组名
//	}
//	printf("\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",*(*pa+i));//*(*pa+i)
//	}
//	return 0;
//}

//#include <stdio.h>
////void test(int arr[])//√
////{}
////void test(int arr[10])//√
////{}
////void test(int *arr)//√
////{}
////void test2(int *arr[20])//ok
////{}
//void test2(int **arr)//ok
//{}
//int main()
//{
//	int arr[10] = {0};
//	int *arr2[20] = {0};//指针数组
//	//test(arr);
//	test2(arr2);
//}
//void test(char **p)
//{
// 
//}
//int main()
//{
//	//char c = 'b';
//	//char*pc = &c;
//	//char**ppc = &pc;
//	char* arr[10];
//	//test(&pc);
//	//test(ppc);
//	test(arr);//Ok?
//	return 0;
//}

//int Add(int x,int y)
//{
//	return x+y;
//}
//int main()
//{
//	//&函数名 和 函数名指的都是函数的地址
//	//printf("%p\n",&Add);
//	//printf("%p\n",Add);
//
//	int (*pa)(int,int)=Add;
//	printf("%d\n",(pa)(2,3));
//	printf("%d\n",(*pa)(2,3));//5
//	return 0;
//}

//char* my_strcpy(char *dest,const char* src)
////1.写一个函数指针pf能够指向my_strcpy
////2.写一个函数指针数组pfArr,能够存放4个my_strlen函数的地址
//int main()
//{
//	char* (*pf)(char*,const char*)=my_strcpy;
//	char* (*pfArr[4])(char*,const char*);
//}

//计算器
//①
//void menu()
//{
//	printf("*****************  \n");
//	printf("** 1.add   2.sub **\n");
//	printf("** 3.mul   4.div **\n");
//	printf("******0.exit*******\n");
//}
//int Add(int x,int y)
//{
//	return x+y;
//}
//int Sub(int x,int y)//减
//{
//	return x-y;
//}
//int Mul(int x,int y)//乘
//{
//	return x*y;
//}
//int Div(int x,int y)//除
//{
//	return x/y;
//}
//int main()
//{
//	int input=0;
//	int a,b;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			printf("请输入两个操作数：");
//			scanf("%d%d",&a,&b);
//			printf("%d\n",add(a,b));
//			break;
//		case 2:
//			printf("请输入两个操作数：");
//			scanf("%d%d",&a,&b);
//			printf("%d\n",sub(a,b));
//			break;
//		case 3:
//			printf("请输入两个操作数：");
//			scanf("%d%d",&a,&b);
//			printf("%d\n",mul(a,b));
//			break;
//		case 4:
//			printf("请输入两个操作数：");
//			scanf("%d%d",&a,&b);
//			printf("%d\n",div(a,b));
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	}while(input);
//	return 0;
//}

//②
//void menu()
//{
//	printf("*****************  \n");
//	printf("** 1.add   2.sub **\n");
//	printf("** 3.mul   4.div **\n");
//	printf("******0.exit*******\n");
//}
//int Add(int x,int y)
//{
//	return x+y;
//}
//int Sub(int x,int y)//减
//{
//	return x-y;
//}
//int Mul(int x,int y)//乘
//{
//	return x*y;
//}
//int Div(int x,int y)//除
//{
//	return x/y;
//}
//int main()
//{
//	int input;
//	int x;
//	int y;
//	int ret;
//	int(*pfArr[5])(int,int)={0,Add,Sub,Mul,Div};
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d",&input);
//		if(input>=1&&input<=4)
//		{
//			printf("请输入两个操作数");
//			scanf("%d%d",&x,&y);
//			ret=pfArr[input](x,y);
//			printf("%d\n",ret);
//		}
//		else if(input==0)
//			printf("退出\n");
//		else
//			printf("选择错误\n");
//	}while(input);
//	return 0;
//}

//③
//void menu()
//{
//	printf("*****************  \n");
//	printf("** 1.add   2.sub **\n");
//	printf("** 3.mul   4.div **\n");
//	printf("******0.exit*******\n");
//}
//int Add(int x,int y)
//{
//	return x+y;
//}
//int Sub(int x,int y)//减
//{
//	return x-y;
//}
//int Mul(int x,int y)//乘
//{
//	return x*y;
//}
//int Div(int x,int y)//除
//{
//	return x/y;
//}
//void Calc(int (*pf)(int,int))
//{
//	int x,y;
//	printf("请输入操作数：");
//	scanf("%d%d",&x,&y);
//	printf("%d\n",pf(x,y));
//}
//int main()
//{
//	int input=0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		}
//	}while(input);
//	return 0;
//}