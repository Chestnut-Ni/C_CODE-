#include<stdio.h>
//int main()
//{
//	int a=-1;
//	int b=a<<2;
//	printf("%d\n",b);
//	return 0;
//}

//��һ�������洢���ڴ��еĶ�������1�ĸ���
//int main()
//{
//	int num=0;
//	int i=0;
//	int count=0;
//	scanf("%d",&num);
//	for(i=0;i<32;i++)
//	{
//		if(1==((num>>i)&1))
//			count++;
//	}
//	printf("%d\n",count);
//	return 0;
//}

//sizeof���С��ռ�ռ�Ĵ�С��
//int main()
//{
//	int a=10;
//	char b='c';
//	int d[10]={0};
//	char* p=&b;
//	printf("%d\n",sizeof(a));
//	printf("%d\n",sizeof(int));
//	
//	printf("%d\n",sizeof(b));
//	printf("%d\n",sizeof(char));
//	
//	printf("%d\n",sizeof(d));
//	printf("%d\n",sizeof(int [10]));
//	
//	printf("%d\n",sizeof(p));
//	printf("%d\n",sizeof(char*));//ָ���С��32λƽ̨����4���ֽ�
//	
//	return 0;
//}

//��λȡ��
//int main()
//{
//	int a=0;
//	printf("%d\n",a);
//	printf("%d\n",~a);
//	return 0;
//}
//ԭ��    00000000000000000000000000000000
//����    00000000000000000000000000000000
//����    00000000000000000000000000000000
//��λȡ��11111111111111111111111111111111
//����    11111111111111111111111111111110
//ԭ��    10000000000000000000000000000001
// -1

//��Ŀ������
//int main()
//{
//	int a,b,max;
//	scanf("%d%d",&a,&b);
//	max=a>b?a:b;
//	printf("%d\n",max);
//	return 0;
//}

//.���������ʽṹ���Ա
//����һ���ṹ������struct Stu
//struct Stu
//{
//	//��Ա������
//	char name[20];
//	int age;
//	char ID[20];
//};
//int main()
//{
//	int a=10;
//	//ʹ��struct Stu����ṹ�����ʹ�����һ��ѧ������s1���Ҷ�����г�ʼ��
//	struct Stu s1={"����͢",20,"22388119"};
//	printf("%s\n",s1.name);
//	printf("%d\n",s1.age);
//	printf("%s\n",s1.ID);
//	return 0;
//}

//->���������ʽṹ���Ա
//struct Stu
//{
//	char name[20];
//	int age;
//	char ID[20];
//};
//int main()
//{
//	int a=10;
//	struct Stu s1={"����͢",20,"22388119"};
//	struct Stu* ps=&s1; 
//	printf("%s\n",ps->name);/*=printf("%s\n",(*ps).name);*/
//	printf("%d\n",ps->age);/*=printf("%d\n",(*ps).age);*/
//	printf("%s\n",ps->ID);/*=printf("%s\n",(*ps).ID);*/
//	return 0;
//}

//��ʽ����ת��
//int main()
//{
//	char a=3;
//	char b=127;
//	char c=a+b;
//	printf("%d\n",c);
//	return 0;
//}