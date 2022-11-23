
//两种常见的库函数
//strcpy（string copy）（字符串拷贝函数）
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	char arr1[]="Cyuyan";
//	char arr2[]="!!!!!!!!!!";
//	strcpy(arr2,arr1);
//	printf("%s\n",arr2);
//	return 0;
//}
//memset
//#include<memory.h>
//#include<stdio.h>
//int main()
//{
//	char arr[]="hello world";
//	memset(arr,'*',5);
//	printf("%s\n",arr);
//	return 0;
//}
//自定义函数
//例子：求两个整数的较大值
//#include<stdio.h>
//int MAX(int x,int y)
//{
//	if(x>y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int x=10;
//	int y=323;
//	int max=MAX(x,y);
//	printf("max=%d\n",max);
//	return 0;
//}
//写一个交换两个整形变量内容的函数
//错误示例：
//#include<stdio.h>
//void Swap(int x,int y)
//{
//	int tmp;
//	tmp=x;
//	x=y;
//	y=tmp;
//}
//int main()
//{
//	int a=1;
//	int b=2;
//	printf("a=%d,b=%d\n",a,b);
//	Swap(a,b);
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}
////正确
//#include<stdio.h>
//void Swap(int* px,int* py)//pointer
//{
//	int tmp;
//	tmp=*px;
//	*px=*py;
//	*py=tmp;
//}
//int main()
//{
//	int a=1;
//	int b=2;
//	printf("a=%d,b=%d\n",a,b);
//	Swap(&a,&b);
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}
////写一个判断素数的函数
//#include<stdio.h>
//int is_prime(int n)
//{
//	int j;
//	for(j=2;j<n;j++)
//	{
//		if(n%j==0)
//		{
//			return 0;
//			break;//这里的break可以不写 因为return 0比break更强
//		}
//	}
//	//以下的if语句可以不写 因为退出for循环时j一定是等于n的
//	if(j==n)
//	{
//		return 1;
//	}
//}
//is_prime函数的优化
//int is_prime(int n)
//{
//	int j;
//	for(j=2;j<n;j++)
//	{
//		if(n%j==0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i=100;
//	for(i=100;i<=200;i++)
//	{
//		is_prime(i);
//		if(is_prime(i)==1)
//		{
//			printf("%d是素数\n",i);
//		}
//		if(is_prime(i)==0)
//		{
//			printf("%d不是素数\n",i);
//		}
//	}
//	return 0;
//}
//
////写一个判断闰年的函数
//#include<stdio.h>
//int is_leap_year(int y)
//{
//	if(((y%4==0)&&(y%100!=0))||(y%400==0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year;
//	for(year=1000;year<=2000;year++)
//	{
//		is_leap_year(year);
//		if(is_leap_year(year)==1)
//			printf("%d是闰年\n",year);
//		if(is_leap_year(year)==0)
//			printf("%d不是闰年\n",year);
//	}
//	return 0;
//}

//写一个在有序数组中找目标数字的函数（二分查找算法）
//错误示例：
//#include<stdio.h>
//int binary_search(int arr[],int K)
//{
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int left=0;
//	int right=sz-1;
//	while(left<=right)
//	{
//		int mid=(left+right)/2;
//		if(arr[mid]>K)
//		{
//			right=mid-1;
//		}
//		else if(arr[mid]<K)
//		{
//			left=mid+1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k=7;//下标为6
//	int ret=binary_search(arr,k);
//	if(ret==1)
//		printf("找到了，下标是：%d\n",ret);
//	if(ret==-1)
//		printf("找不到\n");
//	return 0;
//}

//正确：
//#include<stdio.h>
//int binary_search(int arr[],int K,int sz)
//{
//	int left=0;
//	int right=sz-1;
//	while(left<=right)
//	{
//		int mid=(left+right)/2;
//		if(arr[mid]>K)
//		{
//			right=mid-1;
//		}
//		else if(arr[mid]<K)
//		{
//			left=mid+1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k=7;//下标为6
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int ret=binary_search(arr,k,sz);
//	if(ret==-1)
//		printf("找不到%d\n");
//	else
//		printf("找到了，下标是：%d\n",ret);
//
//	return 0;
//}

//写一个函数，每调用一次这个函数，就会将 num 的值增加1
//#include<stdio.h>
//void Add(int* num)
//{
//	(*num)++;
//}
//int main()
//{
//	int num=0;
//	Add(&num);
//	printf("num=%d\n",num);
//	Add(&num);
//	printf("num=%d\n",num);
//	Add(&num);
//	printf("num=%d\n",num);
//	Add(&num);
//	printf("num=%d\n",num);
//	Add(&num);
//	printf("num=%d\n",num);
//	Add(&num);
//	printf("num=%d\n",num);
//	return 0;
//}

//#include<stdio.h>
//int main() 
//{
//		printf("%d",printf("%d",printf("%d",43)));
//}	