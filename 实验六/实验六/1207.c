//#include<stdio.h>
//int my_strlen(char *a)
//{
//	int count=0;
//	while(*a!='\0')
//	{
//		count++;
//		*a++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len;
//	char ch[20];
//	printf("input a string：");
//	scanf("%s",ch);
//	len=my_strlen(ch);
//	printf("长度为：%d\n",len);
//	return 0;
//}

//#include<stdio.h>
//void invert(int *arr)
//{
//	int tmp=0;
//	int left=0;
//	int right=9;
//	while(left<=right)
//	{
//		tmp=arr[left];
//		arr[left]=arr[right];
//		arr[right]=tmp;
//		left++;
//		right--;;
//	}
//}
//int main()
//{
//	int arr[10];
//	int i=0;
//	printf("请输入10个数：");
//	for(i=0;i<10;i++)
//		scanf("%d",&arr[i]);
//	printf("before:\n");
//	for(i=0;i<10;i++)
//		printf("%d ",arr[i]);
//	invert(arr);
//	printf("\n");
//	printf("after:\n");
//	for(i=0;i<10;i++)
//		printf("%d ",arr[i]);
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//int add(int a,int b)
//{
//	return a+b;
//}
//int sub(int a,int b)
//{
//	if(a>b)
//		return a-b;
//	else
//		return b-a;
//}
//int mul(int a,int b)
//{
//	return a*b;
//}
//int process(int a,int b)
//{
//	add(a,b);
//	sub(a,b);
//	mul(a,b);
//}
//int main()
//{
//	int a,b;
//	printf("输入两个数a b：");
//	scanf("%d%d",&a,&b);
//	process(a,b);
//	return 0;
//}