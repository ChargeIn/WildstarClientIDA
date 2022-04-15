#include "../winhttp.h"

//----- (00000001406A0E30) ----------------------------------------------------
__int64 __fastcall sub_1406A0E30(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v5[5]; // [rsp+20h] [rbp-28h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && !*(_QWORD*)(v3 + 8))
	{
		if (*(_DWORD*)(v3 + 40))
			v5[0] = sub_1403E0290(*(_QWORD*)(v3 + 32), *(_DWORD*)(v3 + 20));
		else
			v5[0] = 0i64;
		v5[2] = 0i64;
		v5[1] = 1i64;
		sub_140501210(a1, v5);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}

