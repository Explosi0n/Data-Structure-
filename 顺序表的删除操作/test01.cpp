#include <stdio.h>
#define MaxSize 10 
typedef struct
{
	int data[MaxSize];
	int length;

}SqList;

void InitList(SqList& L)
{
	L.length = 0;

}
bool ListDelete(SqList &L , int i , int &e) 
{	
	if(i<1 || i>L.length)
	return false;
	e = L.data[i - 1];                                       //将要删除的元素赋值给e
	for (int j = i; j <L.length; j++)
		L.data[j - 1] = L.data[j];                           //将第j个元素之后的元素前移
	L.length--;
	return true;
}

int main() {
	SqList L;
	InitList(L);
	for (int i = 0; i < 5; i++) {
		L.data[i] = i;
		L.length++;
	}
	int e = -1;
	
	printf("删除的顺序表\n");
	for (int i = 0; i < L.length; i++)
		printf("L.data[%d]=%d\n", i, L.data[i]);
	if (ListDelete(L, 6, e))
	{
		printf("删除成功，已删除值为%d的元素\n", e);
		printf("删除后的顺序表\n");
		for (int i = 0; i < L.length; i++)
			printf("L.data[%d]=%d\n", i, L.data[i]);
	}
	else
		printf("删除失败i不合法");
	return 0;
}

