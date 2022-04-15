#include "../winhttp.h"

//----- (00000001408C36D0) ----------------------------------------------------
int* __fastcall sub_1408C36D0(__int64 a1)
{
	unsigned int i; // esi
	int* result; // rax
	_DWORD* v4; // rdi
	unsigned int j; // ebx
	int* v6; // rcx

	for (i = 0; i < *(_DWORD*)(a1 + 172); v4[3] = 0)
	{
		result = (int*)i;
		v4 = (_DWORD*)(a1 + 24i64 * i);
		if (v4[2])
		{
			for (j = 0; j < v4[4]; ++j)
			{
				result = (int*)j;
				v6 = *(int**)&v4[2 * j];
				if (v6)
					result = sub_1407E4830(v6, 0i64, (unsigned int)(4 * v4[2]));
			}
		}
		++i;
	}
	return result;
}

