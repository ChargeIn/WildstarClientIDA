//----- (0000000140040310) ----------------------------------------------------
__int64 __fastcall sub_140040310(__int64* a1)
{
	__int64 result; // rax
	__int64 v3; // rax
	unsigned int v4; // r14d
	unsigned __int64 v5; // rsi
	unsigned __int64 i; // rbx
	int* v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rsi
	__int64 v10; // rcx
	__int64 v11; // rbx
	__int64* v12; // rax
	__int64 v13; // rax
	__int64 v14; // rsi
	int* v15; // rax
	__int64 v16; // rdx
	__int64 v17; // rbp
	__int64 v18; // rbx
	int* v19; // rax
	int* v20; // r15
	int* v21; // rdx
	__int64 v22; // rcx
	unsigned __int64 v23; // rsi
	unsigned __int64 j; // rbx

	if (a1[9])
		return 0i64;
	v3 = qword_140C63618;
	v4 = 0;
	if (!qword_140C63618)
	{
		result = sub_14003E2C0();
		v4 = result;
		if ((int)result < 0)
			return result;
		v3 = qword_140C63618;
	}
	v5 = a1[16];
	a1[9] = v3;
	qword_140C63618 = 0i64;
	for (i = 0i64; i < v5; ++i)
	{
		v7 = *(int**)(a1[15] + 8 * i);
		if (v7)
			sub_1400E7190(a1[9], v7, 0);
	}
	sub_14003E5B0((__int64)a1);
	v8 = a1[9];
	*(_DWORD*)(v8 + 2568) = 0;
	*(_QWORD*)(v8 + 2504) = v8;
	sub_1400E9C20(v8, (__int64)&off_140C57760, 1);
	v9 = a1[9];
	v10 = *(_QWORD*)(v9 + 368);
	v11 = *(_QWORD*)(v10 + 24);
	v12 = sub_14010E2E0(*(_QWORD**)(v10 + 16), v11, L"CRB_TooltipBasic");
	if (v12 == (__int64*)v11)
		v13 = 0i64;
	else
		v13 = *v12;
	*(_QWORD*)(v9 + 2936) = v13;
	v14 = a1[9] + 2496;
	v15 = sub_14018B280(2584i64, 0);
	if (v15)
		v17 = sub_1401352F0(
			(__int64)v15,
			*(_QWORD*)(v14 + 8),
			*(_DWORD*)(v14 + 72),
			(int*)&unk_1409D0F74,
			(int*)L"Util",
			1,
			2,
			0,
			0i64);
	else
		v17 = 0i64;
	if (*(_BYTE*)(v17 + 312))
	{
		v18 = *(_QWORD*)(v14 + 24);
		v19 = sub_14018DB00(*(_QWORD*)(v14 + 16), v18 + 1, 8i64);
		v20 = v19;
		*(_QWORD*)&v19[2 * v18] = v17;
		v21 = *(int**)(v14 + 16);
		if (v21 != v19)
		{
			sub_1407DB590(v19, v21, 8i64 * *(_QWORD*)(v14 + 24));
			v22 = *(_QWORD*)(v14 + 16);
			if (v22)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v22 - 16) + 8i64))(v22 - 16);
			*(_QWORD*)(v14 + 16) = v20;
		}
		*(_QWORD*)(v14 + 24) = v18 + 1;
	}
	else
	{
		sub_1401356F0((_QWORD*)v17, v16);
		sub_14018B900(v17, 0);
	}
	v23 = a1[14];
	for (j = 0i64; j < v23; ++j)
		sub_1401395D0(a1[9] + 2496, (int*)L"PreGame", *(int**)(a1[13] + 8 * j), 1, 2, 0, 0i64);
	sub_140139AE0(a1[9] + 2496, 0i64);
	sub_1400E74A0(a1[9], 0.0);
	(*(void(__fastcall**)(__int64*))(*a1 + 136))(a1);
	return v4;
}
// 1400404E9: variable 'v16' is possibly undefined
// 1409F7D10: using guessed type wchar_t aUtil[5];
// 1409F7D28: using guessed type wchar_t aCrbTooltipbasi[17];
// 1409F7D50: using guessed type wchar_t aPregame[8];
// 140C57760: using guessed type char *off_140C57760;
// 140C63618: using guessed type __int64 qword_140C63618;

