#include<stdio.h>
//int main()
//{
//	char ch='w';
//	char *pc=&ch;
//	printf("%c\n",*pc);
//	return 0;
//}

//int main()
//{
//	char arr[]="abcd";
//	char *pc=arr;
//	printf("%s\n",arr);//一直打印直至遇到'\0'
//	printf("%s\n",pc);//%s输出字符串  %c输出单个字符
//}
//注意
//int main()
//{
//	char *p="abcd";//常量字符串
//	printf("%c\n",*p);
//	printf("%s\n",p);
//}

//int main()
//{
//	char arr1[]="abcd";
//	char arr2[]="abcd";
//	char *p1="abcd";
//	char *p2="abcd";//常量字符串（不能被修改） 在内存中储存在同一块空间
//	if(arr1==arr2)
//	{
//		printf("hehe");
//	}
//	else
//	{
//		printf("haha");
//	}
//	//if(p1==p2)
//	//{
//	//	printf("hehe");
//	//}
//	//else
//	//	printf("haha");
//	return 0;
//}

//指针数组
//int main()
//{
//	int i=0,j=0;
//	int arr1[]={1,2,3,4};
//	int arr2[]={2,3,4,5};
//	int arr3[]={3,4,5,6};
//	int *parr[]={arr1,arr2,arr3};
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//			printf("%d ",*(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组指针
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int (*p)[10]=&arr;//将数组的地址存起来 p就是数组指针
//	//加括号的原因：[]优先级比*更高 若不加括号就是指针数组的定义
//	return 0;
//}

//int main()
//{
//	char* arr[5];//指针数组
//	char* (*pa)[5]=&arr;
//
//	int arr2[10]={0};
//	int (*pa2)[10]=&arr2;
//}

//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int (*pa)[10]=&arr;
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",(*pa)[i]);
//	}
//	printf("\n");
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",*(*pa+i));
//	}
//	return 0;
//}

////数组指针大多用在二维数组中
//void print1(int arr[3][5],int x,int y)//参数是数组
//{
//	int i=0,j=0;
//	for(i=0;i<x;i++)
//	{
//		for(j=0;j<y;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5],int x,int y)//参数是指针
//{
//	int i=0;
//	for(i=0;i<x;i++)
//	{
//		int j=0;
//		for(j=0;j<y;j++)
//		{
//			printf("%d ",*(*(p+i)+j)); 
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//	print1(arr,3,5);
//	print2(arr,3,5);
//	return 0;
//}

////二维数组传参
////参数为数组名
//void test(int arr[3][5])//√
//{}
//void test1(int arr[][5])//√
//{}
//void test2(int arr[3][])//×
//{}
//void test3(int *arr)//×
//{}
//void test4(int(*arr)[5])//√
//{}
//int main()
//{
//	int arr[3][5]={0};
//	test(arr);
//	test1(arr);
//	test2(arr);
//	test3(arr);
//	test4(arr);
//	return 0;
//}

//一级指针传参
//void test(int *p)
//{}
//int main()
//{
//	int a=1;
//	int* pa=&a;
//	test(&a);
//	test(pa);
//}
////二级指针传参
//void test(int** p)
//int main()
//{
//	int *ptr;
//	int *arr[10];//指针数组
//	int** pp=&ptr;
//	test(&ptr);
//	test(pp);
//	test(arr);//数组名是首元素的地址 在指针数组中其每个元素就是指针，指针的地址就是二级指针
//	return 0;
//}

//函数指针-指向函数的指针,存放函数的地址（数组指针-指向数组的指针）
//int Add(int x,int y)
//{
//	return x+y;
//}
//int main()
//{
//	//&函数名 和 函数名指的都是函数的地址
//	printf("%p\n",&Add);
//	printf("%p\n",Add);
//
//	int (*pa)(int,int)=Add;
//	printf("&d\n",(pa)(2,3));
//	printf("%d\n",(*pa)(2,3));//5
//	return 0;
//}

//代码解读
//1.(*(void (*)())0)()
//void(*)()是一个函数指针类型 （函数指针类型）0 表示将0强制类型转换为指针类型  然后调用0的地址处的函数
//2.void (*signal(int , void(*)(int)))(int);
//void (*      signal(int , void(*)(int))     )(int)
//signal是一个函数声明
//signal是一个函数 其有两个参数 一个是int类型 一个是函数指针类型 这个函数指针指向的函数有一个int类型的参数 函数返回类型是void
//signal返回类型是函数指针类型 该函数指针指向的函数有一个int类型的参数 函数返回类型是void
//使用typedef

////函数指针数组（存放函数的地址的数组）
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
//	int i=0;
//	int(*parr[4])(int,int)={Add,Sub,Mul,Div};
//	for(i=0;i<4;i++)
//	{
//		printf("%d\n",(*parr[i])(2,3));//*可以省略
//	}
//	return 0;
//}

//char* my_strcpy(char *dest,const char* src)
////1.写一个函数指针pf能够指向my_strcpy
////2.写一个函数指针数组pfArr,能够存放4个my_strlen函数的地址
//int main()
//{
//	char*(*pf)(char*,const char*)=my_strcpy;
//	char*(*pfArr[4])(char*,const char*)={};
//}

////计算器
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
//		{case 1:
//			printf("请输入两个操作数：");
//			scanf("%d%d",&a,&b);
//			printf("%d\n",Add(a,b));
//			break;
//		case 2:
//			printf("请输入两个操作数：");
//			scanf("%d%d",&a,&b);
//			printf("%d\n",Sub(a,b));
//			break;
//		case 3:
//			printf("请输入两个操作数：");
//			scanf("%d%d",&a,&b);
//			printf("%d\n",Mul(a,b));
//			break;
//		case 4:
//			printf("请输入两个操作数：");
//			scanf("%d%d",&a,&b);
//			printf("%d\n",Div(a,b));
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	}while(input);
//	return 0;
//}
//上述代码显得很冗杂 存在大量重复部分
//利用函数指针数组 用途：转移表
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
//若依然使用switch-case语句
//void Calc(int (*pf)(int,int))//pf找到Add函数的地址
//{
//	int x,y;
//	printf("请输入操作数：");
//	scanf("%d%d",&x,&y);
//	printf("%d\n",pf(x,y));//调用Add函数
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
//			Calc(Add);//将Add函数的地址传给pf
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