#include <stdlib.h>
typedef struct LNode {
	int data;
	struct LNode* next;
}LNode,*LinkList;

LNode * GetElem(LinkList L, int i) {        //��λ����
	if (i < 0)
		return NULL;
	LNode* p;
	int j = 0;
	p = L;
	while (p!= NULL&& j<i) {
		p = p->next;
		j++;
	}
	
	return p;

}

LNode* LocateElem(LinkList L, int e) {       //��ֵ����
	LNode* p = L->next;
	
	while (p != NULL&& p->data!=e) {
		p = p->next;
	}
	return p;
}


int Length(LinkList L) {                      //������
	LNode* p = L;
	int len = 0;
	while (p ->next!= NULL) {
		p = p->next;
		len++;
	}
	return len;
}