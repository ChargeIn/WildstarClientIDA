//----- (00000001400B6BD0) ----------------------------------------------------
void __fastcall sub_1400B6BD0(__int64 a1, int* a2, int* a3)
{
	__int64 v6; // rdi
	__int64 v7; // rax
	int* v8; // rbp
	__int64 v9; // r15
	_WORD* v10; // rax
	int* v11; // rax
	char v12[8]; // [rsp+20h] [rbp-38h] BYREF
	int* v13; // [rsp+28h] [rbp-30h]
	_WORD* v14; // [rsp+30h] [rbp-28h]
	__int64 v15; // [rsp+38h] [rbp-20h]

	if (a2 && a3)
	{
		v6 = 0i64;
		v7 = 0i64;
		v8 = 0i64;
		v13 = 0i64;
		v15 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v7;
			while (*((_WORD*)a2 + v7));
		}
		v9 = (2 * v7) >> 1;
		if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v8 = sub_14018B280(2 * (v9 + 1), 0);
			v13 = v8;
			v15 = (__int64)v8 + 2 * v9 + 2;
		}
		sub_1407DB590(v8, a2, 2 * v9);
		v10 = (_WORD*)v8 + v9;
		v14 = v10;
		if (v10)
			*v10 = 0;
		v11 = sub_1400B8E10(a1 + 56, (__int64)v12);
		if (*(_WORD*)a3)
		{
			do
				++v6;
			while (*((_WORD*)a3 + v6));
		}
		sub_14001C480((__int64)v11, a3, (int*)((char*)a3 + 2 * v6));
		if (v8)
			sub_14018B900((__int64)v8, 0);
	}
}
// 1400B6BD0: using guessed type char var_38[8];

