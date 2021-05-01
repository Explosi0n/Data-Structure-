#include <stdlib.h>
typedef struct LNode {
	int data;
	struct LNode* next;

}LNode,*LinkList;

bool ListDelete(LinkList& L, int i, int& e) {       //��λɾ��
	if (i < 1)
		return false;
	LNode *p;
	int j = 0;
	p = L;
	while (p != NULL && j < i - 1) {                //��λ��i-1λ���
		p = p->next;
		j++;
	}
	if (p == NULL)
		return false;
	if (p->next ==NULL)
		return false;
	LNode *q = p->next;                            //qָ��ɾ�����
	e = q->data;                                   //e���ر�ɾ������ֵ
	p->next = q->next;                             
	free(q);                                       //�ͷű�ɾ�����
	return true;
}

bool DeleteLNode(LNode* p) {                       //ɾ��ָ�����
	if (p == NULL)
		return false;
	LNode* q = p->next;
	p->data = p->next->data;
	p->next = q->next;
	free(q);
	return true;
}                   

