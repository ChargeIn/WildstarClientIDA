#include "../winhttp.h"

//----- (00000001408372F0) ----------------------------------------------------
void __fastcall sub_1408372F0(__int64 a1, int a2, __int64 a3, float a4, __int64 a5)
{
	__int64 v5; // rbp
	__int64* i; // rdi
	unsigned int v9; // esi
	__int64** j; // rbx

	v5 = a5;
	if (a5)
	{
		for (i = *(__int64**)(a1 + 4712); i; i = (__int64*)*i)
		{
			if (*((_DWORD*)i + 3) == a2)
			{
				v9 = sub_1408358D0((_DWORD*)i + 4, a4, 0, &a5);
				if (!a3 || (unsigned int)sub_1408358D0((_DWORD*)i + 4, *(float*)(a3 + 8), 0, &a5) != v9)
				{
					for (j = (__int64**)i[4]; j; j = (__int64**)*j)
						(*(void(__fastcall**)(__int64*, _QWORD, __int64))(*j[1] + 8))(j[1], v9, v5);
				}
			}
		}
	}
}

