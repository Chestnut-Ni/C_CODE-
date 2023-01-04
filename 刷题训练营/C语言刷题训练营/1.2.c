#include <stdio.h>
#include<stdlib.h>
#include<string.h>
//
//int cmp_double(const void*e1,const void *e2)
//{
//    return *(int*)e1-*(int*)e2;
//}
//int main()
//{
//    int n=0;
//    int i=0;
//    double sum=0.0;
//
//    double arr[100]={0.0};
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        scanf_s("%lf",&arr[i]);
//        sum+=arr[i];
//    }
//    qsort(arr,n,sizeof(arr)/sizeof(arr[0]),cmp_double);
//    printf("%.2lf %.2lf %.2lf\n",arr[n-1],arr[0],sum/3);
//    return 0;
//}


//int main()
//{
//    double arr[5]={0};
//    int i=0;
//    double sum=0.0;
//    for(i=0;i<5;i++)
//    {
//        scanf("%lf",&arr[i]);
//    }
//    for(i=0;i<5;i++)
//    {
//        sum+=arr[i];
//    }
//    printf("%.2lf",sum/5);
//    return 0;
//}

//int main()
//{
//    double height={0};
//    int i=0;
//    double sum=0.0;
//    for(i=0;i<5;i++)
//    {
//        scanf("%lf",&height);
//		sum+=height;
//    }
//    printf("%.2lf",sum/5);
//    return 0;
//}

//int main()
//{
//    int n=0;
//    while(~scanf("%d",&n))
//    {
//        switch(n)
//        {
//        case 200:
//            printf("OK\n");
//            break;
//        case 202:
//            printf("Accepted\n");
//            break;
//        case 400:
//            printf("Bad Request\n");
//            break;
//        case 403:
//            printf("Forbidden\n");
//            break;
//        case 404:
//            printf("Not Found\n");
//            break;
//        case 500:
//            printf("Internal Server Error\n");
//            break;
//        case 502:
//            printf("Bad Gateway\n");
//            break;
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int n=0;
//    while(~scanf("%d",&n))
//    {
//        int i=0;
//        for(i=0;i<n;i++)
//        {
//            int j=0;
//            for(j=0;j<=i;j++)
//            {
//                printf("%d ",j+1);
//            }
//		printf("\n");
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int score=0;
//    int max=0;
//    int i=0;
//    double sum=0.0;
//    int min=100;
//    for(i=0;i<7;i++)
//    {
//        scanf("%d",&score);
//        sum+=score;
//        if(score>max)
//        {
//            max=score;
//        }
//        if(score<min)
//        {
//            min=score;
//        }
//    }
//    sum=sum-max-min;
//    printf("%.2lf",sum/5);
//
//}


//int main()
//{
//    int i=0;
//    int n=0;
//    int k=0;
//    int arr[51]={0};
//    scanf("%d",&n);
//	for(i=0;i<n;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//    scanf("%d",&k);
//    for(i=n-1;i>=0;i--)
//    {
//        if(k<arr[i])
//        {
//            arr[i+1]=arr[i];
//        }
//        else
//        {
//            arr[i+1]=k;
//            break;
//        }
//    }
//    if(i<0)
//    {
//        arr[0]=k;
//    }
//    for(i=0;i<n+1;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}


//int main()
//{
//    int arr[101]={0};
//    int i=0;
//    int n=0;
//	int count=0;
//    while(scanf("%d",&n)!=EOF)
//    {
//        int j=0;
//        for(i=2;i<+n;i++)
//        {
//            arr[i]=i;
//        }
//        for(j=2;j<=n;j++)
//        {
//            int k=0;
//            for(k=j+1;k<n;k++)
//            {
//                if(arr[k]%j==0)
//                {
//                    arr[k]=0;
//                }
//            }
//        }
//		for(i=2;i<=n;i++)
//		{
//			if(arr[i]==0)
//			{
//				count++;
//			}
//			else
//			{
//				printf("%d ",i);
//			}
//		}
//		printf("\n%d",count);
//    }
//	return 0;
//}

//ÊÔ³ý·¨
//int main()
//{
//	int n=0;
//	int i=0;
//	int count=0;
//	while(~scanf("%d",&n))
//	{
//		for(i=2;i<n;i++)
//		{
//			int j=0;
//			for(j=2;j<i;j++)
//			{
//				if(i%j==0)
//				{
//					count++;
//					break;
//				}
//			}
//			if(i==j)
//			{
//				printf("%d ",j);
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//    int arr1[100][100]={0};
//    int arr2[100][100]={0};
//    int count=0;
//    int m=0;
//    int n=0;
//    int j=0;
//    int i=0;
//    scanf("%d%d",&m,&n);
//    for(i=0;i<m;i++)
//    {
//        for(j=0;j<n;j++)
//        {
//            scanf("%d",&arr1[i][j]);
//        }
//    }
//    for(i=0;i<m;i++)
//    {
//        for(j=0;j<n;j++)
//        {
//            scanf("%d",&arr2[i][j]);
//        }
//    }
//    for(i=0;i<m;i++)
//    {
//        for(j=0;j<n;j++)
//        {
//            if(arr1[i][j]==arr2[i][j])
//            {
//                count++;
//            }
//        }
//    }
//    printf("%.2f",100.0*count/(m*n));
//    return 0;
//}


//int main()
//{
//    char ch1[100]={0};
//    char ch2[100]={0};
//    scanf("%s%s",ch1,ch2);
//    if(strcmp(ch1,"admin")==0&&strcmp(ch2,"admin")==0)
//    {
//        printf("Login Success!");
//    }
//    else
//    {
//        printf("Login Fail!");
//    }
//    return 0;
//}

//int main()
//{
//    int i=1;
//    int count=0;
//    for(i=1;i<=2019;i++)
//    {
//        int m=i;
//        while(m)
//        {
//            if(m%10==9)
//            {
//                count++;
//                break;
//            }
//            m=m/10;
//        }
//    }
//    printf("%d",count);
//    return 0;
//}

//int main()
//{
//    int num=0;
//    int sum=0;
//    int n=0;
//    int m=0;
//    scanf("%d%d",&n,&m);
//    int i=0;
//    int j=0;
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<m;j++)
//        {
//            scanf("%d",&num);
//            if(num>0)
//            {
//                sum+=num;
//            }
//        }
//    }
//    printf("%d\n",sum);
//}


//int main()
//{
//    int arr[10]={0};
//    int i=0;
//    int tmp=0;
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//    for(i=0;i<5;i++)
//    {
//        tmp=arr[i];
//        arr[i]=arr[9-i];
//        arr[9-i]=tmp;
//    }
//    for(i=0;i<10;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}