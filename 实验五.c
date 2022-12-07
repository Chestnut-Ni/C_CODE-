//用选择法对10个整数排序
//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	int i,j,tmp;
//	printf("输入10个数：\n"); 
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for(i=0;i<10;i++)
//	{
//		for(j=i;j<10;j++)
//		{
//			if(arr[i]>arr[j]) 
//			{
//				tmp=arr[i];
//				arr[i]=arr[j];
//				arr[j]=tmp;
//			}
//		}
//	}
//	printf("升序：");
//	for(i=0;i<10;i++)
//		printf("%d ",arr[i]);
//	return 0;
// } 

//有15个数存放在一个数组中，输入一个数，要求用折半查找法找出该数是数组中第几个元素的值。
//如果该数不在数组中，则输出“无此数”。15个数用赋初值的方法在程序中给出。要找的数用scanf函数输入。
//#include<stdio.h>
//int search(int*a,int n,int len)
//{
//	int left=0;
//	int right=len-1;
//	while(left<=right)
//	{
//		int middle=(left+right)/2;
//		if(a[middle]>n)
//			left=middle+1;
//		else
//			if(a[middle]<n)
//			right=middle-1;
//		else
//			return middle;
//	}
//	return -1;
//}
//int main()
//{
//	int ret,n;
//	int a[15] = {2,4,6,8,10,12,14,16,18,20,22,24,26,28,30};
//	int len=sizeof(a)/sizeof(a[0]);
//	printf("请输入要查找的数n：");
//	scanf("%d", &n);
//	ret=search(a,n,len);
//	if(ret==-1)
//		printf("无此数\n");
//	return 0;
//}

//将两个字符串连接起来，不要用strcat函数
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int m=0;
//	int k=0;
//	char a1[1000]="hello";
//	char a2[]="world";
//	int i=strlen(a1)-1;
//	int j=strlen(a2)-1;
//	while(a2[m]!='\0')
//	{
//		a1[i+1+k]=a2[m];
//		k++;
//		m++;
//	}
//	printf("%s",a1);
//	return 0;
//}

//找出一个二维数组的“鞍点”，即该位置上的话元素在该行上最大，在该列上最小。也可能没有鞍点。
//#include<stdio.h>
//int main()
//{
//	//int max=0;
//	int i=0,j=0,k=0;
//	int tmp;
//	int flag=0;
//	int arr[3][4]={{9,80,205,40},{90,-60,96,1},{210,-3,101,89}};
//	for(i=0;i<3;i++)
//	{
//		int max=0;
//		for(j=0;j<4;j++)
//		{
//			if(arr[i][j]>max)
//			{
//				max=arr[i][j];
//				tmp=j;
//			}
//		}
//		for(k=0;k<3;k++)
//		{
//			if(max>arr[k][tmp])
//			{
//				break;
//			}
//		}
//		if(k==3)
//		{
//			printf("鞍点在%d行%d列值为%d\n",i,tmp,arr[i][tmp]);
//			flag=1;
//			break;
//		}
//	}
//	if(flag!=1)
//	{
//		printf("无鞍点\n");
//	}
//	return 0;
//}