#include <stdlib.h>
typedef struct DNode {                             // ����
	int data;
	struct DNode* prior, * next;
}DNode,*DLinkList;

bool InitDLinkList(DLinkList &L) {                //��ʼ��
	L = (DNode*)malloc(sizeof(DNode*));
	if (L == NULL)
		return false;
	L->prior = NULL;
	L->next = NULL;
	return true;
}

bool Empty(DLinkList L) {                          //�п�
	if (L->next == NULL)
		return true;
	else
		return false;
}