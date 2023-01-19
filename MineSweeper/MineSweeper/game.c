#include"game.h"

void InitBoard(char board[ROWS][COLS],int row,int col,char set)
{
	int i=0;
	int j=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			board[i][j]=set;
		}
	}
}

void PrintBoard(char board[ROWS][COLS],int row,int col)
{
	int i=0;
	int j=0;
	for(i=0;i<=row;i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for(i=1;i<=row;i++)
	{
		printf("%d ",i);
		for(j=1;j<=col;j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char mine[ROWS][COLS],int row,int col)
{
	int x=0;
	int y=0;
	int count=EASY_COUNT;
	while(count)
	{
		x=rand()%col+1;
		y=rand()%row+1;
		if(mine[y][x]=='0')
		{
			mine[y][x]='1';
			count--;
		}
	}
}

void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	int x=0;
	int y=0;
	int win=0;
	printf("�����׵����꣺\n");
	while(win<row*col-EASY_COUNT)
	{
		scanf("%d,%d",&x,&y);
		//�Ϸ�
		if(x>=1&&x<=9&&y>=1&&y<=9)
		{
			if(mine[y][x]=='1')
			{
				printf("�����㱻ը���ˣ�\n");
				break;
			}
			else
			{
				int ret=get_mine_count(mine,x,y);
				show[y][x]=ret+'0';
				PrintBoard(show,ROW,COL);
				win++;
			}
		}
		//���Ϸ�
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
	if(win==row*col-EASY_COUNT)
	{
		printf("���׳ɹ�\n");
	}
}

int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	return (
		mine[y+1][x+1]+
		mine[y+1][x]+
		mine[y+1][x-1]+
		mine[y][x+1]+
		mine[y][x-1]+
		mine[y-1][x+1]+
		mine[y-1][x-1]+
		mine[y-1][x]-8*'0');
}