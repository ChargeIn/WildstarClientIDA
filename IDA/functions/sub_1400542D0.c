#include "../winhttp.h"

//----- (00000001400542D0) ----------------------------------------------------
__int64 __fastcall sub_1400542D0(__int64 a1, __int64 a2)
{
	__int64 v5; // rdx

	if (!*(_DWORD*)(a1 + 68))
	{
		if (!*(_QWORD*)(a1 + 24))
		{
			if ((int)sub_140054090(a1) < 0)
				return 0i64;
			v5 = *(_QWORD*)(a1 + 72);
			if (v5)
			{
				if ((*(int(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 24) + 56i64))(
					*(_QWORD*)(a1 + 24),
					v5,
					-1i64) < 0)
					return 0i64;
				*(_DWORD*)(a1 + 64) = 0;
			}
		}
		if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 24) + 216i64))(*(_QWORD*)(a1 + 24), a2))
			*(_DWORD*)(a1 + 68) = 1;
	}
	return *(unsigned int*)(a1 + 68);
}

