#include "../winhttp.h"

//----- (00000001401B3450) ----------------------------------------------------
char* __fastcall sub_1401B3450(char* lpBuffer, __int64 nSize, DWORD a3)
{
	__int64 v6; // rdx
	unsigned __int64 v7; // r8
	unsigned __int64 v8; // rax
	char** v9; // rbx
	char* v10; // rdx
	char* v11; // rcx
	unsigned __int16* v12; // r8
	int v13; // eax
	LPWSTR i; // rcx
	DWORD v15; // r12d
	__int64* v16; // rbx
	unsigned __int64 j; // r14
	HMODULE v18; // rax
	HMODULE v19; // rbp
	LPWSTR m; // rcx
	LPWSTR k; // rcx
	char* v22; // rbp
	__int64 v23; // rax
	__int64 v24; // rbx
	unsigned __int64 v25; // rax
	unsigned __int64 v26; // rax
	__int64 v27; // rdx
	char* v28; // rcx
	int v29; // r11d
	__int64 v30; // r9
	__int16 v31; // ax
	char* v32; // rsi
	WCHAR* v33; // rcx
	__int64 v34; // rdx
	char* v35; // rcx
	int v36; // r11d
	__int64 v37; // r9
	__int16 v38; // ax
	char* v39; // rsi
	WCHAR* v40; // rcx
	char* v42; // [rsp+40h] [rbp-38h] BYREF
	char* v43; // [rsp+48h] [rbp-30h] BYREF

	if ((a3 & 0x20000000) != 0)
	{
		v6 = qword_140C63770;
		if (qword_140C63770)
		{
			while (1)
			{
				v7 = *(_QWORD*)(v6 + 8);
				v8 = 0i64;
				if (v7)
					break;
			LABEL_7:
				v6 = *(_QWORD*)(v6 + 16);
				if (!v6)
					goto LABEL_43;
			}
			v9 = *(char***)v6;
			while (*(_DWORD*)v9 != a3)
			{
				++v8;
				v9 += 3;
				if (v8 >= v7)
					goto LABEL_7;
			}
			if (v9)
			{
				sub_1401B38F0(lpBuffer, nSize, v9[2], &v43, &v42);
				v10 = v42;
				v11 = v43;
				v12 = L" (%s)";
			LABEL_75:
				sub_14001B370(v11, (__int64)v10, v12, v9[1]);
				return lpBuffer;
			}
		}
		goto LABEL_43;
	}
	v13 = ((int)a3 >> 16) & 0x1FFF;
	if (v13 == 9)
	{
		if (!FormatMessageW(0x1200u, 0i64, a3, 0, (LPWSTR)lpBuffer, nSize, 0i64))
			goto LABEL_43;
		for (i = (LPWSTR)lpBuffer; *i; ++i)
		{
			if (*i == 13)
				break;
		}
		*i = 0;
		sub_14001B370(i, nSize - (((char*)i - lpBuffer) >> 1), L" (%0.8x)", a3);
	}
	else if (v13 == 7)
	{
		v15 = (unsigned __int16)a3;
		v16 = (__int64*)&off_140A46F00;
		for (j = 0i64; j < 0x10; j += 16i64)
		{
			if (v15 >= *((_DWORD*)v16 - 2) && v15 < *((_DWORD*)v16 - 1))
			{
				v18 = sub_140193770(*v16);
				v19 = v18;
				if (v18)
				{
					if (FormatMessageW(0xA00u, v18, v15, 0, (LPWSTR)lpBuffer, nSize, 0i64))
					{
						for (k = (LPWSTR)lpBuffer; *k; ++k)
						{
							if (*k == 13)
								break;
						}
						*k = 0;
						sub_14001B370(k, nSize - (((char*)k - lpBuffer) >> 1), L" (%0.8x)", a3);
						FreeLibrary(v19);
						return lpBuffer;
					}
					FreeLibrary(v19);
				}
			}
			v16 += 2;
		}
		if (!FormatMessageW(0x1200u, 0i64, v15, 0, (LPWSTR)lpBuffer, nSize, 0i64))
			goto LABEL_43;
		for (m = (LPWSTR)lpBuffer; *m; ++m)
		{
			if (*m == 13)
				break;
		}
		*m = 0;
		sub_14001B370(m, nSize - (((char*)m - lpBuffer) >> 1), L" (%0.8x)", a3);
	}
	else
	{
		if (v13 != 2166 || !qword_140C63780 || !qword_140C63778)
		{
			v9 = (char**)&unk_140A46F20;
			v25 = 0i64;
			while (a3 != *(_DWORD*)v9)
			{
				v25 += 24i64;
				v9 += 3;
				if (v25 >= 0x138)
					goto LABEL_43;
			}
			sub_1401B38F0(lpBuffer, nSize, v9[2], &v42, &v43);
			v10 = v43;
			v11 = v42;
			v12 = L" (%s)";
			goto LABEL_75;
		}
		v22 = (char*)qword_140C63780(a3);
		v23 = qword_140C63778(a3);
		v24 = v23;
		if (!v22 || !v23)
		{
		LABEL_43:
			v26 = nSize - 1;
			if ((a3 & 0x80000000) != 0)
			{
				if (v26 > 0x7FFFFFFE)
				{
					if (nSize)
						*(_WORD*)lpBuffer = 0;
				}
				else
				{
					v27 = nSize;
					v28 = lpBuffer;
					v29 = 0;
					v30 = 0i64;
					while (2147483646 - nSize + v27)
					{
						v31 = *(_WORD*)&v28[(char*)L"Unknown failure" - lpBuffer];
						if (!v31)
							break;
						*(_WORD*)v28 = v31;
						v28 += 2;
						++v30;
						if (!--v27)
							goto LABEL_51;
					}
					if (v27)
						goto LABEL_52;
				LABEL_51:
					v28 -= 2;
					v29 = -2147024774;
					--v30;
				LABEL_52:
					v32 = (char*)(nSize - v30);
					*(_WORD*)v28 = 0;
					v33 = (WCHAR*)&lpBuffer[2 * v30];
					if ((int)(v29 + 0x80000000) < 0 || v29 == -2147024774)
						goto LABEL_54;
				}
				v33 = (WCHAR*)v43;
				v32 = v43;
			LABEL_54:
				sub_14001B370(v33, (__int64)v32, L" (%0.8x)", a3);
				return lpBuffer;
			}
			if (v26 > 0x7FFFFFFE)
			{
				if (nSize)
					*(_WORD*)lpBuffer = 0;
			}
			else
			{
				v34 = nSize;
				v35 = lpBuffer;
				v36 = 0;
				v37 = 0i64;
				while (2147483646 - nSize + v34)
				{
					v38 = *(_WORD*)&v35[(char*)L"Unknown success" - lpBuffer];
					if (!v38)
						break;
					*(_WORD*)v35 = v38;
					v35 += 2;
					++v37;
					if (!--v34)
						goto LABEL_66;
				}
				if (v34)
					goto LABEL_67;
			LABEL_66:
				v35 -= 2;
				v36 = -2147024774;
				--v37;
			LABEL_67:
				v39 = (char*)(nSize - v37);
				*(_WORD*)v35 = 0;
				v40 = (WCHAR*)&lpBuffer[2 * v37];
				if ((int)(v36 + 0x80000000) < 0 || v36 == -2147024774)
					goto LABEL_73;
			}
			v40 = (WCHAR*)v43;
			v39 = v43;
		LABEL_73:
			sub_14001B370(v40, (__int64)v39, L" (%0.8x)", a3);
			return lpBuffer;
		}
		sub_1401B38F0(lpBuffer, nSize, v22, &v42, &v43);
		sub_14001B370(v42, (__int64)v43, L" (%s)", v24);
	}
	return lpBuffer;
}
// 140C63780: invalid function type has been ignored
// 140C63778: invalid function type has been ignored
// 140A46E00: using guessed type wchar_t aS_25[6];
// 140A46E10: using guessed type wchar_t aS_24[6];
// 140A46E20: using guessed type wchar_t a08x_6[9];
// 140A46E38: using guessed type wchar_t aUnknownFailure[16];
// 140A46E58: using guessed type wchar_t a08x_3[9];
// 140A46E80: using guessed type wchar_t a08x_4[9];
// 140A46E98: using guessed type wchar_t a08x_5[9];
// 140A46EB0: using guessed type wchar_t a08x_7[9];
// 140A46EC8: using guessed type wchar_t aUnknownSuccess[16];
// 140A46F00: using guessed type wchar_t *off_140A46F00;
// 140C63770: using guessed type __int64 qword_140C63770;
// 140C63778: using guessed type __int64 (__fastcall *qword_140C63778)(_QWORD);
// 140C63780: using guessed type __int64 (__fastcall *qword_140C63780)(_QWORD);

