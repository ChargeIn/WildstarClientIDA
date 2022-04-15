#include "../winhttp.h"

//----- (0000000140571350) ----------------------------------------------------
_BOOL8 __fastcall sub_140571350(__int64 a1)
{
	_BOOL8 result; // rax
	int v2; // ecx
	__int64 v3; // rax
	__int64 v4; // r8

	result = 0;
	if (*(_DWORD*)(a1 + 8) == 2)
	{
		v2 = *(_DWORD*)(a1 + 196);
		if (!v2 || dword_140C636A8 - v2 >= 0)
		{
			if ((dword_140DC3458 & 1) != 0)
			{
				v4 = (unsigned int)dword_140DC345C;
			}
			else
			{
				dword_140DC3458 |= 1u;
				v3 = sub_140200220(0x486u);
				if (v3)
				{
					v4 = *(unsigned int*)(v3 + 4);
					dword_140DC345C = *(_DWORD*)(v3 + 4);
				}
				else
				{
					v4 = 0i64;
					dword_140DC345C = 0;
				}
			}
			if (!(_DWORD)v4
				|| (*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
					+ 24i64))(
						qword_140C659A0,
						*(_QWORD*)(qword_140C65898 + 120),
						v4,
						0i64,
						0i64,
						0))
			{
				return 1;
			}
		}
	}
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140DC3458: using guessed type int dword_140DC3458;
// 140DC345C: using guessed type int dword_140DC345C;

