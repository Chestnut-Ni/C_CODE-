#include<string.h>
#include<stdio.h>
#include<math.h>
//nn�˷��ھ���
//void print_table(int x)
//{
//	int i,j;
//	for(i=1;i<=x;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	printf("input��");
//	scanf("%d",&n);
//	print_table(n);
//	return 0;
//}


//�ݹ�ʵ�ֽ׳�
//int Fac(int n)
//{
//	if(n==1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Fac(n-1);
//	}
//}
//int main()
//{
//	int n,ret;
//	printf("input��");
//	scanf("%d",&n);
//	ret=Fac(n);
//	printf("%d\n",ret);
//	return 0;
//}

//�ǵݹ�ʵ�ֽ׳�
//int main()
//{
//	int s=1;
//	int i,n;
//	printf("input:");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		s=s*i;
//	}
//	printf("%d\n",s);
//	return 0;
//}

//���n^k
//double Pow(int n,int k)
//{
//	if(k<0)
//	{
//		return 1.0/Pow(n,-k);
//	}
//	else if(k==1)
//	{
//		return n;
//	}
//	else
//	{
//		return n*Pow(n,k-1);
//	}
//}
//int main()
//{
//	int n,k;
//	double ret;
//	printf("input:");
//	scanf("%d%d",&n,&k);
//	ret=Pow(n,k);
//	printf("%lf\n",ret);
//	return 0;
//}

//쳲�������
//int Fib(int x)
//{
//	if(x==1||x==2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(x-1)+Fib(x-2);
//	}
//}
//int main()
//{
//	int n,ret;
//	printf("input��");
//	scanf("%d",&n);
//	ret=Fib(n);
//	printf("%d\n",ret);
//	return 0;
//}

//ʵ��һ��������������������������
//void Swap(int* pa,int* pb)
//{
//	int tmp;
//	tmp=*pa;
//	*pa=*pb;
//	*pb=tmp;
//}
//int main()
//{
//	int a=1;
//	int b=2;
//	printf("%d %d ",a,b);
//	Swap(&a,&b);
//	printf("\n");
//	printf("%d %d ",a,b);
//	return 0;
//}

//ͳ��ʮ������1�ĸ���
//int count_decimal_one(int a)
//{
//	int count=0;
//	while(a)
//	{
//		if(a%10==1)
//		{
//			count++;
//		}
//		a=a/10;
//	}
//	return count;
//}
//int main()
//{
//	int a;
//	int count;
//	scanf("%d",&a);
//	count=count_decimal_one(a);
//	printf("count=%d\n",count);
//	return 0;
//}


//ͳ�ƶ�������(����)1�ĸ���
//int count_binary_one(unsigned int a)
//{
//	int count=0;
//	while(a)
//	{
//		if(a%2==1)
//		{
//			count++;
//		}
//		a=a/2;
//	}
//	return count;
//}
//int main()
//{
//	int a;
//	int count;
//	scanf("%d",&a);
//	count=count_binary_one(a);
//	printf("count=%d\n",count);
//	return 0;
//}

//�Ż�
//int count_binary_one(int a)
//{
//	int count=0;
//	int i=0;
//	for(i=0;i<32;i++)
//	{
//		if(((a>>i)&1)==1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a;
//	int count;
//	scanf("%d",&a);
//	count=count_binary_one(a);
//	printf("count=%d\n",count);
//	return 0;
//}
//���Ӹ�Ч
//int count_binary_one(int a)
//{
//	int count=0;
//	while(a)
//	{
//		a=a&(a-1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a;
//	int count;
//	scanf("%d",&a);
//	count=count_binary_one(a);
//	printf("count=%d\n",count);
//	return 0;
//}

//�����������������в�ͬλ�ĸ���
//ʹ�����ͬ0��1��������
//���ֵ�ж��ٸ�1���м�����ͬλ
//int get_differ_binary(int m,int n)
//{
//	int ret;
//	ret=m^n;
//	count_binary_one(ret);
//	return  ret;
//}
//int main()
//{
//	int m;
//	int n;
//	int count;
//	scanf("%d%d",&m,&n);
//	count=get_differ_binary(m,n);
//	printf("count=%d\n",count);
//	return 0;
//}

//�ֱ��ӡ�������Ƶ�������ż��λ
//void print(int m)
//{
//	int i;
//	int ret;
//	printf("����λ��");
//	for(i=30;i>=0;i-=2)
//	{
//		printf("%d ",(m>>i)&1);
//	}
//	printf("\n");
//	printf("ż��λ��");
//	for(i=31;i>0;i-=2)
//	{
//		printf("%d ",(m>>i)&1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m=0;
//	scanf("%d",&m);
//	print(m);
//	return 0;
//}

//�ַ������򣨵ݹ�ʵ�֣�
//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//int my_strlen(char*arr)
//{
//	int count=0;
//	while(*arr!='\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//void reverse_string(char *arr)
//{
//	int left=0;
//	int right=my_strlen(arr)-1;
//	int tmp;
//	while(left<=right)
//	{
//		tmp=arr[left];
//		arr[left]=arr[right];
//		arr[right]=tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int sz;
//	char arr[]={"abcdef"};
//	reverse_string(arr);
//	printf("%s\n",arr);
//	return 0;
//}

//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//int DigitSum(int n)
//{
//	if(n>9)
//		return DigitSum(n/10)+n%10;
//	else
//		return n;
//}
//int main()
//{
//	int n;
//	int sum;
//	scanf("%d",&n);
//	sum=DigitSum(n);
//	printf("%d\n",sum);
//	return 0;
//}

//int main()
//{
//	int X,Y;
//	char acX[]={"abcdefg"};
//	char acY[]={'a','b','c','d','e','f','g'};
//	X=strlen(acX);
//	Y=strlen(acY);
//	printf("%d\n",X);
//	printf("%d\n",Y);
//	return 0;
//}

//1.ʵ�ֺ���init() ��ʼ������Ϊȫ0
//2.ʵ��print()  ��ӡ�����ÿ��Ԫ��
//3.ʵ��reverse()  �����������Ԫ�ص�����
//reverse-�ߵ�;��ת������
//void Init(int arr[],int sz)
//{
//	int i;
//	for(i=0;i<sz;i++)
//	{
//		arr[i]=0;
//	}
//}
//void Print(int arr[],int sz)
//{
//	int i;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[],int sz)
//{
//	int left=0;
//	int right=sz-1;
//	while(left<=right)
//	{
//		int tmp;
//		tmp=arr[left];
//		arr[left]=arr[right];
//		arr[right]=tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int i;
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	//Init(arr,sz);
//	Print(arr,sz);
//	Reverse(arr,sz);
//	Print(arr,sz);
//	return 0;
//}

//��������
//������A�е����ݺ�����B�е����ݽ��н�����������һ����
//int main()
//{
//	int i;
//	int arr1[5]={1,3,5,7,9};
//	int arr2[5]={2,4,6,8,10};
//	int sz=sizeof(arr1)/sizeof(arr1[0]);
//	for(i=0;i<sz;i++)
//	{
//		int tmp;
//		tmp=arr1[i];
//		arr1[i]=arr2[i];
//		arr2[i]=tmp;
//	}
//	for(i=0;i<5;i++)
//	{
//		printf("%d ",arr1[i]);
//	}
//	printf("\n");
//	for(i=0;i<5;i++)
//	{
//		printf("%d ",arr2[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5};//һ��Ԫ��4���ֽ�
//	short *p = (short*)arr;//ǿ������ת�� short����2���ֽ�
//	int i = 0;
//	for(i=0; i<4; i++)
//	{
//		*(p+i) = 0;//ѭ��һ�������ֽ� ѭ��4�� ��8���ֽ�  
//	}
//	for(i=0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;//�ڴ��еķŷ���44 33 22 11(4���ֽ�)
//    char *pc = (char*)&a;
//    *pc = 0;//�ڴ���44��00
//    printf("%x\n", a);
//    return 0;
//}

//������λ��
//int count(int n)
//{
//	int count=0;
//	while(n)
//	{
//		n=n/10;
//		count++;	
//	}
//	return count;
//}
//int main()
//{
//	int n,ret;
//	scanf("%d",&n);
//	ret=count(n);
//	printf("%d\n",ret);
//}

//�ݹ��ӡ��һ������ÿһλ
//void print(int n)
//{
//	if(n>9)
//	{
//		print(n/10);
//	}
//	printf("%d ", n%10);
//}
//int main()
//{
//	int num;
//	scanf("%d",&num);
//	print(num);
//	return 0;
//}

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
//���磺2+22+222+2222+22222
//int main()
//{
//	int a;
//	int i;
//	int sum=0;
//	int ret=2;
//	scanf("%d",&a);
//	for(i=0;i<5;i++)
//	{
//		sum+=ret;
//		ret=10*ret+a;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//��ӡˮ�ɻ���
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1^3��5^3��3^3����153��һ����ˮ�ɻ�������
//int count(int n)
//{
//	int count=0;
//	while(n)
//	{
//		n=n/10;
//		count++;	
//	}
//	return count;
//}
//int IfDaffodil(int n,int ret)
//{
//	int sum=0;
//	int tmp=n;
//	while(n)
//	{
//		int i;
//		i=pow(n%10,ret);
//		n=n/10;
//		sum+=i;
//	}
//	if(sum==tmp)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int ret,rett;
//	int n=0;
//	for(n=152;n<100000;n++)
//	{
//		ret=count(n);
//		rett=IfDaffodil(n,ret);
//		if(rett==1)
//			printf("%d\n",n);
//	}
//	return 0;
//}
