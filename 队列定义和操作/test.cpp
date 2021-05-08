#define MaxSize 10
typedef struct {                      //���ж���
	int data[MaxSize];
	int front, rear;
}SqQueue;

void InitQueue(SqQueue& Q) {           //��ʼ��
	Q.front = Q.rear = 0;
}

bool QueueEmpty(SqQueue Q) {          //�����п�
	if (Q.front == Q.rear)
		return true;
	else
		return false;
}

bool EnQueue(SqQueue& Q, int x) {                  //����
	if ((Q.rear+1)%MaxSize ==Q.front )
		return false;
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear + 1)%MaxSize;
	return true;
}

bool DeQueue(SqQueue& Q, int& x) {               //����
	if (Q.front == Q.front)
		return false;
	x = Q.data[Q.front];
	Q.front = (Q.front + 1) % MaxSize;
	return true;
}
bool GetHead(SqQueue Q, int& x) {              //����ͷԪ��
	if(Q.rear == Q.front)
	x = Q.data[Q.front];
	return true;
}

