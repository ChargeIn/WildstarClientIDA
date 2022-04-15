#include "../winhttp.h"

//----- (00000001400FE2E0) ----------------------------------------------------
_QWORD* __fastcall sub_1400FE2E0(_QWORD* a1, int* a2)
{
	unsigned __int64 v2; // rbx
	__int64 v4; // rax
	unsigned __int64 v5; // rax
	_WORD* v6; // r14
	_WORD* v7; // rbp
	unsigned __int64 v8; // rsi
	_WORD* v9; // rax
	unsigned __int64 v10; // rax
	_WORD* v11; // rax
	unsigned __int64 v12; // rax
	_WORD* v13; // rax
	_WORD* v14; // rax
	int* v15; // rax
	bool v16; // zf
	_QWORD* v17; // rax
	__int64 v18; // rdx
	__int64 v19; // rdx
	__int64 v20; // rdx
	_QWORD* v21; // rax
	__int64 v22; // rdx
	__int64 v23; // rdx
	__int64 v24; // rdx
	__int64 v26; // [rsp+48h] [rbp-260h] BYREF
	__int64 v27; // [rsp+50h] [rbp-258h]
	int v28[132]; // [rsp+70h] [rbp-238h] BYREF

	v2 = 0i64;
	v4 = 0i64;
	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[3] = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v4;
		while (*((_WORD*)a2 + v4));
	}
	sub_14001C1B0(a1, a2, (__int64)a2 + 2 * v4);
	v5 = 0i64;
	do
		++v5;
	while (aUi[v5]);
	v6 = (_WORD*)a1[2];
	v7 = (_WORD*)a1[1];
	v8 = v6 - v7;
	if (v5 > v8
		|| (v9 = sub_14010A450((_WORD*)a1[1], (_WORD*)a1[2], L"UI\\", (__int16*)&aUi[v5]), v9 == v6)
		|| v9 - v7)
	{
		v10 = 0i64;
		do
			++v10;
		while (aUi_0[v10]);
		if (v10 > v8 || (v11 = sub_14010A450(v7, v6, L"ui\\", (__int16*)&aUi_0[v10]), v11 == v6) || v11 - v7)
		{
			v12 = 0i64;
			do
				++v12;
			while (aMap[v12]);
			if (v12 > v8 || (v13 = sub_14010A450(v7, v6, L"Map\\", (__int16*)&aMap[v12]), v13 == v6) || v13 - v7)
			{
				do
					++v2;
				while (word_1409D4BA4[v2]);
				if (v2 > v8 || (v14 = sub_14010A450(v7, v6, word_1409D4BA4, &word_1409D4BA4[v2]), v14 == v6) || v14 - v7 == -1)
				{
					if ((int)sub_14001B370(
						v28,
						260i64,
						L"%s\\%s\\%s\\%s",
						*(_QWORD*)&qword_140C63788 + 2684i64,
						L"NCSOFT",
						*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
						L"Addons") >= 0
						&& LOWORD(v28[0]))
					{
						v15 = v28;
						do
						{
							v16 = *((_WORD*)v15 + 1) == 0;
							v15 = (int*)((char*)v15 + 2);
						} while (!v16);
					}
					v17 = sub_14010A310(&v26, dword_1409D4BCC, (__int64)a1);
					v18 = a1[1];
					a1[1] = v17[1];
					v17[1] = v18;
					v19 = a1[2];
					a1[2] = v17[2];
					v17[2] = v19;
					v20 = a1[3];
					a1[3] = v17[3];
					v17[3] = v20;
					if (v27)
						sub_14018B900(v27, 0);
					v21 = sub_14010A310(&v26, v28, (__int64)a1);
					v22 = a1[1];
					a1[1] = v21[1];
					v21[1] = v22;
					v23 = a1[2];
					a1[2] = v21[2];
					v21[2] = v23;
					v24 = a1[3];
					a1[3] = v21[3];
					v21[3] = v24;
					if (v27)
						sub_14018B900(v27, 0);
				}
			}
		}
	}
	return a1;
}
// 1409D4BA4: using guessed type __int16 word_1409D4BA4[20];
// 1409D4BCC: using guessed type int dword_1409D4BCC[10];
// 140A1A500: using guessed type wchar_t aAddons_0[7];
// 140A1AA00: using guessed type wchar_t aUi[4];
// 140A1AA08: using guessed type wchar_t aUi_0[4];
// 140A1AA10: using guessed type wchar_t aMap[5];
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A47468: using guessed type wchar_t aSSSS[12];
// 1400FE2E0: using guessed type int var_238[132];

