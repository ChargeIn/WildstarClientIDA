#include "../winhttp.h"

//----- (00000001400D2660) ----------------------------------------------------
__int64 __fastcall sub_1400D2660(__int64 a1, int* a2, int a3)
{
	int v6; // ecx
	__int64 v7; // rax
	int v8; // edi
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rcx
	int v12; // edx
	int v13; // [rsp+60h] [rbp+8h] BYREF

	if (*(char*)(a1 + 28) >= 0)
		return 1i64;
	v6 = *a2;
	*(_DWORD*)(a1 + 848) = *a2;
	*(_DWORD*)(a1 + 852) = a2[1];
	v7 = *(_QWORD*)(a1 + 32);
	v8 = 0;
	v13 = 0;
	sub_1400D4070(
		a1,
		0x37u,
		(char*)a1,
		"iifi>b",
		v6,
		*(_DWORD*)(a1 + 852),
		(float)((float)a3 * 0.0083333338),
		*(_DWORD*)(v7 + 2876),
		&v13);
	if (v13)
		return 0i64;
	v9 = *(_QWORD*)(a1 + 656);
	if ((v9 & 2) != 0 && ((v9 & 0x2000) == 0 || (v10 = *(_QWORD*)(a1 + 472)) != 0 && *(_DWORD*)(v10 + 1296)))
	{
		v11 = *(_QWORD*)(a1 + 472);
		if (v11)
			v8 = *(_DWORD*)(v11 + 1304);
		v12 = v8 / 10;
		if (v8 / 10 < 1)
			v12 = 1;
		if (a3 > 0)
			v12 = -v12;
		if (v11)
			sub_1400C4740(v11, v12);
		sub_1400CAC90((_QWORD*)a1);
		return 0i64;
	}
	return 1i64;
}

