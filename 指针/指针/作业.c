#include<stdio.h>

//ʹ��ָ���ӡ��������
void print(int*p,int sz)
{
	int i;
	for(i=0;i<sz;i++)
	{
		printf("%d ",*(p+i));
	}
}
int main()
{
	int arr[]={1,2,3,4,5};
	int sz=sizeof(arr)/sizeof(arr[0]);
	print(arr,sz);
	return 0;
}