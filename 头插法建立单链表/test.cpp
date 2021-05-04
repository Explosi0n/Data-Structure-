#include <stdio.h>
#include<stdlib.h>
typedef struct LNode {
	int data;
	struct LNode* next;
}LNode,*LinkList;

LinkList List_HeadInsert(LinkList& L) {
	LNode* s;
	int x;
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	scanf("%d", &x);
	while (x != 9999) {
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		s->next = L->next;
		L->next = s;
		scanf("%d", &x);
	}
	return L;


}