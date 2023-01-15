#include<stdio.h>

//int main()
//{
//	int x=3;
//	int y=4;
//	int z=5;
//	printf("%d\n",!(x+y)+z-1&&y+z/2);
//}

//#include<string.h>
//void fun (char* s)
//{
//	int len=strlen(s);
//	int i=0;
//	for(i=0;i<len/2;i++)
//	{
//		char tmp=0;
//		tmp=s[i];
//		s[i]=s[len-1-i];
//		s[len-1-i]=tmp;
//	}
//}
//int main()
//{
//	char s[]="abcdef";
//	//int left=0;
//	//int right=sizeof(s)/sizeof(s[0])-1-1;
//	//while(left<right)
//	//{
//	//	char tmp=0;
//	//	tmp=s[left];
//	//	s[left]=s[right];
//	//	s[right]=tmp;
//	//	left++;
//	//	right--;
//	//}
//	fun(s);
//	puts(s);
//}

//#include<string.h>
//void fun (char* s)
//{
//	int left=0;
//	int sz=sizeof(s);
//	int len=sizeof(s)/sizeof(s[0]);
//	int right=sizeof(s)/sizeof(s[0])-1-1;
//	while(left<right)
//	{
//		char tmp=0;
//		tmp=s[left];
//		s[left]=s[right];
//		s[right]=tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char s[]="abcdef";
//	int sz=sizeof(s);
//	int len=sizeof(s)/sizeof(s[0]);
//	//fun(s);
//	puts(s);
//}

//void fun(int* arr)
//{
//	int max=0;
//	int sum=0;
//	float avg=0.0;
//	int i=0;
//	int count=0;
//	for(i=0;i<10;i++)
//	{
//		if(arr[i]>max)
//		{
//			max=arr[i];
//		}
//		sum+=arr[i];
//	}
//	for(i=0;i<10;i++)
//	{
//		if(max==arr[i])
//			count++;
//	}
//	printf("%.1f\n",sum/10.0);
//	printf("%d\n",max);
//	printf("%d\n",count);
//}
//int main()
//{
//	int arr[10]={0};
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	fun(arr);
//}

//int main()
//{
//	int b[4][6],*p,*q[4];
//	p=b;
//}
