#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>

//int main()
//{
//	//���ڴ�����10�����ʹ�С�Ŀռ�
//	int *p=(int *)malloc(sizeof(int)*10);
//	if(p==NULL)
//	{//����ʧ��
//		printf("%s",strerror(errno));//��ӡ����ԭ��
//	}
//	else//���ٳɹ� ����ʹ��
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
//	//����̬����Ŀռ䲻��ʹ��ʱ��Ӧ�ü�ʱ��������ϵͳ
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
//	if(ptr!=NULL)//��realloc���ٵ��ڴ�ռ�̫��Ļ� ���ܻῪ��ʧ�� 
//	//����ʧ�ܾͻ᷵��NULL ��ô��Ҫ�ж�ptr�Ƿ���NULL���ٽ�ptr����p
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
//	//�ͷ��ڴ�
//	free(p);
//	p=NULL;
//	return 0;
//}

//int main()
//{
//	int* p=(int*)realloc(NULL,40);//reallocҲ��ʵ����malloc��ͬ�Ĺ���
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