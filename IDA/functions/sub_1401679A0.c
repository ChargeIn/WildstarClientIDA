#include "../winhttp.h"

//----- (00000001401679A0) ----------------------------------------------------
void __fastcall sub_1401679A0(unsigned int* a1, int* a2, unsigned int* a3)
{
	__int64 v4; // rax
	int* v7; // rsi
	__int64 v8; // rbx
	signed __int64 v9; // rbx
	unsigned __int64 i; // rcx
	__int64 v11; // r11
	__int64 v12; // rdx
	unsigned int* v13; // rcx
	__int64 v14; // rdx
	unsigned __int64 j; // rcx
	__int64 v16; // rdx
	unsigned __int64 k; // rcx
	__int64 v18; // rdx
	unsigned __int64 m; // rcx
	__int64 v20; // rdx
	unsigned __int64 n; // rcx
	__int64 v22; // rdx
	unsigned __int64 ii; // rcx
	__int64 v24; // rdx
	unsigned __int64 jj; // rcx
	__int64 v26; // rdx
	unsigned __int64 kk; // rcx
	__int64 v28; // rdx
	__int16 v29; // r8
	wchar_t v30; // ax
	int v31; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-68h] BYREF
	__int128 v33; // [rsp+28h] [rbp-60h]
	__int64(__fastcall * *v34)(); // [rsp+40h] [rbp-48h] BYREF
	__int128 v35; // [rsp+48h] [rbp-40h]
	__int64 v36; // [rsp+98h] [rbp+10h] BYREF

	if (a2)
	{
		v4 = 0i64;
		v7 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v4;
			while (*((_WORD*)a2 + v4));
		}
		v8 = (2 * v4) >> 1;
		if ((unsigned __int64)(v8 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v7 = sub_14018B280(2 * (v8 + 1), 0);
		v9 = 2 * v8;
		sub_1407DB590(v7, a2, v9);
		if ((int*)((char*)v7 + v9))
			*(_WORD*)((char*)v7 + v9) = 0;
		for (i = 0i64; aCellbgnormalco[i]; ++i)
			;
		v11 = v9 >> 1;
		if (v9 >> 1 == i)
		{
			v12 = 0i64;
			if (!i)
			{
			LABEL_16:
				v13 = a1 + 547;
				goto LABEL_17;
			}
			while (*((_WORD*)v7 + v12) == aCellbgnormalco[v12])
			{
				if (++v12 >= i)
					goto LABEL_16;
			}
		}
		for (j = 0i64; aCellbgselected[j]; ++j)
			;
		if (v11 == j)
		{
			v16 = 0i64;
			if (!j)
			{
			LABEL_24:
				sub_14004F630(a1 + 549, a3);
				goto LABEL_83;
			}
			while (*((_WORD*)v7 + v16) == aCellbgselected[v16])
			{
				if (++v16 >= j)
					goto LABEL_24;
			}
		}
		for (k = 0i64; aCellbgnormalfo[k]; ++k)
			;
		if (v11 == k)
		{
			v18 = 0i64;
			if (!k)
			{
			LABEL_33:
				sub_14004F630(a1 + 548, a3);
				goto LABEL_83;
			}
			while (*((_WORD*)v7 + v18) == aCellbgnormalfo[v18])
			{
				if (++v18 >= k)
					goto LABEL_33;
			}
		}
		for (m = 0i64; aCellbgselected_0[m]; ++m)
			;
		if (v11 == m)
		{
			v20 = 0i64;
			if (!m)
			{
			LABEL_42:
				sub_14004F630(a1 + 550, a3);
				goto LABEL_83;
			}
			while (*((_WORD*)v7 + v20) == aCellbgselected_0[v20])
			{
				if (++v20 >= m)
					goto LABEL_42;
			}
		}
		for (n = 0i64; aTextnormalcolo[n]; ++n)
			;
		if (v11 != n)
		{
		LABEL_54:
			for (ii = 0i64; aTextselectedco[ii]; ++ii)
				;
			if (v11 == ii)
			{
				v24 = 0i64;
				if (!ii)
				{
				LABEL_60:
					sub_14004F630(a1 + 553, a3);
					goto LABEL_83;
				}
				while (*((_WORD*)v7 + v24) == aTextselectedco[v24])
				{
					if (++v24 >= ii)
						goto LABEL_60;
				}
			}
			for (jj = 0i64; aTextnormalfocu[jj]; ++jj)
				;
			if (v11 == jj)
			{
				v26 = 0i64;
				if (!jj)
				{
				LABEL_69:
					sub_14004F630(a1 + 554, a3);
					goto LABEL_83;
				}
				while (*((_WORD*)v7 + v26) == aTextnormalfocu[v26])
				{
					if (++v26 >= jj)
						goto LABEL_69;
				}
			}
			for (kk = 0i64; aTextselectedfo[kk]; ++kk)
				;
			if (v11 != kk)
			{
			LABEL_81:
				*(_QWORD*)&v33 = 0i64;
				TlsValue = &off_140B5E648;
				*((_QWORD*)&v33 + 1) = TlsGetValue(dwTlsIndex);
				TlsSetValue(dwTlsIndex, &TlsValue);
				v34 = TlsValue;
				v36 = 0x141D30D80i64;
				v35 = v33;
				v31 = sub_1401971E0(&dword_140C8A150, 13, &v36, &v34);
				TlsValue = &off_140B5E648;
				TlsSetValue(dwTlsIndex, *((LPVOID*)&v33 + 1));
				if (v31)
					DebugBreak();
				goto LABEL_83;
			}
			v28 = 0i64;
			if (kk)
			{
				do
				{
					v29 = *((_WORD*)v7 + v28);
					v30 = aTextselectedfo[v28];
					if (v29 != v30)
						goto LABEL_81;
				} while (++v28 < kk);
			}
			sub_14004F630(a1 + 555, a3);
		LABEL_83:
			if (v7)
				sub_14018B900((__int64)v7, 0);
			return;
		}
		v22 = 0i64;
		if (n)
		{
			while (*((_WORD*)v7 + v22) == aTextnormalcolo[v22])
			{
				if (++v22 >= n)
				{
					v13 = a1 + 552;
					goto LABEL_17;
				}
			}
			goto LABEL_54;
		}
		v13 = a1 + 552;
	LABEL_17:
		sub_14004F630(v13, a3);
		sub_140168010((__int64)a1, v14);
		sub_1401429A0(qword_140C63678, 0);
		goto LABEL_83;
	}
}
// 140167A9A: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 140167B3C: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 140167BBE: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 140167C4C: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 140167CC6: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 140167D4C: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 140167DCE: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 140167E56: conditional instruction was optimized away because ebx.4 is in (==1|==FFFFFFFF)
// 140167AAE: variable 'v14' is possibly undefined
// 140A31F00: using guessed type wchar_t aTextselectedco[18];
// 140A31F28: using guessed type wchar_t aTextnormalcolo[16];
// 140A31F48: using guessed type wchar_t aTextselectedfo[23];
// 140A31F78: using guessed type wchar_t aTextnormalfocu[21];
// 140A32060: using guessed type wchar_t aCellbgnormalfo[23];
// 140A32090: using guessed type wchar_t aCellbgnormalco[18];
// 140A32198: using guessed type wchar_t aCellbgselected_0[25];
// 140A321D0: using guessed type wchar_t aCellbgselected[20];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C8A150: using guessed type _DWORD dword_140C8A150;

