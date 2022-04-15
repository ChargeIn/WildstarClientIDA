#include "../winhttp.h"

//----- (0000000140412900) ----------------------------------------------------
__int64 __fastcall sub_140412900(__int64 a1, _DWORD* a2, int a3, int a4)
{
	int v4; // eax
	unsigned int v5; // ebx
	int v6; // eax
	__int64 v7; // rdx
	__int64 v8; // rax

	v4 = *(_DWORD*)(a1 + 1188);
	v5 = 0;
	if (a4 >= v4)
	{
		if (a2)
		{
			v5 = 1;
			*(_DWORD*)(a1 + 744) = *a2;
			*(_DWORD*)(a1 + 748) = a2[1];
			*(_DWORD*)(a1 + 752) = a2[2];
			v6 = a2[3];
			v7 = *(_QWORD*)a1;
			*(_DWORD*)(a1 + 756) = v6;
			*(_DWORD*)(a1 + 1188) = a4;
			if (v7)
			{
				v8 = *(_QWORD*)(v7 + 88);
				if (v8)
				{
					if (*(int*)(v8 + 8) < 1)
					{
						*(_QWORD*)(a1 + 744) = 0i64;
						*(_QWORD*)(a1 + 752) = 0i64;
					LABEL_10:
						*(_DWORD*)(a1 + 1188) = 0;
					}
				}
			}
		}
		else if (a4 == 6 && v4)
		{
			v5 = 1;
			goto LABEL_10;
		}
	}
	if (a3)
		sub_140412AD0(a1);
	return v5;
}
// 140412963: conditional instruction was optimized away because rax.8!=0

