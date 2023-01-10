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

void SListPrint(SLTNode** pphead);//pphead指向第一个结点

SLTNode* BuyListNode(SLTDataType x);

void SListPushBack(SLTNode** pphead,SLTDataType x);

void SListPushFront(SLTNode** pphead,SLTDataType x);

void SListPopBack(SLTNode** pphead);

void SListPopFront(SLTNode** pphead);

SLTNode* SListFind(SLTNode* phead,SLTDataType x);
//在pos位置之前插入一个节点
void SListInsert(SLTNode** pphead,SLTNode* pos,SLTDataType x);
//插入若是头插就要调用头插函数

//在pos的后面插入
void SListInsertAfter(SLTNode* pos,SLTDataType x);

//删除当前的pos
void SListErase(SLTNode** pphead,SLTNode* pos);

//删除pos的后一个
void SListEraseAfter(SLTNode* pos);
//为什么不传plist？
//因为删除的是pos的后一个
//即使pos指向的是plist那么删除的是它的后一个并不会改变plist

void SListDestory(SLTNode** pphead);