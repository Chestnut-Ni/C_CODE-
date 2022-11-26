//#include<stdio.h>
//int main()
//{
//    float a = 11.1;
//    double b = 22.22;
//    printf("%f %0.2f %lf %0.2lf", a, a, b, b);
//    return 0;
//}


//编写函数fun其功能是：根据整型形参m，计算如下公式的值：
//y=1＋1/3＋1/5＋1/7＋...＋1/(2m+1)例如：若m=9，则应输出：2.133256
//#include <stdio.h>
//double fun(int m)   
//{  /**********Begin**********/
//	double sum=0.00;
//	double i=1.00;
//	for(i=1;i<=(2*m+1);i+=2)
//	{
//		sum+=1.00/i;
//	}
//	return sum;
//  /**********  End  **********/
//}
//
//int main()   
//{  
//	int n;   
//	printf("Enter n: ");   
//	scanf("%d", &n);   
//	printf("%1f\n", fun(n));
//	return 0;
//} 

//编写函数fun其功能是：根据整型形参m，计算如下公式的值：
//y=1/2!+1/4!+...+1/m!（m是偶数）
//#include <stdio.h>
//double fun(int m)   
//{
//  /**********Begin**********/
//	double i=2.00;
//	double j=1.00;
//	double sum=0.00;
//	for(i=2.00;i<=m;i+=2)
//	{
//		double tmp=1.00;
//		for(j=1.00;j<=i;j++)
//		{
//			tmp*=j;
//		}
//		sum+=1.00/tmp;
//	}
//	return sum;
//  /**********  End  **********/
//}
//int main()   
//{
//	int n;   
//	printf("Enter n: ");   
//	scanf("%d", &n);   
//	printf("%1f\n",fun(n));
//	return 0;
//}

//实现字符串逆序
//#include<stdio.h>
//void reserse(char*a,int sz)
//{
//	int left=0;
//	int right=sz-1;
//	while(left<=right)
//	{
//		int tmp;
//		tmp=a[left];
//		a[left]=a[right];
//		a[right]=tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int i=0;
//	char a[]="bit";
//	int sz=sizeof(a)/sizeof(a[0]);
//	reserse(a,sz);
//	for(i=0;i<sz;i++)
//	{
//			printf("%c",a[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr[]="abc";
//	int i=0;
//	printf("%s",arr);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int X,Y,Z;
//	char acX[]={"abcdefg"};
//	char acY[]={'a','b','c','d','e','f','g','\0'};
//	char acZ[]={'a','b','c','d','e','f','g'};
//	X=strlen(acX);
//	Y=strlen(acY);
//	Z=strlen(acZ);
//	printf("%d\n",X);
//	printf("%d\n",Y);
//	printf("%d\n",Z);
//	return 0;
//}

//数组的交换
//#include<stdio.h>
//int main()
//{
//	int i;
//	int arr1[]={1,3,5,7,9};
//	int arr2[]={2,4,6,8,10};
//	for(i=0;i<5;i++)
//	{
//		printf("%d ",arr1[i]);
//	}
//	printf("\n");
//	for(i=0;i<5;i++)
//	{
//		printf("%d ",arr2[i]);
//	}
//	printf("\n");
//	for(i=0;i<5;i++)
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

//冒泡排序
//#include<stdio.h>
//void bubble_sort(int* arr,int sz)
//{
//	int i,j;
//	for(i=0;i<sz-1;i++)
//	{
//		int flag=1;
//		for(j=0;j<sz-1;j++)
//		{
//			int tmp;
//			if(arr[j]>arr[j+1])
//			{
//				tmp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=tmp;
//				flag=0;
//			}
//		}
//		if(flag==1)
//			break;
//	}
//}
//int main()
//{
//	int i;
//	int arr[]={8,5,9,64,2,6};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[]={1,2,3,4};
//	printf("%p\n",arr);//1的地址
//	printf("%p\n",&arr[0]);//1的地址
//	printf("%d\n",*arr);//1
//	printf("%d\n",sizeof(arr));//16
//	printf("%p\n",&arr);//数组的地址
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i,j;
//	int arr[10][10];
//	for(i=0;i<10;i++)
//	{
//		arr[i][i]=1;
//		arr[i][0]=1;
//	}
//	for(i=2;i<10;i++)
//	{
//		for(j=1;j<i;j++)
//		{
//			arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
//		}
//	}
//	for(i=0;i<10;i++)
//	{
//		for(j=0;j<=i;j++)
//		{
//			printf("%-5d",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a[5]={1,0,1,1,0};
//	int i;
//	for(i=2;i<5;i++)
//	{
//		a[i]+=a[i-1]+a[i-2];
//	}
//	for(i=0;i<5;i++)
//	{
//		printf("%d",a[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int p[7]={11,13,14,15,16,17,18};
//	int i=0;
//	int k=0;
//	while(i<7&&p[i]%2)
//	{
//		k=k+p[i];
//		i++;
//	}
//	printf("k=%d\n",k);
//	return 0;
//}

//#include<stdio.h>
//void bubble_sort(int* arr)
//{
//	int i,j,tmp;
//	for(i=0;i<7;i++)
//	{
//		for(j=0;j<7;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				tmp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int i;
//	int a[8];
//	int high=0;
//	int h;
//	int low=100;
//	int l;
//	int sum1=0;
//	int sum2=0;
//	int arr1[8];
//	int arr2[8];
//	printf("数学：");
//	for(i=0;i<8;i++)
//	{
//		scanf("%d",&arr1[i]);
//	}
//	printf("\n");
//	printf("英语：");
//	for(i=0;i<8;i++)
//	{
//		scanf("%d",&arr2[i]);
//	}
//	for(i=0;i<8;i++)
//	{
//		sum1+=arr1[i];
//	}
//	printf("数学平均分：%d\n",sum1/8);
//	for(i=0;i<8;i++)
//	{
//		sum2+=arr2[i];
//	}
//	printf("英语平均分：%d\n",sum2/8);
//	for(i=0;i<8;i++)
//	{
//		a[i]=(arr1[i]+arr2[i])/2;
//	}
//	bubble_sort(arr1);
//	printf("数学成绩最高是%d\n",arr1[7]);
//	bubble_sort(arr2);
//	printf("英语成绩最高是%d\n",arr2[7]);
//	for(i=0;i<8;i++)
//	{
//		if(a[i]>high)
//		{	
//			high=a[i];
//			h=i;
//		}
//		if(a[i]<low)
//		{
//			low=a[i];
//			l=i;
//		}
//	}
//	printf("%d\n",h);
//	printf("%d\n",l);
//}

//#include<memory.h>
//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	int i;
//	char arr[]="hello world";
//	for(i=1;i<6;i++)
//	{
//		memset(arr,'*',i);
//		printf("%s\n",arr);
//		Sleep(100);
//	}
//	return 0;
//}

//#include<stdio.h>
//void Swap(int *x,int *y)
//{
//	int tmp;
//	tmp=*x;
//	*x=*y;
//	*y=tmp;
//}
//int main()
//{
//	int a=1;
//	int b=2;
//	printf("%d %d\n",a,b);
//	Swap(&a,&b);
//	printf("%d %d",a,b);
//	return 0;
//}

//#include<stdio.h>
//void print(int num)
//{
//	if(num>9)
//	{
//		print(num/10);
//	}
//	printf("%d ",num%10);
//}
//int main()
//{
//	int num;
//	scanf("%d",&num);
//	print(num);
//	return 0;
//}


//#include<stdio.h>
//int count(int n)
//{
//	int count=0;
//	while(n)
//	{
//		count++;
//		n/=10;
//	}
//	return count;
//}
//int main()
//{
//	int num;
//	scanf("%d",&num);
//	printf("%d\n",count(num));
//	return 0;
//}


//#include<stdio.h>
//int DigitSum(int n)
//{
//	int sum=0;
//	if(n>9)
//	{
//		sum=n%10+DigitSum(n/10);
//	}
//	else
//		sum=n;
//	return sum;
//}
//int main()
//{
//	int num;
//	scanf("%d",&num);
//	printf("%d\n",DigitSum(num));
//}