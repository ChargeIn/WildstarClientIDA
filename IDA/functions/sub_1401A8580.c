#include "../winhttp.h"

//----- (00000001401A8580) ----------------------------------------------------
void __fastcall sub_1401A8580(__int64 a1, _WORD* a2, char a3)
{
	__int64 v3; // r15
	_WORD* v4; // rdi
	_WORD* v6; // rsi
	__int64 v7; // r14
	unsigned __int64 v8; // rbx
	__int64 v9; // r8
	_WORD* v10; // rax
	__int64 v11; // [rsp+20h] [rbp-28h]

	v4 = a2;
	v6 = a2;
	if (*(_BYTE*)(a1 + 136))
	{
		v7 = a1 + 202;
		if (!a3)
			v7 = a1 + 138;
		if (*a2)
		{
			v11 = v3;
			do
			{
				if ((unsigned __int16)(*v6 - 1) <= 0x3Eu && *(_BYTE*)((unsigned __int16)*v6 + v7))
				{
					for (; v4 < v6; v4 += v8)
					{
						v8 = v6 - v4;
						if (v8 > 0x7FFFFFFF)
							v8 = 0x7FFFFFFFi64;
						sub_1401A8480(a1, (__int64)L"%.*s", v8, v4, v11);
					}
					v9 = 0i64;
					v10 = &unk_140A4545C;
					while (*v10 != *v6)
					{
						v10 += 8;
						++v9;
						if ((__int64)v10 >= (__int64)&funcs_1401AA19E + 4)
							goto LABEL_17;
					}
					sub_1401A8480(a1, (__int64)L"&%s;", (&off_140A45450)[2 * v9]);
				LABEL_17:
					++v4;
				}
				++v6;
			} while (*v6);
		}
	}
	if (!*(_BYTE*)(a1 + 136) || v4 < v6)
		sub_1401A8480(a1, (__int64)L"%s", v4);
}
// 1401A8580: could not find valid save-restore pair for r15
// 1401A85CF: variable 'v3' is possibly undefined
// 1401A8630: variable 'v11' is possibly undefined
// 1409E45BC: using guessed type wchar_t aS_15[3];
// 140A45380: using guessed type wchar_t aS_13[5];
// 140A453A0: using guessed type wchar_t aS_14[5];
// 140A45450: using guessed type wchar_t *off_140A45450;
// 140A454A8: using guessed type __int64 (__fastcall *funcs_1401AA19E)();

