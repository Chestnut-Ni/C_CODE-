#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

void SListPrint(SLTNode** pphead);//ppheadָ���һ�����

SLTNode* BuyListNode(SLTDataType x);

void SListPushBack(SLTNode** pphead,SLTDataType x);

void SListPushFront(SLTNode** pphead,SLTDataType x);

void SListPopBack(SLTNode** pphead);

void SListPopFront(SLTNode** pphead);

SLTNode* SListFind(SLTNode* phead,SLTDataType x);
//��posλ��֮ǰ����һ���ڵ�
void SListInsert(SLTNode** pphead,SLTNode* pos,SLTDataType x);
//��������ͷ���Ҫ����ͷ�庯��

//��pos�ĺ������
void SListInsertAfter(SLTNode* pos,SLTDataType x);

//ɾ����ǰ��pos
void SListErase(SLTNode** pphead,SLTNode* pos);

//ɾ��pos�ĺ�һ��
void SListEraseAfter(SLTNode* pos);
//Ϊʲô����plist��
//��Ϊɾ������pos�ĺ�һ��
//��ʹposָ�����plist��ôɾ���������ĺ�һ��������ı�plist

void SListDestory(SLTNode** pphead);