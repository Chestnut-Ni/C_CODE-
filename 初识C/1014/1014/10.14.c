#include<stdio.h>
int main()
{

	//选择语句
	//int prize=201;
	//if(prize>20&&prize<=50)//这里表示20<prize<=50切记不可这样（20<prize<=50）书写  tips:从运算符的优先级考虑
	//printf("便宜货\n");
	//else if(prize>100&&prize<=500)
 //   printf("好东西\n");
	//else
	//printf("太贵了\n");	
	//空语句：;

	//或者这样表达：
	//int prize=201;
	//if(prize>20&&prize<=50)
	//printf("便宜货\n");
	//else 
	//{
	//if(prize>100&&prize<=500)
 //   printf("好东西\n");
	//else
	//printf("太贵了\n");
	//}
	//循环语句
	/*int i=1;
		while(i<=10)
		{
			i++;
			if(i==5)
			continue;
			printf("%d\n",i);
		
		}*/


		//i++的位置决定了输出的值

		/*int i=1;
		while(i<=10)
		{
			if(i==5)
			continue;
			printf("%d\n",i);
			i++;
		}*/
	/*int i=1;
		while(i<=10)
		{
			if(i==5)
			break;
			printf("%d\n",i);
			i++;
		}*/
	
	//int ch=0;
	//while((ch=getchar())!=EOF)//EOF-end of file 文件结束标志 本质是-1
	//	//ctrl+z结束循环
	//{
	//	putchar(ch);
	//}

   return 0;
}
