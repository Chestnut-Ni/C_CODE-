#include<stdio.h>
#include<errno.h>
#include<string.h>


//int main()
//{
//	FILE* pf=fopen("test.txt","r");//���ļ� "r"��ʾֻ��
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));//�ļ�������
//		return 0;
//	}
//	//���ļ�
//	fclose(pf);//���ļ�
//	pf=NULL;
//	return 0;
//}

////д�ļ�
////���ڱ������е��ļ�"w"�������и�ʽ��
////���ڱ���û�е��ļ��ᴴ��һ����Ϊ������ļ�
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

//�ַ��������fputc
//int main()
//{
//	FILE* pfWrite=fopen("test.txt","w");
//	if(pfWrite==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fputc('b',pfWrite);////�����
//	fputc('i',pfWrite);
//	fputc('t',pfWrite);
//	fclose(pfWrite);
//	pfWrite=NULL;
//	return 0;
//}

//�ַ����뺯��fgetc
//int main()
//{
//	FILE* pfRead=fopen("test.txt","r");
//	if(pfRead==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//���ļ�          ������
//	printf("%c",fgetc(pfRead));//b
//	printf("%c",fgetc(pfRead));//i
//	printf("%c",fgetc(pfRead));//t
//	fclose(pfRead);
//	pfRead=NULL;
//	return 0;
//}

//int main()
//{
//	int ch=fgetc(stdin);//�Ӽ�������
//	fputc(ch, stdout);//�Ӽ������
//
//	return 0;
//}

////�ı������뺯��fgets
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

////�ı������뺯��fputs
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