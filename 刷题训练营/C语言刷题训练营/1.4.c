#include <stdio.h>
#include<math.h>

//int main()
//{
//    char arr[3][3]={0};
//    int i=0;
//    int j=0;
//    for(i=0;i<3;i++)
//    {
//        for(j=0;j<3;j++)
//        {
//            scanf(" %c",&arr[i][j]);
//        }
//    }
//    char flag=0;
//    for(i=0;i<3;i++)
//    {
//        //每一行
//        if(arr[i][0]==arr[i][1]&&arr[i][1]==arr[i][2]&&arr[i][1]!='O')
//        {
//            flag=arr[i][1];
//            break;
//        }
//        //每一列
//        if(arr[0][i]==arr[1][i]&&arr[1][i]==arr[2][i]&&arr[1][i]!='O')
//        {
//            flag=arr[1][i];
//            break;
//        }
//    }
//    //对角线
//    if(arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2]&&arr[1][1]!='O'
//    ||arr[0][2]==arr[1][1]&&arr[1][1]==arr[2][0]&&arr[1][1]!='O')
//    {
//        flag=arr[1][1];
//    }
//    if(flag=='K')
//    {
//        printf("KiKi wins!\n");
//    }
//    else if(flag=='B')
//    {
//        printf("BoBo wins!\n");
//    }
//    else
//    {
//        printf("No winner!\n");
//    }
//    return 0;
//}

//int main()
//{
//    int n=0;   
//	int i=0;
//	int sum=0;
//    scanf("%d",&n);
//    while(n)
//    {
//        int tmp=n%6;
//        tmp=tmp*pow(10,i);
//        sum+=tmp;
//        i++;
//        n/=6;
//    }
//    printf("%d\n",sum);
//    return 0;
//}

//int main()
//{
//    int h = 0;
//    int m = 0;
//    int k = 0;
//    scanf("%d:%d %d", &h, &m, &k);
//
//    h = ((m + k) / 60 + h) % 24;
//    m = (m + k) % 60;
//
//    printf("%02d:%02d\n", h, m);
//    return 0;
//}

//暴力求解
//int main()
//{
//	int n=0;
//	int m=0;
//	int max=0;//最大公约数
//	int min=0;//最小公倍数
//	scanf("%d%d",&m,&n);
//	max=m>n?n:m;
//	min=m>n?m:n;
//	while(max)
//	{
//		if(m%max==0&&n%max==0)
//		{
//			break;
//		}
//		max--;
//	}
//	while(min)
//	{
//		if(min%m==0&&min%n==0)
//		{
//			break;
//		}
//		min++;
//	}
//	printf("%d\n",max+min);
//	return 0;
//}

//辗转相除
//int main()
//{
//	int n=0;
//	int m=0;
//	int tmp=0;
//	int a=0;
//	int b=0;
//	scanf("%d%d",&n,&m);
//	a=n;
//	b=m;
//	//辗转相除求最大公因数
//	while(tmp=a%b)
//	{
//		a=b;
//		b=tmp;
//	}
//	//最大公倍数=m*n/最大公因数
//	printf("%d\n",b);
//	return 0;
//}

//int main()
//{
//    long long num=0;
//    long long sum=0;
//    int i=1;
//    scanf("%lld",&num);
//    while(num)
//    {
//        int tmp=num%10;
//        if(tmp%2==0)
//        {
//            sum+=0;
//        }
//        else
//        {
//            sum+=pow(10,i-1);
//        }
//        num/=10;
//        i++;
//    }
//    printf("%lld",sum);
//    return 0;
//}

//int fib(int x)
//{
//    if(x<3)
//    {
//        return x;
//    }
//    else
//    {
//        return fib(x-1)+fib(x-2);
//    }
//}
//int main()
//{
//    int n=0;
//    scanf("%d",&n);
//    printf("%d\n",fib(n));
//}

//int main()
//{
//    int n=0;//n多个数
//    scanf("%d",&n);
//    int i=0;
//    int tmp=0;
//    int arr[100000]={0};
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&tmp);
//        arr[tmp]=tmp;
//    }
//    for(i=0;i<100000;i++)
//    {
//        if(arr[i]!=0)
//        {
//            printf("%d ",arr[i]);
//        }
//    }
//    return 0;
//}


//int main()
//{
//    char str[8000]={0};
//    scanf("%s",str);
//    char* p=str;
//    long long c=0;
//    long long ch=0;
//    long long chn=0;
//    while(*p)
//    {
//        if(*p=='C')
//        {
//            c++;
//        }
//        else if(*p=='H')
//        {
//            ch+=c;
//        }
//        else if(*p=='N')
//        {
//            chn+=ch;
//        }
//        p++;
//    }
//    printf("%lld",chn);
//    return 0;
//}

//int main()
//{
//    printf("printf(\"Hello world!\\n\");\n");
//    printf("cout << \"Hello world!\" << endl;\n");
//}

//int is_prime(int x)
//{
//    int i=0;
//    for(i=2;i<x;i++)
//    {
//        if(x%i==0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//int main()
//{
//    int i=0;
//    int count=0;
//    for(i=100;i<1000;i++)
//    {
//        if(is_prime(i)==1)
//        {
//            count++;
//        }
//    }
//    printf("%d",count);
//
//    return 0;
//}

//暴力求解
//int main()
//{
//    int n=0;
//    int i=0;
//    int arr[1001]={0};
//    int j=0;
//
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//
//    //1.排序
//    for(i=0;i<n-1;i++)
//    {
//        for(j=0;j<n-1-i;j++)
//        {
//            if(arr[j]>arr[j+1])
//            {
//                int tmp=0;
//                tmp=arr[j];
//                arr[j]=arr[j+1];
//                arr[j+1]=tmp;
//            }
//        }
//    }
//
//    //2.去重
//    for(i=0;i<n-1;i++)
//    {
//        if(arr[i]==arr[i+1])
//        {
//            int k=0;
//            for(k=i;k<n-1;k++)
//            {
//                arr[k]=arr[k+1];//元素向前覆盖
//            }
//            i--;//重新判断是否相等
//            n--;//元素个数-1
//        }
//    }
//    for(i=0;i<n;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}

//int main()
//{
//int n=0;
//int arr[1001]={0};
//int i=0;
//int tmp=0;
//
//scanf("%d",&n);
//for(i=0;i<n;i++)
//{
//    scanf("%d",&tmp);
//    arr[tmp]=tmp;
//}
//for(i=0;i<1001;i++)
//{
//    if(arr[i]!=0)
//    {
//        printf("%d ",arr[i]);
//    }
//}
//return 0;
//}