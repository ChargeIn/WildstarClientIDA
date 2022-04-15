//----- (0000000140185160) ----------------------------------------------------
void __fastcall sub_140185160(__int64 a1, __int64 a2)
{
	int* v2; // rdi
	__int64 v4; // rax
	int* v5; // rsi
	__int64 v6; // rbx
	unsigned __int64 v7; // rbx
	_WORD* v8; // r14
	__int64 v9; // rbp
	__int64 v10; // rdi
	_QWORD* v11; // rbx
	int v12; // eax
	__int64 v13; // rbx
	__int64 v14; // [rsp+50h] [rbp+8h] BYREF

	v2 = *(int**)(a2 + 24);
	v4 = 0i64;
	v5 = 0i64;
	if (*(_WORD*)v2)
	{
		do
			++v4;
		while (*((_WORD*)v2 + v4));
	}
	v6 = (2 * v4) >> 1;
	if ((unsigned __int64)(v6 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v5 = sub_14018B280(2 * (v6 + 1), 0);
	v7 = 2 * v6;
	sub_1407DB590(v5, v2, v7);
	v8 = (_WORD*)((char*)v5 + v7);
	if ((int*)((char*)v5 + v7))
		*v8 = 0;
	v9 = *(_QWORD*)(a1 + 200);
	v10 = v9;
	v11 = *(_QWORD**)(v9 + 8);
	while (v11)
	{
		if ((int)sub_1400454D0(v11[5], v11[6], (unsigned __int16*)v5, (__int64)v8) < 0)
		{
			v11 = (_QWORD*)v11[3];
		}
		else
		{
			v10 = (__int64)v11;
			v11 = (_QWORD*)v11[2];
		}
	}
	if (v10 == v9
		|| (v12 = sub_1400454D0((__int64)v5, (__int64)v8, *(unsigned __int16**)(v10 + 40), *(_QWORD*)(v10 + 48)),
			v14 = v10,
			v12 < 0))
	{
		v14 = v9;
	}
	v13 = v14;
	if (v5)
		sub_14018B900((__int64)v5, 0);
	if (v13 != *(_QWORD*)(a1 + 200))
	{
		v14 = v13;
		sub_140186550(a1 + 192, &v14);
		if (!*(_QWORD*)(a1 + 208))
			sub_140185550(a1);
	}
}
// 140185550: using guessed type __int64 __fastcall sub_140185550(_QWORD);

