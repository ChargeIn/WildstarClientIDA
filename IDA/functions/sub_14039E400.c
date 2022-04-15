#include "../winhttp.h"

//----- (000000014039E400) ----------------------------------------------------
__int64 __fastcall sub_14039E400(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	char v5; // [rsp+30h] [rbp+8h] BYREF

	result = *(_QWORD*)(a1 + 120);
	if (result)
	{
		result = sub_1403D90D0(qword_140C65898, *(_DWORD*)(result + 192));
		if (result)
		{
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)result + 32i64))(result);
			if ((_DWORD)result)
			{
				v3 = *(_QWORD*)(a1 + 120);
				if (!v3
					|| (result = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v3 + 192))) == 0
					|| *(_DWORD*)(result + 128) != 9)
				{
					result = sub_14039E1A0(a1);
					if (!(_DWORD)result)
					{
						if (dword_140C636A8 - *(_DWORD*)(a1 + 26340) <= 0
							|| (result = (unsigned int)(dword_140C636A8 - *(_DWORD*)(a1 + 26340) - 3000), (int)result >= 0))
						{
							v4 = qword_140C65898;
							*(_DWORD*)(qword_140C65898 + 26544) = 0;
							v5 = 0;
							sub_1403F4900(v4, 0x1AFu, (__int64)&v5);
							result = (unsigned int)dword_140C636A8;
							*(_DWORD*)(a1 + 26340) = dword_140C636A8;
						}
					}
				}
			}
		}
	}
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

