#include<stdio.h>

//ָ����ָ������� ָ��
//int main()
//{
//	int (*pf)(int,int);//����ָ��
//	int (*pfArr[4])(int,int);//����ָ������
//	int (*(*ppfArr)[4])(int,int)=&pfArr;//ָ����ָ�������ָ��-��ź���ָ��ָ�������ĵ�ַ
//	return 0;
//}

//�ص�����
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
//	char* pc=&a;//��
//	void* p=&a;//����void*���͵�ָ������������͵ĵ�ַ
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
{//�Ƚ���������
	return (*( int *)p1 - *(int *)p2);
}
void test1()//������������
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
{//�Ƚϸ�������С
	return (int)(*(float*)e1-*(float*)e2);
}
void test2()//���򸡵�������
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
	return ((struct Stu*)e1)->age-((struct Stu*)e2)->age;//�ṹ�����Ƚϱ����ǽṹ��ĳ�Ա���бȽ�
}
int cmp_Stu_by_name(const void* e1,const void* e2)
{//�Ƚ������ǱȽ��ַ���ʹ��strcmp����
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
	test1();//������������
	test2();//���򸡵�������
	test3();
	return 0;
}