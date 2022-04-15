#include "../winhttp.h"

//----- (000000014047BEA0) ----------------------------------------------------
_BOOL8 __fastcall sub_14047BEA0(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // rbx
	__int64 v3; // rcx
	_BOOL8 result; // rax

	v1 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 192));
	v2 = v1;
	result = 0;
	if (v1)
	{
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v1 + 32i64))(v1))
		{
			v3 = *(_QWORD*)(v2 + 184);
			if (v3)
			{
				if (*(_DWORD*)(v3 + 4) == 9)
					return 1;
			}
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

