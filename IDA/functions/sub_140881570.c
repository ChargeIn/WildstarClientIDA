#include "../winhttp.h"

//----- (0000000140881570) ----------------------------------------------------
__int64 __fastcall sub_140881570(unsigned int* a1, int a2)
{
	unsigned int v2; // r11d
	__int64 v3; // r8
	unsigned int v4; // r10d
	unsigned int v5; // r9d
	__int64 v6; // rbx
	_DWORD* v7; // rcx
	unsigned int v8; // eax

	v2 = *a1;
	v3 = 0i64;
	v4 = 0;
	v5 = 0;
	if (*a1)
	{
		v6 = *((_QWORD*)a1 + 1);
		v7 = (_DWORD*)(v6 + 4);
		do
		{
			v8 = abs32(*v7 - a2);
			if (!v3 || v8 < v4)
			{
				v4 = v8;
				v3 = v6 + 16i64 * v5;
			}
			++v5;
			v7 += 4;
		} while (v5 < v2);
	}
	return v3;
}

