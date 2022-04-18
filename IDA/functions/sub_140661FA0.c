#include "../winhttp.h"

//----- (0000000140661FA0) ----------------------------------------------------
__int64 __fastcall sub_140661FA0(int a1, __int64 a2, unsigned int a3)
{
	__int64 result; // rax
	int v7; // r9d

	result = sub_1403D90D0(qword_140C65898, a3);
	if (result)
	{
		v7 = *(_DWORD*)(result + 128);
		if (v7 == 20 || v7 == 23)
		{
			result = *(unsigned int*)(result + 416);
			if (a1 == (_DWORD)result)
				return Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "PlayerRealmName", byte_1409E9FCC, a3, a2);
		}
	}
	return result;
}
// 1409E9FCC: using guessed type _BYTE byte_1409E9FCC[24];
// 140C65898: using guessed type __int64 qword_140C65898;

