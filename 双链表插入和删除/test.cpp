#include <stdlib.h>   
typedef struct NDode {
	int data;
	struct NDode* prior, * next;
}DNode,*DLinkList;

bool InsertNextDNode(DNode *p,DNode *s) {           //在p结点后插入s结点
	if (p == NULL || s == NULL)
		return false;
	s->next = p->next;
	if(p->next!=NULL)
		p->next->prior = s;
	s->prior = p;
	p->next = s;
	return true;
}

bool DeleteNextDNode(DNode* p) {                   //删除p结点后一个结点
	if (p == NULL|| p->next ==NULL)
		return false;
	DNode* q = p->next;
	p->next = q->next;
	if(q->next != NULL)
		q->next->prior = p;
	free(q);
	return true;
}