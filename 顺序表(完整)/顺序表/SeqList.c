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
	// ���û�пռ���߿ռ䲻�㣬��ô���Ǿ�����
	if (ps->size == ps->capacity)//���˾�����
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;//һ�㶼����2��
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity*sizeof(SLDataType));
		//����ʧ��
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);//ֱ���ó������
		}
		//���ݳɹ�
		else
		{
			ps->a = tmp;
			ps->capacity = newcapacity;
			//printf("���ݳɹ�\n");
		}
	}
}

void SeqListPushBack(SL* ps, SLDataType x)
{//�ռ��㹻 ֱ�Ӳ������ݼ���
	SeqListCheckCapacity(ps);//�������
	
	SeqListInsert(ps,ps->size,x);

}

void SeqListPopBack(SL* ps)
{
	// ���ᴦ��ʽ
	//if (ps->size > 0)
	//{
	//	//ps->a[ps->size - 1] = 0;//���п���
	//	ps->size--;
	//}

	// ��������ʽ
	SeqListErase(ps,ps->size -1);

}

void SeqListPushFront(SL* ps, SLDataType x)//ͷ����x
{
	int end=0;
	SeqListCheckCapacity(ps);
	
	SeqListInsert(ps,0,x);
}

void SeqListPopFront(SL* ps)//ͷɾ
{
	int begin=0;
	assert(ps->size > 0);

	// Ų������
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
	//�Ҳ���
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
	assert(pos<=ps->size&&pos>=0);//���Ե�������Ϊ�� assert����Ĵ���Ż�ִ��
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
	//����
	if(pos>ps->size||pos<0)
	{
		printf("pos invalid\n");
		return ;
	}

	//����
	assert(pos>=0&&pos<=ps->size );

	SeqListCheckCapacity(ps);
	while(end<=ps->size )
	{
		ps->a[end-1]=ps->a [end];
		end++;
	}
	ps->size--;
}
