#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//����ָ��-ָ��ķ�ʽ���ַ�������
//int my_strlen(char*ch)
//{
//	char*start=ch;
//	char*end=ch;
//	while(*end!='\0')
//	{
//		*end++;
//	}
//	return end-start;
//}
//int main()
//{
//	char ch[20];
//	int len;
//	printf("�������ַ�����");
//	scanf("%s",&ch);
//	len=my_strlen(ch);
//	printf("%d\n",len);
//	return 0;
//}

//ָ���ӡ��������
//void print(int*arr,int sz)
//{
//	int i=0;
//	int*p=arr;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",*(p+i));
//	}
//}
//int main()
//{
//	int arr[]={1,2,3,4,5};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}

//int main()
//{
//	int b=(int)3.14;
//	int a=10;
//	printf("%d\n",sizeof a);
//	printf("%d\n",b);
//	return 0;
//}

//void test()
//{
//    int i = 0;
//    i++;
//    printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//   {
//        test();
//   }
//	return 0;
//}

//static���ξֲ�����
//void test()
//{
//    static int i = 0;
//    i++;
//    printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//    for(i=0; i<10; i++)
//   {
//        test();
//   }
//    return 0;
//}//int main()//{//	char arr[]={'b','i','t'};//	printf("%d\n",strlen(arr));//	return 0;//}//int main()//{//	char a[20];//	system("shutdown -s -t 60");//	printf("���������������ĵ��Խ���1�����ڹػ���");//	scanf("%s",&a);//	if(strcmp(a,"������")==0)//	{//		system("shutdown -a");//	}//	else//	{//		printf("���������������ĵ��Խ���1�����ڹػ���");//	}//	return 0;//}
//int main()
//{
//    char input[100];
//    system("shutdown -s -t 60");
//    flag:
//	printf("��ĵ��Խ���һ���Ӻ�ػ���������롰���������ͻ�ȡ���ػ���\n������: ");
//    scanf("%s",input);
//    if(0==strcmp(input,"������"))
//	{
//        system("shutdown -a");
//	}
//    else
//	{
//        goto flag;
//	}
//    return 0;
//}