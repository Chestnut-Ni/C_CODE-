#include<stdio.h>
#include<string.h>
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