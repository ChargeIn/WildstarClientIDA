#include "../winhttp.h"

//----- (000000014044F870) ----------------------------------------------------
__int64 __fastcall sub_14044F870(__int64 a1, unsigned int a2)
{
	unsigned __int64 v2; // r9
	unsigned __int64 v3; // r8
	__int64 v5; // r11
	unsigned __int64 v6; // rax
	unsigned int v7; // edx

	v2 = *(_QWORD*)(a1 + 80);
	v3 = 0i64;
	if (!v2)
		return 0i64;
	v5 = *(_QWORD*)(a1 + 72);
	while (1)
	{
		v6 = v3 + ((v2 - v3) >> 1);
		v7 = **(_DWORD**)(v5 + 8 * v6);
		if (a2 < v7)
		{
			v2 = v3 + ((v2 - v3) >> 1);
			goto LABEL_7;
		}
		if (a2 <= v7)
			return *(_QWORD*)(v5 + 8 * v6);
		v3 = v6 + 1;
	LABEL_7:
		if (v3 >= v2)
			return 0i64;
	}
}

