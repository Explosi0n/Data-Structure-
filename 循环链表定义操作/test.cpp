#include <stdlib.h>
typedef struct LNode {					//ѭ����������
	int data;
	struct LNode* next;
}LNode, * LinkLitst;

bool InitList(LinkLitst& L) {            //ѭ���������ʼ��
	L = (LNode*)malloc(sizeof(LNode*));
	if (L == NULL)
		return false;
	L->next = L;
	return true;
}


bool Empty(LinkLitst L) {              //ѭ���������п�
	if (L->next == L)
		return true;
	else
		return false;
}

bool isTail(LinkLitst L, LNode* p) {     //ѭ���������жϽ��p�Ƿ���β��
	if (p->next == L)
		return true;
	else
		return false;
}
    
typedef struct DNode {                  //ѭ��˫���� ����
	int data;
	struct DNode* next, *prior;
}DNode,*DLinkList;

bool InitList(DLinkList& L) {          //ѭ��˫�����ʼ��
	L = (DNode*)malloc(sizeof(DNode));
	if (L == NULL)
		return false;
	L->next = L;
	L->prior = L;
	return true;
}