#include <stdlib.h>


typedef struct LNode {                     //定义
	int data;
	struct LNode *next;

}LNode, *LinkList;

bool initList(LinkList &L) {              //初始化
	L = (LNode*)malloc(sizeof(LNode));
	if (L == NULL)
		return false;
	L->next = NULL;
	return true;
}

bool ListInsert(LinkList& L, int i, int e) {           //带头结点链表插入操作
	if (i < 1)
		return false;
	LNode* p;                                        //p指向当前扫描节点
	int j = 0;                                       //当前p指向的是第几个节点
	p = L;											//L指向头结点				
	while (p != NULL && j < i - 1) {                //循环找到i-1号节点
		p = p->next;
		j++;
	}
	if (p == NULL)
		return false;
	LNode *s = (LNode*)malloc(sizeof(LNode)); 
	s->data = e;              
	s->next = p->next;
	p->next = s;                                    //讲结点s连接到p之后
	return true;
}

int main() {
	LinkList L;

}