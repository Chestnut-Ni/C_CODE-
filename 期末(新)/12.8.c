#include<stdio.h>
#include<string.h>
//给定n个数据求最大值出现的位置（如果出现多次求出第一次出现的位置）
//int station(int s[],int n)
//{
//	int i;
//	int j=0;
//	for(i=0;i<n;i++)
//	{
//		if(s[i]>s[j])
//			j=i;
//	}
//	return (j+1);
//}
//int main()
//{
//	int a[100],n,i,t;
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	t=station(a,n);
//	printf("the max_value position is:%d\n",t);
//	return 0;
//}

//编写函数fun，功能是移动一维数组中的内容，要求：
//把下标从0到p（含p，p<=n-1）的数组元素平移到数组的最后
//void fun(int *arr,int p)
//{
//	int x,j,ch;
//	for(x=0;x<=p;x++)
//	{
//		ch=arr[0];
//		for(j=1;j<10;j++)
//		{
//			arr[j-1]=arr[j];
//		}
//		arr[9]=ch;
//	}
//}
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int p;
//	int i;
//	scanf("%d",&p);
//	fun(arr,p);
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int x=3,y=6,z;
//	z=x^y<<2;//z=11011->27
//	printf("%d\n",z);//优先级由高到低的顺序排列为 按位取反(~)>左移>按位与>按位异或(^)> 按位或
//}

//int main()
//{
//	char a='\x66';//'\x66’就是16进制的66所代表的字符(f)->102
//	int b=\x66;//这样写是非法的
//	int b=0x66;//合法
//	printf("%d\n",a);
//	return 0;
//}

//int main()
//{
//	int i=0;
//	for(i=0;i<1;i++)
//		printf("%d",i);
//	for(i=0;i<0;i++)
//		printf("%d",i);
//	return 0;
//}

//int main()
//{
//	printf("%d\n",strlen("\t\"\065\xff\n"));//合法
//	printf("%d\n",strlen("\t"\065\xff\n")); //不合法
//	return 0;
//}

//int main()
//{
//	int a[2][3];
//	int *p[3];
//	p[1]=&a;
//	p=a;
//	p[0]=a;
//	p[0]=&a[1][2];//合法
//}

//int main()
//{
//	printf("%x",(~0x13));
//	return 0;
//}