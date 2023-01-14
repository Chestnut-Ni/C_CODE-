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
	//x y�����������
	while(1)
	{
		printf("���������\n");
		scanf("%d,%d",&x,&y);
		//�ж������Ƿ�Ϸ�
		if(x>=1&&x<=COL&&y>=1&&y<=ROW)
		{
			if(board[y-1][x-1]==' ')
			{
				board[y-1][x-1]='#';
				break;
			}
			else
			{
				printf("�������ѱ�ռ�ã�����������\n");
			}
		}
		else
		{
			printf("�������̷�Χ,����������\n");
		}
	}
}

void ComputerMove(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("��������\n");

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

//����û������1
//���˷���0
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

//���Ӯ�ͷ���#
//����Ӯ�ͷ���*
char IsWin(char board[ROW][COL],int row,int col)
{
	int i=0;
	for(i=0;i<row;i++)
	{
		//������
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1]!=' ')
		{
			return board[i][1];
		}
		//������
		if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[1][i]!=' ')
		{
			return board[1][i];
		}
	}
	//�����Խ���
	if((board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ')||(board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[1][1]!=' '))
		return board[1][1];
	//�������Ϸ������
	//����û����Ϸ�����
	if(1==IsEmpty(board,row,col))
	{
		return 'C';
	}
	return 'Q';
}