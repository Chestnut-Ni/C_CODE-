#include"game.h"

void InitBoard(char board[ROW][COL],int row,int col)
{
	int i=0;
	for(i=0;i<row;i++)
	{
		int j=0;
		for(j=0;j<col;j++)
		{
			board[i][j]=' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL],int row,int col)
{
	int i=0;
	for(i=0;i<row;i++)
	{
		int j=0;
		for(j=0;j<COL;j++)
		{
			printf(" %c ",board[i][j]);
			if(j<col-1)
				printf("|");
		}
		printf("\n");
		if(i<col-1)
		{
			for(j=0;j<col;j++)
			{
				printf("---");
				if(j<col-1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	//x y代表横纵坐标
	while(1)
	{
		printf("玩家请落子\n");
		scanf("%d,%d",&x,&y);
		//判断落子是否合法
		if(x>=1&&x<=COL&&y>=1&&y<=ROW)
		{
			if(board[y-1][x-1]==' ')
			{
				board[y-1][x-1]='#';
				break;
			}
			else
			{
				printf("该坐标已被占用，请重新落子\n");
			}
		}
		else
		{
			printf("超出棋盘范围,请重新落子\n");
		}
	}
}

void ComputerMove(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("电脑落子\n");

	while(1)
	{
		x=rand()%col+1;
		y=rand()%row+1;
		if(board[y-1][x-1]==' ')
		{
			board[y-1][x-1]='*';
			break;
		}
	}
}

//棋盘没满返回1
//满了返回0
int IsEmpty(char board[ROW][COL],int row,int col)
{
	int i=0;
	for(i=0;i<row;i++)
	{
		int j=0;
		for(j=0;j<col;j++)
		{
			if(board[i][j]==' ')
				return 1;
		}
	}
	return 0;
}

//玩家赢就返回#
//电脑赢就返回*
char IsWin(char board[ROW][COL],int row,int col)
{
	int i=0;
	for(i=0;i<row;i++)
	{
		//三横行
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1]!=' ')
		{
			return board[i][1];
		}
		//三竖列
		if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[1][i]!=' ')
		{
			return board[1][i];
		}
	}
	//两条对角线
	if((board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ')||(board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[1][1]!=' '))
		return board[1][1];
	//如何让游戏继续？
	//棋盘没满游戏则继续
	if(1==IsEmpty(board,row,col))
	{
		return 'C';
	}
	return 'Q';
}