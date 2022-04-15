#include "../winhttp.h"

//----- (0000000140871540) ----------------------------------------------------
__int64 __fastcall sub_140871540(_BYTE* a1, unsigned __int8 a2, int a3)
{
	unsigned int v6; // edx
	unsigned int v7; // ecx
	_DWORD* v8; // rax

	if (a2 >= a1[24])
		return 2i64;
	v6 = (unsigned __int8)a1[25];
	v7 = 0;
	if (a1[25])
	{
		v8 = (_DWORD*)(*(_QWORD*)a1 + 16i64);
		do
		{
			if (*v8 == a3)
				break;
			++v7;
			v8 += 6;
		} while (v7 < v6);
	}
	if (v7 == v6)
		return 2i64;
	sub_140871750((__int64*)(*(_QWORD*)a1 + 24i64 * (v7 + v6 * a2)));
	return 1i64;
}

