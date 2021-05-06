#include <stdlib.h>
typedef struct LNode {					//循环单链表定义
	int data;
	struct LNode* next;
}LNode, * LinkLitst;

bool InitList(LinkLitst& L) {            //循环单链表初始化
	L = (LNode*)malloc(sizeof(LNode*));
	if (L == NULL)
		return false;
	L->next = L;
	return true;
}


bool Empty(LinkLitst L) {              //循环单链表判空
	if (L->next == L)
		return true;
	else
		return false;
}

bool isTail(LinkLitst L, LNode* p) {     //循环单链表判断结点p是否在尾部
	if (p->next == L)
		return true;
	else
		return false;
}
    
typedef struct DNode {                  //循环双链表 定义
	int data;
	struct DNode* next, *prior;
}DNode,*DLinkList;

bool InitList(DLinkList& L) {          //循环双链表初始化
	L = (DNode*)malloc(sizeof(DNode));
	if (L == NULL)
		return false;
	L->next = L;
	L->prior = L;
	return true;
}