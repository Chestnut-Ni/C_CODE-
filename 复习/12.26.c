#include<stdio.h>
#include<string.h>
#include<errno.h>


//int main()
//{
//	FILE* pf=fopen("test.txt","r");//��test.txt�ж�ȡ����
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}//No such file or directory
//	fclose(pf);
//	pf=NULL;
//	return 0;
//}


//���ļ�������ַ�  fputc
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

//���ļ��ж�ȡ�ַ�  fgetc
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
//	char ch=fgetc(stdin);//�Ӽ�������
//	fputc(ch,stdout);//�Ӽ������
//
//	return 0;
//}

//���ļ��ж�ȡ�ַ���    fgets
//int main()
//{
//	char str[20];
//	FILE*pf=fopen("test.txt","r");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	fgets(str,3,pf);//�����ȡ����Ϊ3-1=2���ַ��� ����\0����3��
//	printf("%s\n",str);
//	fclose(pf);
//	pf=NULL;
//	return 0;
//}

//���ļ�������ַ���  fputs
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