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

	pos=SListFind(plist,3);//���������ж����ͬ�Ĳ�������ô�죿
	//int i=1;
	while(pos)//pos��ΪNULL�Ż����ѭ�� Ҳ����˵�ҵ���������Ż����ѭ��
	{
		printf("�����е�%d��%d�ĵ�ַ��%p\n",i,pos->data ,pos);
		//���������ж����ͬ�Ĳ�������ô�죿
		i++;
		pos=SListFind(pos->next ,3);//ֱ�Ӵ�pos����һ���ڵ㿪ʼ�������ͬ����
	}
	//���Һ������ؽṹ��ָ��ķ�ʽҲ��ΪInsert�ṩ��� ����pos��ǰ��Insert����һ���ڵ�
	pos=SListFind(plist,4);
	if(pos)
	{
		SListInsert(&plist,pos,40);//��4��ǰ�����40
	}
	SListPrint(&plist);

	pos=SListFind(plist,2);
	if(pos)
	{
		SListInsert(&plist,pos,20);//��2��ǰ�����20Ҳ����ͷ��
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
