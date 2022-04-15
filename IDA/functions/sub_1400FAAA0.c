//----- (00000001400FAAA0) ----------------------------------------------------
__int64 __fastcall sub_1400FAAA0(__int64 a1, __int64 a2, unsigned int* a3)
{
	_QWORD* v5; // rax
	__int64 v6; // r10
	__int64 v7; // r8
	__int64 v8; // rbx
	unsigned __int16* v9; // r11
	unsigned __int64* v10; // rdx
	unsigned __int64 v11; // r8
	unsigned __int64 v12; // r9
	__m128* v13; // r9
	unsigned int* v14; // rax
	__int64 v15; // rcx
	unsigned int* v16; // rbx
	unsigned __int64 v17; // rax
	__int64 v18; // r8
	int v19; // edx
	__int64 v21; // [rsp+20h] [rbp-28h] BYREF
	__int64 v22; // [rsp+28h] [rbp-20h]
	unsigned int v23; // [rsp+50h] [rbp+8h] BYREF

	v5 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v7 = *(_QWORD*)(v6 + 16);
	*(_QWORD*)v7 = *v5;
	*(_DWORD*)(v7 + 8) = *((_DWORD*)v5 + 2);
	*(_QWORD*)(v6 + 16) += 16i64;
	v8 = *(_QWORD*)(a1 + 16);
	v10 = (unsigned __int64*)sub_14018F0E0(&v21, v9)[1];
	if (v10)
	{
		v11 = -1i64;
		do
			++v11;
		while (*((_BYTE*)v10 + v11));
		sub_140058710(v8, v10, v11);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v8 + 16) + 8i64) = 0;
		*(_QWORD*)(v8 + 16) += 16i64;
	}
	if (v22)
		sub_14018B900(v22, 0);
	sub_14005E8E0(
		*(_QWORD*)(a1 + 16),
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) - 32i64,
		(int*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) - 16i64),
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) - 16i64);
	v12 = *a3;
	if (v12 >= *(_QWORD*)(qword_140C63678 + 48))
		v13 = *(__m128**)(qword_140C63678 + 40);
	else
		v13 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v12);
	v14 = sub_140143880(&v23, *(_QWORD**)(a1 + 16), 0xFFFFFFFF, v13);
	v15 = qword_140C63678;
	v16 = v14;
	if (a3 != v14)
	{
		sub_1401429A0(qword_140C63678, *a3);
		v17 = *v16;
		v15 = qword_140C63678;
		*a3 = v17;
		if (v17 < *(_QWORD*)(v15 + 48))
		{
			v18 = 32i64 * (unsigned int)v17 + *(_QWORD*)(v15 + 40);
			v19 = *(_DWORD*)(v18 + 16);
			if ((unsigned int)(v19 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v18 + 16) = v19 + 1;
		}
	}
	sub_1401429A0(v15, v23);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 32i64;
	return 0i64;
}
// 1400FAACF: variable 'v6' is possibly undefined
// 1400FAAF1: variable 'v9' is possibly undefined
// 140C63678: using guessed type __int64 qword_140C63678;

