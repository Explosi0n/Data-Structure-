#include <stdlib.h>
typedef struct LinkNode {                              //链式队列
	int data;
	struct LinkNode* next;
}LinkNode;

typedef struct {
	struct LinkNode* front, * rear;                   //链式队列结点
}LinkQueue;

void InitQueue(LinkQueue &Q){                          //初始化（带头结点）
	Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));
	Q.front->next = NULL;
}

void EnQueue(LinkQueue& Q, int x) {                   //入队（带头结点）
	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = x;
	s->next = NULL;
	Q.rear->next = s;
	Q.rear = s;
}
bool DeQueue(LinkQueue& Q, int& x) {                 //出队（带头结点）
	if (Q.rear == Q.front)
		return false;
	LinkNode *p = Q.front->next;
	x = p->data;
	Q.front->next = p->next;
	if (Q.rear == p)
		Q.rear = Q.front;
	free(p);
	return true;
}

void InitQueue1(LinkQueue &Q) {                       //初始化（不带头结点） 
	Q.front = NULL;
	Q.rear = NULL;
}

void EnQueue1(LinkQueue &Q,int x) {                     //入队（不带头结点）
	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = x;
	s->next = NULL;
	if (Q.front == NULL) {
		Q.front = s;
		Q.rear = s;
	}
	else {
		Q.rear->next = s;
		Q.rear = s;

	}

}
bool DeQueue1(LinkQueue& Q, int& x) {                 //出队（不带头结点）
	if (Q.front == NULL)
		return false;
	LinkNode* p = Q.front;
	x = p->data;
	Q.front = p->next;
	if (p == Q.rear) {
		Q.front = NULL;
		Q.rear = NULL;
	}
	free(p);
	return true;
}