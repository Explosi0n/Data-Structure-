#include <stdio.h>
#include <stdlib.h>
typedef struct LNode {                           //¶¨Òå
	int data;
	struct LNode* next;
}LNode,*LinkList;

LinkList List_TailInsert(LinkList& L) {
	int x;
	L = (LinkList)malloc(sizeof(LNode));
	LNode* s, * r = L;
	scanf("%d",&x);
	while (x != 9999) {
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		r->next = s;
		r = s;
		scanf("%d", &x);
	}
	r->next = NULL;
	return L;
}