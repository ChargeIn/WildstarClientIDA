//----- (00000001400BFB90) ----------------------------------------------------
_QWORD* __fastcall sub_1400BFB90(__int64 a1, _QWORD* a2, int a3, int* a4)
{
	__int64 v6; // rbx
	int* v8; // rax
	__int64 v9; // rbx
	int* v10; // rdi
	char v11[8]; // [rsp+20h] [rbp-28h] BYREF
	int* v12; // [rsp+28h] [rbp-20h]
	int* v13; // [rsp+30h] [rbp-18h]
	int* v14; // [rsp+38h] [rbp-10h]

	if (!a4 || !*(_WORD*)a4)
	{
		a2[1] = 0i64;
		a2[2] = 0i64;
		a2[3] = 0i64;
		v10 = sub_14018B280(2i64, 0);
		a2[1] = v10;
		a2[3] = (char*)v10 + 2;
		a2[2] = v10;
		sub_1407DB590(v10, dword_1409D2074, 0i64);
		a2[2] = v10;
		if (v10)
			*(_WORD*)v10 = 0;
		return a2;
	}
	if (a3 != 1)
	{
		v8 = sub_14018B280(16i64, 0);
		v9 = 0i64;
		v12 = v8;
		v13 = v8;
		v14 = v8 + 4;
		if (v8)
			*(_WORD*)v8 = 0;
		if ((unsigned int)sub_1400B8AA0(a4, (int*)"p", (__int64)v11))
		{
			a2[1] = v12;
			a2[2] = v13;
			a2[3] = v14;
			return a2;
		}
		a2[1] = 0i64;
		a2[2] = 0i64;
		a2[3] = 0i64;
		if (*(_WORD*)a4)
		{
			do
				++v9;
			while (*((_WORD*)a4 + v9));
		}
		sub_14001C1B0(a2, a4, (__int64)a4 + 2 * v9);
		if (v12)
		{
			sub_14018B900((__int64)v12, 0);
			return a2;
		}
		return a2;
	}
	v6 = 0i64;
	a2[1] = 0i64;
	a2[2] = 0i64;
	a2[3] = 0i64;
	if (*(_WORD*)a4)
	{
		do
			++v6;
		while (*((_WORD*)a4 + v6));
	}
	sub_14001C1B0(a2, a4, (__int64)a4 + 2 * v6);
	return a2;
}
// 1409D2074: using guessed type int dword_1409D2074[6];
// 1400BFB90: using guessed type char var_28[8];

