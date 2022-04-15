//----- (00000001400E2A10) ----------------------------------------------------
void __fastcall sub_1400E2A10(__int64 a1, int* a2)
{
	__int64 v4; // rax
	int* v5; // rsi
	__int64 v6; // rbx
	unsigned __int64 v7; // rbx
	__int64 v8; // rbp
	__int64 v9; // rdi
	_QWORD* v10; // rbx
	int v11; // eax
	__int64 v12; // rbx
	__int64 v13; // [rsp+40h] [rbp+8h] BYREF

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
	if ((int*)((char*)v5 + v7))
		*(_WORD*)((char*)v5 + v7) = 0;
	v8 = *(_QWORD*)(a1 + 1968);
	v9 = v8;
	v10 = *(_QWORD**)(v8 + 8);
	while (v10)
	{
		if ((int)sub_14018E2C0(v10[5], (unsigned __int16*)v5) < 0)
		{
			v10 = (_QWORD*)v10[3];
		}
		else
		{
			v9 = (__int64)v10;
			v10 = (_QWORD*)v10[2];
		}
	}
	if (v9 == v8 || (v11 = sub_14018E2C0((__int64)v5, *(unsigned __int16**)(v9 + 40)), v13 = v9, v11 < 0))
		v13 = v8;
	v12 = v13;
	if (v5)
		sub_14018B900((__int64)v5, 0);
	if (v12 != *(_QWORD*)(a1 + 1968))
	{
		v13 = v12;
		sub_1400EE260(a1 + 1960, &v13);
	}
}

