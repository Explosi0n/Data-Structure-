#include <stdio.h>
#define MaxSize 10 
typedef struct {
	int data[MaxSize];
	int length;
}SqList;

void InitList(SqList& L) {					     //��ʼ��˳���
	L.length = 0;
}

int GetElem(SqList L, int i) {              //˳���λ��ѯ
 	if (i<1 || i>L.length)						//�ж�iȡֵ
		return -1;
	return L.data[i - 1];             //��iλԪ��Ҳ�����±�i-1��Ԫ��                     
}
int main() {                                     //����
	SqList L;
	InitList(L);
	for (int i = 0; i < 5; i++) {
		L.data[i] = i;                           //������뼸��Ԫ��
		L.length++;
		
	}
	int j = 1;
	int p = GetElem(L, j);
	if(p!=-1)
		printf("��%d��Ԫ��Ϊ%d\n", j, p);
	else
		printf("λ��i���Ϸ�");

}