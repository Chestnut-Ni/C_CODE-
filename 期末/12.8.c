#include<stdio.h>
#include<string.h>
//����n�����������ֵ���ֵ�λ�ã�������ֶ�������һ�γ��ֵ�λ�ã�
//int station(int s[],int n)
//{
//	int i;
//	int j=0;
//	for(i=0;i<n;i++)
//	{
//		if(s[i]>s[j])
//			j=i;
//	}
//	return (j+1);
//}
//int main()
//{
//	int a[100],n,i,t;
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	t=station(a,n);
//	printf("the max_value position is:%d\n",t);
//	return 0;
//}

//��д����fun���������ƶ�һά�����е����ݣ�Ҫ��
//���±��0��p����p��p<=n-1��������Ԫ��ƽ�Ƶ���������
//void fun(int *arr,int p)
//{
//	int x,j,ch;
//	for(x=0;x<=p;x++)
//	{
//		ch=arr[0];
//		for(j=1;j<10;j++)
//		{
//			arr[j-1]=arr[j];
//		}
//		arr[9]=ch;
//	}
//}
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int p;
//	int i;
//	scanf("%d",&p);
//	fun(arr,p);
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int x=3,y=6,z;
//	z=x^y<<2;//z=11011->27
//	printf("%d\n",z);//���ȼ��ɸߵ��͵�˳������Ϊ ��λȡ��(~)>����>��λ��>��λ���(^)> ��λ��
//}

//int main()
//{
//	char a='\x66';//'\x66������16���Ƶ�66��������ַ�(f)->102
//	int b=\x66;//����д�ǷǷ���
//	int b=0x66;//�Ϸ�
//	printf("%d\n",a);
//	return 0;
//}

//int main()
//{
//	int i=0;
//	for(i=0;i<1;i++)
//		printf("%d",i);
//	for(i=0;i<0;i++)
//		printf("%d",i);
//	return 0;
//}

//int main()
//{
//	printf("%d\n",strlen("\t\"\065\xff\n"));//�Ϸ�
//	printf("%d\n",strlen("\t"\065\xff\n")); //���Ϸ�
//	return 0;
//}

//int main()
//{
//	int a[2][3];
//	int *p[3];
//	p[1]=&a;
//	p=a;
//	p[0]=a;
//	p[0]=&a[1][2];//�Ϸ�
//}

//int main()
//{
//	printf("%x",(~0x13));
//	return 0;
//}