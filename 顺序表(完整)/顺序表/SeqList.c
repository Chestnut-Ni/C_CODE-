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
			//printf("扩容成功\n");
		}
	}
}

void SeqListPushBack(SL* ps, SLDataType x)
{//空间足够 直接插入数据即可
	SeqListCheckCapacity(ps);//检测容量
	
	SeqListInsert(ps,ps->size,x);

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
	SeqListErase(ps,ps->size -1);

}

void SeqListPushFront(SL* ps, SLDataType x)//头插入x
{
	int end=0;
	SeqListCheckCapacity(ps);
	
	SeqListInsert(ps,0,x);
}

void SeqListPopFront(SL* ps)//头删
{
	int begin=0;
	assert(ps->size > 0);

	// 挪动数据
	SeqListErase(ps,0);

}

int SeqListFind(SL* ps,SLDataType x)
{
	int i=0;
	for(i=0;i<ps->size ;i++)
	{
		if(ps->a[i]==x)
		{
			return i;
		}
	}
	//找不到
	return -1;
}

void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	int end=ps->size-1;
	if(pos>ps->size||pos<0)
	{
		printf("pos invalid\n");
		return;
	}
	assert(pos<=ps->size&&pos>=0);//断言的括号内为真 assert下面的代码才会执行
	SeqListCheckCapacity(ps);
	while(end>=pos)
	{
		ps->a[end+1]=ps->a [end];
		end--;
	}
	ps->a [pos]=x;
	ps->size++;
}

void SeqListErase(SL* ps, int pos)
{
	int end=pos+1;
	//温柔
	if(pos>ps->size||pos<0)
	{
		printf("pos invalid\n");
		return ;
	}

	//暴力
	assert(pos>=0&&pos<=ps->size );

	SeqListCheckCapacity(ps);
	while(end<=ps->size )
	{
		ps->a[end-1]=ps->a [end];
		end++;
	}
	ps->size--;
}
