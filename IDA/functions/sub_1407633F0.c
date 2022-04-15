#include "../winhttp.h"

//----- (00000001407633F0) ----------------------------------------------------
__int64 __fastcall sub_1407633F0(_QWORD* a1)
{
	int v2; // eax
	int v3; // r8d
	signed int v4; // r11d
	int v5; // edx
	signed int v6; // ecx
	__int64 result; // rax

	if ((unsigned int)sub_140056D60(a1, 1u) > 0xC)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v2 = sub_1403ABFE0(qword_140C65898 + 7160, 11, 0);
		v5 = 0x7FFFFFFF;
		v6 = 0x80000000;
		if (v2 != 0x7FFFFFFF)
			v5 = v2;
		if (v5 != 0x80000000)
			v6 = v5;
		if (v4 < v6)
		{
			return sub_1407402B0(a1, v4, v3, 0i64);
		}
		else
		{
			result = (unsigned int)(v3 + 1);
			*(_DWORD*)(a1[2] + 8i64) = v3;
			a1[2] += 16i64;
		}
	}
	return result;
}
// 140763441: variable 'v4' is possibly undefined
// 140763447: variable 'v3' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

