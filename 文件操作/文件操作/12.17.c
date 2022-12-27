#include<stdio.h>
#include<errno.h>
#include<string.h>


//int main()
//{
//	FILE* pf=fopen("test.txt","r");//打开文件 "r"表示只读
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));//文件不存在
//		return 0;
//	}
//	//读文件
//	fclose(pf);//关文件
//	pf=NULL;
//	return 0;
//}

////写文件
////对于本来就有的文件"w"会对其进行格式化
////对于本来没有的文件会创立一个名为其的新文件
//int main()
//{
//	FILE* pfWrite=fopen("test.txt","w");
//	if(pfWrite==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	fclose(pfWrite);
//	pfWrite=NULL;
//	return 0;
//}

//字符输出函数fputc
//int main()
//{
//	FILE* pfWrite=fopen("test.txt","w");
//	if(pfWrite==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('b',pfWrite);////输出流
//	fputc('i',pfWrite);
//	fputc('t',pfWrite);
//	fclose(pfWrite);
//	pfWrite=NULL;
//	return 0;
//}

//字符输入函数fgetc
//int main()
//{
//	FILE* pfRead=fopen("test.txt","r");
//	if(pfRead==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//读文件          输入流
//	printf("%c",fgetc(pfRead));//b
//	printf("%c",fgetc(pfRead));//i
//	printf("%c",fgetc(pfRead));//t
//	fclose(pfRead);
//	pfRead=NULL;
//	return 0;
//}

//int main()
//{
//	int ch=fgetc(stdin);//从键盘输入
//	fputc(ch, stdout);//从键盘输出
//
//	return 0;
//}

////文本行输入函数fgets
//int main()
//{
//	char buf[1024];
//	FILE* pf=fopen("test.txt","w");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	fgets(buf,1024,pf);
//	fgets(buf,1024,pf);
//	fgets(buf,1024,pf);
//	fclose(pf);
//	pf=NULL;
//	return 0;
//}

////文本行输入函数fputs
//int main()
//{
//	char buf[1024];
//	FILE* pf=fopen("test.txt","w");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	fputs(buf,pf);
//	fclose(pf);
//	pf=NULL;
//	return 0;
//}