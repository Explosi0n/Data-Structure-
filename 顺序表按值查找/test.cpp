#include <stdio.h>
#define MaxSize 10
typedef struct {
	int data[MaxSize];
	int length;
}SqList;

void InitList(SqList& L) {
	L.length = 0;
}

int LocataElem(SqList L, int e) {                           //∞¥÷µ≤È’“
	for (int i = 0; i < L.length; i++)
		if (L.data[i] == e)
			return i+1;
	return 0;
}