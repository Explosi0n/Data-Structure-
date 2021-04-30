#include <stdlib.h>
#undef NULL
#if defined(__cplusplus)
#define NULL 0
#else
#define NULL ((void *)0)
#endif
typedef struct LNode {
	int data;
	struct LNode* next;                  //指向下一个节点的指针
}LNode, * LinkList;

/*bool InitList(LinkList& L) {            //链表初始化(不带头指针)
	L = NULL;
	return true;
}

bool Empty(LinkList L) {                 //链表判空(不带头指针)
	return (L == NULL);

}*/

bool InitList(LinkList &L) {                           //链表初始化(带头指针)
	L = (LNode*)malloc(sizeof(LNode));
	if (L == NULL)
		return false; 
	L->next = NULL;
	return true;
}
bool Empty(LinkList &L) {                              //链表判空(带头指针)
	if (L->data == NULL)
		return true;
	else
		return false;
}

int main() {
	LinkList L;
	InitList(L);

}