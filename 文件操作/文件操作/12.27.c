#include<stdio.h>
#include<string.h>
#include<errno.h>

//fgets 和fputs  适用于所有流
//从键盘上读取字符串
//int main()
//{
//	//①
//	char buf[1024]={0};
//	fgets(buf,1024,stdin);//从键盘读取
//	fputs(buf,stdout);//从显示器输出
//	
//	//②
//	gets(buf);//默认从键盘上读取
//	puts(buf);//默认输出到显示器
//	return 0;
//}

//格式化输入输出fscanf fprintf

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
//	fscanf(pf,"%d %f %s",&(s.a) ,&(s.f) ,s.arr );//记住取地址
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

//将格式化的数据转换为字符串
//sprintf和sscanf
//int main()
//{
//	struct S s={100,3.14,"abcd"};
//	struct S tmp={0};
//	char buf[1024];
//	sprintf(buf,"%d %.2lf %s\n",s.a,s.f ,s.arr);//将s中的数据转换为字符串放到buf中
//	//printf("%s",buf);
//	sscanf(buf,"%d %f %s\n",&(tmp.a),&(tmp.f) ,tmp.arr);
//	printf("%d %.2lf %s\n",tmp.a,tmp.f ,tmp.arr);
//	return 0;
//}

//二进制输入输出
//struct S
//{
//	char name[20];
//	int age;
//	double weight;
//};
//int main()
//{
//	struct S s={"张三",20,55.6};
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


//文件的随机读写
//int main()
//{
//	FILE* pf=fopen("test.txt","r");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//1.定位文件指针
//	fseek(pf,2,SEEK_CUR);//fseek函数
//	//2.读取文件
//	//printf("%c\n",fgetc(pf));//c
//	//ftell
//	//返回文件指针相对于起始位置的偏移量
//	printf("%d\n",ftell(pf));
//	fclose(pf);
//	pf=NULL;
//	return 0;
//}