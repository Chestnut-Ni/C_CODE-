#include<stdio.h>
#include<string.h>

//int fun(int m)
//{
//	int i=2;
//	int sum=2;
//	for(i=3;i<m;i++)
//	{
//		int j=2;
//		for(j=2;j<i;j++)
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//		}
//		if(j==i)
//		{
//			sum+=i;
//		}
//	}
//	return sum;
//}
//
//int main()
//{
//	int m=20;
//	printf("%d",fun(m));
//	return 0;
//}


//int main()
//{
//	int i=100;
//	for(i=100;i<=200;i++)
//	{
//		if(i%3==0)
//		{
//			continue;
//		}
//		printf("%d ",i);
//	}
//	return 0;
//}

//union un
//{
//	int x;
//	double y;//
//};
//struct t
//{
//	char a[10];
//	union un b;
//};
//int main()
//{
//	printf("%d",sizeof(struct t));
//	return 0;
//}

//int main()
//{
//	int x=-2;
//	int y=-1;
//	int ret1=x<y;
//	int ret2=x>y>-1;
//	printf("%d",ret2);
//}

//int main()
//{
//	double a=12346.17;
//	float b=(int)a/100.0;
//	float c=(int)(a/100.0);
//	printf("%f\n",b);
//	printf("%f\n",c);
//	return 0;
//}

//double fun(int m)
//{
//	int i=2;
//	double sum=0.0;
//	for(i=2;i<=2*m;i+=2)
//	{
//		sum+=1.0/i;
//	}
//	return sum;
//}
//int main()
//{
//	printf("%lf",fun(9));
//	return 0;
//}

//double fun(int m)
//{
//	int i=2;
//	double sum=0.0;
//	for(i=2;i<=m;i+=2)
//	{
//		int j=0;
//		int tmp=1;
//		for(j=i;j>=1;j--)
//		{
//			tmp*=j;
//		}
//		sum+=1.0/tmp;
//	}
//	return sum;
//}
//int main()
//{
//	printf("%lf",fun(4));
//}