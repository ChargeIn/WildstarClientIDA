#include "../winhttp.h"

//----- (0000000140134D90) ----------------------------------------------------
__int64 __fastcall sub_140134D90(LARGE_INTEGER* a1)
{
	LONGLONG QuadPart; // rcx
	__int64 result; // rax
	__int64 v4; // r9
	int LowPart; // r8d
	LARGE_INTEGER v6; // rdx
	DWORD v7; // edi
	int v8; // [rsp+40h] [rbp+8h] BYREF

	QuadPart = a1->QuadPart;
	if (!QuadPart)
		return 0i64;
	result = a1[2].LowPart;
	if (!(_DWORD)result)
	{
		if (a1[26].QuadPart == a1[25].QuadPart)
		{
			a1[2].LowPart = 1;
			return 1i64;
		}
		else
		{
			v4 = a1[25].QuadPart;
			LowPart = a1[7].LowPart;
			v6 = a1[1];
			v7 = 0;
			v8 = 0;
			if ((unsigned __int8)sub_1400F3010(QuadPart + 384, v6, LowPart, v4, byte_1409D8E5C, &v8))
			{
				if (v8 >= 0)
				{
					LOBYTE(v7) = v8 > 0;
					a1[2].LowPart = v7;
					return v7;
				}
				else
				{
					a1[2].LowPart = -1;
					return a1[2].LowPart;
				}
			}
			else
			{
				result = 1i64;
				a1[2].LowPart = 1;
			}
		}
	}
	return result;
}
// 1409D8E5C: using guessed type _BYTE byte_1409D8E5C[24];

