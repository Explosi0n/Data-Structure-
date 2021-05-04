#include <stdlib.h>
typedef struct DNode {                             // 定义
	int data;
	struct DNode* prior, * next;
}DNode,*DLinkList;

bool InitDLinkList(DLinkList &L) {                //初始化
	L = (DNode*)malloc(sizeof(DNode*));
	if (L == NULL)
		return false;
	L->prior = NULL;
	L->next = NULL;
	return true;
}

bool Empty(DLinkList L) {                          //判空
	if (L->next == NULL)
		return true;
	else
		return false;
}