#define MaxSize 10
typedef struct {                      //队列定义
	int data[MaxSize];
	int front, rear;
}SqQueue;

void InitQueue(SqQueue& Q) {           //初始化
	Q.front = Q.rear = 0;
}

bool QueueEmpty(SqQueue Q) {          //队列判空
	if (Q.front == Q.rear)
		return true;
	else
		return false;
}

bool EnQueue(SqQueue& Q, int x) {                  //进队
	if ((Q.rear+1)%MaxSize ==Q.front )
		return false;
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear + 1)%MaxSize;
	return true;
}

bool DeQueue(SqQueue& Q, int& x) {               //出队
	if (Q.front == Q.front)
		return false;
	x = Q.data[Q.front];
	Q.front = (Q.front + 1) % MaxSize;
	return true;
}
bool GetHead(SqQueue Q, int& x) {              //读队头元素
	if(Q.rear == Q.front)
	x = Q.data[Q.front];
	return true;
}

