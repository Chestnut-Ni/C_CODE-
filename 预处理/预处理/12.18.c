#include<stdio.h>

////Ԥ�������
//int main()
//{
//	printf("%s\n",__FILE__);//�ļ���
//	printf("%d\n",__LINE__);//�ô�����������
//	printf("%s\n",__DATE__);//����
//	printf("%s\n",__TIME__);//ʱ��
//	return 0;
//}

////д��־�ļ�
//int main()
//{
//	int i=0;
//	int arr[10]={0};
//	FILE*pf=fopen("log.txt","w");
//	for(i=0;i<10;i++)
//	{
//		arr[i]=i;
//		fprintf(pf,"file:%s line:%d date:%s time:%s i=%d\n",__FILE__,__LINE__,__DATE__,__TIME__,i);
//	}
//	fclose(pf);
//	pf=NULL;
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//#define MAX 100
//#define STR "�Ǻ�"
//#define reg register
//int main()
//{
//	reg int a;//register int a;
//	int max=MAX;
//	printf("%d\n",MAX);
//	printf("%s\n",STR);
//	return 0;
//}

//#define do_forever for(;;)
//int main()
//{
//	do_forever;//��ѭ��
//}

//#define MAX;//�����ֺ�
//int main()
//{
//	printf("%d\n",MAX);
//	return 0;
//}

////#define�����
//#define SQUARE(X) X*X
////int main()
////{               
////	int ret=SQUARE(5);
////	//int ret=5*5;
////	printf("%d\n",ret);
////	return 0;
////}
//int main()
//{
//	int ret=SQUARE(5+1);
//	printf("%d\n",ret);//11
//	return 0;
//}

//#define SQUARE(X) (X)*(X)
//int main()
//{
//	int ret=SQUARE(5+1);
//	printf("%d\n",ret);//36
//	return 0;
//}

//#define DOUBLE(X) X+X
//#define DOUBLE(X) ((X)+(X))
//int main()
//{
//	int a=5;
//	int ret=10*DOUBLE(a);
//	//int ret=10*a+a
//	printf("%d\n",ret);
//}

//int main()
//{
//	printf("hello world\n");
//	printf("hello " "world\n");
//	printf("hel""lo " "world\n");
//	//�ַ���������һ��
//	return 0;
//}

//#define PRINT(X) printf("the value of X is %d\n",X)
//int main()
//{
//	int a=10;
//	int b=20;
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}//��ΰѲ������뵽�ַ����У�

//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//int main()
//{
//	int a=10;
//	int b=20;
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}

////##������ �������ַ�����һ��
//#define CAT(X,Y) X##Y
//int main()
//{
//	int thisyear=2022;
//	printf("%d\n",CAT(this,year));
//	//printf("%d\n",this##year);
//	//printf("%d\n",thisyear);
//	return 0;
//}

////���и����õĺ����
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a=10;
//	int b=11;
//	int max=MAX(a++,b++);
//	//int max=((a++)>(b++)?(a++):(b++))
//	printf("%d\n",max);//12
//	printf("%d\n",a);//11
//	printf("%d\n",b);//13
//	return 0;
//}


//undef�Ƴ��궨��
//#define MAX 100
//int main()
//{
//	printf("%d\n",MAX);
//	return 0;
//}
//#define MAX 100
//int main()
//{
//#undef MAX
//	printf("%d\n",MAX);
//	return 0;
//}

//��������

int main()
{
	int i;
	int arr[]={1,2,3,4,5,6,7,8,9,0};
	for(i=0;i<10;i++)
	{
		arr[i]=0;
	}
#ifdef DEBUG
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
#endif
	return 0;
}