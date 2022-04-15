#include "../winhttp.h"

//----- (00000001400114E0) ----------------------------------------------------
void __fastcall sub_1400114E0(__int64 a1, int* a2)
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
	__int64 v21; // rcx
	char v22[8]; // [rsp+40h] [rbp-478h] BYREF
	int* v23; // [rsp+48h] [rbp-470h]
	_WORD* v24; // [rsp+50h] [rbp-468h]
	__int64 v25; // [rsp+58h] [rbp-460h]
	__m128i v26[33]; // [rsp+60h] [rbp-458h] BYREF
	char v27[528]; // [rsp+270h] [rbp-248h] BYREF

	if (*(_QWORD*)(a1 + 5744))
	{
		sub_14001B370(v27, 260i64, L"Account.%s.ini");
		if ((int)sub_14001B370(
			v26,
			260i64,
			L"%s\\%s\\%s\\%s",
			*(_QWORD*)&qword_140C63788 + 2684i64,
			L"NCSOFT",
			*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
			v27) >= 0
			&& v26[0].m128i_i16[0])
		{
			v5 = v26;
			do
			{
				v6 = v5->m128i_i16[1] == 0;
				v5 = (__m128i*)((char*)v5 + 2);
			} while (!v6);
		}
		sub_14019CC10(v4, 2, v26);
		sub_14019C520(v7, 1u);
	}
	sub_14018B900(*(_QWORD*)(a1 + 5744), 0);
	*(_QWORD*)(a1 + 5744) = 0i64;
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
		*(_QWORD*)(a1 + 5744) = v11;
		sub_1407DB590(v11, a2, 2 * v9);
		v12 = *(int**)(a1 + 5744);
		v13 = 0i64;
		v14 = 0i64;
		v23 = 0i64;
		v25 = 0i64;
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
			v23 = v14;
			v25 = (__int64)v14 + 2 * v15 + 2;
		}
		sub_1407DB590(v14, v12, 2 * v15);
		v16 = (_WORD*)v14 + v15;
		v24 = v16;
		if (v16)
			*v16 = 0;
		v17 = dword_140C667D0;
		if (*(_DWORD*)qword_140C63750 < dword_140C667D0)
			v17 = *(_DWORD*)qword_140C63750;
		sub_14001A9B0((__int64)&unk_140C667C0, v17, (__int64)v22);
		if (v14)
			sub_14018B900((__int64)v14, 0);
	}
	if (*(_QWORD*)(a1 + 5744))
	{
		sub_14001B370(v27, 260i64, L"Account.%s.ini");
		if ((int)sub_14001B370(
			v26,
			260i64,
			L"%s\\%s\\%s\\%s",
			*(_QWORD*)&qword_140C63788 + 2684i64,
			L"NCSOFT",
			*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
			v27) >= 0
			&& v26[0].m128i_i16[0])
		{
			v19 = v26;
			do
			{
				v6 = v19->m128i_i16[1] == 0;
				v19 = (__m128i*)((char*)v19 + 2);
			} while (!v6);
		}
		sub_14019C520(v18, 2u);
		sub_14019C8D0(v20, 2, v26);
	}
	v21 = *(_QWORD*)(a1 + 5584);
	if (v21)
		sub_140003BD0(v21);
	if (qword_140C65910)
		sub_140452580();
}
// 1400115A9: variable 'v4' is possibly undefined
// 1400115B3: variable 'v7' is possibly undefined
// 1400117A3: variable 'v18' is possibly undefined
// 1400117B2: variable 'v20' is possibly undefined
// 1409DFB58: using guessed type wchar_t aAccountSIni[15];
// 1409DFB78: using guessed type wchar_t aAccountSIni_0[15];
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A47468: using guessed type wchar_t aSSSS[12];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65910: using guessed type __int64 qword_140C65910;
// 140C667D0: using guessed type int dword_140C667D0;
// 1400114E0: using guessed type __m128i var_458[33];
// 1400114E0: using guessed type char var_478[8];

