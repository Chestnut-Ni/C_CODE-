#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//#define N 10000
//typedef int SLDataType;
//
//// ��̬˳���
//typedef struct SeqList
//{
//	SLDataType a[N];
//	int size; // ��ʾ�����д洢�˶��ٸ�����
//}SL;
//
//// �ӿں��� -- ��������Ǹ���STL�ߵģ�������Ҳ���������Ͽ��ߣ��������ѧϰSTL
//void SeqListInit(SL* ps); 
//
//// ��̬�ص㣺������˾Ͳ��ò���  ȱ�㣺�����ٵĺ����أ��������ȷ��
//// N��С�˲����ã�N�������˷�
//void SeqListPushBack(SL* ps, SLDataType x);
//void SeqListPopBack(SL* ps);
//void SeqListPushFront(SL* ps, SLDataType x);
//void SeqListPopFront(SL* ps);
//// ...

typedef int SLDataType;

// ��̬˳���d
typedef struct SeqList
{
	SLDataType* a;//int* a;
	int size;      // ��¼���鵱ǰ�Ѿ��е�Ԫ�ظ���
	int capacity;  // ��ǰ��������������Ԫ�ظ�����
}SL;


// �ӿں��� -- ��������Ǹ���STL�ߵģ�������Ҳ���������Ͽ��ߣ��������ѧϰSTL
void SeqListPrint(SL* ps);
void SeqListInit(SL* ps);
void SeqListDestory(SL* ps);

void SeqListCheckCapacity(SL* ps);
void SeqListPushBack(SL* ps, SLDataType x);//β��
void SeqListPopBack(SL* ps);//βɾ
void SeqListPushFront(SL* ps, SLDataType x);//ͷ��
void SeqListPopFront(SL* ps);
// ...

// �ҵ��˷���xλ���±꣬û���ҵ�����-1
int SeqListFind(SL* ps, SLDataType x);
// ָ��pos�±�λ�ò���
void SeqListInsert(SL* ps, int pos, SLDataType x);
// ɾ��posλ�õ�����
void SeqListErase(SL* ps, int pos);
