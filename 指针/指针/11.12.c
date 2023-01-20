#include<stdio.h>
//不同类型的指针一步能走多远
//int main()
//{
//	int n = 10;
//	char *pc = (char*)&n;//强制类型转换
//	int *pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	printf("%p\n", pi);
//	printf("%p\n", pi+1);
//	return 0;
//}

//解引用能“引多远”(调试调出内存感受)
//int main()
//{
//	int n = 0x11223344;
//	char *pc=(char*)&n;//这里的（char*）是一个强制类型转换
//	int *pi = &n;
//	*pc = 0;//重点在调试的过程中观察内存的变化。
//	*pi = 0;//重点在调试的过程中观察内存的变化。
//	return 0;
//}

//int main()
//{
//	int i;
//	int arr[10]={0};
//	int *p=arr;
//	for(i=0;i<10;i++)
//	{
//		*(p+i)=1;
//	}
//	return 0;
//}

//int main()
//{
//	int i;
//	int arr[10]={0};
//	char *p=arr;
//	for(i=0;i<10;i++)
//	{
//		*(p+i)=1;
//	}
//	return 0;
//}

//指针运算

//通过指针+-整数 访问数组中的元素（不使用下标）
//int main()
//{
//	int i;
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int*p=arr;//这里的p是第一个元素的地址
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",*p);
//		p+=1;//p=p+1
//	}
//	return 0;
//}

//指针-指针
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int* p9=&arr[9];
//	int* p0=&arr[0];
//	printf("%d\n",p9-p0);
//	printf("%d\n",&arr[9]-&arr[0]);
//}
//错误示例
//int main()
//{
//	char ch[10]={0};
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n",&ch[9]-&arr[0]);//字符数组减整型数组？
//}
//由此而引申出新一种求string length的方法
//int my_strlen(char* ch)
//{
//	char* start=ch;
//	char* end=ch;
//	while(*end!='\0')
//	{
//		*end++;
//	}
//	return end-start;
//}
//int main()
//{
//	char ch[]="bit";
//	int len=my_strlen(ch);
//	printf("%d\n",len);
//	return 0;
//}

//指针和数组
//int main()
//{
//	int i=0;
//	int arr[10]={0};
//	int*p=arr;
//	for(i=0;i<10;i++)
//	{
//		printf("%p       %p\n",p+i,&arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i=0;
//	int arr[10]={0};
//	int*p=arr;
//	for(i=0;i<10;i++)
//	{
//		*(p+i)=i+1;
//	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",*(p+i));
//	}
//	return 0;
//}

//二级指针
//int main()
//{
//	int a=10;
//	int* pa=&a;//pa是一个一级指针变量 int*是一级指针类型
//	int** ppa=&pa;//ppa是一个二级指针 int**是二级指针变量
//	int*** pppa=&ppa;//........
//	** ppa=20;
//	printf("%d\n",** ppa);
//	return 0;
//}

//指针数组(存放指针的数组)
//int main()
//{
//	int a=1;
//	int b=2;
//	int c=3;
//	int* arr[3]={&a,&b,&c};
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//		printf("%d ",*arr[i]);
//	}
//	return 0;
//}