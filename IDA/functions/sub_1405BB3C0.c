//----- (00000001405BB3C0) ----------------------------------------------------
int* __fastcall sub_1405BB3C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	__int64 v7; // r14
	unsigned __int64 i; // rbx
	wchar_t* v9; // rdx
	__int64 v10; // rax
	wchar_t* v11; // rax
	__int64 v12; // rax
	__int64 v13; // rax
	int* v14; // rdi
	__m128i* v15; // rbp
	__int64 v16; // rax
	__int64 v17; // rbx
	unsigned __int64 v18; // rbx
	__m128i* v19; // r15
	__int64 v20; // rax
	__int64 v21; // rax
	int* v22; // rdi
	__m128i* v23; // rsi
	__int64 v24; // rax
	__int64 v25; // rbx
	unsigned __int64 v26; // rbx
	__m128i* v27; // rdi
	int* v28; // rbx
	__int64 v29; // rdx
	__int64 v30; // rdx
	bool v32; // [rsp+40h] [rbp-B8h] BYREF
	__int64 v33; // [rsp+48h] [rbp-B0h]
	_OWORD v34[6]; // [rsp+50h] [rbp-A8h] BYREF

	v33 = a4;
	sub_1400D45E0((__int64)v34, a1, a2, a5, 0i64);
	v7 = 0i64;
	for (i = 0i64; i < 0xE; ++i)
	{
		v9 = off_140B21630[i];
		v32 = 0;
		v10 = sub_1401A6B80(a5, v9);
		if (v10)
		{
			v11 = (wchar_t*)sub_1401A4F40(v10 + 32);
			sub_1401A52E0(v11, &v32);
			if (v32)
				v7 |= 1i64 << i;
		}
	}
	v12 = sub_1401A6B80(a5, L"BuffOverlaySprite");
	if (v12)
		v13 = sub_1401A4F40(v12 + 32);
	else
		v13 = 0i64;
	v14 = (int*)&unk_1409F3574;
	v15 = 0i64;
	if (v13)
		v14 = (int*)v13;
	v16 = 0i64;
	if (*(_WORD*)v14)
	{
		do
			++v16;
		while (*((_WORD*)v14 + v16));
	}
	v17 = (2 * v16) >> 1;
	if ((unsigned __int64)(v17 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v15 = (__m128i*)sub_14018B280(2 * (v17 + 1), 0);
	v18 = 2 * v17;
	sub_1407DB590(v15->m128i_i32, v14, v18);
	v19 = (__m128i*)((char*)v15 + v18);
	if (&v15->m128i_i8[v18])
		v19->m128i_i16[0] = 0;
	v20 = sub_1401A6B80(a5, L"DebuffOverlaySprite");
	if (v20)
		v21 = sub_1401A4F40(v20 + 32);
	else
		v21 = 0i64;
	v22 = (int*)&unk_1409F3554;
	v23 = 0i64;
	if (v21)
		v22 = (int*)v21;
	v24 = 0i64;
	if (*(_WORD*)v22)
	{
		do
			++v24;
		while (*((_WORD*)v22 + v24));
	}
	v25 = (2 * v24) >> 1;
	if ((unsigned __int64)(v25 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v23 = (__m128i*)sub_14018B280(2 * (v25 + 1), 0);
	v26 = 2 * v25;
	sub_1407DB590(v23->m128i_i32, v22, v26);
	v27 = (__m128i*)((char*)v23 + v26);
	if (&v23->m128i_i8[v26])
		v27->m128i_i16[0] = 0;
	v28 = sub_14018B280(1136i64, 0);
	if (v28)
	{
		sub_1400C5920((__int64)v28, a1, a2, 0i64, v34, v33, v7);
		*(_QWORD*)v28 = off_140B6D860;
		*((_QWORD*)v28 + 128) = 0i64;
		sub_1401095E0((__int64)(v28 + 258));
		sub_1401095E0((__int64)(v28 + 270));
		*((_QWORD*)v28 + 54) |= 0x8000000ui64;
		*((_QWORD*)v28 + 83) |= 0x1000ui64;
	}
	else
	{
		v28 = 0i64;
	}
	if (v15 != v19)
	{
		v29 = *((_QWORD*)v28 + 4);
		if (v29)
			sub_140109710((__int64*)v28 + 129, v29 + 240, v15, 0);
	}
	if (v23 != v27)
	{
		v30 = *((_QWORD*)v28 + 4);
		if (v30)
			sub_140109710((__int64*)v28 + 135, v30 + 240, v23, 0);
	}
	if (v23)
		sub_14018B900((__int64)v23, 0);
	if (v15)
		sub_14018B900((__int64)v15, 0);
	return v28;
}
// 140B21438: using guessed type wchar_t aDebuffoverlays[20];
// 140B21460: using guessed type wchar_t aBuffoverlayspr[18];
// 140B21630: using guessed type wchar_t *off_140B21630[14];
// 140B6D860: using guessed type __int64 (__fastcall *off_140B6D860[25])();
// 1405BB3C0: using guessed type _OWORD var_A8[6];

