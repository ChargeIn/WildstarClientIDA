#include "../winhttp.h"

//----- (000000014047BFD0) ----------------------------------------------------
_BOOL8 __fastcall sub_14047BFD0(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	int v4; // eax
	_BOOL8 result; // rax

	result = 0;
	if (a1 == *(_QWORD*)(qword_140C65898 + 120))
	{
		v2 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 192));
		v3 = v2;
		if (v2)
		{
			if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v2 + 32i64))(v2))
			{
				if (*(_DWORD*)(v3 + 128) != 9)
				{
					LOBYTE(v4) = sub_14047C120((_QWORD*)v3);
					if (!v4 && *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 25744) + 8i64) == *(_DWORD*)(a1 + 192))
						return 1;
				}
			}
		}
	}
	return result;
}
// 14047C01D: variable 'v4' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

