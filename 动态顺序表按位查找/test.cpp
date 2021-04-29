#include <stdio.h>
#include <stdlib.h>
#define InitSize 10
typedef struct {
	int* data;
	int MaxSize;
	int length;
}SeqList;

void InitList(SeqList& L) {                                //初始化
	L.data = (int*)malloc(sizeof(int)*InitSize);
	L.length = 0;
	L.MaxSize = InitSize;
}

int GetElem(SeqList L, int i) {                           //查找操作 动态分配方式跟静态分配通用
	return L.data[i - 1];

}
