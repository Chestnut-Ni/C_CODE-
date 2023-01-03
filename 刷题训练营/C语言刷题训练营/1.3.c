#include <stdio.h>

//int main()
//{
//    int n=0;
//    scanf("%d",&n);
//    int arr[50]={0};
//    int i=0;
//    int flag1=0;//判断升序
//    int flag2=0;//判断降序
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//    for(i=0;i<n-1;i++)
//    {
//        if(arr[i]<arr[i+1])
//        {
//            flag1=1;
//        }
//        else
//        {
//            flag2=1;
//        }
//    }
//    if(flag1==1&&flag2==1)
//    {
//        printf("unsorted\n");
//    }
//    else
//    {
//        printf("sorted\n");
//    }
//    return 0;
//}


//int main()
//{
//    int i = 0;
//    double score[5] = { 0 };
//    for (i = 0; i < 5; i++)
//    {
//        //读取一个人的5科成绩
//        int j = 0;
//        double sum = 0;
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%lf", &score[j]);
//            sum += score[j];
//        }
//        for (j = 0; j < 5; j++)
//        {
//            printf("%.1lf ", score[j]);
//        }
//        printf("%.1lf\n", sum);
//    }
//    return 0;
//}


//int main()
//{  
//	int i = 0;
//    int j = 0;
//    int n = 0;
//    int m = 0;
//    int arr[10][10] = {0};
//    scanf("%d %d", &n, &m);
//    for(i=0; i<n; i++)
//    {
//        for(j=0; j<m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//int main()
//{
//    int n=0;//n行
//    int m=0;//m列
//    scanf("%d%d",&n,&m);
//    int arr[5][5]={0};
//    int i=0;
//    int j=0;
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<m;j++)
//        {
//            scanf("%d",&arr[i][j]);
//        }
//    }
//    int x=0;
//    int y=0;
//    scanf("%d%d",&x,&y);
//    printf("%d",arr[x-1][y-1]);
//    return 0;
//}

//int main()
//{
//    int n=0;//n列
//    int m=0;//m行
//    int j=0;
//    scanf("%d%d",&n,&m);
//    int arr[100]={0};
//    int i=0;
//    for(i=0;i<n*m;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//    int k=0;
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<m;j++)
//        {
//            printf("%d ",arr[k]);
//            k++;
//        }
//        printf("\n");
//    }
//    return 0;
//}

//int main()
//{
//    int m=0;//列
//    int n=0;//行
//    int i=0;
//    int arr1[10][10]={0};
//    int arr2[10][10]={0};
//    scanf("%d%d",&n,&m);
//
//    for(i=0;i<n;i++)
//    {
//        int j=0;
//        for(j=0;j<m;j++)
//        {
//            scanf("%d",&arr1[i][j]);
//        }
//    }
//    for(i=0;i<n;i++)
//    {
//        int j=0;
//        for(j=0;j<m;j++)
//        {
//            scanf("%d",&arr2[i][j]);
//        }
//    }
//    for(i=0;i<n;i++)
//    {
//        int j=0;
//		for(j=0;j<m;j++)
//        {
//            if(arr1[i][j]!=arr2[i][j])
//            {
//                printf("No\n");
//                return 0;
//            }
//        }
//    }
//    printf("Yes\n");
//    return 0;
//}

//int main()
//{
//    int n=0;
//    scanf("%d",&n);
//    int arr[10][10]={0};
//    int i=0;
//    int j=0;
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<n;j++)
//        {
//            scanf("%d",&arr[i][j]);
//        }
//    }
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<n;j++)
//        {
//            if(i>j)
//            {
//                if(arr[i][j]!=0)
//                {
//                    printf("NO\n");
//                    return 0;
//                }
//            }
//        }
//    }
//    printf("YES\n");
//    return 0;
//}

//int main()
//{
//    int n=0;
//    int m=0;
//    scanf("%d%d",&n,&m);
//    int arr[10][10]={0};
//    int i=0;
//    int j=0;
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<m;j++)
//        {
//            scanf("%d",&arr[i][j]);
//        }
//    }
//    for(i=0;i<m;i++)
//    {
//        for(j=0;j<n;j++)
//        {
//            printf("%d ",arr[j][i]);
//        }
//        printf("\n");
//    }
//}

int main()
{
    int n=0;
    int m=0;//列
    scanf("%d%d",&n,&m);
    int i=0;
    int j=0;
    int arr[10][10]={0};
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int k=0;//k次变换
    scanf("%d",&k);
    char t=0;//
    scanf(" %c",&t);
    int a=0;//
    int b=0;
    scanf("%d%d",&a,&b);
    for(i=0;i<k;i++)
    {
        if(t='r')//行变换
        {
            for(j=0;j<m;j++)
            {
                int tmp=0;
                tmp=arr[a-1][j];
                arr[a-1][j]=arr[b-1][j];
                arr[b-1][j]=tmp;
            }
        }
        if(t='c')//列变换
        {
            for(j=0;j<n;j++)
            {
                int tmp=0;
                tmp=arr[j][a-1];
                arr[j][a-1]=arr[j][b-1];
                arr[j][b-1]=tmp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}