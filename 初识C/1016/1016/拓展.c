//#include<stdio.h>
//int main()
//{
//	int ret=0;
//	char password[20]={0};
//	printf("请输入密码：");
//	scanf("%s",password);
//	printf("请确认密码(Y/N):");
//	ret=getchar();//用于接收Y/N 但是实际操作中输入密码后按下回车后 接受的就是回车即换行即\n
//	if(ret=='Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//#include<stdio.h>
//int main()
//{
//	int ret=0;
//	char password[20]={0};
//	printf("请输入密码：");
//	scanf("%s",password);
//	printf("请确认密码(Y/N):");
//	getchar();//用于读取回车 这样下面的getchar就能顺利读取Y/N
//	ret=getchar();//接收Y/N
//	if(ret=='Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
	//但为了实现更为复杂的密码形式（如：数字+字符的形式）往往通过while循环来实现
//#include<stdio.h>
//int main()
//{
//	int s=0;
//	int ch=0;
//	char password[20]={0};
//	printf("请输入密码：");
//	scanf("%s",password);
//	printf("请确认密码(Y/N):");
//	while((ch=getchar())!='\n')
//	{
//		;
//	}
//	s=getchar();//接收Y/N
//	if(s=='Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//
//
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}