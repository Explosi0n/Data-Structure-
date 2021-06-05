#define MaxSize 255
typedef struct {                        //串顺序存储定义
	char ch[MaxSize];
	int length;
}SString;


bool SubString(SString& Sub, SString S, int pos, int len) {          //求子串:用Sub返回S第pos个字符起长度为len的子串
	if (pos + len - 1 > S.length)
		return false;
	for (int i = pos; i < pos + len; i++)
		Sub.ch[i - pos + 1] = S.ch[i];
	Sub.length = len;
	return true;
}

int StrCompare(SString S, SString T) {                          //比较两个字符串大小:S>T，返回值>0；S=T，返回值=0；S<T返回值<0
	for (int i = 1; i <= S.length && i <= T.length; i++) {
		if (S.ch[i] != T.ch[i])
			return S.ch[i] - T.ch[i];
	}
	return S.length - T.length; 
}
int Index(SString S, SString T) {                             //定位子串T在主串S第一次出现的位置，不存在则返回0
	int i = 1, n = S.length, m = T.length;
	while (i <= n - m + 1) {
		SString sub;
		SubString(sub, S, i, m);                              
		if (StrCompare(sub, T) != 0)
			i++;
		else 
			return i;
	}
	return 0;
}