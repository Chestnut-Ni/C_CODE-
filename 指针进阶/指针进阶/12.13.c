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
//	printf("%s\n",arr);//һֱ��ӡֱ������'\0'
//	printf("%s\n",pc);//%s����ַ���  %c��������ַ�
//}
//ע��
//int main()
//{
//	char *p="abcd";//�����ַ���
//	printf("%c\n",*p);
//	printf("%s\n",p);
//}

//int main()
//{
//	char arr1[]="abcd";
//	char arr2[]="abcd";
//	char *p1="abcd";
//	char *p2="abcd";//�����ַ��������ܱ��޸ģ� ���ڴ��д�����ͬһ��ռ�
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

//ָ������
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

//����ָ��
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int (*p)[10]=&arr;//������ĵ�ַ������ p��������ָ��
//	//�����ŵ�ԭ��[]���ȼ���*���� ���������ž���ָ������Ķ���
//	return 0;
//}

//int main()
//{
//	char* arr[5];//ָ������
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

////����ָ�������ڶ�ά������
//void print1(int arr[3][5],int x,int y)//����������
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
//void print2(int(*p)[5],int x,int y)//������ָ��
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

////��ά���鴫��
////����Ϊ������
//void test(int arr[3][5])//��
//{}
//void test1(int arr[][5])//��
//{}
//void test2(int arr[3][])//��
//{}
//void test3(int *arr)//��
//{}
//void test4(int(*arr)[5])//��
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

//һ��ָ�봫��
//void test(int *p)
//{}
//int main()
//{
//	int a=1;
//	int* pa=&a;
//	test(&a);
//	test(pa);
//}
////����ָ�봫��
//void test(int** p)
//int main()
//{
//	int *ptr;
//	int *arr[10];//ָ������
//	int** pp=&ptr;
//	test(&ptr);
//	test(pp);
//	test(arr);//����������Ԫ�صĵ�ַ ��ָ����������ÿ��Ԫ�ؾ���ָ�룬ָ��ĵ�ַ���Ƕ���ָ��
//	return 0;
//}

//����ָ��-ָ������ָ��,��ź����ĵ�ַ������ָ��-ָ�������ָ�룩
//int Add(int x,int y)
//{
//	return x+y;
//}
//int main()
//{
//	//&������ �� ������ָ�Ķ��Ǻ����ĵ�ַ
//	printf("%p\n",&Add);
//	printf("%p\n",Add);
//
//	int (*pa)(int,int)=Add;
//	printf("&d\n",(pa)(2,3));
//	printf("%d\n",(*pa)(2,3));//5
//	return 0;
//}

//������
//1.(*(void (*)())0)()
//void(*)()��һ������ָ������ ������ָ�����ͣ�0 ��ʾ��0ǿ������ת��Ϊָ������  Ȼ�����0�ĵ�ַ���ĺ���
//2.void (*signal(int , void(*)(int)))(int);
//void (*      signal(int , void(*)(int))     )(int)
//signal��һ����������
//signal��һ������ ������������ һ����int���� һ���Ǻ���ָ������ �������ָ��ָ��ĺ�����һ��int���͵Ĳ��� ��������������void
//signal���������Ǻ���ָ������ �ú���ָ��ָ��ĺ�����һ��int���͵Ĳ��� ��������������void
//ʹ��typedef

////����ָ�����飨��ź����ĵ�ַ�����飩
//int Add(int x,int y)
//{
//	return x+y;
//}
//int Sub(int x,int y)//��
//{
//	return x-y;
//}
//int Mul(int x,int y)//��
//{
//	return x*y;
//}
//int Div(int x,int y)//��
//{
//	return x/y;
//}
//int main()
//{
//	int i=0;
//	int(*parr[4])(int,int)={Add,Sub,Mul,Div};
//	for(i=0;i<4;i++)
//	{
//		printf("%d\n",(*parr[i])(2,3));//*����ʡ��
//	}
//	return 0;
//}

//char* my_strcpy(char *dest,const char* src)
////1.дһ������ָ��pf�ܹ�ָ��my_strcpy
////2.дһ������ָ������pfArr,�ܹ����4��my_strlen�����ĵ�ַ
//int main()
//{
//	char*(*pf)(char*,const char*)=my_strcpy;
//	char*(*pfArr[4])(char*,const char*)={};
//}

////������
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
//int Sub(int x,int y)//��
//{
//	return x-y;
//}
//int Mul(int x,int y)//��
//{
//	return x*y;
//}
//int Div(int x,int y)//��
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
//		printf("��ѡ��");
//		scanf("%d",&input);
//		switch(input)
//		{case 1:
//			printf("������������������");
//			scanf("%d%d",&a,&b);
//			printf("%d\n",Add(a,b));
//			break;
//		case 2:
//			printf("������������������");
//			scanf("%d%d",&a,&b);
//			printf("%d\n",Sub(a,b));
//			break;
//		case 3:
//			printf("������������������");
//			scanf("%d%d",&a,&b);
//			printf("%d\n",Mul(a,b));
//			break;
//		case 4:
//			printf("������������������");
//			scanf("%d%d",&a,&b);
//			printf("%d\n",Div(a,b));
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	}while(input);
//	return 0;
//}
//���������Եú����� ���ڴ����ظ�����
//���ú���ָ������ ��;��ת�Ʊ�
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
//		printf("��ѡ��");
//		scanf("%d",&input);
//		if(input>=1&&input<=4)
//		{
//			printf("����������������");
//			scanf("%d%d",&x,&y);
//			ret=pfArr[input](x,y);
//			printf("%d\n",ret);
//		}
//		else if(input==0)
//			printf("�˳�\n");
//		else
//			printf("ѡ�����\n");
//	}while(input);
//	return 0;
//}
//����Ȼʹ��switch-case���
//void Calc(int (*pf)(int,int))//pf�ҵ�Add�����ĵ�ַ
//{
//	int x,y;
//	printf("�������������");
//	scanf("%d%d",&x,&y);
//	printf("%d\n",pf(x,y));//����Add����
//}
//int main()
//{
//	int input=0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			Calc(Add);//��Add�����ĵ�ַ����pf
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