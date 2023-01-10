#include"SList.h"

void TestSList1()
{
	SLTNode* plist=NULL;
	SListPushBack(&plist,1);
	SListPushBack(&plist,2);
	SListPushBack(&plist,3);
	SListPushBack(&plist,4);

	SListPrint(&plist);

	SListPushFront(&plist,1);
	SListPushFront(&plist,2);
	SListPushFront(&plist,3);
	SListPushFront(&plist,4);

	SListPrint(&plist);
}

void TestSList2()
{
	SLTNode* plist=NULL;
	SListPushBack(&plist,1);
	SListPushBack(&plist,2);
	SListPushBack(&plist,3);
	SListPushBack(&plist,4);
	SListPrint(&plist);

	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopFront(&plist);
	SListPopFront(&plist);

	SListPrint(&plist);

}
void TestSList3()
{
	SLTNode* plist=NULL;
	SLTNode* pos=NULL;
	int i=1;
	SListPushBack(&plist,2);
	SListPushBack(&plist,3);
	SListPushBack(&plist,3);
	SListPushBack(&plist,3);
	SListPushBack(&plist,4);
	SListPrint(&plist);

	pos=SListFind(plist,3);//若链表中有多个相同的查找数怎么办？
	//int i=1;
	while(pos)//pos不为NULL才会进入循环 也就是说找到了这个数才会进入循环
	{
		printf("链表中第%d个%d的地址是%p\n",i,pos->data ,pos);
		//若链表中有多个相同的查找数怎么办？
		i++;
		pos=SListFind(pos->next ,3);//直接从pos的下一个节点开始找这个相同的数
	}
	//查找函数返回结构体指针的方式也可为Insert提供便捷 即在pos的前面Insert插入一个节点
	pos=SListFind(plist,4);
	if(pos)
	{
		SListInsert(&plist,pos,40);//在4的前面插入40
	}
	SListPrint(&plist);

	pos=SListFind(plist,2);
	if(pos)
	{
		SListInsert(&plist,pos,20);//在2的前面插入20也就是头插
	}
	SListPrint(&plist);
}
void TestSList4()
{
	SLTNode* plist=NULL;
	SLTNode* pos=NULL;
	SListPushBack(&plist,2);
	SListPushBack(&plist,3);
	SListPushBack(&plist,3);
	SListPushBack(&plist,3);
	SListPushBack(&plist,4);
	SListPrint(&plist);

	pos=SListFind(plist,4);
	SListErase(&plist,pos);
	SListPrint(&plist);
}
int main()
{
	//TestSList1();
	//TestSList2();
	//TestSList3();
	//TestSList4();
	return 0;
}
