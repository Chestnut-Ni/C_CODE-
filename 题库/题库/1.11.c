#include<stdio.h>

//int fun(char *a,char *b)
//{
//	int num=0;
//	int n=0;
//	while(*(a+num)!='\0')
//	{
//		num++;
//	}
//	while(b[n])
//	{
//		*(a+num)=b[n];
//		num++;
//		n++;
//	}
//	return num;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count =0;
//	for(i=0; i<10; i++)
//	{
//		for(j=0; j<10; j++)
//		{
//			printf("hehe\n");
//			count++;
//		}
//	}
//	printf("%d\n",count);
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count =0;
//	for(; i<10; i++)
//	{
//		for(; j<10; j++)
//		{
//			printf("hehe\n");
//			count++;
//		}
//	}
//	printf("%d\n",count);
//}

//union pw
//{
//	int i;
//	char ch[2]; 
//}a;
//int main () 
//{
//	a.ch[0]=10; 
//	a.ch[1]=0;
//	printf ("%d\n",a.i); 
//} 

//int sub(int m)
//{
//	int sum=0;
//	while(m)
//	{
//		sum+=(m%10);
//		m/=10;
//	}
//	if(sum%7==0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i=0;
//	for(i=100;i<200;i++)
//	{
//		if(sub(i)==1)
//			printf("%d\n",i);
//	}
//	return 0;
//}

//void process(char s[],char s1[])
//{
//	int i=0;
//	char* p=s;
//	while(*p!='\0')
//	{
//		if((*p)>='a'&&(*p)<='z')
//			if((*p)-32>='X')
//				s1[i]=(*p)-32-23;
//			else
//				s1[i]=(*p)-32+3;
//		else
//			if((*p)>='X')
//				s1[i]=(*p)-23;
//			else
//				s1[i]=(*p)+3;
//		i++;
//		p++;
//	}
//}
//int main()
//{
//	char s[20]="prZzbpP";
//	char s1[20]={0};
//	process(s,s1);
//	printf("%s\n",s);
//	printf("%s\n",s1);
//}

#include<math.h>
//int main()
//{
//	char c=-1;
//	int a=-1;
//	//printf("%d\n",0x08A);
//	//printf("%u\n",c);
//	printf("%d",abs(a));
//}

//int main()
//{
//	int i=3;
//	int j=0;
//	for(j=0;j<i;j++)
//	{
//		int k=0;
//		for(k=i-j;k+0;k--)
//		{
//			printf(" ");
//		}
//		for(k=1;k<=2*j+1;k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for(j=0;j<i+1;j++)
//	{
//		int k=0;
//		for(k=0;k<j;k++)
//		{
//			printf(" ");
//		}
//		for(k=0;k<2*(i-j)+1;k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i=3;
//	int m=0;
//	for(m=-i;m<=i;m++)
//	{
//		int n=0;
//		for(n=0;n<abs(m);n++)
//		{
//			printf(" ");
//		}
//		for(n=0;n<7-2*abs(m);n++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}