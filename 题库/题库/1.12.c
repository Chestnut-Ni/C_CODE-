#include<stdio.h>
//int main()
//{
//	char s[100]={0};
//	int c=0;
//	int i=0;
//	scanf("%c",&c);
//	scanf("%d",&i);
//	scanf("%s",s);
//	printf("%c,%d,%s\n",c,i,s);
//	return 0;
//}

//int main()
//{
//	int a[]={1,2,3,4,5,6,7,8,9,10};
//	int* p=a;
//	printf("%d\n",*a);
//	printf("%d\n",*p);
//	printf("%d\n",a[p-a]);
//}

//int main()
//{
//	printf("%x",128);
//	return 0;
//}

//int fun(char* ptr)
//{
//	int i=0;
//	int j=0;
//	int count=0;
//	while(*(ptr+j)!='\0')
//	{
//		if((*(ptr+j)>='a'&&*(ptr+j)<='z')||(*(ptr+j)>='A'&&*(ptr+j)<='Z'))
//		{
//			*(ptr+i)=*(ptr+j);
//			count++;
//			i++;
//		}
//		j++;
//	}
//	*(ptr+i)='\0';
//	return count;
//}
//int main()
//{
//	int ret=0;
//	char str[]="ab234$df4";
//	puts(str);
//	ret=fun(str);
//	puts(str);
//	printf("%d\n",ret);
//}

//int main()
//{
//	int x=1;
//	int y=2;
//	int z=3;
//	x=y*5=x+z;
//	printf("%d ",x);
//}

//int main()
//{
//	double a=1.0;
//	printf("%lf",++a);
//}

//int main()
//{ 
//	char a[]="morning",t;
//	int i,j=0;
//	for(i=1;i<7;i++)
//		if(a[j]<a[i])
//			j=i;
//	t=a[j];
//	a[j]=a[7];
//	a[7]=a[j];
//	puts(a);
//}