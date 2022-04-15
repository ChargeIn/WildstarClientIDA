#include "../winhttp.h"

//----- (000000014045E4F0) ----------------------------------------------------
__int64 __fastcall sub_14045E4F0(__int64 a1, int a2)
{
	__int64 v3; // r9
	unsigned __int64 v4; // rbx
	__int64 i; // r10
	int v6; // edx
	int v7; // r8d
	__int64 v8; // rax

	if (a2 >= 28)
		return 0i64;
	v3 = 0i64;
	v4 = *(_QWORD*)(a1 + 16i64 * a2 + 728);
	if (!v4)
		return 0i64;
	for (i = *(_QWORD*)(a1 + 16 * (a2 + 45i64)); ; i += 8i64)
	{
		v6 = *(_DWORD*)(*(_QWORD*)i + 28i64);
		v7 = *(_DWORD*)(*(_QWORD*)i + 24i64);
		v8 = *(_QWORD*)(a1 + 5584);
		if (v8)
			break;
	LABEL_11:
		v8 = *(_QWORD*)(a1 + 5592);
		if (v8)
		{
			while (v7 && *(_DWORD*)(*(_QWORD*)(v8 + 80) + 92i64) != v7 || v6 && *(_DWORD*)(v8 + 100) != v6)
			{
				v8 = *(_QWORD*)(v8 + 64);
				if (!v8)
					goto LABEL_19;
			}
			return *(unsigned int*)(v8 + 188);
		}
	LABEL_19:
		if (++v3 >= v4)
			return 0i64;
	}
	while (v7 && *(_DWORD*)(*(_QWORD*)(v8 + 80) + 92i64) != v7 || v6 && *(_DWORD*)(v8 + 100) != v6)
	{
		v8 = *(_QWORD*)(v8 + 48);
		if (!v8)
			goto LABEL_11;
	}
	return *(unsigned int*)(v8 + 188);
}
// 14045E5A6: conditional instruction was optimized away because rax.8!=0

