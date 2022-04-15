#include "../winhttp.h"

//----- (000000014079E7C0) ----------------------------------------------------
__int64 __fastcall sub_14079E7C0(__int64 a1, int a2, int a3)
{
	unsigned __int64 v7; // rbx
	__int64 v8; // rdx
	__int64 i; // rcx
	int v10; // r8d
	int v11; // r8d

	if (*(_DWORD*)a1)
		return 0i64;
	if (!a2 && !a3 && *(_DWORD*)(a1 + 8))
		return 1i64;
	v7 = *(_QWORD*)(a1 + 24);
	v8 = 0i64;
	if (!v7)
		return 0i64;
	for (i = 0i64; ; i += 20i64)
	{
		if ((!a2 || (v10 = *(_DWORD*)(i + *(_QWORD*)(a1 + 16))) == 0 || v10 == a2)
			&& (!a3 || (v11 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + i + 4)) == 0 || v11 == a3))
		{
			if (*(_DWORD*)(*(_QWORD*)(a1 + 16) + i + 16))
				break;
		}
		if (++v8 >= v7)
			return 0i64;
	}
	return 1i64;
}

