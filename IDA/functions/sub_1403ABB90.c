#include "../winhttp.h"

//----- (00000001403ABB90) ----------------------------------------------------
__int64 __fastcall sub_1403ABB90(__int64 a1, int a2, unsigned int a3)
{
	__int64 v3; // r10
	__int64 v4; // r9
	__int64 v5; // rax
	int v6; // ecx
	int v7; // eax
	__int64 v9; // [rsp+8h] [rbp+8h]

	v3 = *(_QWORD*)(a1 + 8);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		v6 = *(_DWORD*)(v5 + 32);
		if (v6 < a2 || a2 >= v6 && *(_DWORD*)(v5 + 36) < a3)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v7 = *(_DWORD*)(v4 + 32), a2 < v7) || v7 >= a2 && a3 < *(_DWORD*)(v4 + 36))
		v9 = v3;
	else
		v9 = v4;
	if (v9 == v3)
		return 0i64;
	else
		return v9 + 40;
}

