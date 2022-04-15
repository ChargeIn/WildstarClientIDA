#include "../winhttp.h"

//----- (000000014044F9A0) ----------------------------------------------------
__int64 __fastcall sub_14044F9A0(__int64 a1, unsigned int a2)
{
	unsigned __int64 v2; // r9
	unsigned __int64 v3; // r8
	__int64 v4; // r11
	unsigned __int64 v5; // rax
	unsigned int v6; // ecx

	v2 = *(_QWORD*)(a1 + 40);
	v3 = 0i64;
	if (!v2)
		return 0i64;
	v4 = *(_QWORD*)(a1 + 32);
	while (1)
	{
		v5 = v3 + ((v2 - v3) >> 1);
		v6 = **(_DWORD**)(v4 + 40 * v5);
		if (a2 < v6)
		{
			v2 = v3 + ((v2 - v3) >> 1);
			goto LABEL_7;
		}
		if (a2 <= v6)
			return v4 + 40 * v5;
		v3 = v5 + 1;
	LABEL_7:
		if (v3 >= v2)
			return 0i64;
	}
}

