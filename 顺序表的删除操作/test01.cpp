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
	e = L.data[i - 1];                                       //��Ҫɾ����Ԫ�ظ�ֵ��e
	for (int j = i; j <L.length; j++)
		L.data[j - 1] = L.data[j];                           //����j��Ԫ��֮���Ԫ��ǰ��
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
	
	printf("ɾ����˳���\n");
	for (int i = 0; i < L.length; i++)
		printf("L.data[%d]=%d\n", i, L.data[i]);
	if (ListDelete(L, 6, e))
	{
		printf("ɾ���ɹ�����ɾ��ֵΪ%d��Ԫ��\n", e);
		printf("ɾ�����˳���\n");
		for (int i = 0; i < L.length; i++)
			printf("L.data[%d]=%d\n", i, L.data[i]);
	}
	else
		printf("ɾ��ʧ��i���Ϸ�");
	return 0;
}

