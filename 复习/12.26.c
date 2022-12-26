#include<stdio.h>
#include<string.h>
#include<errno.h>


//int main()
//{
//	FILE* pf=fopen("test.txt","r");//从test.txt中读取数据
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}//No such file or directory
//	fclose(pf);
//	pf=NULL;
//	return 0;
//}


//向文件中输出字符  fputc
//int main()
//{
//	FILE* pf=fopen("test.txt","w");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	fputc('w',pf);
//	fputc('e',pf);
//	fputc('b',pf);
//	fclose(pf);
//	pf=NULL;
//	return 0;
//}

//从文件中读取字符  fgetc
//int main()
//{
//	FILE* pf=fopen("test.txt","r");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	printf("%c",fgetc(pf));
//	printf("%c",fgetc(pf));
//	printf("%c",fgetc(pf));
//	fclose(pf);
//	pf=NULL;
//	return 0;
//}

//int main()
//{
//	char ch=fgetc(stdin);//从键盘输入
//	fputc(ch,stdout);//从键盘输出
//
//	return 0;
//}

//从文件中读取字符串    fgets
//int main()
//{
//	char str[20];
//	FILE*pf=fopen("test.txt","r");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	fgets(str,3,pf);//这里读取长度为3-1=2的字符串 加上\0正好3个
//	printf("%s\n",str);
//	fclose(pf);
//	pf=NULL;
//	return 0;
//}

//向文件中输出字符串  fputs
//int main()
//{
//	char str[20]={"zizibujuan"};
//	FILE* pf=fopen("test.txt","w");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	fputs(str,pf);
//	fclose(pf);
//	pf=NULL;
//	return 0;
//}