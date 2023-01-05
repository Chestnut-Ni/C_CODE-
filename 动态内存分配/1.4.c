#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>

//int main()
//{
//	//向内存申请10个整型大小的空间
//	int *p=(int *)malloc(sizeof(int)*10);
//	if(p==NULL)
//	{//开辟失败
//		printf("%s",strerror(errno));//打印错误原因
//	}
//	else//开辟成功 正常使用
//	{
//		int i=0;
//		for(i=0;i<10;i++)
//		{
//			*(p+i)=i;
//		}
//		for(i=0;i<10;i++)
//		{
//			printf("%d ",*(p+i));
//		}
//	}
//	//当动态申请的空间不在使用时就应该及时还给操作系统
//	free(p);
//	p=NULL;
//	return 0;
//}

//int main()
//{
//	int i=0;
//	int* p=(int*)malloc(20);
//	if(p==NULL)
//	{
//		printf("%s",strerror(errno));
//	}
//	else
//	{
//		for(i=0;i<5;i++)
//		{
//			*(p+i)=i;
//		}
//	}
//	int* ptr=(int*)realloc(p,40);
//	if(ptr!=NULL)//若realloc开辟的内存空间太大的话 可能会开辟失败 
//	//开辟失败就会返回NULL 那么需要判断ptr是否是NULL后再将ptr赋给p
//	{
//		p=ptr;
//		for(i=5;i<10;i++)
//		{
//			*(p+i)=i;
//		}
//		for(i=0;i<10;i++)
//		{
//			printf("%d ",*(p+i));
//		}
//	}
//	//释放内存
//	free(p);
//	p=NULL;
//	return 0;
//}

//int main()
//{
//	int* p=(int*)realloc(NULL,40);//realloc也可实现与malloc相同的功能
//}

//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}