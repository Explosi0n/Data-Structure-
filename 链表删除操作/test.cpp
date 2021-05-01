#include <stdlib.h>
typedef struct LNode {
	int data;
	struct LNode* next;

}LNode,*LinkList;

bool ListDelete(LinkList& L, int i, int& e) {       //按位删除
	if (i < 1)
		return false;
	LNode *p;
	int j = 0;
	p = L;
	while (p != NULL && j < i - 1) {                //定位到i-1位结点
		p = p->next;
		j++;
	}
	if (p == NULL)
		return false;
	if (p->next ==NULL)
		return false;
	LNode *q = p->next;                            //q指向被删除结点
	e = q->data;                                   //e返回被删除结点的值
	p->next = q->next;                             
	free(q);                                       //释放被删除结点
	return true;
}

bool DeleteLNode(LNode* p) {                       //删除指定结点
	if (p == NULL)
		return false;
	LNode* q = p->next;
	p->data = p->next->data;
	p->next = q->next;
	free(q);
	return true;
}                   

