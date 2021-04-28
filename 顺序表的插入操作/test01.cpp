#include <stdio.h>
#define MaxSize 10 
typedef struct 
{
	int data[MaxSize];
	int length;

}SqList;

void InitList(SqList &L)
{
	L.length = 0;

}
bool ListInsert(SqList& L, int i , int e  )
{
	if (i > L.length + 1 || i < 1)                              //判断i值是否有效
		return false;
	if (L.length >= MaxSize)
		return false;
	for (int j = L.length; j >= i; j--)                        //将第i个及以后的元素后移一位
		L.data[j] = L.data[j - 1];
	L.data[i - 1] = e;                                         //在位置i放入e
	L.length++ ;
	return true;
}

int main() {
	SqList L;
	InitList(L);
	for (int i = 0; i < 5; i++) {
		L.data[i] = i;
		L.length++;
	}
		printf("插入前的顺序表\n");
	for(int i= 0; i<L.length ; i++)
		printf("L.data[%d]=%d\n",i,L.data[i]);
	if (ListInsert(L, 5, 12)) {
		printf("插入后的顺序表\n");
		for (int i = 0; i < L.length; i++)
			printf("L.data[%d]=%d\n", i, L.data[i]);
	}
	else
		printf("插入失败，i不合法或表已满\n");
	return 0;
}

