//----- (00000001401819D0) ----------------------------------------------------
_QWORD* __fastcall sub_1401819D0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, __int64 a5)
{
	int* v9; // rax
	_QWORD* v10; // rbp
	__int64 v11; // rax
	__int64 v12; // rax
	int* v13; // rdi
	int* v14; // r15
	__int64 v15; // rax
	__int64 v16; // rbx
	unsigned __int64 v17; // rbx
	__int64 v18; // rax
	_WORD* v19; // rax
	__int64 v20; // rax
	_WORD* v21; // rax
	__int64 v22; // rax
	__int64 v23; // rax
	int* v24; // rdi
	__m128i* v25; // r14
	__int64 v26; // rax
	__int64 v27; // rbx
	unsigned __int64 v28; // rbx
	__m128i* v29; // rax
	__int64 v30; // rdx
	__int64 v31; // rax
	__int64 v32; // rax
	int* v33; // rdi
	__m128i* v34; // rsi
	__int64 v35; // rax
	__int64 v36; // rbx
	unsigned __int64 v37; // rbx
	__m128i* v38; // rax
	__int64 v39; // rdx
	_OWORD v41[6]; // [rsp+40h] [rbp-B8h] BYREF

	sub_1400D45E0((__int64)v41, a1, a2, a5, 0i64);
	v9 = sub_14018B280(1200i64, 0);
	if (v9)
		v10 = (_QWORD*)sub_140180BE0((__int64)v9, a1, a2, a3, v41, a4);
	else
		v10 = 0i64;
	v11 = sub_1401A6B80(a5, L"HueBarWidth");
	if (v11)
		v12 = sub_1401A4F40(v11 + 32);
	else
		v12 = 0i64;
	v13 = (int*)&unk_1409DEF84;
	v14 = 0i64;
	if (v12)
		v13 = (int*)v12;
	v15 = 0i64;
	if (*(_WORD*)v13)
	{
		do
			++v15;
		while (*((_WORD*)v13 + v15));
	}
	v16 = (2 * v15) >> 1;
	if ((unsigned __int64)(v16 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v14 = sub_14018B280(2 * (v16 + 1), 0);
	v17 = 2 * v16;
	sub_1407DB590(v14, v13, v17);
	if ((int*)((char*)v14 + v17))
		*(_WORD*)((char*)v14 + v17) = 0;
	v18 = sub_1401A6B80(a5, L"HueBarWidth");
	if (v18)
	{
		v19 = (_WORD*)sub_1401A4F40(v18 + 32);
		sub_1407DF428(v19, (__int64)L"%d", (char*)v10 + 1100);
	}
	v20 = sub_1401A6B80(a5, L"HueFieldMargin");
	if (v20)
	{
		v21 = (_WORD*)sub_1401A4F40(v20 + 32);
		sub_1407DF428(v21, (__int64)L"%d", v10 + 138);
	}
	v22 = sub_1401A6B80(a5, L"FieldLocationMarkerSprite");
	if (v22)
		v23 = sub_1401A4F40(v22 + 32);
	else
		v23 = 0i64;
	v24 = (int*)&unk_1409DF0A4;
	v25 = 0i64;
	if (v23)
		v24 = (int*)v23;
	v26 = 0i64;
	if (*(_WORD*)v24)
	{
		do
			++v26;
		while (*((_WORD*)v24 + v26));
	}
	v27 = (2 * v26) >> 1;
	if ((unsigned __int64)(v27 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v25 = (__m128i*)sub_14018B280(2 * (v27 + 1), 0);
	v28 = 2 * v27;
	sub_1407DB590(v25->m128i_i32, v24, v28);
	v29 = (__m128i*)((char*)v25 + v28);
	if (&v25->m128i_i8[v28])
		v29->m128i_i16[0] = 0;
	if (v25 != v29)
	{
		v30 = v10[4];
		if (v30)
			sub_140109710(v10 + 139, v30 + 240, v25, 0);
	}
	v31 = sub_1401A6B80(a5, L"HueLocationMarkerSprite");
	if (v31)
		v32 = sub_1401A4F40(v31 + 32);
	else
		v32 = 0i64;
	v33 = (int*)&unk_1409DEFC4;
	v34 = 0i64;
	if (v32)
		v33 = (int*)v32;
	v35 = 0i64;
	if (*(_WORD*)v33)
	{
		do
			++v35;
		while (*((_WORD*)v33 + v35));
	}
	v36 = (2 * v35) >> 1;
	if ((unsigned __int64)(v36 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v34 = (__m128i*)sub_14018B280(2 * (v36 + 1), 0);
	v37 = 2 * v36;
	sub_1407DB590(v34->m128i_i32, v33, v37);
	v38 = (__m128i*)((char*)v34 + v37);
	if (&v34->m128i_i8[v37])
		v38->m128i_i16[0] = 0;
	if (v34 != v38)
	{
		v39 = v10[4];
		if (v39)
			sub_140109710(v10 + 129, v39 + 240, v34, 0);
	}
	if (v34)
		sub_14018B900((__int64)v34, 0);
	if (v25)
		sub_14018B900((__int64)v25, 0);
	if (v14)
		sub_14018B900((__int64)v14, 0);
	return v10;
}
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A3D658: using guessed type wchar_t aHuelocationmar[24];
// 140A3D688: using guessed type wchar_t aHuebarwidth[12];
// 140A3D6A0: using guessed type wchar_t aFieldlocationm[26];
// 140A3D6D8: using guessed type wchar_t aHuefieldmargin[15];
// 1401819D0: using guessed type _OWORD var_B8[6];

