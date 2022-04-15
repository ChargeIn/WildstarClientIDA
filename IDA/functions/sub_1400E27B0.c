//----- (00000001400E27B0) ----------------------------------------------------
char __fastcall sub_1400E27B0(__int64 a1, __m128i* a2, __int64* a3)
{
	__int64 v5; // rax
	int* i; // rbp
	__int64 v8; // rbx
	unsigned __int64 v9; // rbx
	_QWORD* v10; // r14
	_QWORD* v11; // rsi
	_QWORD* v12; // rbx
	void(__fastcall * **v13)(_QWORD); // rcx
	int* v14; // rax
	__int64 v15; // rax
	__int64 v16; // rbx
	bool v18; // zf
	int* v19; // rsi
	__int64 v20; // rax
	__int64 v21; // r14
	_WORD* v22; // rax
	__int64 v23; // rbx
	int v24; // [rsp+20h] [rbp-48h] BYREF
	int* v25; // [rsp+28h] [rbp-40h]
	_WORD* v26; // [rsp+30h] [rbp-38h]
	__int64 v27; // [rsp+38h] [rbp-30h]
	_QWORD* v28; // [rsp+88h] [rbp+20h]

	v5 = 0i64;
	for (i = 0i64; a2->m128i_i16[v5]; ++v5)
		;
	v8 = (2 * v5) >> 1;
	if ((unsigned __int64)(v8 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		i = sub_14018B280(2 * (v8 + 1), 0);
	v9 = 2 * v8;
	sub_1407DB590(i, a2->m128i_i32, v9);
	if ((int*)((char*)i + v9))
		*(_WORD*)((char*)i + v9) = 0;
	v10 = *(_QWORD**)(a1 + 1968);
	v11 = v10;
	v12 = (_QWORD*)v10[1];
	while (v12)
	{
		if ((int)sub_14018E2C0(v12[5], (unsigned __int16*)i) < 0)
		{
			v12 = (_QWORD*)v12[3];
		}
		else
		{
			v11 = v12;
			v12 = (_QWORD*)v12[2];
		}
	}
	if (v11 == v10 || (v28 = v11, (int)sub_14018E2C0((__int64)i, (unsigned __int16*)v11[5]) < 0))
		v28 = v10;
	if (i)
		sub_14018B900((__int64)i, 0);
	if (v28 != *(_QWORD**)(a1 + 1968))
	{
		v13 = (void(__fastcall***)(_QWORD))v28[8];
		*a3 = (__int64)v13;
		if (v13)
			(**v13)(v13);
		return 1;
	}
	v14 = sub_14018B280(872i64, 0);
	if (v14)
		v15 = sub_140129AF0((__int64)v14, a2);
	else
		v15 = 0i64;
	*a3 = v15;
	v24 = 0;
	if (!sub_14012A290(v15) || (v16 = *a3, v24 = -1, sub_14012A290(v16), *(int*)(v16 + 776) >= 0))
	{
		v18 = a2->m128i_i16[0] == 0;
		v19 = 0i64;
		v25 = 0i64;
		v27 = 0i64;
		v20 = 0i64;
		if (!v18)
		{
			do
				++v20;
			while (a2->m128i_i16[v20]);
		}
		v21 = (2 * v20) >> 1;
		if ((unsigned __int64)(v21 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v19 = sub_14018B280(2 * (v21 + 1), 0);
			v25 = v19;
			v27 = (__int64)v19 + 2 * v21 + 2;
		}
		sub_1407DB590(v19, a2->m128i_i32, 2 * v21);
		v22 = (_WORD*)v19 + v21;
		v26 = v22;
		if (v22)
			*v22 = 0;
		v23 = *a3;
		*(_QWORD*)sub_1400ED970(a1 + 1960, (__int64)&v24) = v23;
		if (v19)
			sub_14018B900((__int64)v19, 0);
		return 1;
	}
	if (*a3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)*a3 + 8i64))(*a3);
		*a3 = 0i64;
	}
	return 0;
}

