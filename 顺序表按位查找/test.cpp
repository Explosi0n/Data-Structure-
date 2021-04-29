#include <stdio.h>
#define MaxSize 10 
typedef struct {
	int data[MaxSize];
	int length;
}SqList;

void InitList(SqList& L) {					     //初始化顺序表
	L.length = 0;
}

int GetElem(SqList L, int i) {              //顺序表按位查询
 	if (i<1 || i>L.length)						//判断i取值
		return -1;
	return L.data[i - 1];             //第i位元素也就是下标i-1的元素                     
}
int main() {                                     //测试
	SqList L;
	InitList(L);
	for (int i = 0; i < 5; i++) {
		L.data[i] = i;                           //随意放入几个元素
		L.length++;
		
	}
	int j = 1;
	int p = GetElem(L, j);
	if(p!=-1)
		printf("第%d号元素为%d\n", j, p);
	else
		printf("位序i不合法");

}