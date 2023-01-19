#include"game.h"

void menu()
{
	printf("**********************************\n");
	printf("***1.MineSweeper         0.exit***\n");
	printf("**********************************\n");
}

void game()
{
	char mine[ROWS][COLS]={0};
	char show[ROWS][COLS]={0};
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	//PrintBoard(mine,ROW,COL);
	printf("-----------------\n");
	PrintBoard(show,ROW,COL);
	//在mine中布雷
	SetMine(mine,ROW,COL);
	//PrintBoard(mine,ROW,COL);
	//扫雷
	FindMine(mine,show,ROW,COL);


}
void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	menu();
	do
	{
		printf("请选择：");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			exit(-1);
			break;
		default:
			printf("输入错误请重新选择\n");
			break;
		}
	}while(input);
}

int main()
{
	test();
	return 0;
}
