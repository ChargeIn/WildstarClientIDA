//----- (00000001400A7F20) ----------------------------------------------------
char* __fastcall sub_1400A7F20(_QWORD* a1, unsigned __int64 a2)
{
	__int64* v3; // rax
	__int64 v4; // r14
	int* v5; // rax
	_WORD* v6; // r8
	_WORD* v7; // rdx
	int* v8; // rsi
	int* i; // rbx
	__int64 v10; // rcx
	char* result; // rax
	unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF
	unsigned __int64 v13; // [rsp+48h] [rbp+10h] BYREF

	v13 = a2;
	v3 = (__int64*)&v12;
	v12 = (__int64)(a1[2] - a1[1]) >> 1;
	if (a2 >= v12)
		v3 = (__int64*)&v13;
	v4 = 2 * (*v3 + 1);
	v5 = sub_14018B280(v4, 0);
	v6 = (_WORD*)a1[2];
	v7 = (_WORD*)a1[1];
	v8 = v5;
	for (i = v5; v7 != v6; i = (int*)((char*)i + 2))
	{
		if (i)
			*(_WORD*)i = *v7;
		++v7;
	}
	if (i)
		*(_WORD*)i = 0;
	v10 = a1[1];
	if (v10)
		sub_14018B900(v10, 0);
	result = (char*)v8 + v4;
	a1[2] = i;
	a1[3] = (char*)v8 + v4;
	a1[1] = v8;
	return result;
}

