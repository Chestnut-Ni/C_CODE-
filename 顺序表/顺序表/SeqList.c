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
			printf("���ݳɹ�\n");
		}
	}
}

void SeqListPushBack(SL* ps, SLDataType x)
{//�ռ��㹻 ֱ�Ӳ������ݼ���
	SeqListCheckCapacity(ps);//�������

	ps->a[ps->size] = x;
	ps->size++;
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
	assert(ps->size > 0);
	ps->size--;
}

void SeqListPushFront(SL* ps, SLDataType x)//ͷ����x
{
	int end=0;
	SeqListCheckCapacity(ps);

	// �Ӻ���ǰŲ������
	end = ps->size - 1;//�±�
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

	// Ų������
	begin = 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		++ begin;
	}

	ps->size--;
}