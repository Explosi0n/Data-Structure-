#include<stdio.h>
#include <stdlib.h>
#define InitSize 10

typedef struct {                                                    //定义动态分配的顺序表
	int *data;
	int MaxSize;
	int length;
}SeqList;

void InitList(SeqList &L) {                                        //初始化
	L.data = (int*)malloc(InitSize * sizeof(int));
	L.length = 0;
	L.MaxSize = InitSize;

}
void IncreaseSize(SeqList &L, int len) {                          //增加顺序表长度
	int *p = L.data;                                              
	L.data = (int*)malloc((L.MaxSize + len) * sizeof(int));
	for (int i = 0; i < L.length; i++) {
		L.data[i] = p[i];
	}
	L.MaxSize = L.MaxSize + len;
	free(p);

}
int main() {

	SeqList L;
	InitList(L);
	IncreaseSize(L, 3);


	return 0;
}