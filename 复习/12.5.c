#include <stdio.h>
#include<Windows.h>
//int main()
//{
//	 int i = 1;
//	 while(i<=10)
//	 {
//		 i= i+1;
//		 if(i == 5)
//			 continue;
//		 printf("%d ", i);
//	 }
//	 return 0;
//}//int main()
//{
//	 int i = 0;
//	 for(i=1; i<=10; i++)
//	 { 
//		 if(i == 5)
//			 break;
//		 printf("%d ",i);
//	 }
//	 return 0;//}//int main()
//{
//	 int i = 0;
//	 for(i=1; i<=10; i++)
//	 {
//		 if(i == 5)
//		 {
//			 continue;
//		 }
//		 printf("%d ",i);
//	 }
//	 return 0;//}
//int main()
//{
//	 int i = 1;
//	 while(i<=10)
//	 {
//		if(i == 5)
//			 continue;
//		printf("%d ", i);
//		i = i+1;
//	 }
//	 return 0;
//}
//int main()
//{
//	 int i = 1;
//	 while(i<=10)
//	 {
//		if(i == 5)
//			 break;
//		printf("%d ", i);
//		i = i+1;
//	 }
//	 return 0;
//}
//int main()
//{
//	 int i = 1;
//	 do
//	 {
//		i++;
//		if(5 == i)
//            break;
//		printf("%d\n", i);
//	 }while(i<10);
//	 return 0;
//}

//int main()
//{
//	 int i = 1;
//	 do
//	 {
//		i++;
//        if(5 == i)
//            continue;
//		printf("%d\n", i);
//	 }while(i<10);
//	 return 0;
//}
//int main()
//{
//    int n = 1;
//	int m = 2;
//	switch (n)
//	   {
//		case 1:
//				m++;
//		case 2:
//				n++;
//		case 3:
//				switch (n)
//			   {
//				 case 1:
//						n++;
//				 case 2:
//						m++;
//						n++;
//						break;
//			   }
//		case 4:
//				m++;
//				break;
//		default:
//				break;
//	   }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}


//void MoveNum(int arr[], int sz)
//{
//	int *left = arr;
//	int *right = arr + sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		while ((left < right) && ((*left) % 2 != 0))
//		{
//			left++;
//		}
//		//得到了奇数的位置
//		while ((left < right) && ((*right) % 2 == 0))
//		{
//			right--;
//		}
//		//得到了偶数的位置
//		if (left < right)
//		{
//			tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//		//交换奇数与偶数位置元素
//	}
//}
//int main()
//{
//	int i=0;
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	MoveNum(arr, sz);
//	for (i = 0; i < sz; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i=0;
//	int arr[10];
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for(i=0;i<10;i++)
//	{
//		if(arr[i]%2!=0)
//			printf("%d ",arr[i]);
//	}
//
//	for(i=0;i<10;i++)
//	{
//		if(arr[i]%2==0)
//			printf("%d ",arr[i]);
//	}
//	return 0;
//}

int main()
{
	int i=0;
	char st[20];
	char * ps=st;
	printf("input a string:");
	scanf("%s",st);
	for(i=0;ps[i]!='\0';i++)
	{
		if(ps[i]=='k')
		{
			printf("there is a 'k' in the string\n");
			break;
		}
	}
	if(ps[i]=='\0')
		printf("there is no k in the string\n");
	return 0;
}
