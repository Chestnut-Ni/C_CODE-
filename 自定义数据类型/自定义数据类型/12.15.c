#include<stdio.h>
////�ṹ���ڴ����
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//int main()
//{
//	struct S1 s1={0};
//	struct S2 s2={0};	
//	printf("%d\n",sizeof(s1));
//	printf("%d\n",sizeof(s2));
//	return 0;
//}

//�ṹ�崫��
//struct S 
//{
//	char a;
//	int b;
//	double c;
//}s;
//void Init(struct S* ps)
//{
//	ps->a ='w';
//	ps->b =21;
//	ps->c =3.14;
//}
//void Print1(struct S tmp)
//{
//	printf("%c %d %lf\n",tmp.a,tmp.b,tmp.c);
//}
//void Print2(struct S* tmp)
//{
//	printf("%c %d %lf\n",tmp->a,tmp->b,tmp->c);
//}
//int main()
//{
//	struct S s={0};
//	Init(&s);
//	Print1(s);//��ֵ
//	Print2(&s);//��ַ�����
//	return 0;
//}

////λ��

//λ�ε��ڴ����
//struct S
//{
//	int a:2;
//	int b:5;
//	int c:10;
//	int d:30;
//}
//int main()
//{
//	struct S s;
//	printf("%d\n",sizeof(s));//8
//	return 0;
//}
//struct S
//{
//	char a:3;
//	char b:4;
//	char c:5;
//	char d:4;
//};
//int main()
//{
//	struct S s={0};
//	s.a=10;
//	s.b=20;
//	s.c=3;
//	s.d=4;
//	return 0;
//}

////ö������
//enum Sex
//{
//	MALE,//0
//	FEMALE,//1
//	SECRET//2
//};
//enum Color
//{
//	RED=2,
//	GREEN=4,//��ö�ٳ�������ֵ
//	BLUE=6
//};
//int main()
//{
//	enum Sex s=MALE;
//	enum Color c=BLUE;
//	printf("%d %d %d\n",MALE,FEMALE,SECRET);
//	printf("%d %d %d\n",RED,GREEN,BLUE);
//	return 0;
//}

////ö�����͵Ĵ�С
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s=MALE;
//	printf("%d\n",sizeof(s));//���͵Ĵ�С
//	return 0;
//}

////�����壨Ҳ�й����壩
//union Un
//{
//	char c;
//	int i;
//
//};
//int main()
//{
//	union Un u;
//	printf("%d\n",sizeof(u));
//
//	printf("%p\n",&u);
//	printf("%p\n",&(u.c));
//	printf("%p\n",&(u.i));
//	return 0;
//}

////����������ռ��ͬһ��ַ��һ�����жϴ�С��
//int check_sys()
//{
//	union
//	{
//		char ch;
//		int i;
//	}u;
//	u.i=1;
//	return u.ch;
//}
//int main()
//{
//	int ret=check_sys();
//	if(ret==1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}

//������Ĵ�С
//union Un
//{
//	 int i;//4-8->4
//	 char arr[5];//1-8->1
//}u;//5
//int main()
//{
//	printf("%d\n",sizeof(u));//1-4->4
//}