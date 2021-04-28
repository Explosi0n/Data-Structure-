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
	if (i > L.length + 1 || i < 1)                              //�ж�iֵ�Ƿ���Ч
		return false;
	if (L.length >= MaxSize)
		return false;
	for (int j = L.length; j >= i; j--)                        //����i�����Ժ��Ԫ�غ���һλ
		L.data[j] = L.data[j - 1];
	L.data[i - 1] = e;                                         //��λ��i����e
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
		printf("����ǰ��˳���\n");
	for(int i= 0; i<L.length ; i++)
		printf("L.data[%d]=%d\n",i,L.data[i]);
	if (ListInsert(L, 5, 12)) {
		printf("������˳���\n");
		for (int i = 0; i < L.length; i++)
			printf("L.data[%d]=%d\n", i, L.data[i]);
	}
	else
		printf("����ʧ�ܣ�i���Ϸ��������\n");
	return 0;
}

