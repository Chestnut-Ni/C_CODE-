#include<stdio.h>
//�ַ�������
#include<string.h>
//int main()
//{
//	char arr1[]="###########";
//	char arr2[]="bit";
//	strcpy(arr1,arr2);
//	printf("%s\n",arr1);
//	return 0;
//}

//��ʹ�ÿ⺯��
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
//�Ż�1
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
////�Ż���
//void my_strcpy(char* dest,char* src)
//{
//	if(dest!=NULL&&src!=NULL)//���dest��src���Ƿ��п�ָ��
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
//�Ż���
//#include<assert.h>//assert��ͷ�ļ�
//void my_strcpy(char* dest,char* src)
//{
//	assert(dest!=NULL);//���� ���Ұָ��
//	assert(src!=NULL);//�����Ա��ʽ���Ϊ����Ӱ�죬��Ϊ���򱨴�
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

//const������
//1.const����ָ�������*���ʱ������*p������ͨ��p�ı�*p��num����ֵ
//2.const����ָ�������*�ұ�ʱ������ָ���������p��p��ֵ���ܱ��ı�
//int main()
//{
//	int num=10;
//	int n=100;
//	const int* p=&num;
//	*p=20;//��
//	p=&n;//��
//	return 0;
//}
//int main()
//{
//	int num=10;
//	int n=100;
//	int* const p=&num;
//	*p=20;//��
//	p=&n;//��
//	return 0;
//}
//int main()
//{
//	int num=10;
//	int n=100;
//	const int* const p=&num;
//	*p=20;//��
//	p=&n;//��
//	return 0;
//}

//�Ż���
#include<assert.h>
void my_strcpy(char* dest,const char* src)//*src�޷��ı� 
{
	assert(dest!=NULL);
	assert(src!=NULL);
	while(*dest++=*src++)//const���ڵ������ֹд��*src++=*dest++ �����ͻᱨ��
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