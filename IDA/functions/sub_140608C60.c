#include "../winhttp.h"

//----- (0000000140608C60) ----------------------------------------------------
int* __fastcall sub_140608C60(__int64 a1, unsigned int a2, int a3)
{
	int* result; // rax
	unsigned __int64 v7; // r9
	__int64* i; // rcx
	__int64 v9; // rax

	result = sub_1406089A0(a1, a2, 0i64);
	if (a3)
	{
		result = 0i64;
		v7 = *(_QWORD*)(qword_140C65898 + 2712);
		if (v7)
		{
			for (i = *(__int64**)(qword_140C65898 + 2704); !*i || *(_DWORD*)(*i + 64) != a3; ++i)
			{
				result = (int*)((char*)result + 1);
				if ((unsigned __int64)result >= v7)
					return result;
			}
			v9 = sub_1405A4B80(*i, 1);
			return sub_1406089A0(a1, a2, v9);
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

