//#include<stdio.h>
//int main()
//{
	//int b[4][6],*q[4];
	//p=b;
	//int a[5]={0,1,2,3,4,5};
	//char a[]="string";
	//char a="string";
	//int x,*p=&x;
	//printf("%p\n",p);
	//printf("%p",*&p);
	//char s[10]="abcd";
	//printf("%s\n",s);
//}

//#include<stdio.h>
//int main()
//{
//	char *str="abcab",*substr="ab";
//	int i,j,k,num=0;
//	for(i=0;i<5;i++)
//	{
//		for(j=i,k=0;substr[k]==str[j];k++,j++)
//			if(substr[k+1]=='\0')
//			{
//				num++;
//				break;
//			}
//	}
//	printf("%d\n",num);
//	return 0;
//}

//��ŵ������
//#include<stdio.h>
//void Move_(char From,char Dest)
//{
//	printf("��%c�̡�%c��\n",From,Dest);
//}
//void Hanoi_(char A,char B,char C,int n)
//{
//	if(n==1)
//	{
//		Move_(A,C);
//	}
//	else
//	{
//		Hanoi_(A,C,B,n-1);
//		Move_(A,C);
//		Hanoi_(B,A,C,n-1);
//	}
//}
//int main()
//{
//	int n;
//	char A='A';
//	char B='B';
//	char C='C';
//	printf("����������n��");
//	scanf("%d",&n);
//	Hanoi_(A,B,C,n);
//	return ;
//}

//������̨������
//#include<stdio.h>
//int frog_jump_step(int n)
//{
//	if(n==1)
//	{
//		return 1;
//	}
//	else if(n==2)
//	{
//		return 2;
//	}
//	else
//	{
//		return frog_jump_step(n-1)+frog_jump_step(n-2);
//	}
//}
//int main()
//{
//	int n,ret;
//	printf("����̨������");
//	scanf("%d",&n);
//	ret=frog_jump_step(n);
//	printf("��%d������\n",ret);
//	return 0;
//}
//
//#include<stdio.h>
//void print(int n)
//{
//	if(n>9)
//	{
//		print(n/10);
//	}
//	printf("%d ",n%10);
	//while(n)
	//{
	//	if(n<10)
	//	{
	//		printf("%d ",n);
	//		break;
	//	}
	//	else
	//	{
	//		print(n/10);
	//		printf("%d ",n%10);
	//		break;
	//	}
	//}
//}
//int main()
//{
//	int num;
//	scanf("%d",&num);
//	print(num);
//	return 0;
//}

//�ֱ��ӡ�������Ƶ�������ż��λ
//#include<stdio.h>
//void print(int m)
//{
//	int i;
//	int ret;
//	printf("����λ��");
//	for(i=30;i>=0;i-=2)
//	{
//		printf("%d ",(m>>i)&1);//һ���������õ��������&1
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

//ͳ�Ʋ�ͬ��������1���ֵĴ���
//n����ͬ�Ľ���
//#include<stdio.h>
//int count_one(unsigned int a,int n)
//{
//	int count=0;
//	while(a)
//	{
//		if(a%n==1)
//		{
//			count++;
//		}
//		a/=n;
//	}
//	return count;
//}
//int main()
//{
//	int a,n;
//	int count;
//	printf("��������ƣ�");
//	scanf("%d",&n);
//	printf("����������(ʮ����)��");
//	scanf("%d",&a);
//	count=count_one(a,n);
//	printf("ʮ��������%d�����%d���ƺ�1������%d��\n",a,n,count);
//	return 0;
//}

//�����������������в�ͬλ�ĸ���
//ʹ�ð�λ���^��ͬ0��1��������
//���ֵ�ж��ٸ�1���м�����ͬλ
//#include<stdio.h>
//int count_binary_one(int x)
//{
//	int count=0;
//	while(x)
//	{
//		if(x%2==1)
//			count++;
//		x/=2;
//	}
//	return count;
//}
//int get_differ_binary(int m,int n)
//{
//	int s,ret;
//	s=m^n;
//	ret=count_binary_one(s);
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