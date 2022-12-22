#include<stdio.h>

//指向函数指针数组的 指针
//int main()
//{
//	int (*pf)(int,int);//函数指针
//	int (*pfArr[4])(int,int);//函数指针数组
//	int (*(*ppfArr)[4])(int,int)=&pfArr;//指向函数指针数组的指针-存放函数指针指向的数组的地址
//	return 0;
//}

//回调函数
//void Print(char *str)
//{
//	printf("hehe:%s",str);
//}
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("haha\n");
//}
//int main()
//{
//	test(Print);
//	return 0;
//}

//int main()
//{
//	int a=1;
//	int* pa=&a;
//	char* pc=&a;//？
//	void* p=&a;//可用void*类型的指针接收任意类型的地址
//	return 0;
//}

//qsort  quick-sort
#include<stdlib.h>
#include<string.h>
//void qsort( void *base,
//			size_t num,
//			size_t width, 
//			int (*cmp)(const void *e1, 
//			const void *e2 )
//			)
int i = 0;
int cmp_int(const void * p1, const void * p2)
{//比较两个整型
	return (*( int *)p1 - *(int *)p2);
}
void test1()//排序整型数组
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int sz=sizeof(arr)/sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]),cmp_int);
	for (i = 0; i<sz; i++)
	{
		printf( "%d ", arr[i]);
	}
	printf("\n");
}
int cmp_float(const void * e1,const void * e2)
{//比较浮点数大小
	return (int)(*(float*)e1-*(float*)e2);
}
void test2()//排序浮点型数组
{
	float f[]={9.0,8.0,7.0,6.0,5.0,4.0};
	int sz=sizeof(f)/sizeof(f[0]);
	qsort(f,sz,sizeof(f[0]),cmp_float);
	for (i = 0; i<sz; i++)
	{
		printf( "%f ", f[i]);
	}
	printf("\n");
}
struct Stu
{
	char name[20];
	int age;
};
int cmp_Stu_by_age(const void* e1,const void* e2)
{	
	return ((struct Stu*)e1)->age-((struct Stu*)e2)->age;//结构体进项比较必须是结构体的成员进行比较
}
int cmp_Stu_by_name(const void* e1,const void* e2)
{//比较名字是比较字符串使用strcmp函数
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}
void test3()
{
	struct Stu s[3]={{"zhangsan",20},{"wangwu",134},{"lisi",12}};
	int sz=sizeof(s)/sizeof(s[0]);
	qsort(s,sz,sizeof(s[0]),cmp_Stu_by_age);
	qsort(s,sz,sizeof(s[0]),cmp_Stu_by_name);
}
int main()
{
	test1();//排序整型数组
	test2();//排序浮点型数组
	test3();
	return 0;
}