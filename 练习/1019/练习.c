//���n��
//#include<stdio.h>
//int main()
//{
//	int n=0;
//	int i=0;
//	int s=1;
//	printf("������n��\n");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		s=s*i;
//	}
//	printf("n!=%d\n",s);
//	return 0;
//}

//���1��+2��+3!
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	int r=1;
//	int sum=0;
//	for(i=1;i<=3;i++)
//	{
//		r=r*i;
//		sum=sum+r;
//	}
//	printf("sum=%d\n",sum);
//	return 0;
//
//}

//���������е�Ԫ��(�۰�����㷨)
//#include<stdio.h>
//int main()
//{
//	int arr[]={1,2,3,4,5,9,10,13,14,18};
//	int n=sizeof(arr)/sizeof(arr[0]);
//	int k=9;
//	int left=0;
//	int right=n-1;
//	while(left<=right)
//	{
//		int middle=(left+right)/2;
//		if(arr[middle]>k)
//		{
//		right=middle-1;
//		}
//		else if(arr[middle]<k)
//		{
//		left=middle+1;
//		}
//		else
//		{
//			printf("�ҵ��� �±��ǣ�%d\n",middle);
//			break;
//		}
//	}
//	if(left>right)
//		printf("�Ҳ�����\n");
//	
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[]="welcome to GeTanShi";
//	char arr2[]="#######!!!!!!!!!!!!";
//	int left=0;
//	int right=strlen(arr1)-1;
//	while(left<=right)
//	{
//		arr2[left]=arr1[left];
//		arr2[right]=arr1[right];
//		printf("%s\n",arr2);
//		Sleep(250);//1s=1000ms
//		left++;
//		right--;
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i=0;
//	char password[20]={0};
//	for(i=1;i<=3;i++)
//	{
//		printf("���������룺");
//		scanf("%s",password);//�����������飬����Ҫȡ��ַ���ţ�����������ָ��ľ������������׵�ַ
//		if(strcmp(password,"123456")==0)
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if(i>3)
//	{
//		printf("�������\n");
//	}
//	return 0;
//}

//��ӡ��1000-2000�����겢���㹲�ж��ٸ�����
//  ��
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	int count=0;
//	for(i=1000;i<=2000;i++)
//	{
//		if(i%4==0&&i%100!=0)
//		{
//			printf(" %d",i);
//			count++;
//		}
//		else if(i%400==0)
//		{
//			printf(" %d",i);
//			count++;
//		}
//	}
//	printf("\n%d\n",count);
//	return 0;
//}
//��
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	int count=0;
//	for(i=1000;i<=2000;i++)
//	{
//		if(((i%4==0)&&(i%100!=0))||(i%400==0))
//		{
//			printf("%d\n",i);
//			count++;
//		}
//	}
//	printf("\n%d\n",count);
//	return 0;
//}

//��ӡ100-200����������Գ�����
//������ֻ��1���䱾�����������
//�Գ�������2��i-1֮�����ȥ����
//��
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	int count=0;
//	for(i=100;i<=200;i++)
//	{
//		int j=0;
//		for(j=2;j<i;j++)
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//		}
//		if(j==i)
//		{
//			printf("%d\n",i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n",count);
//	return 0;
//
//}
//��ʹ����ѧ�⺯��sqrt��ƽ������
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i=0;
//	int count=0;
//	for(i=100;i<=200;i++)
//	{
//		int j=0;
//		for(j=2;j<=sqrt(i);j++)
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//		}
//		if(j>sqrt(i))
//		{
//			printf("%d\n",i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n",count);
//	return 0;
//}

//�����������������Լ����շת�������
//#include<stdio.h>
//int main()
//{
//	int x=0;
//	int y=0;
//	printf("����x,y:");
//	scanf("%d%d",&x,&y);
//	while((x%y)!=0)
//	{
//		int i=x%y;
//		x=y;
//		y=i;
//	}
//	printf("���Լ����%d\n",y);
//	return 0;
//}

//��ӡ1-100��3�ı���
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	for(i=1;i<=100;i++)
//	{
//		if(i%3==0)
//			printf("3�ı���:%d\n",i);
//	}
//	return 0;
//}


//�۸����
//#include<stdio.h>
//int main()
//{
//	int p=0;
//	printf("������۸�:");
//	scanf("%d",&p);
//	if(p<=100)
//	{
//		int i=p*0.9;
//		printf("���ѣ�%d\n",i);
//	}
//	else
//	{
//		int j=90+(p-100)*0.8;
//		printf("���ѣ�%d\n",j);
//	
//	}
//	return 0;
//}

//��a��b��c���մ�С��������
//#include<stdio.h>
//int main()
//{
//	int a,b,c,t;
//	printf("����:");
//	scanf("%d%d%d",&a,&b,&c);
//	if(a>b)
//	{
//		t=a;a=b;b=t;
//	}
//	if(a>c)
//	{
//		t=a;a=c;c=t;
//	}
//	if(b>c)
//	{
//		t=b;b=c;c=t;
//	}
//	printf("%d,%d,%d\n",a,b,c);
//	return 0;
//}

//����ֶκ�����ֵ
//#include<stdio.h>
//int main()
//{
//	int x,y;
//	printf("����x��");
//	scanf("%d",&x);
//	if(x<1)
//	{
//		y=x;
//		printf("����ֵ��%d\n",y);
//	
//	}
//	if(x>=1&&x<10)
//	{
//		y=2*x-1;
//		printf("����ֵ��%d\n",y);
//	}
//	return 0;
//}

//����������x��������Ϊ999ʱ���������������ݵĺ�s
//#include<stdio.h>
//int main()
//{
//	int x=0;
//	int s=0;
//	scanf("%d",&x);
//	while(x!=999)
//	{
//	s=x+s;
//	scanf("%d",&x);
//	}
//	printf("s=%d\n",s);
//	return 0;
//}

//��1+3+5+.....+n,ֱ��sum>=1000
//#include<stdio.h>
//int main()
//{
//	int sum=0;
//	int i=1;
//	while(sum<1000)
//	{
//		sum=sum+i;
//		i+=2;
//	}
//	printf("n=%d,sum=%d\n",i-2,sum);
//	return 0;
//}


//���һ����10��*��ɵ�һ���ַ�
//#include<stdio.h>
//int main()
//{
//	int i=1;
//	while(i<=10)
//	{
//	printf("*");
//	i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i=1;
//	for(i=1;i<=10;i++)
//	{
//		printf("*");
//	}
//	return 0;
//
//}

//��д������һ��1-100�ڵ����ֹ����ֶ��ٸ�9(��λΪ9 ʮλΪ9)
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	int count=0;
//	for(i=1;i<=100;i++)
//	{
//		if(i%10==9)
//		{
//			count++;
//		}
//		if(i/10==9)
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n",count);
//	return 0;
//}


//����1/1-1/2+1/3-1/4+...+1/99-1/100��ֵ
//��
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	double sum=0.0;
//	int flag=1;
//	for(i=1;i<=100;i++)
//	{
//		sum=sum+flag*(1.0/i);
//		flag=-flag;
//	
//	}
//	printf("sum=%lf\n",sum);
//	return 0;
//}
//��
//#include<stdio.h>
//int main()
//{
//	int i=1;
//	int j=2;
//	double sum1=0;
//	double sum2=0;
//	for(i=1;i<100;i+=2)
//	{
//		sum1=1.0/i+sum1;
//	}
//	for(j=2;j<=100;j+=2)
//	{
//		sum2=sum2+1.0/j;
//	}
//	printf("%lf\n",sum1-sum2);
//	return 0;
//
//}

//���10������������
//#include<stdio.h>
//int main()
//{
//	int arr[]={-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
//	int s=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	int max=arr[0];//�������ڵ�����һ������max �ٽ�max���������������Ƚϴ�С
//	for(i=0;i<s;i++)
//	{
//		if(arr[i]>max)
//		{
//			max=arr[i];
//		}
//	}
//	printf("max=%d\n",max);
//	return 0;
//}

//���һ���˷��ھ���:
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//4*1=4 4*2=8 4*3=12 4*4=16
//#include<stdio.h>
//int main()
//{
//	int i=0;//i�������� ����9��
//	for(i=1;i<=9;i++)
//	{
//		int j=0;//j�������� �����1����1�� ��2����2�� ��3����3��......
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);
//		
//		}
//		printf("\n");
//	}
//	return 0;
//}

//�ŵ����⣺�������⣨C���Գ������P97��
//#include<stdio.h>
//int main()
//{
//	int s;
//	int a=1;
//	int b=1;
//	int i=2;
//	do
//	{
//		s=a+b;
//		a=b;
//		b=s;
//		i++;
//	}
//	while(s<=500);
//	printf("��%d����\n",i);
//	return 0;
//}

//��������Ϸ
#include<stdio.h>
#include <stdlib.h>//����rand��ͷ�ļ�
#include<time.h>
void menu()
{
	printf("*************************\n");
	printf("***   1.play 0.exit  *** \n");
	printf("*************************\n");
}
void game()//1.���������������rand������ 2.������
{
	int guess=0;
	int s=rand()%100+1;//%100��Ŀ�ģ�ʹ���ɵ����ֵ����0-99֮�䣨�������0-32767֮�䣩 ��+1��1-100
	//printf("%d\n",s);
	while(1)
	{
		scanf("%d",&guess);//���Ҫ����whileѭ����
		if(guess>s)
		{
			printf("�´��ˣ�\n");
		}
		else if(guess<s)
		{
			printf("��С�ˣ�\n");
		}
		else
		{
			printf("�¶��ˣ�\n");
			break;//break����Ҫ��������
		}
	}
}
int main()
{
	int input=0;
	srand( (unsigned)time( NULL ) );
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;//break����Ҫ������
		case 0:
			printf("�˳���Ϸ\n");
			break;//break����Ҫ������
		default:
			printf("ѡ�����\n");
			break;//break����Ҫ������
		}
	}while(input);
	return 0;
}

//#include<stdio.h>
//int main()
//{
//	int i=0;
//	for(i=1;i<=4;i++)
//	{
//		int j=0;
//		int k=0;
//		for(j=1;j<=4-i;j++)
//		{
//			printf(" ");
//		}
//		for(k=1;k<=2*i-1;k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int count=1;
//	double sum=2;
//	double s=0;
//	double i=1;
//	double j=2;
//	int flag=-1;
//	do
//	{
//		s=i+j;
//		i=j;
//		j=s;
//		sum=sum+(j/i)*flag;
//		flag=-flag;
//		count++;
//
//	}
//	while(count<20);
//	printf("sum=%lf\n",sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int max;
//	int i;
//	int arr[5];
//	for(i=0;i<5;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	//�����е�Ԫ��Ҫһ��һ�����뵽����� ������һ��ѭ�����
//	max=arr[0];
//	for(i=1;i<5;i++)
//	{
//		if(max<arr[i])
//		{
//			max=arr[i];
//		}
//	
//	}
//	printf("max=%d\n",max);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int count=0;
//	double i=1;
//	double j=2;
//	double s;
//	double sum=0;
//	do
//	{
//		sum=sum+j/i;
//		s=i+j;
//		i=j;
//		j=s;
//		count++;
//	}
//	while(count<20);
//	printf("sum=%.2lf\n",sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i=1;
//	int sum=1;
//	int count=1;
//	int flag=-1;
//	while(count<6)
//	{
//		i=i*3;
//		sum=sum+i*flag;
//		flag=-flag;
//		count++;
//	}
//	printf("sum=%d\n",sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int j=1;//9��
//	int i=1;
//	for(j=1;j<=9;j++)
//	{
//		for(i=1;i<=j;i++)
//		{
//			int ji=j*i;
//			printf("%d*%d=%-2d ",j,i,ji);
//		}
//		printf("\n");
//	
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i=1;
//	double e=1.0;
//	double item=1.0;
//	while(item<=1000000)
//	{
//		item=item*i;
//		e=e+1/item;
//		i++;
//	}
//	printf("%f\n",e);
//		return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int xs[6];
//	int i,j,k;
//	printf("�������ϰ�����������ݣ�\n");
//	for(i=0;i<6;i++)
//	{
//		scanf("%d",&xs[i]);
//	}
//	for(i=0;i<5;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			if(xs[j]>xs[j+1])
//			{
//				k=xs[j+1];
//				xs[j+1]=xs[j];
//				xs[j]=k;
//			}
//		}
//	}
//	printf("���������ݣ�\n");
//	for(i=0;i<6;i++)
//	{
//		printf("%d ",xs[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i,j,k;
//	int number;
//	int left=0;
//	int right=6;
//	int middle;
//	int a[]={12,45,67,89,123,-45,67};
//	for(i=0;i<7;i++)
//	{
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	for(i=0;i<6;i++)
//	{
//		for(j=0;j<6;j++)
//		{
//			if(a[j]>a[j+1])
//			{
//				k=a[j+1];
//				a[j+1]=a[j];
//				a[j]=k;
//			}
//		}
//	}
//	printf("���������ݣ�\n");
//	for(i=0;i<7;i++)
//	{
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	printf("������Ҫ���ҵ�����");
//	scanf("%d",&number);
//	while(left<=right)
//	{
//
//		int middle=(left+right)/2;
//		if(number>a[middle])
//		{
//			left=middle+1;
//		}
//		else if(number<a[middle])
//		{
//			right=middle-1;
//		}
//		else
//		{
//			printf("�ҵ���");
//			break;
//		}
//	}
//	if(left>right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
	//int i=0;
	//char c[6];
	//char a[5]={'h','e','l','l','o'};
	//char b[6]={'h','e','l','l','o','\0'};
	//scanf("%s",c);
	//for(i=0;i<5;i++)
	//{
	//	scanf("%c",&c[i]);
	//	c[5]='\0';
	//}
	//for(i=0;i<5;i++)
	//{
	//	printf("%c\n",a[i]);
	//}
	//printf("%s\n",c);
	//printf("%s\n",a);
	//printf("%s\n",b);
//	char d[20];
//	printf("�����룺");
//	gets(d);
//	printf("�����");
//	puts(d);
//
//}

//#include<stdio.h>
//int main()
//{
//	char a[5][6]={"  *"," ***","*****"," ***","  *"};
//	int i=0;
//	for(i=0;i<5;i++)
//	{
//		printf("%s\n",a[i]);
//	}
//	printf("\n");
//	return 0;
//}
