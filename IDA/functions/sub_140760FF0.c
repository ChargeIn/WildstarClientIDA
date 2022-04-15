#include "../winhttp.h"

//----- (0000000140760FF0) ----------------------------------------------------
__int64 __fastcall sub_140760FF0(__int64 a1)
{
	int v1; // r10d
	__int64 v2; // r8
	__int64 v3; // rdx
	__int64 v4; // rax
	int v5; // eax
	__int64 v6; // rax
	__int64 v8; // [rsp+8h] [rbp+8h]

	v1 = 0;
	v2 = *(_QWORD*)(qword_140C65898 + 7168);
	v3 = v2;
	v4 = *(_QWORD*)(v2 + 8);
	while (v4)
	{
		if (*(int*)(v4 + 32) < 15)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v3 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v3 == v2 || (v5 = *(_DWORD*)(v3 + 32), v5 > 15) || v5 >= 15 && *(_DWORD*)(v3 + 36))
		v8 = *(_QWORD*)(qword_140C65898 + 7168);
	else
		v8 = v3;
	if (v8 != v2 && *(_DWORD*)(v8 + 48) == 1)
		v1 = *(_DWORD*)(v8 + 52);
	v6 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v6 + 8) = 3;
	*(double*)v6 = (double)v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

