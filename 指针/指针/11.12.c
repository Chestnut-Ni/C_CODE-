#include<stdio.h>
//��ͬ���͵�ָ��һ�����߶�Զ
//int main()
//{
//	int n = 10;
//	char *pc = (char*)&n;//ǿ������ת��
//	int *pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	printf("%p\n", pi);
//	printf("%p\n", pi+1);
//	return 0;
//}

//�������ܡ�����Զ��(���Ե����ڴ����)
//int main()
//{
//	int n = 0x11223344;
//	char *pc=(char*)&n;//����ģ�char*����һ��ǿ������ת��
//	int *pi = &n;
//	*pc = 0;//�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
//	*pi = 0;//�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
//	return 0;
//}

//int main()
//{
//	int i;
//	int arr[10]={0};
//	int *p=arr;
//	for(i=0;i<10;i++)
//	{
//		*(p+i)=1;
//	}
//	return 0;
//}

//int main()
//{
//	int i;
//	int arr[10]={0};
//	char *p=arr;
//	for(i=0;i<10;i++)
//	{
//		*(p+i)=1;
//	}
//	return 0;
//}

//ָ������

//ͨ��ָ��+-���� ���������е�Ԫ�أ���ʹ���±꣩
//int main()
//{
//	int i;
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int*p=arr;//�����p�ǵ�һ��Ԫ�صĵ�ַ
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",*p);
//		p+=1;//p=p+1
//	}
//	return 0;
//}

//ָ��-ָ��
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int* p9=&arr[9];
//	int* p0=&arr[0];
//	printf("%d\n",p9-p0);
//	printf("%d\n",&arr[9]-&arr[0]);
//}
//����ʾ��
//int main()
//{
//	char ch[10]={0};
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n",&ch[9]-&arr[0]);//�ַ�������������飿
//}
//�ɴ˶��������һ����string length�ķ���
//int my_strlen(char* ch)
//{
//	char* start=ch;
//	char* end=ch;
//	while(*end!='\0')
//	{
//		*end++;
//	}
//	return end-start;
//}
//int main()
//{
//	char ch[]="bit";
//	int len=my_strlen(ch);
//	printf("%d\n",len);
//	return 0;
//}

//ָ�������
//int main()
//{
//	int i=0;
//	int arr[10]={0};
//	int*p=arr;
//	for(i=0;i<10;i++)
//	{
//		printf("%p       %p\n",p+i,&arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i=0;
//	int arr[10]={0};
//	int*p=arr;
//	for(i=0;i<10;i++)
//	{
//		*(p+i)=i+1;
//	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",*(p+i));
//	}
//	return 0;
//}

//����ָ��
//int main()
//{
//	int a=10;
//	int* pa=&a;//pa��һ��һ��ָ����� int*��һ��ָ������
//	int** ppa=&pa;//ppa��һ������ָ�� int**�Ƕ���ָ�����
//	int*** pppa=&ppa;//........
//	** ppa=20;
//	printf("%d\n",** ppa);
//	return 0;
//}

//ָ������(���ָ�������)
//int main()
//{
//	int a=1;
//	int b=2;
//	int c=3;
//	int* arr[3]={&a,&b,&c};
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//		printf("%d ",*arr[i]);
//	}
//	return 0;
//}