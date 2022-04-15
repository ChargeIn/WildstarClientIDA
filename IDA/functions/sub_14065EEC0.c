#include "../winhttp.h"

//----- (000000014065EEC0) ----------------------------------------------------
__int64 __fastcall sub_14065EEC0(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rdi
	__int64 result; // rax
	unsigned int v5; // esi
	__int64 v6; // rcx
	unsigned int v7; // ebp
	__int64 v8; // rax
	unsigned int v9; // edx
	__int64 v10; // rax
	__int64 v11; // rbx

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (!v2)
		return 0i64;
	v3 = sub_1403D90D0(qword_140C65898, *v2);
	if (!v3)
		return 0i64;
	result = sub_140056D60(a1, 2u);
	v5 = result;
	if ((_DWORD)result)
	{
		v7 = sub_140056D60(a1, 3u);
		if (v7
			&& (v8 = *(_QWORD*)(v3 + 24)) != 0
			&& (v9 = *(_DWORD*)(v8 + 112)) != 0
			&& (v10 = sub_1403AC530(v6, v9), (v11 = v10) != 0)
			&& (*(_BYTE*)(*(_QWORD*)v10 + 4i64) & 4) == 0
			&& sub_1404AB430(v10, v5))
		{
			sub_1404AB040(v11, v3, v5, v7, 0i64);
			return 1i64;
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}
// 14065EF4A: variable 'v6' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

