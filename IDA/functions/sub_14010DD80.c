//----- (000000014010DD80) ----------------------------------------------------
__int64 __fastcall sub_14010DD80(_QWORD** a1, __m128i* a2)
{
	__m128i* v2; // r14
	int* v5; // rsi
	int* v6; // rax
	__int64 v7; // r8
	__int64 v8; // rcx
	int* v9; // rdi
	__int64 v10; // rax
	bool v11; // zf
	__int64 v12; // rax
	__int64 i; // rax
	unsigned int v14; // esi
	int* v15; // rax
	__int64 v16; // r15
	char v17; // al
	__int64 v18; // rbx
	__int64 v19; // rax
	__int64 v20; // [rsp+20h] [rbp-48h] BYREF
	__m128i* v21; // [rsp+28h] [rbp-40h]
	int* v22; // [rsp+30h] [rbp-38h]
	int* v23; // [rsp+38h] [rbp-30h]
	__int64 v24; // [rsp+78h] [rbp+10h] BYREF

	v2 = a2;
	if (!a2)
		return 2147942487i64;
	v5 = *(int**)(qword_140C63650 + 784);
	v6 = sub_14018B280(16i64, 0);
	v8 = (__int64)(v6 + 4);
	v9 = v6;
	v21 = (__m128i*)v6;
	v22 = v6;
	v23 = v6 + 4;
	if (v6)
		*(_WORD*)v6 = 0;
	if (v5 && *(_WORD*)v5)
	{
		v10 = 0i64;
		do
			v11 = *((_WORD*)v5 + ++v10) == 0;
		while (!v11);
		if ((2 * v10) >> 1)
			sub_14001C310(&v20, v5, (int*)((char*)v5 + 2 * v10));
		else
			sub_1407DB590(v9, v5, 0i64);
		v12 = 0i64;
		do
			v11 = *((_WORD*)&unk_1409D55F4 + ++v12) == 0;
		while (!v11);
		sub_14001C310(&v20, (int*)&unk_1409D55F4, (int*)((char*)&unk_1409D55F4 + 2 * v12));
		v9 = (int*)v21;
	}
	if ((unsigned int)sub_1401B58D0(v8, v2, v7))
		goto LABEL_22;
	if (!v5 || !*(_WORD*)v5)
		goto LABEL_21;
	for (i = 0i64; v2->m128i_i16[i]; ++i)
		;
	sub_14001C310(&v20, v2->m128i_i32, (int*)((char*)v2->m128i_i32 + 2 * i));
	v9 = (int*)v21;
	v2 = v21;
	if (sub_1400FE590(v21->m128i_i32))
	{
	LABEL_22:
		v15 = sub_14018B280(16i64, 0);
		v16 = (__int64)v15;
		if (v15)
			*(_WORD*)v15 = 0;
		v24 = 0i64;
		v17 = sub_1400E27B0(qword_140C63650, v2, &v24);
		v18 = v24;
		if (v17)
		{
			v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v24 + 16i64))(v24);
			v14 = sub_14010DFB0(a1, v19);
		}
		else
		{
			v14 = -2147467259;
		}
		if (v18)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
		if (v16)
			sub_14018B900(v16, 0);
	}
	else
	{
	LABEL_21:
		v14 = -2147467259;
	}
	if (v9)
		sub_14018B900((__int64)v9, 0);
	return v14;
}
// 14010DEA2: variable 'v8' is possibly undefined
// 14010DEA2: variable 'v7' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;

