#define MaxSize 250
typedef struct {
	char ch[MaxSize];
	int length;
}SString;
int Index(SString S, SString T) {
	int k = 1;
	int i = k;
	int j = 1;
	while (i <= S.length && j <= T.length) {
		if (S.ch[i] == T.ch[j]) {
			++i;
			++j;
		}
		else {
			k++;
			i = k;
			j = 1;
		}
		
	}
	if (j > T.length)
		return k;
	else
		return 0;

}