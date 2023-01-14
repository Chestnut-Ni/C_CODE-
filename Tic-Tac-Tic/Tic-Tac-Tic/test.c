#include"game.h"

void menu()
{
	printf("*******************************************\n");
	printf("***1.Tic-Tac-Tic  **************  0.exit***\n");
	printf("*******************************************\n");
}

//游戏的算法实现
void game()
{
	char ret=0;//接收IsWin函数的返回值

	char board[ROW][COL]={0};
	//初始化棋盘
	InitBoard(board,ROW,COL);
	//打印棋盘
	printf("\n");
	DisplayBoard(board,ROW,COL);
	printf("\n");

	while(1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		
		//判断输赢
		ret=IsWin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
		printf("*******************************************\n");
		printf("\n");

		Sleep(500);

		//电脑下棋
		ComputerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);

		//判断输赢
		ret=IsWin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
		printf("*******************************************\n");
		printf("\n");
	}
	if('#'==ret)
	{
		printf("你赢了！\n");
	}
	else if('*'==ret)
	{
		printf("你输了！\n");
	}
	else
	{
		printf("平局\n");
	}
}

 void test()
 {
	int input=0;
	do
	{
		menu();
		printf("请选择:");
		//printf("\n");
		scanf("%d",&input);
		srand((unsigned int)time(NULL));
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			exit(-1);
			break;
		default:
			printf("输入错误，请重新选择:\n");
			break;
		}
	}while(input);
 }
int main()
{
	test();
	return 0;
}