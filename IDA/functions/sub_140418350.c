#include "../winhttp.h"

//----- (0000000140418350) ----------------------------------------------------
__int64 __fastcall sub_140418350(_QWORD* a1)
{
	unsigned int* v2; // rsi
	int* v3; // rax
	unsigned int v4; // r9d
	unsigned int v5; // r8d
	unsigned int v6; // edx
	int v7; // edi
	int v8; // eax
	_DWORD* v9; // rcx
	_DWORD* v10; // rax
	int v12; // [rsp+20h] [rbp-18h]
	__int64 v13; // [rsp+48h] [rbp+10h] BYREF

	v2 = (unsigned int*)sub_140417BF0(a1, 1u);
	v3 = sub_140417C90(a1, 1u);
	if (v2 && v3)
	{
		v4 = v3[1];
		v5 = *v2;
		v6 = v2[81];
		v7 = 0;
		v13 = 0i64;
		if (!sub_1404AA7D0((__int64)&v13, v6, v5, v4, v12, &v13) || !v13 || (v8 = 1, (*(_BYTE*)(v13 + 8) & 4) == 0))
			v8 = 0;
		v9 = (_DWORD*)a1[2];
		LOBYTE(v7) = v8 != 0;
		v9[2] = 1;
		*v9 = v7;
	}
	else
	{
		v10 = (_DWORD*)a1[2];
		*v10 = 0;
		v10[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 1404183A4: variable 'v12' is possibly undefined

