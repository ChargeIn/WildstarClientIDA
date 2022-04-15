#include "../winhttp.h"

//----- (000000014049CA10) ----------------------------------------------------
__int64 __fastcall sub_14049CA10(__int64 a1, __int64 a2, int a3, unsigned __int8 a4)
{
	int v4; // eax
	unsigned int v5; // ecx
	BOOL v6; // edx
	int v7; // r8d

	if (!a2)
		return 0i64;
	v4 = *(_DWORD*)(a2 + 128);
	if (v4 != 20 && v4 != 23)
		return 0i64;
	v5 = 0;
	v6 = a4 < 4u && (*(_BYTE*)(qword_140C65898 + 4i64 * a4 + 5192) & 1) != 0;
	v7 = a3 - 1;
	if (v7)
	{
		if (v7 == 1)
		{
			LOBYTE(v5) = !v6;
			return v5;
		}
	}
	else
	{
		return v6;
	}
	return v5;
}
// 140C65898: using guessed type __int64 qword_140C65898;

