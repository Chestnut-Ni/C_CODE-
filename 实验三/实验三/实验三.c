//#include<stdio.h>
//int main()
//{
//	int x;
//	int a,b,c,d,e;
//	int count=0;
//	printf("输入一个不多于5位正整数(0~99999):");
//	scanf("%d",&x);
//	e=x/10000;
//	d=(x-e*10000)/1000;
//	c=(x-e*10000-d*1000)/100;
//	b=(x-e*10000-d*1000-c*100)/10;
//	a=x-e*10000-d*1000-c*100-b*10;
//	printf("位数：");
//	if(x>9999)
//	{
//		printf("5\n");
//		printf("顺序：%d %d %d %d %d \n",e,d,c,b,a);
//		printf("倒序：%d %d %d %d %d \n",a,b,c,d,e);
//	}
//	else if(x>999&&x<=9999)
//	{
//		printf("4\n");
//		printf("顺序：%d %d %d %d \n",d,c,b,a);
//		printf("倒序：%d %d %d %d \n",a,b,c,d);
//		printf("由大到小：%d\n",max(a,b,c,d));
//	}
//	else if(x>99&&x<=999)
//	{		printf("3\n");
//		printf("顺序：%d %d %d \n",c,b,a);
//		printf("倒序：%d %d %d \n",a,b,c);
//	}
//	else if(x>9&&x<=99)
//	{
//		printf("2\n");
//		printf("顺序：%d %d \n",b,a);
//		printf("倒序：%d %d \n",a,b);
//	}
//	else
//	{
//		printf("1\n");
//		printf("顺序：%d \n",a);
//		printf("倒序：%d \n",a);
//	}
//	return 0;
//}

//#include <stdio.h>
//void bubble_sort(int* a)
//{
//	int tmp;
//	int i=0;
//	int j=0;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			if(a[j+1]<a[j])
//			{
//				tmp=a[j];
//				a[j]=a[j+1];
//				a[j+1]=tmp;
//			}
//		}
//	}
//}
//int main()
//{
//    int n;
//    int count=0,i,a[5];
//    printf ("输入一个不多于5位正整数(0~99999):\n");
//    scanf("%d",&n);
//    if (n<=0 || n>99999)
//    {
//        printf ("输入的数不合法\n");
//    }
//    else
//    {
//        while(1)
//        {
//            a[count]=n%10;
//            n=n/10;
//            if(n==0)
//            {
//                break;
//            }
//            count++;   
//        }
//		printf("位数：%d\n正序：",count+1);
//		for(i=count;i>=0;i--)
//		{
//			printf("%d ",a[i]);
//		}
//        printf("\n倒序：");
//        for (i=0;i<=count;i++)
//        {
//            printf("%d ",a[i]);
//        }
//        printf("\n");
//		if(count==3)
//		{
//			bubble_sort(a);
//			printf("由小到大：");
//			for (i=0;i<=3;i++)
//			{
//				printf("%d ",a[i]);
//			}
//		}
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int x,y;
//	scanf("%d",&x);
//	if(x<1)
//	{
//		y=x;
//	}
//	else if(x<10)
//	{
//		y=2*x-1;
//	}
//	else
//	{
//		y=3*x-11;
//	}
//	printf("%d\n",y);
//
//}











