#define MaxSize 10
typedef struct {                    //ջ����
	int data[MaxSize];
	int top;
}SqStact;

void InitStact(SqStact& S) {       //��ʼ��
	S.top = -1;
}

bool Push(SqStact& S, int x) {           //��Ԫ����ջ
	if (S.top == MaxSize - 1)            //ջ��
		return false;
	S.top = S.top + 1;                   //ָ��+1
	S.data[S.top] = x;
	return true;
}

bool Pop(SqStact& S, int& x) {           //Ԫ�س�ջ
	if (S.top == -1)                     //ջ��
		return false;
	x = S.data[S.top];
	S.top = S.top - 1;                   //ָ��-1
	return true;
}

bool GetTop(SqStact S,int &x ){         //��ȡջ��Ԫ��       
	if (S.top == -1)
		return false;
	x = S.data[S.top];
	return true;
}