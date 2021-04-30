#include <stdlib.h>


typedef struct LNode {                     //����
	int data;
	struct LNode *next;

}LNode, *LinkList;

bool initList(LinkList &L) {              //��ʼ��
	L = (LNode*)malloc(sizeof(LNode));
	if (L == NULL)
		return false;
	L->next = NULL;
	return true;
}

bool ListInsert(LinkList& L, int i, int e) {           //��ͷ�������������
	if (i < 1)
		return false;
	LNode* p;                                        //pָ��ǰɨ��ڵ�
	int j = 0;                                       //��ǰpָ����ǵڼ����ڵ�
	p = L;											//Lָ��ͷ���				
	while (p != NULL && j < i - 1) {                //ѭ���ҵ�i-1�Žڵ�
		p = p->next;
		j++;
	}
	if (p == NULL)
		return false;
	LNode *s = (LNode*)malloc(sizeof(LNode)); 
	s->data = e;              
	s->next = p->next;
	p->next = s;                                    //�����s���ӵ�p֮��
	return true;
}

int main() {
	LinkList L;

}