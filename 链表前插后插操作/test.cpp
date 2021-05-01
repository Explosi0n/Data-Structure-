#include <Stdlib.h>
typedef struct LNode {
	int data;
	struct LNode* next;

}NLode,*LinkList;

bool InsertNextNLode(LNode *p,int e) {               //后插操作
	if (p == NULL)
		return false;
	NLode* s = (NLode*)malloc(sizeof(NLode));
	if (s == NULL)
		return false;
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}

bool InsertPriorLNode(LNode *p , int e){              //前插操作 （结点p前插入指定元素e）
	if (p == NULL)
		return false;
	LNode* s = (LNode*)malloc(sizeof(LNode));
	
	s->data = p->data;
	p->next = s;
	s->next = p->next;
	p->data = e;
	return true;
}     

bool InsertPriorLNode(LNode *p, LNode *s) {              //前插操作(在结点p之前插入结点s)
	if (p == NULL|| s ==NULL)
		return false;
	s->next = p->next;
	p->next = s;
	int temp = p->data;
	p->data = s->data;
	s->data = temp;
	return true;
}
