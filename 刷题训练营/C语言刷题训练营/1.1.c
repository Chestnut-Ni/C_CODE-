#include <stdio.h>
//
//int main()
//{
//    double a=0.0;
//    double b=0.0;
//    char c=0;
//    scanf("%lf%c%lf",&a,&c,&b);
//    switch(c)
//    {
//    case '+':
//        printf("%.4lf%c%.4lf=%.4lf",a,c,b,a+b);
//        break;
//    case '-':
//        printf("%.4lf%c%.4lf=%.4f",a,c,b,a-b);
//        break;
//    case '*':
//        printf("%.4lf%c%.4lf=%.4lf",a,c,b,a*b);
//        break;
//    case '/':
//        if(b==0.0)
//        {
//            printf("Wrong!Division by zero!\n");
//        }
//        else
//        {
//            printf("%.4lf%c%.4lf=%.4lf",a,c,b,a/b);
//        }
//        break;
//    default:
//        printf("Invalid operation!\n");
//        break;
//    }
//    return 0;
//}

//int main()
//{
//	int n=0;
//	while(scanf("%d",&n)!=EOF)
//	{
//		int i=0;
//		for(i=0;i<n;i++)
//		{
//			int j=0;
//			for(j=0;j<=i;j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main() 
//{
//    int n=0;
//    while(~scanf("%d",&n))
//    {
//        int i=0;
//        for(i=n;i>0;i--)
//        {
//            int j=0;
//            for(j=0;j<i-1;j++)
//            {
//                printf("  ");
//            }
//            for(j=0;j<n-i+1;j++)
//            {
//                printf("* ");
//            }
//			printf("\n");
//        }
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n=0;
//    while(scanf("%d",&n)!=EOF)
//    {
//        int i=0;
//        for(i=n;i>0;i--)
//        {
//            int j=0;
//            for(j=i;j>0;j--)
//            {
//                printf(" ");
//            }
//            for(j=0;j<n-i+1;j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for(i=0;i<n+1;i++)
//        {
//            int j=0;
//            for(j=0;j<i;j++)
//            {
//                printf(" ");
//            }
//            for(j=0;j<n-i+1;j++)
//            {
//                printf("* ");
//            }
//			printf("\n");
//        }
//
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n=0;
//    while(scanf("%d",&n)!=EOF)
//    {
//        //上n行
//        int i=0;
//        for(i=0;i<n;i++)
//        {
//            int j=0;
//            for(j=0;j<n-i+1;j++)
//            {
//                printf("* ");
//            }
//			printf("\n");
//        }
//        //下n+1行
//        for(i=0;i<n+1;i++)
//        {
//            int j=0;
//            for(j=0;j<=i;j++)
//            {
//                printf("* ");
//			}
//			printf("\n");
//        }
//    }
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n=0;
//    while(~scanf("%d",&n))
//    {
//        int i=0;
//        for(i=0;i<n;i++)
//        {
//            int j=0;
//            for(j=0;j<i;j++)
//            {
//                printf(" ");
//            }
//            printf("*");
//            for(j=0;j<n-i-1;j++)
//            {
//                printf(" ");
//            }
//            printf("\n");
//    }
//    return 0;
//}


#include <stdio.h>

//int main()
//{
//    int n=0;
//    while(~scanf("%d",&n))
//    {
//        int i=0;
//        for(i=0;i<n;i++)
//        {
//            int j=0;
//            for(j=0;j<n;j++)
//			{
//				if(i==j)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//            printf("\n");
//		}
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
//            for(j=0;j<n;j++)
//			{
//				if(i+j==n-1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//            printf("\n");
//		}
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
//            for(j=0;j<n;j++)
//			{
//				if(i+j==n-1||i==j)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//            printf("\n");
//		}
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
//            for(j=0;j<n;j++)
//			{
//				if(i==n-1||i==0)
//				{
//					printf("* ");
//				}
//				else if(j==n-1||j==0)
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//            printf("\n");
//		}
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
//            for(j=0;j<n;j++)
//			{
//				if(i==n-1||j==0||i==j)
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//            printf("\n");
//		}
//    }
//    return 0;
//}