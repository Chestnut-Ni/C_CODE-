#include "SeqList.h"

void SeqListPrint(SL* ps)
{
	int i=0;
	for (i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
	ps->size = 0;
}

void SeqListCheckCapacity(SL* ps)
{
	// 如果没有空间或者空间不足，那么我们就扩容
	if (ps->size == ps->capacity)//满了就增容
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;//一般都扩容2倍
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity*sizeof(SLDataType));
		//扩容失败
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);//直接让程序结束
		}
		//扩容成功
		else
		{
			ps->a = tmp;
			ps->capacity = newcapacity;
			printf("扩容成功\n");
		}
	}
}

void SeqListPushBack(SL* ps, SLDataType x)
{//空间足够 直接插入数据即可
	SeqListCheckCapacity(ps);//检测容量

	ps->a[ps->size] = x;
	ps->size++;
}

void SeqListPopBack(SL* ps)
{
	// 温柔处理方式
	//if (ps->size > 0)
	//{
	//	//ps->a[ps->size - 1] = 0;//可有可无
	//	ps->size--;
	//}

	// 暴力处理方式
	assert(ps->size > 0);
	ps->size--;
}

void SeqListPushFront(SL* ps, SLDataType x)//头插入x
{
	int end=0;
	SeqListCheckCapacity(ps);

	// 从后向前挪动数据
	end = ps->size - 1;//下标
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;
}

void SeqListPopFront(SL* ps)
{
	int begin=0;
	assert(ps->size > 0);

	// 挪动数据
	begin = 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		++ begin;
	}

	ps->size--;
}