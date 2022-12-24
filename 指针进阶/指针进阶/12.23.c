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
//	return ((struct Stu*) e1)->age-((struct Stu*) e2)->age;//箭头的优先级比结构体指针类型更高 所以加括号
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
//			if (cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0)//由于void*类型的指针不能直接+整数 所以强制转换为char*  为什么是char*？ 因为它只有一个字节
//			{
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);//传址  为什么要传width？ 因为这决定Swap函数交换多少
//			}
//		}
//	}
//}
//void test1()//排序整型数组
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
	//数组名是首元素的地址
	//两个例外：
	//1. sizeof(数组名)——数组名表示整个数组
	//2. &数组名——数组名表示整个数组
	//一维数组
	//int a[] = { 1, 2, 3, 4 };//4*4 = 16
	//printf("%d\n", sizeof(a));//sizeof(数组名)-计算的是数组总大小-单位是字节- 16
	//printf("%d\n", sizeof(a + 0));//4或8 - 数组名这里表示首元素的值，a+0 还是首元素地址，地址的大小就是4或8个字节
	//printf("%d\n", sizeof(*a));   //4 - 数组名表示首元素地址，*a就是首元素，sizeof(*a)就是4
	//printf("%d\n", sizeof(a + 1));//4/8 - 数组名这里表示收元素的值，a+1 第2个元素的地址，地址的大小就是4或8个字节
	//printf("%d\n", sizeof(a[1])); //4 - 第2个元素的大小
	//printf("%d\n", sizeof(&a));   //4/8 &a取出的是数组的地址，但是数组的地址那也是地址，地址的大小就是4/8个字节
	//printf("%d\n", sizeof(*&a));  //16 - &a数组的地址，数组的地址解引用访问的数组，sizeof计算的就是数组的大小单位是字节
	//printf("%d\n", sizeof(&a + 1));//4/8   &a是数组的地址，&a+1虽然地址跳过整个数组，但还是地址，所以是4/8个字节
	//printf("%d\n", sizeof(&a[0]));//4/8 &a[0]是第一个元素的地址
	//printf("%d\n", sizeof(&a[0] + 1));//4/8  &a[0]+1 是第二个元素的地址

	//字符数组
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//strlen()函数里应该放地址
	printf("%d\n", strlen(arr));//随机值
	printf("%d\n", strlen(arr + 0));//随机值
	//printf("%d\n", strlen(*arr));//err  arr是数组名是首元素地址 解引用首元素原址就是首元素也就是'a' 其ascii码值是97 strlen（97）是非法的
	//printf("%d\n", strlen(arr[1]));//err
//
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr + 1));//随机值-6
//	printf("%d\n", strlen(&arr[0] + 1));//随机值-1
//
//	printf("%d\n", sizeof(arr));//sizeof计算机的是数组大小，6*1 = 6字节
//	printf("%d\n", sizeof(arr + 0));//4/8 arr是首元素的地址，arr+0还是首元素的地址 地址的大小是4/8字节
//	printf("%d\n", sizeof(*arr));   //1   arr是首元素的地址，*arr就是首元素，首元素是字符大小是一个字节
//	printf("%d\n", sizeof(arr[1])); //1
//	printf("%d\n", sizeof(&arr));   //4/8 &arr 虽然是数组的地址，但还是地址，地址大小是4/8个字节
//	printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1 是跳过整个数组后的地址，地址大小是4/8个字节
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8 第二个元素的地址
//
//
//	return 0;
//}