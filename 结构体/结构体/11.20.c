#include<stdio.h>

//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char ID[20];
//};
//int main()
//{
//	struct Stu s1;
//	struct Stu s2;
//}

typedef struct Stu
{
	char name[20];
	int age;
	char sex[5];
	char ID[20];
}Stu;
void Print1(Stu tmp)
{
	printf("name:%s\n",tmp.name);
	printf("age:%d\n",tmp.age);
	printf("sex:%s\n",tmp.sex);
	printf("ID:%s\n",tmp.ID);
}
void Print2(Stu*ps)//结构体指针访问成员
{
	printf("name:%s\n",ps->name);
	printf("age:%d\n",ps->age);
	printf("sex:%s\n",ps->sex);
	printf("ID:%s\n",ps->ID);
}
int main()
{
	Stu s1={"倪栗廷",20,"男","22388119"};
	Print1(s1);
	Print2(&s1);
	return 0;
}

struct S
{
	int a;
	char c;
	char arr[20];
	double d;
};
struct T
{
	char ch[10];
	struct S s;//结构体中放结构体
	char *pc;
};
int main()
{
	char arr[]="hello";
	struct T t={"hehe",{20,'w',"22388119",3.14},arr};
	printf("%s\n",t.ch);//hehe
	printf("%d\n",t.s.a);//20
	printf("%lf\n",t.s.d);//3,14
	printf("%s\n",t.pc);//hello
	return 0;
}