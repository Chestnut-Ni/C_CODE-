#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

void StackInit(ST* ps);//ջ�ĳ�ʼ��
void StackDestroy(ST* ps);//ջ������
void StackPush(ST* ps,STDataType x);//��ջ
void StackPop(ST* ps);//��ջ
STDataType StackTop(ST* ps);//ջ����
int StackSize(ST* ps);//ջ���м�����
int StackEmpty(ST* ps);//�ж�ջ�Ƿ�Ϊ��

