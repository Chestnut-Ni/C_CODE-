#include<stdio.h>
#include<string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_int(const void* e1,const void* e2)
//{
//	return (*(int*) e1-*(int*) e2);
//}
//int cmp_Stu_by_age(const void* e1,const void* e2)
//{
//	return ((struct Stu*) e1)->age-((struct Stu*) e2)->age;//��ͷ�����ȼ��Ƚṹ��ָ�����͸��� ���Լ�����
//}
//int cmp_Stu_by_name(const void* e1,const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
//}
//void Swap(char* buf1, char*buf2, int width)
//{
//	int i = 0;
//	char tmp;
//	for (i = 0; i < width; i++)
//	{
//		tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort( void *base,int sz,int width, int (*cmp)(const void *e1,const void *e2 ))
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<sz-1;i++)
//	{
//		for(j=0;j<sz-1-i;j++)
//		{
//			if (cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0)//����void*���͵�ָ�벻��ֱ��+���� ����ǿ��ת��Ϊchar*  Ϊʲô��char*�� ��Ϊ��ֻ��һ���ֽ�
//			{
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);//��ַ  ΪʲôҪ��width�� ��Ϊ�����Swap������������
//			}
//		}
//	}
//}
//void test1()//������������
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//}
//void test2()
//{
//	struct Stu s[3]={{"zhangsan",20},{"lisi",15},{"wangwu",10}};
//	//bubble_sort(s,sizeof(s)/sizeof(s[0]),sizeof(s[0]),cmp_Stu_by_age);
//	bubble_sort(s,sizeof(s)/sizeof(s[0]),sizeof(s[0]),cmp_Stu_by_name);
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//int main()
//{
	//����������Ԫ�صĵ�ַ
	//�������⣺
	//1. sizeof(������)������������ʾ��������
	//2. &������������������ʾ��������
	//һά����
	//int a[] = { 1, 2, 3, 4 };//4*4 = 16
	//printf("%d\n", sizeof(a));//sizeof(������)-������������ܴ�С-��λ���ֽ�- 16
	//printf("%d\n", sizeof(a + 0));//4��8 - �����������ʾ��Ԫ�ص�ֵ��a+0 ������Ԫ�ص�ַ����ַ�Ĵ�С����4��8���ֽ�
	//printf("%d\n", sizeof(*a));   //4 - ��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�sizeof(*a)����4
	//printf("%d\n", sizeof(a + 1));//4/8 - �����������ʾ��Ԫ�ص�ֵ��a+1 ��2��Ԫ�صĵ�ַ����ַ�Ĵ�С����4��8���ֽ�
	//printf("%d\n", sizeof(a[1])); //4 - ��2��Ԫ�صĴ�С
	//printf("%d\n", sizeof(&a));   //4/8 &aȡ����������ĵ�ַ����������ĵ�ַ��Ҳ�ǵ�ַ����ַ�Ĵ�С����4/8���ֽ�
	//printf("%d\n", sizeof(*&a));  //16 - &a����ĵ�ַ������ĵ�ַ�����÷��ʵ����飬sizeof����ľ�������Ĵ�С��λ���ֽ�
	//printf("%d\n", sizeof(&a + 1));//4/8   &a������ĵ�ַ��&a+1��Ȼ��ַ�����������飬�����ǵ�ַ��������4/8���ֽ�
	//printf("%d\n", sizeof(&a[0]));//4/8 &a[0]�ǵ�һ��Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(&a[0] + 1));//4/8  &a[0]+1 �ǵڶ���Ԫ�صĵ�ַ

	//�ַ�����
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//strlen()������Ӧ�÷ŵ�ַ
	printf("%d\n", strlen(arr));//���ֵ
	printf("%d\n", strlen(arr + 0));//���ֵ
	//printf("%d\n", strlen(*arr));//err  arr������������Ԫ�ص�ַ ��������Ԫ��ԭַ������Ԫ��Ҳ����'a' ��ascii��ֵ��97 strlen��97���ǷǷ���
	//printf("%d\n", strlen(arr[1]));//err
//
//	printf("%d\n", strlen(&arr));//���ֵ
//	printf("%d\n", strlen(&arr + 1));//���ֵ-6
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1
//
//	printf("%d\n", sizeof(arr));//sizeof��������������С��6*1 = 6�ֽ�
//	printf("%d\n", sizeof(arr + 0));//4/8 arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ ��ַ�Ĵ�С��4/8�ֽ�
//	printf("%d\n", sizeof(*arr));   //1   arr����Ԫ�صĵ�ַ��*arr������Ԫ�أ���Ԫ�����ַ���С��һ���ֽ�
//	printf("%d\n", sizeof(arr[1])); //1
//	printf("%d\n", sizeof(&arr));   //4/8 &arr ��Ȼ������ĵ�ַ�������ǵ�ַ����ַ��С��4/8���ֽ�
//	printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1 ���������������ĵ�ַ����ַ��С��4/8���ֽ�
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8 �ڶ���Ԫ�صĵ�ַ
//
//
//	return 0;
//}