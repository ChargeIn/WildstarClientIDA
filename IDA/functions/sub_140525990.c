#include "../winhttp.h"

//----- (0000000140525990) ----------------------------------------------------
__int64 __fastcall sub_140525990(__int64 a1, int a2, int* a3)
{
	__int64 v5; // rcx
	int v6; // eax
	bool v7; // zf

	if (a2)
		return sub_1400D2550(a1, a2, a3);
	v5 = *(_QWORD*)(a1 + 1472);
	if (!v5
		|| !(*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)v5 + 56i64))(v5)
		|| (unsigned int)(dword_140C636A8 - dword_140C65A60[*(int*)(a1 + 1464)]) >= 0x3E8)
	{
		v6 = sub_1400C3E20(a1 + 1024);
		if (v6 == 2)
		{
			if (*(_QWORD*)(a1 + 1472))
			{
				if (sub_1405257A0(a1) >= 1.0)
				{
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1472) + 8i64))(*(_QWORD*)(a1 + 1472));
					v7 = *(_QWORD*)(a1 + 1472) == 0i64;
					*(_QWORD*)(a1 + 1480) = -1i64;
					if (!v7)
						dword_140C65A60[*(int*)(a1 + 1464)] = dword_140C636A8;
				}
			}
		}
		else if (v6 != 5 && (unsigned int)(v6 - 7) > 1)
		{
			return (*(_BYTE*)(a1 + 1436) & 0x20) == 0;
		}
	}
	return 0i64;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65A60: using guessed type _DWORD dword_140C65A60[44];

