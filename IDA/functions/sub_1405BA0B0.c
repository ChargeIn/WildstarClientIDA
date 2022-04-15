#include "../winhttp.h"

//----- (00000001405BA0B0) ----------------------------------------------------
__int64 __fastcall sub_1405BA0B0(__int64 a1)
{
	int v1; // r11d
	__int64 result; // rax
	__int64 v3; // rdx
	__int64 v4; // rax
	int v5; // ecx
	int i; // r8d
	int v7; // edx

	v1 = *(_DWORD*)(a1 + 1024);
	if (v1 < 0)
		return *(_QWORD*)(a1 + 1168);
	v3 = *(_QWORD*)(a1 + 664);
	if ((v3 & 4) != 0)
	{
		v4 = *(_QWORD*)(qword_140C65898 + 25744);
	}
	else
	{
		v4 = *(_QWORD*)(a1 + 1032);
		if (v4)
			v4 = *(_QWORD*)(v4 + 16);
	}
	if (v4)
	{
		v5 = (v3 & 1) != 0;
		if ((v3 & 2) != 0)
			v5 |= 2u;
		if ((v3 & 0x10) != 0)
			v5 |= 4u;
		if ((v3 & 0x20) != 0)
			v5 |= 8u;
		if ((v3 & 0x40) != 0)
			v5 |= 0x10u;
		if ((v3 & 0x80u) != 0i64)
			v5 |= 0x20u;
		if ((v3 & 0x100) != 0)
			v5 |= 0x40u;
		result = *(_QWORD*)(v4 + 5616);
		for (i = 0; result; result = *(_QWORD*)(result + 48))
		{
			v7 = v5 & *(_DWORD*)(result + 20);
			if (((v5 & 3) == 0 || (v7 & 3) != 0) && ((v5 & 0x7C) == 0 || (v7 & 0x7C) != 0))
			{
				if (v1 == i)
					return result;
				++i;
			}
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

