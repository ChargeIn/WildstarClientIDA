#include "../winhttp.h"

//----- (00000001402890B0) ----------------------------------------------------
__int64 __fastcall sub_1402890B0(__int64 a1, __int64 a2)
{
	int v2; // eax
	__int64 result; // rax
	unsigned int v6; // eax
	__int64 v7; // rcx
	__int64 v8; // rbx
	unsigned int v9; // ebp

	v2 = *(_DWORD*)(a1 + 36);
	if (v2 == 3)
		return 1i64;
	if ((v2 & 1) == 0)
	{
		result = sub_140288B50(*(_QWORD*)(a1 + 8));
		if (!(_DWORD)result)
			return result;
		v6 = sub_1402887A0(*(_QWORD*)(a1 + 8), *(_DWORD*)(a1 + 20), *(float*)(a1 + 24), *(float*)(a1 + 28));
		v7 = *(_QWORD*)(a1 + 8);
		*(_DWORD*)(a1 + 32) = v6;
		sub_140288840(v7, v6);
		*(_DWORD*)(a1 + 36) |= 1u;
	}
	if ((*(_BYTE*)(a1 + 36) & 2) != 0)
		return 1i64;
	v8 = *(_QWORD*)(a1 + 8);
	v9 = *(_DWORD*)(a1 + 32);
	if ((unsigned int)sub_140288B50(v8) && sub_140288D50(v8, v9, a2))
	{
		*(_DWORD*)(a1 + 36) |= 2u;
		return 1i64;
	}
	return 0i64;
}

