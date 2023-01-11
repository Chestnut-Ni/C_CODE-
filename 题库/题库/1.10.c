#include<stdio.h>
//int main()
//{
//	int w=1;
//	int x=2;
//	int y=3;
//	int z=4;
//	printf("%d",w<x?w:y<z?y:z);
//	return 0;
//}

//int a=1;
//int f(int c)
//{
//	static int a=2;
//	c=c+1;
//	return (a++)+c;
//}
//int main()
//{
//	int i,k=0;
//	for(i=0;i<2;i++)
//	{
//		int a=3;
//		k+=f(a);
//	}
//	k+=a;
//	printf("%d\n",k);
//	return 0;
//}

//int main()
//{
//	float a=12.35;
//	float b=12.35;
//	printf("%.1f %.2f",a,b);
//	return 0;
//}

//#define M 3
//#define N 4
//void fun(int tt[M][N],int pp[N])
//{
//	int i=0;
//	for(i=0;i<N;i++)
//	{
//		int min=tt[0][i];
//		int j=0;
//		for(j=0;j<M;j++)
//		{
//			if(tt[j][i]<min)
//				min=tt[j][i];
//		}
//		pp[i]=min;
//	}
//	for(i=0;i<N;i++)
//	{
//		printf("%d ",pp[i]);
//	}
//}
//int main()
//{
//	int tt[M][N]={1,23,2,7,1,3,8,1,4,8,11,12};
//	int pp[N]={0};
//	fun(tt,pp);
//}

//int main()
//{
//	int x=2;
//	printf("%d",x+=x/=x*x);
//}

//int fun(int k)
//{
//	int i=0;
//	int count=0;
//	int sum=0;
//	for(i=0,count=0;i<k&&count<=10;i++)
//	{
//		if(i%13==0||i%17==0)
//		{
//			count++;
//			sum+=i;
//		}
//	}
//	return sum;
//}
//int main()
//{
//	printf("%d",fun(14));
//}

//int fun(char *ss,char c)
//{
//	char *p=ss;
//	int count=0;
//	while(*p!='\0')
//	{
//		if(*p==c)
//		{
//			count++;
//		}
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	printf("%d",fun("123451",'2'));
//}