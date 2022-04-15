#include "../winhttp.h"

//----- (00000001406B8210) ----------------------------------------------------
__int64 __fastcall sub_1406B8210(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	unsigned int v5; // ecx
	__int64 v6; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		v5 = *(_DWORD*)(v4 + 20);
		if (v5)
		{
			v6 = sub_14020FD40(v5);
			if (!v6 || (*(_BYTE*)(v6 + 12) & 8) != 0)
				return 0i64;
			else
				return sub_1406B91F0(a1, v6);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}

