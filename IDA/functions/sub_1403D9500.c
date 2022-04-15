#include "../winhttp.h"

//----- (00000001403D9500) ----------------------------------------------------
__int64 __fastcall sub_1403D9500(__int64 a1, int* a2)
{
	unsigned int v2; // r8d
	unsigned __int64 v3; // r10
	__int64 v4; // r11
	__int64 v5; // r9
	__int64 v6; // rdx
	unsigned int v7; // eax
	unsigned int v8; // eax
	__int64 v10; // [rsp+10h] [rbp+10h]

	v2 = *a2;
	if (!*a2)
		return 0i64;
	v3 = *((_QWORD*)a2 + 1);
	if (!v3)
		return 0i64;
	v4 = *(_QWORD*)(a1 + 28512);
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		v7 = *(_DWORD*)(v6 + 32);
		if (v7 < v2 || v7 <= v2 && *(_QWORD*)(v6 + 40) < v3)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v8 = *(_DWORD*)(v5 + 32), v2 < v8) || v2 <= v8 && v3 < *(_QWORD*)(v5 + 40))
		v10 = *(_QWORD*)(a1 + 28512);
	else
		v10 = v5;
	if (v10 != v4)
		return *(unsigned int*)(v10 + 48);
	else
		return 0i64;
}

