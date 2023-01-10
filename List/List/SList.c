#include"SList.h"

void SListPrint(SLTNode** pphead)//pphead指向第一个结点
{
	SLTNode* cur=*pphead;
	while(cur!=NULL)
	{
		printf("%d->",cur->data);
		cur=cur->next;
	}
	printf("NULL\n");
}

SLTNode* BuyListNode(SLTDataType x)
{
	SLTNode* newnode=(SLTNode*)malloc(sizeof(SLTNode));
	if(newnode==NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	newnode->data=x;
	newnode->next=NULL;

	return newnode;
}


void SListPushBack(SLTNode** pphead,SLTDataType x)
{
	SLTNode* newnode=BuyListNode(x);

	if(*pphead==NULL)//如果链表里一个节点都没有
	{
		*pphead = newnode;//就把新节点放在头指针
	}

	else
	{
		SLTNode* tail=*pphead;
		while(tail->next!=NULL)
		{
			tail=tail->next;
		}
		tail->next =newnode;
	}
}

void SListPushFront(SLTNode** pphead,SLTDataType x)
{
	SLTNode* newnode = BuyListNode(x);

	newnode->next = *pphead;
	*pphead = newnode;
}

void SListPopBack(SLTNode** pphead)
{
	if(*pphead==NULL)//如果链表里一个节点都没有
	{
		return ;
	}

	if((*pphead)->next==NULL)//链表里只有一个节点
	{
		free(*pphead);
		*pphead=NULL;
	}

	else//链表里的节点数>=2个
	{	
		SLTNode* tail=*pphead;

		while(tail->next ->next )
		{
			tail=tail->next;
		}

		free(tail->next);
		tail->next=NULL;
	}
}

void SListPopFront(SLTNode** pphead)
{
	//assert(*pphead!=NULL);

	SLTNode* next=(*pphead)->next;
	assert(*pphead!=NULL);

	free(*pphead);
	*pphead=next;
}

SLTNode* SListFind(SLTNode* phead,SLTDataType x)
//这里函数返回值是一个结构体指针类型 当然也可以返回下标
{
	SLTNode* cur=phead;
	while(cur)
	{
		if(cur->data ==x)
		{
			return cur;
		}
		else
		{
			cur=cur->next ;
		}
	}
	return NULL;
}

void SListInsert(SLTNode** pphead,SLTNode* pos,SLTDataType x)
{	
	SLTNode* newnode=BuyListNode(x);//新节点

	if(*pphead==pos)//头插
	{
		newnode->next =*pphead;
		*pphead=newnode;
	}
	else
	{
		//找到pos的前一个位置posPrev
		SLTNode* posPrev=*pphead;
		while(posPrev->next !=pos)
		{
			posPrev=posPrev->next ;
		}
		posPrev->next =newnode;
		newnode->next=pos;
	}
}

void SListInsertAfter(SLTNode* pos,SLTDataType x)
{
	SLTNode* newnode=BuyListNode(x);
	newnode->next =pos->next ;
	pos->next =newnode;
}
void SListErase(SLTNode** pphead,SLTNode* pos)
{
	if(*pphead==pos)//头删
	{
		*pphead=pos->next ;
		free(pos);
	}
	else
	{
		SLTNode* posPrev=*pphead;
		while(posPrev->next!=pos)
		{
			posPrev=posPrev->next ;
		}
		posPrev->next=pos->next ;
		free(pos);
		pos=NULL;//可置空也可不置空
	}
}

void SListEraseAfter(SLTNode* pos)
{
	SLTNode* next=pos->next ;
	pos->next =next->next ;
	free(next);
	next=NULL;//可置空也可不置空
}

void SListDestory(SLTNode** pphead)
{
	assert(*pphead);
	SLTNode* cur=*pphead;
	while(cur)
	{
		SLTNode* next=cur->next ;
		free(cur);
		cur=next;
	}
	*pphead=NULL;
}

//以上接口函数中建议加上断言 判断是否为NULL