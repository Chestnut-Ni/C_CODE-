#include<string.h>
#include<stdio.h>
#include<math.h>
//nn乘法口诀表
//void print_table(int x)
//{
//	int i,j;
//	for(i=1;i<=x;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	printf("input：");
//	scanf("%d",&n);
//	print_table(n);
//	return 0;
//}


//递归实现阶乘
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
//int main()
//{
//	int n,ret;
//	printf("input：");
//	scanf("%d",&n);
//	ret=Fac(n);
//	printf("%d\n",ret);
//	return 0;
//}

//非递归实现阶乘
//int main()
//{
//	int s=1;
//	int i,n;
//	printf("input:");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		s=s*i;
//	}
//	printf("%d\n",s);
//	return 0;
//}

//输出n^k
//double Pow(int n,int k)
//{
//	if(k<0)
//	{
//		return 1.0/Pow(n,-k);
//	}
//	else if(k==1)
//	{
//		return n;
//	}
//	else
//	{
//		return n*Pow(n,k-1);
//	}
//}
//int main()
//{
//	int n,k;
//	double ret;
//	printf("input:");
//	scanf("%d%d",&n,&k);
//	ret=Pow(n,k);
//	printf("%lf\n",ret);
//	return 0;
//}

//斐波那契数
//int Fib(int x)
//{
//	if(x==1||x==2)
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
//	printf("input：");
//	scanf("%d",&n);
//	ret=Fib(n);
//	printf("%d\n",ret);
//	return 0;
//}

//实现一个函数来交换两个整数的内容
//void Swap(int* pa,int* pb)
//{
//	int tmp;
//	tmp=*pa;
//	*pa=*pb;
//	*pb=tmp;
//}
//int main()
//{
//	int a=1;
//	int b=2;
//	printf("%d %d ",a,b);
//	Swap(&a,&b);
//	printf("\n");
//	printf("%d %d ",a,b);
//	return 0;
//}

//统计十进制中1的个数
//int count_decimal_one(int a)
//{
//	int count=0;
//	while(a)
//	{
//		if(a%10==1)
//		{
//			count++;
//		}
//		a=a/10;
//	}
//	return count;
//}
//int main()
//{
//	int a;
//	int count;
//	scanf("%d",&a);
//	count=count_decimal_one(a);
//	printf("count=%d\n",count);
//	return 0;
//}


//统计二进制中(补码)1的个数
//int count_binary_one(unsigned int a)
//{
//	int count=0;
//	while(a)
//	{
//		if(a%2==1)
//		{
//			count++;
//		}
//		a=a/2;
//	}
//	return count;
//}
//int main()
//{
//	int a;
//	int count;
//	scanf("%d",&a);
//	count=count_binary_one(a);
//	printf("count=%d\n",count);
//	return 0;
//}

//优化
//int count_binary_one(int a)
//{
//	int count=0;
//	int i=0;
//	for(i=0;i<32;i++)
//	{
//		if(((a>>i)&1)==1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a;
//	int count;
//	scanf("%d",&a);
//	count=count_binary_one(a);
//	printf("count=%d\n",count);
//	return 0;
//}
//更加高效
//int count_binary_one(int a)
//{
//	int count=0;
//	while(a)
//	{
//		a=a&(a-1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a;
//	int count;
//	scanf("%d",&a);
//	count=count_binary_one(a);
//	printf("count=%d\n",count);
//	return 0;
//}

//求两个二进制数字中不同位的个数
//使用异或（同0异1）的运算
//异或值有多少个1就有几个不同位
//int get_differ_binary(int m,int n)
//{
//	int ret;
//	ret=m^n;
//	count_binary_one(ret);
//	return  ret;
//}
//int main()
//{
//	int m;
//	int n;
//	int count;
//	scanf("%d%d",&m,&n);
//	count=get_differ_binary(m,n);
//	printf("count=%d\n",count);
//	return 0;
//}

//分别打印出二进制的奇数和偶数位
//void print(int m)
//{
//	int i;
//	int ret;
//	printf("奇数位：");
//	for(i=30;i>=0;i-=2)
//	{
//		printf("%d ",(m>>i)&1);
//	}
//	printf("\n");
//	printf("偶数位：");
//	for(i=31;i>0;i-=2)
//	{
//		printf("%d ",(m>>i)&1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m=0;
//	scanf("%d",&m);
//	print(m);
//	return 0;
//}

//字符串逆序（递归实现）
//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//int my_strlen(char*arr)
//{
//	int count=0;
//	while(*arr!='\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//void reverse_string(char *arr)
//{
//	int left=0;
//	int right=my_strlen(arr)-1;
//	int tmp;
//	while(left<=right)
//	{
//		tmp=arr[left];
//		arr[left]=arr[right];
//		arr[right]=tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int sz;
//	char arr[]={"abcdef"};
//	reverse_string(arr);
//	printf("%s\n",arr);
//	return 0;
//}

//计算一个数的每位之和（递归实现）
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//int DigitSum(int n)
//{
//	if(n>9)
//		return DigitSum(n/10)+n%10;
//	else
//		return n;
//}
//int main()
//{
//	int n;
//	int sum;
//	scanf("%d",&n);
//	sum=DigitSum(n);
//	printf("%d\n",sum);
//	return 0;
//}

//int main()
//{
//	int X,Y;
//	char acX[]={"abcdefg"};
//	char acY[]={'a','b','c','d','e','f','g'};
//	X=strlen(acX);
//	Y=strlen(acY);
//	printf("%d\n",X);
//	printf("%d\n",Y);
//	return 0;
//}

//1.实现函数init() 初始化数组为全0
//2.实现print()  打印数组的每个元素
//3.实现reverse()  函数完成数组元素的逆置
//reverse-颠倒;反转；交换
//void Init(int arr[],int sz)
//{
//	int i;
//	for(i=0;i<sz;i++)
//	{
//		arr[i]=0;
//	}
//}
//void Print(int arr[],int sz)
//{
//	int i;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[],int sz)
//{
//	int left=0;
//	int right=sz-1;
//	while(left<=right)
//	{
//		int tmp;
//		tmp=arr[left];
//		arr[left]=arr[right];
//		arr[right]=tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int i;
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	//Init(arr,sz);
//	Print(arr,sz);
//	Reverse(arr,sz);
//	Print(arr,sz);
//	return 0;
//}

//交换数组
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//int main()
//{
//	int i;
//	int arr1[5]={1,3,5,7,9};
//	int arr2[5]={2,4,6,8,10};
//	int sz=sizeof(arr1)/sizeof(arr1[0]);
//	for(i=0;i<sz;i++)
//	{
//		int tmp;
//		tmp=arr1[i];
//		arr1[i]=arr2[i];
//		arr2[i]=tmp;
//	}
//	for(i=0;i<5;i++)
//	{
//		printf("%d ",arr1[i]);
//	}
//	printf("\n");
//	for(i=0;i<5;i++)
//	{
//		printf("%d ",arr2[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5};//一个元素4个字节
//	short *p = (short*)arr;//强制类型转换 short型是2个字节
//	int i = 0;
//	for(i=0; i<4; i++)
//	{
//		*(p+i) = 0;//循环一次两个字节 循环4次 共8个字节  
//	}
//	for(i=0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;//内存中的放法：44 33 22 11(4个字节)
//    char *pc = (char*)&a;
//    *pc = 0;//内存中44→00
//    printf("%x\n", a);
//    return 0;
//}

//求整数位数
//int count(int n)
//{
//	int count=0;
//	while(n)
//	{
//		n=n/10;
//		count++;	
//	}
//	return count;
//}
//int main()
//{
//	int n,ret;
//	scanf("%d",&n);
//	ret=count(n);
//	printf("%d\n",ret);
//}

//递归打印出一个数的每一位
//void print(int n)
//{
//	if(n>9)
//	{
//		print(n/10);
//	}
//	printf("%d ", n%10);
//}
//int main()
//{
//	int num;
//	scanf("%d",&num);
//	print(num);
//	return 0;
//}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
//例如：2+22+222+2222+22222
//int main()
//{
//	int a;
//	int i;
//	int sum=0;
//	int ret=2;
//	scanf("%d",&a);
//	for(i=0;i<5;i++)
//	{
//		sum+=ret;
//		ret=10*ret+a;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//打印水仙花数
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1^3＋5^3＋3^3，则153是一个“水仙花数”。
//int count(int n)
//{
//	int count=0;
//	while(n)
//	{
//		n=n/10;
//		count++;	
//	}
//	return count;
//}
//int IfDaffodil(int n,int ret)
//{
//	int sum=0;
//	int tmp=n;
//	while(n)
//	{
//		int i;
//		i=pow(n%10,ret);
//		n=n/10;
//		sum+=i;
//	}
//	if(sum==tmp)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int ret,rett;
//	int n=0;
//	for(n=152;n<100000;n++)
//	{
//		ret=count(n);
//		rett=IfDaffodil(n,ret);
//		if(rett==1)
//			printf("%d\n",n);
//	}
//	return 0;
//}
