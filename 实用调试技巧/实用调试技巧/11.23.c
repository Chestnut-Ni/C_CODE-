#include<stdio.h>
//字符串拷贝
#include<string.h>
//int main()
//{
//	char arr1[]="###########";
//	char arr2[]="bit";
//	strcpy(arr1,arr2);
//	printf("%s\n",arr1);
//	return 0;
//}

//不使用库函数
//void my_strcpy(char* dest,char* src)//destination source
//{
//	while(*src!='\0')
//	{
//		*dest=*src;
//		dest++;
//		src++;
//	}
//	*dest='\0';	
//}
//int main()
//{
//	char arr1[]="###########";
//	char arr2[]="bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n",arr1);
//	return 0;
//}
//优化1
//void my_strcpy(char* dest,char* src)
//{
//	while(*dest++=*src++)
//	{
//		;
//	}
//	*dest='\0';	
//}
//int main()
//{
//	char arr1[]="###########";
//	char arr2[]="bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n",arr1);
//	return 0;
//}
////优化二
//void my_strcpy(char* dest,char* src)
//{
//	if(dest!=NULL&&src!=NULL)//检测dest与src中是否有空指针
//	{	while(*dest++=*src++)
//		{
//			;
//		}
//		*dest='\0';	
//	}
//}
//int main()
//{
//	char arr1[]="###########";
//	char arr2[]="bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n",arr1);
//	return 0;
//}
//优化三
//#include<assert.h>//assert的头文件
//void my_strcpy(char* dest,char* src)
//{
//	assert(dest!=NULL);//断言 规避野指针
//	assert(src!=NULL);//若断言表达式结果为真无影响，若为假则报错
//	while(*dest++=*src++)
//	{
//		;
//	}
//	*dest='\0';	
//}
//int main()
//{
//	char arr1[]="###########";
//	char arr2[]="bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n",arr1);
//	return 0;
//}

//const的作用
//1.const放在指针变量的*左边时候修饰*p，不能通过p改变*p（num）的值
//2.const放在指针变量的*右边时候修饰指针变量本身p，p的值不能被改变
//int main()
//{
//	int num=10;
//	int n=100;
//	const int* p=&num;
//	*p=20;//×
//	p=&n;//√
//	return 0;
//}
//int main()
//{
//	int num=10;
//	int n=100;
//	int* const p=&num;
//	*p=20;//√
//	p=&n;//×
//	return 0;
//}
//int main()
//{
//	int num=10;
//	int n=100;
//	const int* const p=&num;
//	*p=20;//×
//	p=&n;//×
//	return 0;
//}

//优化四
#include<assert.h>
void my_strcpy(char* dest,const char* src)//*src无法改变 
{
	assert(dest!=NULL);
	assert(src!=NULL);
	while(*dest++=*src++)//const存在的意义防止写成*src++=*dest++ 这样就会报错
	{
		;
	}
	*dest='\0';	
}
int main()
{
	char arr1[]="###########";
	char arr2[]="bit";
	my_strcpy(arr1,arr2);
	printf("%s\n",arr1);
	return 0;
}