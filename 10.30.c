
//���ֳ����Ŀ⺯��
//strcpy��string copy�����ַ�������������
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	char arr1[]="Cyuyan";
//	char arr2[]="!!!!!!!!!!";
//	strcpy(arr2,arr1);
//	printf("%s\n",arr2);
//	return 0;
//}
//memset
//#include<memory.h>
//#include<stdio.h>
//int main()
//{
//	char arr[]="hello world";
//	memset(arr,'*',5);
//	printf("%s\n",arr);
//	return 0;
//}
//�Զ��庯��
//���ӣ������������Ľϴ�ֵ
//#include<stdio.h>
//int MAX(int x,int y)
//{
//	if(x>y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int x=10;
//	int y=323;
//	int max=MAX(x,y);
//	printf("max=%d\n",max);
//	return 0;
//}
//дһ�������������α������ݵĺ���
//����ʾ����
//#include<stdio.h>
//void Swap(int x,int y)
//{
//	int tmp;
//	tmp=x;
//	x=y;
//	y=tmp;
//}
//int main()
//{
//	int a=1;
//	int b=2;
//	printf("a=%d,b=%d\n",a,b);
//	Swap(a,b);
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}
////��ȷ
//#include<stdio.h>
//void Swap(int* px,int* py)//pointer
//{
//	int tmp;
//	tmp=*px;
//	*px=*py;
//	*py=tmp;
//}
//int main()
//{
//	int a=1;
//	int b=2;
//	printf("a=%d,b=%d\n",a,b);
//	Swap(&a,&b);
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}
////дһ���ж������ĺ���
//#include<stdio.h>
//int is_prime(int n)
//{
//	int j;
//	for(j=2;j<n;j++)
//	{
//		if(n%j==0)
//		{
//			return 0;
//			break;//�����break���Բ�д ��Ϊreturn 0��break��ǿ
//		}
//	}
//	//���µ�if�����Բ�д ��Ϊ�˳�forѭ��ʱjһ���ǵ���n��
//	if(j==n)
//	{
//		return 1;
//	}
//}
//is_prime�������Ż�
//int is_prime(int n)
//{
//	int j;
//	for(j=2;j<n;j++)
//	{
//		if(n%j==0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i=100;
//	for(i=100;i<=200;i++)
//	{
//		is_prime(i);
//		if(is_prime(i)==1)
//		{
//			printf("%d������\n",i);
//		}
//		if(is_prime(i)==0)
//		{
//			printf("%d��������\n",i);
//		}
//	}
//	return 0;
//}
//
////дһ���ж�����ĺ���
//#include<stdio.h>
//int is_leap_year(int y)
//{
//	if(((y%4==0)&&(y%100!=0))||(y%400==0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year;
//	for(year=1000;year<=2000;year++)
//	{
//		is_leap_year(year);
//		if(is_leap_year(year)==1)
//			printf("%d������\n",year);
//		if(is_leap_year(year)==0)
//			printf("%d��������\n",year);
//	}
//	return 0;
//}

//дһ����������������Ŀ�����ֵĺ��������ֲ����㷨��
//����ʾ����
//#include<stdio.h>
//int binary_search(int arr[],int K)
//{
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int left=0;
//	int right=sz-1;
//	while(left<=right)
//	{
//		int mid=(left+right)/2;
//		if(arr[mid]>K)
//		{
//			right=mid-1;
//		}
//		else if(arr[mid]<K)
//		{
//			left=mid+1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k=7;//�±�Ϊ6
//	int ret=binary_search(arr,k);
//	if(ret==1)
//		printf("�ҵ��ˣ��±��ǣ�%d\n",ret);
//	if(ret==-1)
//		printf("�Ҳ���\n");
//	return 0;
//}

//��ȷ��
//#include<stdio.h>
//int binary_search(int arr[],int K,int sz)
//{
//	int left=0;
//	int right=sz-1;
//	while(left<=right)
//	{
//		int mid=(left+right)/2;
//		if(arr[mid]>K)
//		{
//			right=mid-1;
//		}
//		else if(arr[mid]<K)
//		{
//			left=mid+1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k=7;//�±�Ϊ6
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int ret=binary_search(arr,k,sz);
//	if(ret==-1)
//		printf("�Ҳ���%d\n");
//	else
//		printf("�ҵ��ˣ��±��ǣ�%d\n",ret);
//
//	return 0;
//}

//дһ��������ÿ����һ������������ͻὫ num ��ֵ����1
//#include<stdio.h>
//void Add(int* num)
//{
//	(*num)++;
//}
//int main()
//{
//	int num=0;
//	Add(&num);
//	printf("num=%d\n",num);
//	Add(&num);
//	printf("num=%d\n",num);
//	Add(&num);
//	printf("num=%d\n",num);
//	Add(&num);
//	printf("num=%d\n",num);
//	Add(&num);
//	printf("num=%d\n",num);
//	Add(&num);
//	printf("num=%d\n",num);
//	return 0;
//}

//#include<stdio.h>
//int main() 
//{
//		printf("%d",printf("%d",printf("%d",43)));
//}	