#include "../winhttp.h"

//----- (000000014076A6E0) ----------------------------------------------------
__int64 __fastcall sub_14076A6E0(_QWORD* a1)
{
	_DWORD* v1; // rax
	int v2; // ecx
	__int64 v3; // rax
	_QWORD* v4; // rax
	unsigned __int64 v5; // rcx
	__int64 v6; // rdx

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || (int)v1[2] <= 0)
		v2 = 0;
	else
		v2 = sub_140056D60(a1, 1u);
	if (!*(_DWORD*)(qword_140C65B98 + 312) || !*(_QWORD*)(qword_140C65B98 + 320))
	{
		v3 = *(_QWORD*)(qword_140C65898 + 27728);
		if (v3)
		{
			if (((*(_DWORD*)(v3 + 8) >> 3) & 1) != 0)
			{
				v4 = *(_QWORD**)(qword_140C65898 + 27728);
				v5 = (unsigned int)(v2 - 1);
				if (v4)
				{
					if (v5 < v4[12])
					{
						if (v5)
						{
							if (v5 <= v4[13])
								--v5;
						}
						else
						{
							v5 = v4[13];
						}
						v6 = *(_QWORD*)(v4[11] + 8 * v5);
						if (v6)
							sub_1405C13D0(qword_140C65B98 + 264, (__int64*)(v6 + 16));
					}
				}
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

