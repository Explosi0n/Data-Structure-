#include <Stdlib.h>
typedef struct LNode {
	int data;
	struct LNode* next;

}NLode,*LinkList;

bool InsertNextNLode(LNode *p,int e) {               //������
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

bool InsertPriorLNode(LNode *p , int e){              //ǰ����� �����pǰ����ָ��Ԫ��e��
	if (p == NULL)
		return false;
	LNode* s = (LNode*)malloc(sizeof(LNode));
	
	s->data = p->data;
	p->next = s;
	s->next = p->next;
	p->data = e;
	return true;
}     

bool InsertPriorLNode(LNode *p, LNode *s) {              //ǰ�����(�ڽ��p֮ǰ������s)
	if (p == NULL|| s ==NULL)
		return false;
	s->next = p->next;
	p->next = s;
	int temp = p->data;
	p->data = s->data;
	s->data = temp;
	return true;
}
