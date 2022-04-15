//----- (00000001400B66A0) ----------------------------------------------------
__int64 __fastcall sub_1400B66A0(__int64 a1, int* a2, __int64 a3, _DWORD* a4)
{
	__int64 v6; // rax
	int* v8; // rsi
	__int64 v9; // rbx
	unsigned __int64 v10; // rbx
	_QWORD* v11; // rbp
	_QWORD* v12; // rdi
	_QWORD* v13; // rbx
	_QWORD* v15; // [rsp+40h] [rbp+8h]

	v6 = 0i64;
	v8 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v6;
		while (*((_WORD*)a2 + v6));
	}
	v9 = (2 * v6) >> 1;
	if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v8 = sub_14018B280(2 * (v9 + 1), 0);
	v10 = 2 * v9;
	sub_1407DB590(v8, a2, v10);
	if ((int*)((char*)v8 + v10))
		*(_WORD*)((char*)v8 + v10) = 0;
	v11 = *(_QWORD**)(a1 + 64);
	v12 = v11;
	v13 = (_QWORD*)v11[1];
	while (v13)
	{
		if ((int)sub_14018E2C0(v13[5], (unsigned __int16*)v8) < 0)
		{
			v13 = (_QWORD*)v13[3];
		}
		else
		{
			v12 = v13;
			v13 = (_QWORD*)v13[2];
		}
	}
	if (v12 == v11 || (v15 = v12, (int)sub_14018E2C0((__int64)v8, (unsigned __int16*)v12[5]) < 0))
		v15 = v11;
	if (v8)
		sub_14018B900((__int64)v8, 0);
	if (v15 == *(_QWORD**)(a1 + 64))
		return 0i64;
	if (a4)
		*a4 = 1;
	return v15[9];
}

