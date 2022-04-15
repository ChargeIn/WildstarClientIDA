#include "../winhttp.h"

//----- (00000001408E7420) ----------------------------------------------------
int* __fastcall sub_1408E7420(__int64 a1)
{
	__int64 v2; // rdi
	int* result; // rax
	int* v4; // rcx

	if (*(_QWORD*)(a1 + 56))
	{
		v2 = 0i64;
		if (*(_DWORD*)(a1 + 128))
		{
			do
			{
				result = *(int**)(a1 + 56);
				v4 = *(int**)&result[2 * v2];
				if (v4)
					result = sub_1407E4830(v4, 0i64, 8 * *(_DWORD*)(a1 + 108) * (unsigned int)*(unsigned __int16*)(a1 + 116));
				v2 = (unsigned int)(v2 + 1);
			} while ((unsigned int)v2 < *(_DWORD*)(a1 + 128));
			*(_DWORD*)(a1 + 64) = 0;
		}
		else
		{
			*(_DWORD*)(a1 + 64) = 0;
		}
	}
	else
	{
		*(_DWORD*)(a1 + 64) = 0;
	}
	return result;
}

