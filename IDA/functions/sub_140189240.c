#include "../winhttp.h"

//----- (0000000140189240) ----------------------------------------------------
__int64 __fastcall sub_140189240(float* a1, float* a2)
{
	float* v4; // r9
	float* v5; // r8
	__int64 v6; // rbx
	float v7; // xmm1_4
	__int128 v8; // xmm2
	__int64 v9; // rdx
	float* v10; // rcx
	__int128 v11; // xmm0
	__int64 result; // rax
	float* v13; // rdx
	float* v14; // rcx

	if (a1 != a2)
	{
		v4 = a1 + 8;
		if (a1 + 8 != a2)
		{
			v5 = a1 + 4;
			v6 = 16i64 - (_QWORD)a1;
			do
			{
				v7 = v5[8];
				v8 = *(_OWORD*)v4;
				if (v7 >= a1[4])
				{
					v13 = v4;
					v14 = v5 - 4;
					if (v7 < *v5)
					{
						do
						{
							*(_OWORD*)v13 = *(_OWORD*)v14;
							result = *((unsigned int*)v14 + 4);
							*((_DWORD*)v13 + 4) = result;
							v13 = v14;
							v14 -= 8;
						} while (v7 < v14[4]);
					}
					*(_OWORD*)v13 = v8;
					v13[4] = v7;
				}
				else
				{
					v9 = ((__int64)v5 + v6) >> 5;
					if (v9 > 0)
					{
						v10 = v5 + 4;
						do
						{
							v11 = *((_OWORD*)v10 - 2);
							v10 -= 8;
							--v9;
							*((_OWORD*)v10 + 2) = v11;
							result = *((unsigned int*)v10 + 4);
							*((_DWORD*)v10 + 12) = result;
						} while (v9 > 0);
					}
					*(_OWORD*)a1 = v8;
					a1[4] = v7;
				}
				v4 += 8;
				v5 += 8;
			} while (v4 != a2);
		}
	}
	return result;
}

