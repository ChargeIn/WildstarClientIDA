#include "../winhttp.h"

//----- (00000001403CC270) ----------------------------------------------------
__int64 __fastcall sub_1403CC270(__int64 a1, __int64 a2)
{
	unsigned int i; // r9d
	int* v5; // rax
	__int64 v6; // rcx
	int v7; // edx
	__int64 v8; // r8
	_DWORD* v9; // r8

	for (i = 0; i < *(_DWORD*)a2; ++i)
	{
		v5 = (int*)(*(_QWORD*)(a2 + 8) + 68i64 * i);
		v6 = *v5;
		if ((int)v6 >= 0)
		{
			v7 = v5[2];
			if (!v7 && (unsigned int)v6 < 0xC)
			{
				v8 = 8 * v6 + 175;
				goto LABEL_9;
			}
			if (v7 == 1 && (unsigned int)v6 < 5)
			{
				v8 = 8 * v6 + 283;
			LABEL_9:
				v9 = (_DWORD*)(a1 + 8 * (v6 + v8));
				if (v9)
				{
					v9[14] = v5[1];
					*v9 = v5[3];
					v9[7] = v5[10];
					v9[1] = v5[4];
					v9[8] = v5[11];
					v9[2] = v5[5];
					v9[9] = v5[12];
					v9[3] = v5[6];
					v9[10] = v5[13];
					v9[4] = v5[7];
					v9[11] = v5[14];
					v9[5] = v5[8];
					v9[12] = v5[15];
					v9[6] = v5[9];
					v9[13] = v5[16];
				}
			}
		}
	}
	return 0i64;
}

