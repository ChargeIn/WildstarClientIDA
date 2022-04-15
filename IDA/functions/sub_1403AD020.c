#include "../winhttp.h"

//----- (00000001403AD020) ----------------------------------------------------
__int64 __fastcall sub_1403AD020(__int64 a1, unsigned int* a2, unsigned int* a3)
{
	unsigned int v6; // r9d
	unsigned int v7; // r8d
	unsigned int v8; // edx
	unsigned int v9; // edi
	int v10; // ecx
	__int64 v11; // rax
	int v12; // [rsp+20h] [rbp-18h]
	__int64 v13; // [rsp+48h] [rbp+10h] BYREF

	if (!a2)
		return 6i64;
	if (!a3)
		a3 = a2 + 2;
	if ((a2[83] & 0x100) != 0)
		return 72i64;
	v6 = a3[1];
	v7 = *a2;
	v8 = a2[81];
	v9 = 0;
	v13 = 0i64;
	if (!sub_1404AA7D0(a1, v8, v7, v6, v12, &v13))
		return 72i64;
	if (!v13)
		return 72i64;
	v10 = *(_DWORD*)(v13 + 8);
	if ((v10 & 1) == 0)
		return 72i64;
	if ((v10 & 2) != 0)
	{
		v11 = *(_QWORD*)(a1 + 120);
		if (v11)
			v9 = *(_DWORD*)(v11 + 56);
		if (v9 < a2[87])
			return 42i64;
	}
	return 0i64;
}
// 1403AD08B: variable 'v12' is possibly undefined

