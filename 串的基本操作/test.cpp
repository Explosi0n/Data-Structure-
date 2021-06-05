#define MaxSize 255
typedef struct {                        //��˳��洢����
	char ch[MaxSize];
	int length;
}SString;


bool SubString(SString& Sub, SString S, int pos, int len) {          //���Ӵ�:��Sub����S��pos���ַ��𳤶�Ϊlen���Ӵ�
	if (pos + len - 1 > S.length)
		return false;
	for (int i = pos; i < pos + len; i++)
		Sub.ch[i - pos + 1] = S.ch[i];
	Sub.length = len;
	return true;
}

int StrCompare(SString S, SString T) {                          //�Ƚ������ַ�����С:S>T������ֵ>0��S=T������ֵ=0��S<T����ֵ<0
	for (int i = 1; i <= S.length && i <= T.length; i++) {
		if (S.ch[i] != T.ch[i])
			return S.ch[i] - T.ch[i];
	}
	return S.length - T.length; 
}
int Index(SString S, SString T) {                             //��λ�Ӵ�T������S��һ�γ��ֵ�λ�ã��������򷵻�0
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