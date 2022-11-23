//函数的递归
//最简单的递归
//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//该“循环”结束的原因：stack overflow（栈溢出）

//#include<stdio.h>
//void print(int x)
//{
//	if(x>9)
//	{
//		print(x/10);
//	}
//	printf("%d ",x%10);
//}
//int main()
//{
//	int number;
//	scanf("%d",&number);
//	print(number);
//	return 0;
//}

//求字符串的长度
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[]="bit";
//	int len=strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}

//编写函数求字符串的长度
//#include<stdio.h>
//int my_strlen(char* arr)
//{
//	int count=0;
//	while(*arr!='\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[]="bit";
//	int len=my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}

//编写函数不允许创建临时变量,求字符串的长度
//#include<stdio.h>
//int my_strlen(char* arr)
//{
//	if(*arr!='\0')
//	{
//		return 1+my_strlen(arr+1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[]="bit";
//	int len=my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}

//用递归的方式求n的阶乘
//#include<stdio.h>
//int Fac(int n)
//{
//	if(n==1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Fac(n-1);
//	}
//}
//int  main()
//{
//	int n;
//	int ret;
//	scanf("%d",&n);
//	ret=Fac(n);
//	printf("%d\n",ret);
//	return 0;
//}

//求第n个斐波那契数(递归)
//#include<stdio.h>
//int count;
//int Fib(int x)
//{
//	//if(x==3)
//	//{
//	//	count++;
//	//}
//	if(x<=2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(x-1)+Fib(x-2);
//	}
//}
//int main()
//{
//	int n,ret;
//	scanf("%d",&n);
//	ret=Fib(n);
//	printf("ret=%d\n",ret);
//	printf("count=%d\n",count);
//	return 0;
//}

//求第n个斐波那契数(循环)
//#include<stdio.h>
//int Fib(int x)
//{
//	int a=1;
//	int b=1;
//	int c=1;
//	while(x>2)
//	{
//		c=a+b;
//		a=b;
//		b=c;
//		x--;
//	}
//	return c;
//}
//int main()
//{
//	int n,ret;
//	scanf("%d",&n);
//	ret=Fib(n);
//	printf("ret=%d\n",ret);
//	return 0;
//}

//汉诺塔问题（递归）
//#include<stdio.h>
//void Move_(char From,char Dest)
//{
//	printf("从%c盘→%c盘\n",From,Dest);
//}
//void Hanoi_(char A,char B,char C,int n)
//{
//	if(n==1)
//	{
//		Move_(A,C);
//	}
//	else
//	{
//		Hanoi_(A,C,B,n-1);
//		Move_(A,C);
//		Hanoi_(B,A,C,n-1);
//	}
//}
//int main()
//{
//	int n;
//	char A='A';
//	char B='B';
//	char C='C';
//	printf("请输入盘数n：");
//	scanf("%d",&n);
//	Hanoi_(A,B,C,n);
//	return ;
//}

//青蛙跳台阶问题
//#include<stdio.h>
//int frog_jump_step(int n)
//{
//	if(n==1)
//	{
//		return 1;
//	}
//	else if(n==2)
//	{
//		return 2;
//	}
//	else
//	{
//		return frog_jump_step(n-1)+frog_jump_step(n-2);
//	}
//}
//int main()
//{
//	int n,ret;
//	printf("输入台阶数：");
//	scanf("%d",&n);
//	ret=frog_jump_step(n);
//	printf("有%d种跳法\n",ret);
//	return 0;
//}