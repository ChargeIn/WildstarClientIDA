#include "../winhttp.h"

//----- (0000000140482450) ----------------------------------------------------
_BOOL8 __fastcall sub_140482450(__int64 a1)
{
	__int64 v1; // rax
	int v2; // r8d
	__int64 v3; // rdx
	__int64 v4; // rax
	_BOOL8 result; // rax

	v1 = *(_QWORD*)(a1 + 24);
	result = 0;
	if (!v1 || (*(_DWORD*)(v1 + 144) & 0x40000000) == 0)
	{
		v2 = *(_DWORD*)(a1 + 292);
		if ((v2 || *(_QWORD*)(a1 + 296)) && !*(_DWORD*)(a1 + 304))
		{
			v3 = *(_QWORD*)(qword_140C65898 + 120);
			if (!v3)
				return 1;
			if (v2 != *(_DWORD*)(v3 + 8))
			{
				v4 = *(_QWORD*)(a1 + 296);
				if (!v4 || *(_QWORD*)(v3 + 6304) != v4)
					return 1;
			}
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

