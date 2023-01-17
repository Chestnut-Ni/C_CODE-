//输出n！
//#include<stdio.h>
//int main()
//{
//	int n=0;
//	int i=0;
//	int s=1;
//	printf("请输入n：\n");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		s=s*i;
//	}
//	printf("n!=%d\n",s);
//	return 0;
//}

//输出1！+2！+3!
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	int r=1;
//	int sum=0;
//	for(i=1;i<=3;i++)
//	{
//		r=r*i;
//		sum=sum+r;
//	}
//	printf("sum=%d\n",sum);
//	return 0;
//
//}

//查找数组中的元素(折半查找算法)
//#include<stdio.h>
//int main()
//{
//	int arr[]={1,2,3,4,5,9,10,13,14,18};
//	int n=sizeof(arr)/sizeof(arr[0]);
//	int k=9;
//	int left=0;
//	int right=n-1;
//	while(left<=right)
//	{
//		int middle=(left+right)/2;
//		if(arr[middle]>k)
//		{
//		right=middle-1;
//		}
//		else if(arr[middle]<k)
//		{
//		left=middle+1;
//		}
//		else
//		{
//			printf("找到了 下标是：%d\n",middle);
//			break;
//		}
//	}
//	if(left>right)
//		printf("找不到：\n");
//	
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[]="welcome to GeTanShi";
//	char arr2[]="#######!!!!!!!!!!!!";
//	int left=0;
//	int right=strlen(arr1)-1;
//	while(left<=right)
//	{
//		arr2[left]=arr1[left];
//		arr2[right]=arr1[right];
//		printf("%s\n",arr2);
//		Sleep(250);//1s=1000ms
//		left++;
//		right--;
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i=0;
//	char password[20]={0};
//	for(i=1;i<=3;i++)
//	{
//		printf("请输入密码：");
//		scanf("%s",password);//当变量是数组，不需要取地址符号，数组名本身指向的就是这个数组的首地址
//		if(strcmp(password,"123456")==0)
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if(i>3)
//	{
//		printf("程序错误\n");
//	}
//	return 0;
//}

//打印出1000-2000的闰年并计算共有多少个闰年
//  ①
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	int count=0;
//	for(i=1000;i<=2000;i++)
//	{
//		if(i%4==0&&i%100!=0)
//		{
//			printf(" %d",i);
//			count++;
//		}
//		else if(i%400==0)
//		{
//			printf(" %d",i);
//			count++;
//		}
//	}
//	printf("\n%d\n",count);
//	return 0;
//}
//②
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	int count=0;
//	for(i=1000;i<=2000;i++)
//	{
//		if(((i%4==0)&&(i%100!=0))||(i%400==0))
//		{
//			printf("%d\n",i);
//			count++;
//		}
//	}
//	printf("\n%d\n",count);
//	return 0;
//}

//打印100-200间的素数（试除法）
//素数：只有1和其本身的因数的数
//试除法：拿2和i-1之间的数去除它
//①
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	int count=0;
//	for(i=100;i<=200;i++)
//	{
//		int j=0;
//		for(j=2;j<i;j++)
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//		}
//		if(j==i)
//		{
//			printf("%d\n",i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n",count);
//	return 0;
//
//}
//②使用数学库函数sqrt（平方根）
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i=0;
//	int count=0;
//	for(i=100;i<=200;i++)
//	{
//		int j=0;
//		for(j=2;j<=sqrt(i);j++)
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//		}
//		if(j>sqrt(i))
//		{
//			printf("%d\n",i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n",count);
//	return 0;
//}

//给定两个数求其最大公约数（辗转相除法）
//#include<stdio.h>
//int main()
//{
//	int x=0;
//	int y=0;
//	printf("输入x,y:");
//	scanf("%d%d",&x,&y);
//	while((x%y)!=0)
//	{
//		int i=x%y;
//		x=y;
//		y=i;
//	}
//	printf("最大公约数：%d\n",y);
//	return 0;
//}

//打印1-100间3的倍数
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	for(i=1;i<=100;i++)
//	{
//		if(i%3==0)
//			printf("3的倍数:%d\n",i);
//	}
//	return 0;
//}


//价格计算
//#include<stdio.h>
//int main()
//{
//	int p=0;
//	printf("请输入价格:");
//	scanf("%d",&p);
//	if(p<=100)
//	{
//		int i=p*0.9;
//		printf("付费：%d\n",i);
//	}
//	else
//	{
//		int j=90+(p-100)*0.8;
//		printf("付费：%d\n",j);
//	
//	}
//	return 0;
//}

//将a，b，c按照从小到大排序
//#include<stdio.h>
//int main()
//{
//	int a,b,c,t;
//	printf("输入:");
//	scanf("%d%d%d",&a,&b,&c);
//	if(a>b)
//	{
//		t=a;a=b;b=t;
//	}
//	if(a>c)
//	{
//		t=a;a=c;c=t;
//	}
//	if(b>c)
//	{
//		t=b;b=c;c=t;
//	}
//	printf("%d,%d,%d\n",a,b,c);
//	return 0;
//}

//输出分段函数的值
//#include<stdio.h>
//int main()
//{
//	int x,y;
//	printf("输入x：");
//	scanf("%d",&x);
//	if(x<1)
//	{
//		y=x;
//		printf("函数值：%d\n",y);
//	
//	}
//	if(x>=1&&x<10)
//	{
//		y=2*x-1;
//		printf("函数值：%d\n",y);
//	}
//	return 0;
//}

//输入若干数x，当输入为999时结束，求输入数据的和s
//#include<stdio.h>
//int main()
//{
//	int x=0;
//	int s=0;
//	scanf("%d",&x);
//	while(x!=999)
//	{
//	s=x+s;
//	scanf("%d",&x);
//	}
//	printf("s=%d\n",s);
//	return 0;
//}

//求1+3+5+.....+n,直到sum>=1000
//#include<stdio.h>
//int main()
//{
//	int sum=0;
//	int i=1;
//	while(sum<1000)
//	{
//		sum=sum+i;
//		i+=2;
//	}
//	printf("n=%d,sum=%d\n",i-2,sum);
//	return 0;
//}


//输出一段由10个*组成的一行字符
//#include<stdio.h>
//int main()
//{
//	int i=1;
//	while(i<=10)
//	{
//	printf("*");
//	i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i=1;
//	for(i=1;i<=10;i++)
//	{
//		printf("*");
//	}
//	return 0;
//
//}

//编写程序数一数1-100内的数字共出现多少个9(个位为9 十位为9)
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	int count=0;
//	for(i=1;i<=100;i++)
//	{
//		if(i%10==9)
//		{
//			count++;
//		}
//		if(i/10==9)
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n",count);
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+...+1/99-1/100的值
//①
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	double sum=0.0;
//	int flag=1;
//	for(i=1;i<=100;i++)
//	{
//		sum=sum+flag*(1.0/i);
//		flag=-flag;
//	
//	}
//	printf("sum=%lf\n",sum);
//	return 0;
//}
//②
//#include<stdio.h>
//int main()
//{
//	int i=1;
//	int j=2;
//	double sum1=0;
//	double sum2=0;
//	for(i=1;i<100;i+=2)
//	{
//		sum1=1.0/i+sum1;
//	}
//	for(j=2;j<=100;j+=2)
//	{
//		sum2=sum2+1.0/j;
//	}
//	printf("%lf\n",sum1-sum2);
//	return 0;
//
//}

//输出10个数中最大的数
//#include<stdio.h>
//int main()
//{
//	int arr[]={-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
//	int s=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	int max=arr[0];//将数组内的任意一数赋给max 再将max与数组中其他数比较大小
//	for(i=0;i<s;i++)
//	{
//		if(arr[i]>max)
//		{
//			max=arr[i];
//		}
//	}
//	printf("max=%d\n",max);
//	return 0;
//}

//输出一个乘法口诀表:
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//4*1=4 4*2=8 4*3=12 4*4=16
//#include<stdio.h>
//int main()
//{
//	int i=0;//i代表行数 共有9行
//	for(i=1;i<=9;i++)
//	{
//		int j=0;//j代表项数 例如第1行有1项 第2行有2项 第3行有3项......
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);
//		
//		}
//		printf("\n");
//	}
//	return 0;
//}

//古典问题：兔子问题（C语言程序设计P97）
//#include<stdio.h>
//int main()
//{
//	int s;
//	int a=1;
//	int b=1;
//	int i=2;
//	do
//	{
//		s=a+b;
//		a=b;
//		b=s;
//		i++;
//	}
//	while(s<=500);
//	printf("第%d个月\n",i);
//	return 0;
//}

//猜数字游戏
#include<stdio.h>
#include <stdlib.h>//引用rand的头文件
#include<time.h>
void menu()
{
	printf("*************************\n");
	printf("***   1.play 0.exit  *** \n");
	printf("*************************\n");
}
void game()//1.生成随机数（可用rand函数） 2.猜数字
{
	int guess=0;
	int s=rand()%100+1;//%100的目的：使生成的随机值处于0-99之间（否则就是0-32767之间） 再+1得1-100
	//printf("%d\n",s);
	while(1)
	{
		scanf("%d",&guess);//务必要放在while循环里
		if(guess>s)
		{
			printf("猜大了！\n");
		}
		else if(guess<s)
		{
			printf("猜小了！\n");
		}
		else
		{
			printf("猜对了！\n");
			break;//break很重要！！！！
		}
	}
}
int main()
{
	int input=0;
	srand( (unsigned)time( NULL ) );
	do
	{
		menu();
		printf("请选择：");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;//break很重要！！！
		case 0:
			printf("退出游戏\n");
			break;//break很重要！！！
		default:
			printf("选择错误\n");
			break;//break很重要！！！
		}
	}while(input);
	return 0;
}

//#include<stdio.h>
//int main()
//{
//	int i=0;
//	for(i=1;i<=4;i++)
//	{
//		int j=0;
//		int k=0;
//		for(j=1;j<=4-i;j++)
//		{
//			printf(" ");
//		}
//		for(k=1;k<=2*i-1;k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int count=1;
//	double sum=2;
//	double s=0;
//	double i=1;
//	double j=2;
//	int flag=-1;
//	do
//	{
//		s=i+j;
//		i=j;
//		j=s;
//		sum=sum+(j/i)*flag;
//		flag=-flag;
//		count++;
//
//	}
//	while(count<20);
//	printf("sum=%lf\n",sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int max;
//	int i;
//	int arr[5];
//	for(i=0;i<5;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	//数组中的元素要一个一个输入到计算机 所以是一个循环语句
//	max=arr[0];
//	for(i=1;i<5;i++)
//	{
//		if(max<arr[i])
//		{
//			max=arr[i];
//		}
//	
//	}
//	printf("max=%d\n",max);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int count=0;
//	double i=1;
//	double j=2;
//	double s;
//	double sum=0;
//	do
//	{
//		sum=sum+j/i;
//		s=i+j;
//		i=j;
//		j=s;
//		count++;
//	}
//	while(count<20);
//	printf("sum=%.2lf\n",sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i=1;
//	int sum=1;
//	int count=1;
//	int flag=-1;
//	while(count<6)
//	{
//		i=i*3;
//		sum=sum+i*flag;
//		flag=-flag;
//		count++;
//	}
//	printf("sum=%d\n",sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int j=1;//9行
//	int i=1;
//	for(j=1;j<=9;j++)
//	{
//		for(i=1;i<=j;i++)
//		{
//			int ji=j*i;
//			printf("%d*%d=%-2d ",j,i,ji);
//		}
//		printf("\n");
//	
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i=1;
//	double e=1.0;
//	double item=1.0;
//	while(item<=1000000)
//	{
//		item=item*i;
//		e=e+1/item;
//		i++;
//	}
//	printf("%f\n",e);
//		return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int xs[6];
//	int i,j,k;
//	printf("请输入上半年的销售数据：\n");
//	for(i=0;i<6;i++)
//	{
//		scanf("%d",&xs[i]);
//	}
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			if(xs[j]>xs[j+1])
//			{
//				k=xs[j+1];
//				xs[j+1]=xs[j];
//				xs[j]=k;
//			}
//		}
//	}
//	printf("排序后的数据：\n");
//	for(i=0;i<6;i++)
//	{
//		printf("%d ",xs[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i,j,k;
//	int number;
//	int left=0;
//	int right=6;
//	int middle;
//	int a[]={12,45,67,89,123,-45,67};
//	for(i=0;i<7;i++)
//	{
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	for(i=0;i<6;i++)
//	{
//		for(j=0;j<6;j++)
//		{
//			if(a[j]>a[j+1])
//			{
//				k=a[j+1];
//				a[j+1]=a[j];
//				a[j]=k;
//			}
//		}
//	}
//	printf("排序后的数据：\n");
//	for(i=0;i<7;i++)
//	{
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	printf("输入需要查找的数：");
//	scanf("%d",&number);
//	while(left<=right)
//	{
//
//		int middle=(left+right)/2;
//		if(number>a[middle])
//		{
//			left=middle+1;
//		}
//		else if(number<a[middle])
//		{
//			right=middle-1;
//		}
//		else
//		{
//			printf("找到了");
//			break;
//		}
//	}
//	if(left>right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
	//int i=0;
	//char c[6];
	//char a[5]={'h','e','l','l','o'};
	//char b[6]={'h','e','l','l','o','\0'};
	//scanf("%s",c);
	//for(i=0;i<5;i++)
	//{
	//	scanf("%c",&c[i]);
	//	c[5]='\0';
	//}
	//for(i=0;i<5;i++)
	//{
	//	printf("%c\n",a[i]);
	//}
	//printf("%s\n",c);
	//printf("%s\n",a);
	//printf("%s\n",b);
//	char d[20];
//	printf("请输入：");
//	gets(d);
//	printf("输出：");
//	puts(d);
//
//}

//#include<stdio.h>
//int main()
//{
//	char a[5][6]={"  *"," ***","*****"," ***","  *"};
//	int i=0;
//	for(i=0;i<5;i++)
//	{
//		printf("%s\n",a[i]);
//	}
//	printf("\n");
//	return 0;
//}
