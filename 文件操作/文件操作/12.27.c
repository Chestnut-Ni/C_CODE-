#include<stdio.h>
#include<string.h>
#include<errno.h>

//fgets ��fputs  ������������
//�Ӽ����϶�ȡ�ַ���
//int main()
//{
//	//��
//	char buf[1024]={0};
//	fgets(buf,1024,stdin);//�Ӽ��̶�ȡ
//	fputs(buf,stdout);//����ʾ�����
//	
//	//��
//	gets(buf);//Ĭ�ϴӼ����϶�ȡ
//	puts(buf);//Ĭ���������ʾ��
//	return 0;
//}

//��ʽ���������fscanf fprintf

//struct S
//{
//	int a;
//	float f;
//	char arr[20];
//};
//fprintf
//int main()
//{
//	struct S s={1024,3.14,"hello"};
//	FILE* pf=fopen("test.txt","w");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	fprintf(pf,"%d %f %s",s.a ,s.f ,s.arr );
//	fclose(pf);
//	pf=NULL;
//	return 0;
//}
//fscanf
//int main()
//{
//	struct S s={0};
//	FILE* pf=fopen("test.txt","r");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	fscanf(pf,"%d %f %s",&(s.a) ,&(s.f) ,s.arr );//��סȡ��ַ
//	printf("%d %.2lf %s\n",s.a ,s.f ,s.arr );
//	fclose(pf);
//	pf=NULL;
//	return 0;
//}

//int main()
//{
//	struct S s;
//	fscanf(stdin,"%d %f %s",&(s.a ),&(s.f ),s.arr);
//	fprintf(stdout,"%d %.2lf %s\n",s.a,s.f ,s.arr);
//	return 0;
//}

//����ʽ��������ת��Ϊ�ַ���
//sprintf��sscanf
//int main()
//{
//	struct S s={100,3.14,"abcd"};
//	struct S tmp={0};
//	char buf[1024];
//	sprintf(buf,"%d %.2lf %s\n",s.a,s.f ,s.arr);//��s�е�����ת��Ϊ�ַ����ŵ�buf��
//	//printf("%s",buf);
//	sscanf(buf,"%d %f %s\n",&(tmp.a),&(tmp.f) ,tmp.arr);
//	printf("%d %.2lf %s\n",tmp.a,tmp.f ,tmp.arr);
//	return 0;
//}

//�������������
//struct S
//{
//	char name[20];
//	int age;
//	double weight;
//};
//int main()
//{
//	struct S s={"����",20,55.6};
//	struct S tmp={0};
//	FILE* pf=fopen("test.txt","rb");
//	//FILE* pf=fopen("test.txt","wb");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//fwrite(&s,sizeof(struct S),1,pf);
//	fread(&tmp,sizeof(struct S),1,pf);
//	printf("%s %d %f",tmp.name ,tmp.age ,tmp.weight );
//	fclose(pf);
//	pf=NULL;
//}


//�ļ��������д
//int main()
//{
//	FILE* pf=fopen("test.txt","r");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	fseek(pf,2,SEEK_CUR);//fseek����
//	//2.��ȡ�ļ�
//	//printf("%c\n",fgetc(pf));//c
//	//ftell
//	//�����ļ�ָ���������ʼλ�õ�ƫ����
//	printf("%d\n",ftell(pf));
//	fclose(pf);
//	pf=NULL;
//	return 0;
//}