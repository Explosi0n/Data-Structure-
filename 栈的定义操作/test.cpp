#define MaxSize 10
typedef struct {                    //栈定义
	int data[MaxSize];
	int top;
}SqStact;

void InitStact(SqStact& S) {       //初始化
	S.top = -1;
}

bool Push(SqStact& S, int x) {           //新元素入栈
	if (S.top == MaxSize - 1)            //栈满
		return false;
	S.top = S.top + 1;                   //指针+1
	S.data[S.top] = x;
	return true;
}

bool Pop(SqStact& S, int& x) {           //元素出栈
	if (S.top == -1)                     //栈空
		return false;
	x = S.data[S.top];
	S.top = S.top - 1;                   //指针-1
	return true;
}

bool GetTop(SqStact S,int &x ){         //读取栈顶元素       
	if (S.top == -1)
		return false;
	x = S.data[S.top];
	return true;
}