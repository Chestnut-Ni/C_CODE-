#include <stdio.h>
int main()
{
//条件操作符（三目操作符）：exp1?exp2:exp3
//含义：如果exp1为真则执行exp2否则执行exp3
//e.g.
	//int a=13;
	//int b=23;
	//int max=0;
	//max=(a>b?a:b);
	//printf("%d\n",max);
//逗号表达式（由逗号隔开的表达式）
//常见关键字：
//ps:关键字不能自己命名 是给定的
//①auto（自动）
//e.g.
//int a=10（a为局部变量）等价于auto int a=10
	//局部变量又称自动变量
//②break停止循环
//③char(字符类型)
//④const修饰常变量
//⑤enum枚举
//⑥struct（结构体关键字）
//⑦union（共用体/联合体）
//⑧typedef(类型定义/类型重定义)

//计算机存储数据的几个地方：寄存器（register） 高速缓存 内存(4G 8G 16G) 硬盘(500G) 
	//速度由快到慢
	/*register int a=10*///建议把a存储到寄存器中
//⑨static修饰局部变量时改变其生命周期
	//修饰全局变量时改变其作用域即让静态的全局变量只能在自己的源文件内部中使用出了源文件就无法再使用
//e.g.
//extern int NLT;
//printf("NLT=%d\n",NLT);
//这里的NLT是全局变量其来源于另外一个源文件 使用extern声明外部符号的使用  但若使用static修饰后就无法再使用NLT 即作用域被限制
//除此以外static也可修饰函数 原理相同
//#define定义标识符常量如#define NLT 18 （中间无任何符号）
//int a=NLT即代表 int a=18







	//&取地址符号
	int a=19;
	/*printf("%p\n",&a);*///表示求储存a的四个字节的地址注意是%p而不是%d
	int* p=&a;

	//表示把地址存在p这个变量中 p这个变量就是存放地址的变量 叫做指针变量 p的变量类型是  int*   *-解引用操作符
	*p =20;//也就是把a的值替换成了20 a与*p相等于是等价的
	printf("a=%d\n",a);
	






return 0;
}