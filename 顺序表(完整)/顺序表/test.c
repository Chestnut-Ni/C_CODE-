#include "SeqList.h"

void TestSeqList1()
{
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);//1 2 3 4 5
	SeqListPushBack(&sl, 2);//���ǲ��������
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPrint(&sl);

	SeqListPopBack(&sl);
	SeqListPopBack(&sl);
	SeqListPopBack(&sl);
	SeqListPopBack(&sl);
	//SeqListPopBack(&sl);
	//SeqListPopBack(&sl);
	//SeqListPopBack(&sl);
	SeqListPrint(&sl);

	//SeqListPushBack(&sl, 10);
	//SeqListPushBack(&sl, 20);
	//SeqListPrint(&sl);

	//SeqListDestory(&sl);
}

void TestSeqList2()
{
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPrint(&sl);

	SeqListPushFront(&sl, 10);
	SeqListPushFront(&sl, 20);
	SeqListPushFront(&sl, 30);
	SeqListPushFront(&sl, 40);
	SeqListPrint(&sl);

	SeqListPopFront(&sl);
	SeqListPopFront(&sl);
	SeqListPrint(&sl);

	SeqListDestory(&sl);
}

void TestSeqList3()
{
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPrint(&sl);
	SeqListInsert(&sl,4,50);
	SeqListPrint(&sl);
	SeqListErase(&sl, 3);
	SeqListPrint(&sl);

}


// дһ������ͨѶ¼�Ĳ˵�
void menu()
{
	printf("************************************\n");
	printf("��ѡ����Ĳ���:>\n");
	printf("1��ͷ��  2��ͷɾ\n");
	printf("3��β��  4��βɾ\n");
	printf("0���˳�\n");
	printf("************************************\n");
}

int main()
{
	int input=0;
	do
	{
		menu();
		scanf("%d",&input);
		printf("��ѡ��\n");
		switch(input)
		{
		case PushFront:

			break;
		case PopFront:

			break;
		case PushBack:

			break;
		case PopBack:

			break;
		default:

			break;
		}
	}while(input);
	//TestSeqList1();
	//TestSeqList2();
	//TestSeqList3();

	return 0;
}