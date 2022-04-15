#include "../winhttp.h"

//----- (000000014005C8E0) ----------------------------------------------------
__int64 __fastcall sub_14005C8E0(__int64 a1)
{
	unsigned int v1; // r8d
	__int64 v2; // r10
	unsigned int v3; // r9d

	v1 = *(_DWORD*)(a1 + 56);
	if (!v1 || (v2 = *(_QWORD*)(a1 + 24), *(_DWORD*)(v2 + 16i64 * (v1 - 1) + 8)))
	{
		if (*(_UNKNOWN**)(a1 + 32) == &unk_140A12148)
			return v1;
		else
			return sub_14005C6B0(a1, v1);
	}
	else
	{
		v3 = 0;
		if (v1 > 1)
		{
			do
			{
				if (*(_DWORD*)(v2 + 16i64 * (((v3 + v1) >> 1) - 1) + 8))
					v3 = (v3 + v1) >> 1;
				else
					v1 = (v3 + v1) >> 1;
			} while (v1 - v3 > 1);
		}
		return v3;
	}
}

