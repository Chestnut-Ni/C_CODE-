#include<stdio.h>

//实现字母的大小写转换。多组输入输出。
//int main()
//{
//	//一组输入输出
//	//int ch;
//	//ch=getchar();
//	//putchar(ch+32);
//	//return 0;
//	//多组输入输出
//	int ch=getchar();
//	while(ch!=EOF)
//	{
//		putchar(ch+32);
//		getchar();//用于吸收换行（回车）
//		printf("\n");
//		ch=getchar();
//	}
//	return 0;
//}

//判断字符是否是字母
//#include<ctype.h>
//int main()
//{
//	int ch;
//	while((ch=getchar())!=EOF)
//	{
//		if(isalpha(ch))
//			printf("YES\n");
//		else
//			printf("NO\n");
//		getchar();//处理掉\n
//	}
//	return 0;
//}

//字符金字塔
//#include<stdio.h>
//int main()
//{
//	char ch;
//	int i =0;
//	ch=getchar();
//	for(i=0;i<5;i++)
//	{
//		int j=0;
//		for(j=0;j<5-i;j++)
//		{
//			printf(" ");
//		}
//		for(j=0;j<i+1;j++)
//		{
//			printf("%c ",ch);
//		}
//		printf("\n");
//	}
//    return 0;
//}

//int main()
//{
//	int a=0;
//	int b=0;
//	int tmp=0;
//	scanf("a=%d,b=%d",&a,&b);
//	tmp=a;
//	a=b;
//	b=tmp;
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}
