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

//1.实现函数init() 初始化数组为全0
//2.实现print()  打印数组的每个元素
//3.实现reverse()  函数完成数组元素的逆置
//reverse-颠倒;反转；交换
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

//交换数组
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
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
//	int arr[] = {1,2,3,4,5};//一个元素4个字节
//	short *p = (short*)arr;//强制类型转换 short型是2个字节
//	int i = 0;
//	for(i=0; i<4; i++)
//	{
//		*(p+i) = 0;//循环一次两个字节 循环4次 共8个字节  
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
//	int a = 0x11223344;//内存中的放法：44 33 22 11(4个字节)
//    char *pc = (char*)&a;
//    *pc = 0;//内存中44→00
//    printf("%x\n", a);
//    return 0;
//}