#include <stdlib.h>
#undef NULL
#if defined(__cplusplus)
#define NULL 0
#else
#define NULL ((void *)0)
#endif
typedef struct LNode {
	int data;
	struct LNode* next;                  //ָ����һ���ڵ��ָ��
}LNode, * LinkList;

/*bool InitList(LinkList& L) {            //�����ʼ��(����ͷָ��)
	L = NULL;
	return true;
}

bool Empty(LinkList L) {                 //�����п�(����ͷָ��)
	return (L == NULL);

}*/

bool InitList(LinkList &L) {                           //�����ʼ��(��ͷָ��)
	L = (LNode*)malloc(sizeof(LNode));
	if (L == NULL)
		return false; 
	L->next = NULL;
	return true;
}
bool Empty(LinkList &L) {                              //�����п�(��ͷָ��)
	if (L->data == NULL)
		return true;
	else
		return false;
}

int main() {
	LinkList L;
	InitList(L);

}