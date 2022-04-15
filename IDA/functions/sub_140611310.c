#include "../winhttp.h"

//----- (0000000140611310) ----------------------------------------------------
char* __fastcall sub_140611310(__int64 a1, int a2)
{
	int v3; // edx
	__int64 v4; // rbx

	if (*(_DWORD*)(a1 + 8) != a2)
	{
		*(_DWORD*)(a1 + 8) = a2;
		if (a2 == 1)
		{
			v3 = dword_140C636A8;
			v4 = 0i64;
			*(_DWORD*)(a1 + 76) = dword_140C636A8;
			for (*(_DWORD*)(a1 + 72) = v3 + 10000;
				(unsigned int)v4 < *(_DWORD*)(*(_QWORD*)a1 + 16i64);
				v4 = (unsigned int)(v4 + 1))
			{
				if ((unsigned int)sub_140553790(*(_QWORD*)a1, v4))
					*(_DWORD*)(a1 + 4 * v4 + 80) = dword_140C636A8;
			}
		}
	}
	return sub_140611710(a1);
}
// 140C636A8: using guessed type int dword_140C636A8;

