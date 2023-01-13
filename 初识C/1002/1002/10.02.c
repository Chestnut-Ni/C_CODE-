#include <stdio.h>
#include<string.h>
int main()
{
	//printf("%d\n",strlen("c:\test\32\test.c"));
    //输出结果为13  
    //数法:\t算一个 \32算一个(八进制数)
	//32(八进制）→26（十进制）→ASCII码中26所对应的字符:→
	//printf("%c\n",'\32');
	//printf("%c\n",'\132');
	//printf("%c\n",'\x61');
	//printf("%c\n",'\'') ;
	//欲打出一个单引号就打\'
	//欲打出一个\就打\\
	
	//char arr1[]="abc";
	//char arr2[]={'a','b','c','\0'};
	//char arr3[]={'a','b','c',0};

	////’\0'也可换成0   字符串的结束标志：'\0'   
	////文件结束标志EOF（end of file）
	//printf("%d\n",strlen(arr1));//输出值为3
 //   printf("%d\n",strlen(arr2));//输出值为3
	//printf("%d\n",strlen(arr3));//输出值为3
	char arr1[]="abc";
	char arr2[]={'a','b','c'};
	printf("%s\n",arr1);
	printf("%s\n",arr2);
	printf("%d\n",strlen(arr1));//-输出值为3
	printf("%d\n",strlen(arr2));//-输出值随机
	return 0;
}
