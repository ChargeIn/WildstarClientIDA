//----- (000000014015AB40) ----------------------------------------------------
bool __fastcall sub_14015AB40(__m128* a1, __m128i* a2, _WORD* a3)
{
	__m128i* v4; // r15
	const __m128i* v7; // rax
	__int64 v8; // r8
	__int64 v9; // rdi
	__m128i* v10; // rsi
	__int64 v11; // rcx
	_WORD* v12; // r14
	__int64 v13; // rax
	bool v14; // zf
	int* v15; // rdx
	__int64 v16; // rax
	__int64 v17; // rcx
	__int64 v18; // r8
	bool v19; // bl
	__int64 v20; // [rsp+20h] [rbp-2C8h] BYREF
	__m128i* v21; // [rsp+28h] [rbp-2C0h]
	const __m128i* v22; // [rsp+30h] [rbp-2B8h]
	const __m128i* v23; // [rsp+38h] [rbp-2B0h]
	char v24[640]; // [rsp+40h] [rbp-2A8h] BYREF
	char* v25; // [rsp+2F8h] [rbp+10h] BYREF

	v4 = a2;
	if (!a2)
		return 0;
	v7 = (const __m128i*)sub_14018B280(16i64, 0);
	v9 = 0i64;
	v10 = (__m128i*)v7;
	v21 = (__m128i*)v7;
	v22 = v7;
	v23 = v7 + 1;
	if (v7)
		v7->m128i_i16[0] = 0;
	v11 = qword_140C63650;
	v12 = *(_WORD**)(qword_140C63650 + 784);
	if (v12 && *v12)
	{
		v13 = 0i64;
		do
			v14 = v12[++v13] == 0;
		while (!v14);
		v15 = *(int**)(qword_140C63650 + 784);
		if ((2 * v13) >> 1)
			sub_14001C310(&v20, v15, (int*)&v12[v13]);
		else
			sub_1407DB590(v10->m128i_i32, v15, 0i64);
		v16 = 0i64;
		do
			v14 = *((_WORD*)&unk_1409DBE6C + ++v16) == 0;
		while (!v14);
		sub_14001C310(&v20, (int*)&unk_1409DBE6C, (int*)((char*)&unk_1409DBE6C + 2 * v16));
		v10 = v21;
	}
	if ((unsigned int)sub_1401B58D0(v11, v4, v8))
		goto LABEL_22;
	if (!v12 || !*v12)
		goto LABEL_21;
	if (v4->m128i_i16[0])
	{
		do
			++v9;
		while (v4->m128i_i16[v9]);
	}
	sub_14001C310(&v20, v4->m128i_i32, (int*)((char*)v4->m128i_i32 + 2 * v9));
	v10 = v21;
	v4 = v21;
	if ((unsigned int)sub_1401B58D0(v17, v21, v18))
	{
	LABEL_22:
		sub_1401A72E0((__int64)v24);
		if ((int)sub_1401A7BD0((__int64)v24, v4) >= 0)
		{
			v25 = v24;
			v19 = sub_14015A980(a1, (__int64*)&v25, a3);
		}
		else
		{
			v19 = 0;
		}
		sub_1401A76A0((__int64)v24);
	}
	else
	{
	LABEL_21:
		v19 = 0;
	}
	if (v10)
		sub_14018B900((__int64)v10, 0);
	return v19;
}
// 14015AC71: variable 'v11' is possibly undefined
// 14015AC71: variable 'v8' is possibly undefined
// 14015ACB7: variable 'v17' is possibly undefined
// 14015ACB7: variable 'v18' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;

