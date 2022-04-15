#include "../winhttp.h"

//----- (000000014078DA50) ----------------------------------------------------
__int64 __fastcall sub_14078DA50(_QWORD* a1)
{
	int v2; // ebx
	int v3; // eax
	signed int v4; // edx
	__int64 v5; // rcx
	int v6; // eax
	int v7; // eax
	int v8; // ebx
	__int64 v9; // rax

	v2 = sub_140056D60(a1, 1u);
	v3 = sub_140056D60(a1, 2u);
	if (v3 < 0 || v2 >= 0)
	{
		v6 = -v3;
		if (v6 >= 0)
		{
			if (v6 < 32)
			{
				v8 = v2 << v6;
				goto LABEL_12;
			}
		}
		else
		{
			v7 = -v6;
			if (v7 < 32)
			{
				v8 = (unsigned int)v2 >> v7;
			LABEL_12:
				v9 = a1[2];
				*(_DWORD*)(v9 + 8) = 3;
				*(double*)v9 = (double)v8;
				goto LABEL_13;
			}
		}
		v8 = 0;
		goto LABEL_12;
	}
	v4 = -1;
	if (v3 < 32)
		v4 = ~(0xFFFFFFFF >> v3) | ((unsigned int)v2 >> v3);
	v5 = a1[2];
	*(_DWORD*)(v5 + 8) = 3;
	*(double*)v5 = (double)v4;
LABEL_13:
	a1[2] += 16i64;
	return 1i64;
}

