#include "../winhttp.h"

//----- (00000001408C3AF0) ----------------------------------------------------
int* __fastcall sub_1408C3AF0(_DWORD* a1)
{
	__int64 v2; // rdi
	int* v3; // rcx
	int* result; // rax

	if (a1[2])
	{
		v2 = 0i64;
		if (a1[4])
		{
			do
			{
				v3 = *(int**)&a1[2 * v2];
				if (v3)
					result = sub_1407E4830(v3, 0i64, (unsigned int)(4 * a1[2]));
				v2 = (unsigned int)(v2 + 1);
			} while ((unsigned int)v2 < a1[4]);
			a1[3] = 0;
		}
		else
		{
			a1[3] = 0;
		}
	}
	else
	{
		a1[3] = 0;
	}
	return result;
}

