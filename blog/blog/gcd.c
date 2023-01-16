//int gcd(int x,int y)
//{
//	while(x!=y)
//	{
//		if(x>y)
//		{
//			x=x-y;
//		}
//		else
//		{
//			y=y-x;
//		}
//	}
//	return x;
//}

//int gcd(int x,int y)
//{
//	int i=0;
//	for(i=x;;i--)
//	{
//		if(x%i==0&&y%i==0)
//			break;
//	}
//	return i;
//}

#include<stdio.h>
//int gcd(int x,int y)
//{
//	int tmp=0;
//	while(tmp=x%y)
//	{
//		x=y;
//		y=tmp;
//	}
//	return y;
//}
//int main()
//{
//	printf("%d",gcd(4,3));
//}
//
//int gcd(int x,int y)
//{
//	if(x%y==0)
//		return y;
//	else
//		return gcd(y,x%y);
//}