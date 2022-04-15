#include "../winhttp.h"

//----- (0000000140792480) ----------------------------------------------------
__int64 __fastcall sub_140792480(_QWORD* a1)
{
	__int64 v2; // rbp
	unsigned __int64 v3; // r8
	__int64 v4; // rax
	__int64 v5; // r9
	int i; // edi
	__int64 v7; // rcx
	_DWORD* v8; // rax
	__int64 v9; // rdx
	__int64 v10; // rax
	__int64 v12; // [rsp+20h] [rbp-18h] BYREF
	int v13; // [rsp+28h] [rbp-10h]

	v2 = (__int64)(a1[2] - a1[3]) >> 4;
	v3 = -1i64;
	do
		++v3;
	while (aTostring_1[v3]);
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)aTostring_1, v3);
	v5 = a1[2];
	v12 = v4;
	v13 = 4;
	sub_14005E8E0((__int64)a1, (__int64)(a1 + 15), (int*)&v12, v5);
	a1[2] += 16i64;
	for (i = 1; i <= (int)v2; ++i)
	{
		v7 = a1[2];
		*(_QWORD*)v7 = *(_QWORD*)(v7 - 16);
		*(_DWORD*)(v7 + 8) = *(_DWORD*)(v7 - 8);
		a1[2] += 16i64;
		v8 = sub_1400580E0((__int64)a1, i);
		v9 = a1[2];
		*(_QWORD*)v9 = *(_QWORD*)v8;
		*(_DWORD*)(v9 + 8) = v8[2];
		a1[2] += 16i64;
		sub_140061D30((__int64)a1, (char*)(a1[2] - 32i64), 1);
		v10 = a1[2] - 16i64;
		if (*(_DWORD*)(v10 + 8) != 4)
		{
			if (!(unsigned int)sub_14005E620((__int64)a1, a1[2] - 16i64))
				goto LABEL_21;
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v10 = a1[2] - 16i64;
		}
		if (*(_QWORD*)v10 == -32i64)
			LABEL_21:
		sub_140056830(a1, (unsigned __int64*)aTostringMustRe);
		if (i > 1)
		{
			if (dword_140C674A0)
				goto LABEL_15;
			OutputDebugStringA("WARNING! Log called before CRT startup");
		}
		if (dword_140C674A0)
		{
		LABEL_15:
			if (dword_140C675DC >= 2)
				sub_140059390();
			goto LABEL_17;
		}
		OutputDebugStringA("WARNING! Log called before CRT startup");
	LABEL_17:
		a1[2] -= 16i64;
	}
	if (!dword_140C674A0)
		OutputDebugStringA("WARNING! Log called before CRT startup");
	return 0i64;
}
// 140C674A0: using guessed type int dword_140C674A0;
// 140C675DC: using guessed type int dword_140C675DC;

