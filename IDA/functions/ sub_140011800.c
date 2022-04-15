//----- (0000000140011800) ----------------------------------------------------
void __fastcall sub_140011800(__int64 a1, int* a2)
{
	int* v4; // rcx
	__m128i* v5; // rax
	bool v6; // zf
	__int64 v7; // rcx
	__int64 v8; // rbx
	unsigned __int64 v9; // rbx
	__int64 v10; // rax
	int* v11; // rax
	int* v12; // rdi
	__int64 v13; // rax
	int* v14; // rsi
	__int64 v15; // r14
	_WORD* v16; // rax
	int v17; // edx
	__int64 v18; // rcx
	__m128i* v19; // rax
	WCHAR* v20; // rcx
	char v21[8]; // [rsp+40h] [rbp-478h] BYREF
	int* v22; // [rsp+48h] [rbp-470h]
	_WORD* v23; // [rsp+50h] [rbp-468h]
	__int64 v24; // [rsp+58h] [rbp-460h]
	__m128i v25[33]; // [rsp+60h] [rbp-458h] BYREF
	char v26[528]; // [rsp+270h] [rbp-248h] BYREF

	if (*(_QWORD*)(a1 + 5744) && *(_QWORD*)(a1 + 5752))
	{
		sub_14001B370(v26, 260i64, L"Realm.%s.%s.ini");
		if ((int)sub_14001B370(
			v25,
			260i64,
			L"%s\\%s\\%s\\%s",
			*(_QWORD*)&qword_140C63788 + 2684i64,
			L"NCSOFT",
			*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
			v26) >= 0
			&& v25[0].m128i_i16[0])
		{
			v5 = v25;
			do
			{
				v6 = v5->m128i_i16[1] == 0;
				v5 = (__m128i*)((char*)v5 + 2);
			} while (!v6);
		}
		sub_14019CC10(v4, 3, v25);
		sub_14019C520(v7, 2u);
	}
	sub_14018B900(*(_QWORD*)(a1 + 5752), 0);
	*(_QWORD*)(a1 + 5752) = 0i64;
	if (a2)
	{
		v8 = -1i64;
		do
			++v8;
		while (*((_WORD*)a2 + v8));
		v9 = v8 + 1;
		v10 = 2 * v9;
		if (!is_mul_ok(v9, 2ui64))
			v10 = -1i64;
		v11 = sub_14018B280(v10, 0);
		*(_QWORD*)(a1 + 5752) = v11;
		sub_1407DB590(v11, a2, 2 * v9);
		v12 = *(int**)(a1 + 5752);
		v13 = 0i64;
		v14 = 0i64;
		v22 = 0i64;
		v24 = 0i64;
		if (*(_WORD*)v12)
		{
			do
				++v13;
			while (*((_WORD*)v12 + v13));
		}
		v15 = (2 * v13) >> 1;
		if ((unsigned __int64)(v15 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v14 = sub_14018B280(2 * (v15 + 1), 0);
			v22 = v14;
			v24 = (__int64)v14 + 2 * v15 + 2;
		}
		sub_1407DB590(v14, v12, 2 * v15);
		v16 = (_WORD*)v14 + v15;
		v23 = v16;
		if (v16)
			*v16 = 0;
		v17 = dword_140C66910;
		if (*(_DWORD*)qword_140C63750 < dword_140C66910)
			v17 = *(_DWORD*)qword_140C63750;
		sub_14001A9B0((__int64)&unk_140C66900, v17, (__int64)v21);
		if (v14)
			sub_14018B900((__int64)v14, 0);
	}
	if (*(_QWORD*)(a1 + 5744) && *(_QWORD*)(a1 + 5752))
	{
		sub_14001B370(v26, 260i64, L"Realm.%s.%s.ini");
		if ((int)sub_14001B370(
			v25,
			260i64,
			L"%s\\%s\\%s\\%s",
			*(_QWORD*)&qword_140C63788 + 2684i64,
			L"NCSOFT",
			*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
			v26) >= 0
			&& v25[0].m128i_i16[0])
		{
			v19 = v25;
			do
			{
				v6 = v19->m128i_i16[1] == 0;
				v19 = (__m128i*)((char*)v19 + 2);
			} while (!v6);
		}
		sub_14019C520(v18, 3u);
		sub_14019C8D0(v20, 3, v25);
	}
}
// 1400118D9: variable 'v4' is possibly undefined
// 1400118E3: variable 'v7' is possibly undefined
// 140011AF0: variable 'v18' is possibly undefined
// 140011AFF: variable 'v20' is possibly undefined
// 1409DF9D8: using guessed type wchar_t aRealmSSIni[16];
// 1409DFB98: using guessed type wchar_t aRealmSSIni_0[16];
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A47468: using guessed type wchar_t aSSSS[12];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C66910: using guessed type int dword_140C66910;
// 140011800: using guessed type __m128i var_458[33];
// 140011800: using guessed type char var_478[8];

