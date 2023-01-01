//#include<stdio.h>
//int main()
//{
//    int month=0;
//    int date=0;
//    double prize=0.0;//实际花的
//    int flag=0;//有无优惠券
//    double count=0.0;//折扣多少
//    double end=0.0;
//    scanf("%lf %d %d %d",&prize,&month,&date,&flag);
//    if(month==11&&date==11)
//    {
//        count=0.7;
//    }
//    else
//    {
//        count=0.8;
//    }
//    end=prize*count-50*flag;
//    if(end<0)
//    {
//        printf("0.00");
//    }
//    else
//    {
//        printf("%.2lf",end);
//    }
//    return 0;
//}

//int main()
//{
//    int n=0;
//    int arr[40]={0};
//    scanf("%d",&n);
//    int i=0;
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//    for(i=0;i<n-1;i++)
//    {
//        int j=0;
//        int tmp=0;
//        for(j=0;j<n-1-i;j++)
//        {
//            if(arr[j]<arr[j+1])
//            {
//                tmp=arr[j];
//                arr[j]=arr[j+1];
//                arr[j+1]=tmp;
//            }
//        }
//    }
//    for(i=0;i<5;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//#include<stdlib.h>
//
//int cmp_int(const void* e1,const void* e2)
//{
//    return *(int*)e1-*(int*)e2;
//}
//int main()
//{
//    int i=0;
//    int n=0;
//    int arr[40]={0};
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//    qsort(arr,n,4,cmp_int);
//    for(i=0;i<5;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int IQ=0;
//    //while(scanf("%d",&IQ)!=EOF)
//	while(~scanf("%d",&IQ))
//    {
//        if(IQ>=140)
//        {
//            printf("Genius\n");
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int i=0;
//    char arr[]={"AEIOUaeoiu"};
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    int ch=0;
//    while((ch=getchar())!=EOF)
//    {
//        for(i=0;i<sz;i++)
//        {
//            if(ch==arr[i])
//            {
//                printf("Vowel\n");
//                break;
//            }
//        }
//        if(i==sz)
//        {
//            printf("Consonant\n");
//        }
//        getchar();
//    }
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int i=0;
//    char arr[]={"AEIOUaeoiu"};
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    int ch=0;
//    while((ch=getchar())!=EOF)
//    {
//        for(i=0;i<sz;i++)
//        {
//            if(strchr(arr,ch))
//            {
//                printf("Vowel\n");
//                break;
//            }
//        }
//        if(i==sz)
//        {
//            printf("Consonant\n");
//        }
//        getchar();
//    }
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int i=0;
//    char arr[]={"AEIOUaeoiu"};
//    int sz=sizeof(arr)/sizeof(arr[0]);
//    int ch=0;
//    while((scanf("% c",&ch))!=EOF)
//    {
//        for(i=0;i<sz;i++)
//        {
//            if(strchr(arr,ch))
//            {
//                printf("Vowel\n");
//                break;
//            }
//        }
//        if(i==sz)
//        {
//            printf("Consonant\n");
//        }
//    }
//    return 0;
//}