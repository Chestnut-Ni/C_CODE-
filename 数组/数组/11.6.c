//#include<stdio.h>
//int main()
//{
//	int arr[]={1,2,3,4,5};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	printf("%d\n",sizeof(arr));//������ռ�ռ��С
//	printf("%d\n",sz);//Ԫ�ظ���
//	for(i=0;i<sz;i++)
//	{
//		printf("&arr[%d]=%p\n",i,&arr[i]);
//	}
//	return 0;
//}

//һά�������ڴ��еĴ洢
//#include<stdio.h>
//int main()
//{
//	int arr[]={1,2,3,4,5};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("&arr[%d]=%p\n",i,&arr[i]);
//	}
//	return 0;
//} 

//��ά����
//#include<stdio.h>
//int main()
//{
//	int arr[][4]={{1,2,3,4},{5,6,7,8}};
//	//��ά����Ĵ�ӡ
//	int i,j;
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��ά����Ĵ洢
//#include<stdio.h>
//int main()
//{
//	int arr[3][4]={{1,2,3,4},{5,6,7,8}};
//	int i,j;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//			printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
//		}
//	}
//	return 0;
//}

//ð�����򷨣���Ч�棩
//#include<stdio.h>
//void bubble_sort(int sz,int *arr)
//{	int i,j,tmp;
//    //ȷ��ð�����������
//	for(i=0;i<sz-1;i++)
//	{
//		//ÿһ��ð������
//		for(j=0;j<sz-1-i;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				tmp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int i=0;
//	int arr[]={10,9,8,7,6,5,4,3,2,1};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(sz,arr);
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//ð�����򷨣���Ч�棩
//#include<stdio.h>
//void bubble_sort(int sz,int arr[])
//{	int i,j,tmp;
//	for(i=0;i<sz-1;i++)
//	{
//		int flag=1;
//		for(j=0;j<sz-1-i;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				tmp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=tmp;
//				flag=0;
//			}
//		}
//		if(flag==1)
//		{
//			break;//����i��forѭ��
//		}
//	}
//}
//int main()
//{
//	int i=0;
//	int arr[]={10,9,8,7,6,5,4,3,2,1};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(sz,arr);
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//������������Ԫ�صĵ�ַ
//#include<stdio.h>
//int main()
//{
//	int arr[]={1,2,3,4};
//	printf("%p\n",arr);
//	printf("%p\n",&arr[0]);
//	printf("%d\n",*arr);
//	printf("%d\n",sizeof(arr));
//	printf("%p\n",&arr);
//	return 0;
//}

//����������
//#include<stdio.h>
//int main()
//{
//	int i,j;
//	int yhsj[10][10];
//	for(i=0;i<10;i++)
//	{
//		yhsj[i][i]=1;
//		yhsj[i][0]=1;
//	}
//	for(i=2;i<10;i++)
//	{
//		for(j=1;j<i;j++)
//		{
//			yhsj[i][j]=yhsj[i-1][j-1]+yhsj[i-1][j];
//		}
//	}
//	for(i=0;i<10;i++)
//	{
//		for(j=0;j<=i;j++)
//		{
//			printf("%-5d",yhsj[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a[5]={1,0,1,1,0};
//	int i;
//	for(i=2;i<5;i++)
//	{
//		a[i]+=a[i-1]+a[i-2];
//	}
//	for(i=0;i<5;i++)
//	{
//		printf("%d",a[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int p[7]={11,13,14,15,16,17,18};
//	int i=0;
//	int k=0;
//	while(i<7&&p[i]%2)
//	{
//		k=k+p[i];
//		i++;
//	}
//	printf("k=%d\n",k);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a[3][3]={1,3,5,7,9,2,4,6,8};
//	int sum=0,i,j;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			a[i][j]=i+j;
//			if(i==j)
//			{
//				sum=sum+a[i][j];
//			}
//		}
//	}
//		printf("%d",sum);
//}

//#include<stdio.h>
//int main()
//{
//	char ch[3][5]={"AA","BB","BB"};
//	printf("\"%s\"\n",ch[5-3]);
//}

#include<stdio.h>
void bubble_sort(int arr[])
{
	int i,j,tmp;
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			if(arr[j]>arr[j+1])
			{
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
}
int main()
{
	int S[8],Y[8],A[8];
	int i,j,tmp,h,l;
	int high=0,low=100;
	int sum_s=0,sum_y=0;
	printf("��ţ�1  2  3  4  5  6  7  8\n");
	printf("��ѧ��");
	for(i=0;i<8;i++)
	{
		scanf("%d",&S[i]);
	}
	printf("Ӣ�");
	for(j=0;j<8;j++)
	{
		scanf("%d",&Y[j]);
	}
	for(i=0;i<8;i++)
	{
		sum_s+=S[i];
	}
	for(j=0;j<8;j++)
	{
		sum_y+=Y[j];
	}
	printf("��ѧƽ���֣�%d\n",sum_s/8);
	printf("Ӣ��ƽ���֣�%d\n",sum_y/8);
	for(i=0;i<8;i++)
	{
		A[i]=(S[i]+Y[i])/2;	
	}
	for(i=0;i<8;i++)
	{
		if(A[i]>high)
		{
			high=A[i];
			h=i+1;
		}
	}
	printf("��ѧ��Ӣ��ƽ������ߵ�ѧ����%d��\n",h);
	for(i=0;i<8;i++)
	{
		if(A[i]<low)
		{
			low=A[i];
			l=i+1;
		}
	}
	printf("��ѧ��Ӣ��ƽ������͵�ѧ����%d��\n",l);
	bubble_sort(S);
	printf("��ѧ��߷֣�%d\n",S[7]);
	bubble_sort(Y);
	printf("Ӣ����߷֣�%d\n",Y[7]);
	return 0;
}


//#include<stdio.h>
//int main()
//{
//	int S[8],Y[8],A[8];
//	int i,j,tmp,h,l;
//	int high=0,low=100;
//	int sum_s=0,sum_y=0;
	//printf("��ţ�1  2  3  4  5  6  7  8\n");
	//printf("��ѧ��");
//	for(i=0;i<8;i++)
//	{
//		scanf("%d",&S[i]);
//	}
	//printf("Ӣ�");
//	for(j=0;j<8;j++)
//	{
//		scanf("%d",&Y[j]);
//	}
//	for(i=0;i<8;i++)
//	{
//		sum_s+=S[i];
//	}
//	for(j=0;j<8;j++)
//	{
//		sum_y+=Y[j];
//	}
//	printf("��ѧƽ���֣�%d\n",sum_s/8);
//	printf("Ӣ��ƽ���֣�%d\n",sum_y/8);
//	for(i=0;i<8;i++)
//	{
//		A[i]=(S[i]+Y[i])/2;	
//	}
//	for(i=0;i<8;i++)
//	{
//		if(A[i]>high)
//		{
//			high=A[i];
//			h=i+1;
//		}
//	}
//	printf("��ѧ��Ӣ��ƽ������ߵ�ѧ����%d��\n",h);
//	for(i=0;i<8;i++)
//	{
//		if(A[i]<low)
//		{
//			low=A[i];
//			l=i+1;
//		}
//	}
//	printf("��ѧ��Ӣ��ƽ������͵�ѧ����%d��\n",l);
//	for(i=0;i<7;i++)
//	{
//		for(j=0;j<7;j++)
//		{
//			if(S[j]>S[j+1])
//			{
//				tmp=S[j];
//				S[j]=S[j+1];
//				S[j+1]=tmp;
//			}
//		}
//	}
//	printf("��ѧ��߷֣�%d\n",S[7]);
//	for(i=0;i<7;i++)
//	{
//		for(j=0;j<7;j++)
//		{
//			if(Y[j]>Y[j+1])
//			{
//				tmp=Y[j];
//				Y[j]=Y[j+1];
//				Y[j+1]=tmp;
//			}
//		}
//	}
//	printf("Ӣ����߷֣�%d\n",Y[7]);
//	return 0;
//}