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

void StackInit(ST* ps);//栈的初始化
void StackDestroy(ST* ps);//栈的销毁
void StackPush(ST* ps,STDataType x);//入栈
void StackPop(ST* ps);//出栈
STDataType StackTop(ST* ps);//栈顶？
int StackSize(ST* ps);//栈里有几个？
int StackEmpty(ST* ps);//判断栈是否为空

