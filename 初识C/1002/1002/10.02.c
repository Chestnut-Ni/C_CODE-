#include <stdio.h>
#include<string.h>
int main()
{
	//printf("%d\n",strlen("c:\test\32\test.c"));
    //������Ϊ13  
    //����:\t��һ�� \32��һ��(�˽�����)
	//32(�˽��ƣ���26��ʮ���ƣ���ASCII����26����Ӧ���ַ�:��
	//printf("%c\n",'\32');
	//printf("%c\n",'\132');
	//printf("%c\n",'\x61');
	//printf("%c\n",'\'') ;
	//�����һ�������žʹ�\'
	//�����һ��\�ʹ�\\
	
	//char arr1[]="abc";
	//char arr2[]={'a','b','c','\0'};
	//char arr3[]={'a','b','c',0};

	////��\0'Ҳ�ɻ���0   �ַ����Ľ�����־��'\0'   
	////�ļ�������־EOF��end of file��
	//printf("%d\n",strlen(arr1));//���ֵΪ3
 //   printf("%d\n",strlen(arr2));//���ֵΪ3
	//printf("%d\n",strlen(arr3));//���ֵΪ3
	char arr1[]="abc";
	char arr2[]={'a','b','c'};
	printf("%s\n",arr1);
	printf("%s\n",arr2);
	printf("%d\n",strlen(arr1));//-���ֵΪ3
	printf("%d\n",strlen(arr2));//-���ֵ���
	return 0;
}
