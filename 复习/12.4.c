#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//利用指针-指针的方式求字符串长度
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
//	printf("请输入字符串：");
//	scanf("%s",&ch);
//	len=my_strlen(ch);
//	printf("%d\n",len);
//	return 0;
//}

//指针打印数组内容
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

//static修饰局部变量
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
//}//int main()//{//	char arr[]={'b','i','t'};//	printf("%d\n",strlen(arr));//	return 0;//}//int main()//{//	char a[20];//	system("shutdown -s -t 60");//	printf("输入我是猪否则你的电脑将在1分钟内关机！");//	scanf("%s",&a);//	if(strcmp(a,"我是猪")==0)//	{//		system("shutdown -a");//	}//	else//	{//		printf("输入我是猪否则你的电脑将在1分钟内关机！");//	}//	return 0;//}
//int main()
//{
//    char input[100];
//    system("shutdown -s -t 60");
//    flag:
//	printf("你的电脑将在一分钟后关机，如果输入“我是猪”，就会取消关机！\n请输入: ");
//    scanf("%s",input);
//    if(0==strcmp(input,"我是猪"))
//	{
//        system("shutdown -a");
//	}
//    else
//	{
//        goto flag;
//	}
//    return 0;
//}