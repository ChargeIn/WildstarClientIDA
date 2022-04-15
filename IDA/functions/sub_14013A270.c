//----- (000000014013A270) ----------------------------------------------------
__int64 __fastcall sub_14013A270(__int64 a1, int* a2)
{
	__int64 v4; // rax
	int* v5; // rsi
	__int64 v6; // rbx
	unsigned __int64 v7; // rbx
	_WORD* v8; // r14
	_QWORD* v9; // rbp
	_QWORD* v10; // rdi
	_QWORD* v11; // rbx
	_QWORD* v13; // [rsp+40h] [rbp+8h]

	v4 = 0i64;
	v5 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v4;
		while (*((_WORD*)a2 + v4));
	}
	v6 = (2 * v4) >> 1;
	if ((unsigned __int64)(v6 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v5 = sub_14018B280(2 * (v6 + 1), 0);
	v7 = 2 * v6;
	sub_1407DB590(v5, a2, v7);
	v8 = (_WORD*)((char*)v5 + v7);
	if ((int*)((char*)v5 + v7))
		*v8 = 0;
	v9 = *(_QWORD**)(a1 + 48);
	v10 = v9;
	v11 = (_QWORD*)v9[1];
	while (v11)
	{
		if ((int)sub_1400454D0(v11[5], v11[6], (unsigned __int16*)v5, (__int64)v8) < 0)
		{
			v11 = (_QWORD*)v11[3];
		}
		else
		{
			v10 = v11;
			v11 = (_QWORD*)v11[2];
		}
	}
	if (v10 == v9 || (v13 = v10, (int)sub_1400454D0((__int64)v5, (__int64)v8, (unsigned __int16*)v10[5], v10[6]) < 0))
		v13 = v9;
	if (v5)
		sub_14018B900((__int64)v5, 0);
	if (v13 == *(_QWORD**)(a1 + 48))
		return 0i64;
	else
		return v13[8];
}

