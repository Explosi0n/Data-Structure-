#include <stdio.h>
#include <stdlib.h>
#define InitSize 10
typedef struct {
	int* data;
	int MaxSize;
	int length;
}SeqList;

void InitList(SeqList& L) {                                //��ʼ��
	L.data = (int*)malloc(sizeof(int)*InitSize);
	L.length = 0;
	L.MaxSize = InitSize;
}

int GetElem(SeqList L, int i) {                           //���Ҳ��� ��̬���䷽ʽ����̬����ͨ��
	return L.data[i - 1];

}
