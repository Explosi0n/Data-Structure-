#include <stdio.h>
#define maxSize 10
typedef struct
{
	int data[maxSize];
	int length;
}Sqlist;


void initList(Sqlist &L){

L.length = 0;
}



int main()
{
	Sqlist L;
	initList(L);
	for (int i = 1; i < 10; i++) {
		printf("%d\n",L.data[i]);
	}
	
	return 0;

}