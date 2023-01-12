#include"Stack.h"

void StackInit(ST* ps)//ջ�ĳ�ʼ��
{
	assert(ps);
	ps->a =NULL;
	ps->top =0;
	ps->capacity =0;
}

void StackDestroy(ST* ps)
{
	assert(ps);
	free(ps->a );
	ps->a =NULL;
	ps->capacity =0;
	ps->top =0;
}

void StackPush(ST* ps,STDataType x)
{
	assert(ps);
	if(ps->top ==ps->capacity )
	{
		int newcapacity=ps->capacity==0?4:ps->capacity*2;
		STDataType* tmp=(STDataType*)realloc(ps->a ,sizeof(STDataType)*newcapacity);
		if(tmp==NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a=tmp;
		ps->capacity =newcapacity;
	}
	ps->a [ps->top ]=x;
	ps->top ++;
}

void StackPop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));
	ps->top --;
}

STDataType StackTop(ST* ps)
{
	return ps->a [ps->top -1];
}

int StackSize(ST* ps)
{
	assert(ps);
	return ps->top ;
}

int StackEmpty(ST* ps)
{
	if(ps->top ==0)
		return 1;
	else
		return 0;
}