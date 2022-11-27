//判断素数
//#include<stdio.h>
//int is_prime(int n)
//{
//	int j=2;
//	for(j=2;j<n;j++)
//	{
//		if(n%j==0)
//			return  0;
//	}
//	return 1;
//}
//int main()
//{
//	int i=1;
//	int ret;
//	for(i=2;i<1000;i++)
//	{
//		ret=is_prime(i);
//		if(ret==1)
//			printf("%d\n",i);
//	}
//	return 0;
//}

//#include<stdio.h>
//int binary_search(int* arr,int sz,int k)
//{
//	int left=0;
//	int right=sz-1;
//	while(left<=right)
//	{
//		int middle=(left+right)/2;
//		if(k>arr[middle])
//			left=middle+1;
//		else if(k<arr[middle])
//			right=middle-1;
//		else
//			return middle;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5};
//	int k=5;//要查找的数字
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int ret=binary_search(arr,sz,k);
//	if(ret==-1)
//		printf("找不到");
//	else
//		printf("下标是：%d\n",ret);
//	return 0;
//}

#include<stdio.h>
int my_strlen(char* arr)
{
	if(*arr!='\0')
	{
		return 1+my_strlen(arr+1);
	}
	else
		return 0;
}
int main()
{
	char arr[]="bit";
	int len=my_strlen(arr);
	printf("%d\n",len);
	return 0;
}
