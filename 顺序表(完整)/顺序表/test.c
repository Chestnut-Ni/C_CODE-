#include "SeqList.h"

void TestSeqList1()
{
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);//1 2 3 4 5
	SeqListPushBack(&sl, 2);//就是插入的数据
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


// 写一个类似通讯录的菜单
void menu()
{
	printf("************************************\n");
	printf("请选择你的操作:>\n");
	printf("1、头插  2、头删\n");
	printf("3、尾插  4、尾删\n");
	printf("0、退出\n");
	printf("************************************\n");
}

int main()
{
	int input=0;
	do
	{
		menu();
		scanf("%d",&input);
		printf("请选择：\n");
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