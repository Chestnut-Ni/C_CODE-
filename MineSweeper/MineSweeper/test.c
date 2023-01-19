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
	//��mine�в���
	SetMine(mine,ROW,COL);
	//PrintBoard(mine,ROW,COL);
	//ɨ��
	FindMine(mine,show,ROW,COL);


}
void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	menu();
	do
	{
		printf("��ѡ��");
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
			printf("�������������ѡ��\n");
			break;
		}
	}while(input);
}

int main()
{
	test();
	return 0;
}
