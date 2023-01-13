#include <stdio.h>
int main()
{
	//循环语句
	//①while语句②for语句③do...while语句
	//数组：一组相同类型元素的集合
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	//下标：从0开始如1的下标为0 2的下标为1 存在的目的：用下标的形式访问元素
	//如：
	//printf("%d\n",arr[5]);//输出结果为6 即下标为5的元素
		//定义一个存放10个整数数字的数组
	//char ch[20];
	//定义一个存放20个字符的数组
	int i=0;
    while(i<10)
	{printf("%d ",arr[i]);
	i++;
	}











	//注释的两种方式：C的注释风格：/*....*/ 缺陷：不能嵌套即遇到*/就停止注释
	//C++的注释风格：//       快捷键：CTRL+K+C  CTRL+K+U（取消注释）

	//选择语句
	/*int input=0;
	printf("加入比特\n");
	printf("你要好好学习吗？(1/0)>:");
	scanf("%d\n",&input);
	if (input==1)
		printf("好offer\n");
	else
		printf("回家卖红薯\n");*/





	return 0;
}