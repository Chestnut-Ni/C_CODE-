#include"SList.h"

void SListPrint(SLTNode** pphead)//ppheadָ���һ�����
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

	if(*pphead==NULL)//���������һ���ڵ㶼û��
	{
		*pphead = newnode;//�Ͱ��½ڵ����ͷָ��
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
	if(*pphead==NULL)//���������һ���ڵ㶼û��
	{
		return ;
	}

	if((*pphead)->next==NULL)//������ֻ��һ���ڵ�
	{
		free(*pphead);
		*pphead=NULL;
	}

	else//������Ľڵ���>=2��
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
//���ﺯ������ֵ��һ���ṹ��ָ������ ��ȻҲ���Է����±�
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
	SLTNode* newnode=BuyListNode(x);//�½ڵ�

	if(*pphead==pos)//ͷ��
	{
		newnode->next =*pphead;
		*pphead=newnode;
	}
	else
	{
		//�ҵ�pos��ǰһ��λ��posPrev
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
	if(*pphead==pos)//ͷɾ
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
		pos=NULL;//���ÿ�Ҳ�ɲ��ÿ�
	}
}

void SListEraseAfter(SLTNode* pos)
{
	SLTNode* next=pos->next ;
	pos->next =next->next ;
	free(next);
	next=NULL;//���ÿ�Ҳ�ɲ��ÿ�
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

//���Ͻӿں����н�����϶��� �ж��Ƿ�ΪNULL