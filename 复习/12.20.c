#include<stdio.h>
//struct Stu 
//{
//	char a;
//	int b;
//	char c;
//}s;
//int main()
//{
//	printf("%d\n",sizeof(s));
//	return 0;
//}
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S4));
//}
//struct S
//{
//	char ch;
//	int age;
//}s;
//void Init(struct S*tmp)
//{
//	tmp->age =20;
//	tmp->ch ='w';
//}
//void Print(struct S*ps)
//{
//	printf("%d %c\n",ps-> age ,ps-> ch);
//}
//int main()
//{
//	Init(&s);
//	Print(&s);
//	return 0;
//}
//enum SEX
//{
//	male,
//	female
//};

//union Un
//{
//	int i;
//	char c;
//}un;
//int main()
//{
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%x\n", un.i);
//	return 0;
//}

//union Un1
//{
//	char c[5];
//	int i;
//};
//union Un2
//{
//	short c[7];
//	int i;
//};
////下面输出的结果是什么？
//int main()
//{
//	printf("%d\n", sizeof(union Un1));//8
//	printf("%d\n", sizeof(union Un2));//16
//}

//int check_sys()
//{
//	int i=1;
//	return *(char*)(&i);
//}
//int main()
//{
//	int ret;
//	ret=check_sys();
//	if(ret==1)
//		printf("小端");
//	else
//		printf("大端");
//	return 0;
//}

//int main()
//{
//	int i= -20;
//	unsigned int j = 10;
//	printf("%d\n",i+j);
//	return 0;
//}

//int main()
//{
//	float a=5.5;
//	return 0;
//}