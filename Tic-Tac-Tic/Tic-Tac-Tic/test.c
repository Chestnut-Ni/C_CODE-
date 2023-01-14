#include"game.h"

void menu()
{
	printf("*******************************************\n");
	printf("***1.Tic-Tac-Tic  **************  0.exit***\n");
	printf("*******************************************\n");
}

//��Ϸ���㷨ʵ��
void game()
{
	char ret=0;//����IsWin�����ķ���ֵ

	char board[ROW][COL]={0};
	//��ʼ������
	InitBoard(board,ROW,COL);
	//��ӡ����
	printf("\n");
	DisplayBoard(board,ROW,COL);
	printf("\n");

	while(1)
	{
		//�������
		PlayerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		
		//�ж���Ӯ
		ret=IsWin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
		printf("*******************************************\n");
		printf("\n");

		Sleep(500);

		//��������
		ComputerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);

		//�ж���Ӯ
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
		printf("��Ӯ�ˣ�\n");
	}
	else if('*'==ret)
	{
		printf("�����ˣ�\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

 void test()
 {
	int input=0;
	do
	{
		menu();
		printf("��ѡ��:");
		//printf("\n");
		scanf("%d",&input);
		srand((unsigned int)time(NULL));
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			exit(-1);
			break;
		default:
			printf("�������������ѡ��:\n");
			break;
		}
	}while(input);
 }
int main()
{
	test();
	return 0;
}