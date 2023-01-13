#include <stdio.h>
#include<windows.h>



	//我们用结构体来描述复杂对象  结构体是创造出来的一种类型
	//e.g描述一本书
//创建一个结构体类型：
	struct Book//struct-结构体关键字
	{
		char name[20];//建立一个长度为20个字符的数组
		short prize;
	};//此分号必不可少表示结束一个类型定义
	//利用结构体类型创建一个该类型的结构体变量：
	int main()
{
	//结构体的初始化：
	struct Book b1={"C语言程序设计",55};//打印结构体信息
	//取b1的地址：
	struct Book* gh=&b1;
	//利用*gh输出b1：
	printf("%s\n",(*gh).name);
	printf("%d\n",(*gh).prize);
	//或者使用->：
	printf("%s\n",gh->name);
	//结构体变量用.访问成员    结构体指针用->访问成员

	//printf("书名：%s\n",b1.name);//书名采用字符串定义所以用%s输出
	//printf("价格：%d元\n",b1.prize);//（  .  为结构体类型访问操作符）
	////创建变量时也可对参数进行修改如:
	//b1.prize=15;
	//printf("修改后的价格：%d元\n",b1.prize);






	/*double d=18;
	double* sd=&d;
	printf("%d\n",sizeof(sd));*/
	//printf("%d\n",sizeof(short*));//4
	//printf("%d\n",sizeof(char*));//4
	//printf("%d\n",sizeof(double*));//4
	//printf("%d\n",sizeof(int*));//4
	//地址作为一种类型其大小是固定的不论其是double int short....
	//32位机器下地址大小为4个字节(32个比特位) 64位机器下地址大小为8个字节（64个比特位）




return 0;
}