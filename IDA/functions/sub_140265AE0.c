#include "../winhttp.h"

//----- (0000000140265AE0) ----------------------------------------------------
__int64 __fastcall sub_140265AE0(_DWORD* a1, unsigned int* a2, unsigned int a3)
{
	unsigned int* v3; // r9
	unsigned __int64 v4; // r10
	__int64 result; // rax

	v3 = a2;
	v4 = (unsigned __int64)&a2[4 * a3];
	if ((unsigned __int64)a2 < v4)
	{
		result = (16i64 * a3 + 15) / 16;
		if (result >= 4)
		{
			do
			{
				if (a1)
				{
					result = *v3;
					*a1 = result;
				}
				if (a1 != (_DWORD*)-4i64)
				{
					result = v3[4];
					a1[1] = result;
				}
				if (a1 != (_DWORD*)-8i64)
				{
					result = v3[8];
					a1[2] = result;
				}
				if (a1 != (_DWORD*)-12i64)
				{
					result = v3[12];
					a1[3] = result;
				}
				v3 += 16;
				a1 += 4;
			} while ((__int64)v3 < (__int64)(v4 - 48));
		}
		for (; (unsigned __int64)v3 < v4; ++a1)
		{
			if (a1)
			{
				result = *v3;
				*a1 = result;
			}
			v3 += 4;
		}
	}
	return result;
}

