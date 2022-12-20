#include<stdio.h>
//int main()
//{
//	int a=-1;
//	int b=a<<2;
//	printf("%d\n",b);
//	return 0;
//}

//求一个整数存储在内存中的二进制中1的个数
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

//sizeof求大小（占空间的大小）
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
//	printf("%d\n",sizeof(char*));//指针大小在32位平台都是4个字节
//	
//	return 0;
//}

//按位取反
//int main()
//{
//	int a=0;
//	printf("%d\n",a);
//	printf("%d\n",~a);
//	return 0;
//}
//原码    00000000000000000000000000000000
//反码    00000000000000000000000000000000
//补码    00000000000000000000000000000000
//按位取反11111111111111111111111111111111
//反码    11111111111111111111111111111110
//原码    10000000000000000000000000000001
// -1

//三目操作符
//int main()
//{
//	int a,b,max;
//	scanf("%d%d",&a,&b);
//	max=a>b?a:b;
//	printf("%d\n",max);
//	return 0;
//}

//.操作符访问结构体成员
//创建一个结构体类型struct Stu
//struct Stu
//{
//	//成员变量：
//	char name[20];
//	int age;
//	char ID[20];
//};
//int main()
//{
//	int a=10;
//	//使用struct Stu这个结构体类型创建了一个学生对象s1并且对其进行初始化
//	struct Stu s1={"倪栗廷",20,"22388119"};
//	printf("%s\n",s1.name);
//	printf("%d\n",s1.age);
//	printf("%s\n",s1.ID);
//	return 0;
//}

//->操作符访问结构体成员
//struct Stu
//{
//	char name[20];
//	int age;
//	char ID[20];
//};
//int main()
//{
//	int a=10;
//	struct Stu s1={"倪栗廷",20,"22388119"};
//	struct Stu* ps=&s1; 
//	printf("%s\n",ps->name);/*=printf("%s\n",(*ps).name);*/
//	printf("%d\n",ps->age);/*=printf("%d\n",(*ps).age);*/
//	printf("%s\n",ps->ID);/*=printf("%s\n",(*ps).ID);*/
//	return 0;
//}

//隐式类型转换
//int main()
//{
//	char a=3;
//	char b=127;
//	char c=a+b;
//	printf("%d\n",c);
//	return 0;
//}