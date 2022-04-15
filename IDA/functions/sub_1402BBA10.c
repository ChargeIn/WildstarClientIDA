#include "../winhttp.h"

//----- (00000001402BBA10) ----------------------------------------------------
__int64 __fastcall sub_1402BBA10(_QWORD* a1, unsigned int* a2)
{
	int v5; // eax

	if (a1[24] < a1[22])
	{
		if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1[2] + 16i64) + 608i64))(*(_QWORD*)(a1[2] + 16i64)))
			return 0i64;
		v5 = sub_1402B8F30(a1[3], *(_WORD*)(a1[16] + 2i64 * a1[24]), (_QWORD*)(a1[21] + 8i64 * a1[24]));
		if (v5 < 0)
			return 0i64;
		while (++a1[24] != a1[22])
		{
			if (v5 != 1 && (!*a2 || !(unsigned int)sub_14001C520(a2)))
				return 0i64;
			v5 = sub_1402B8F30(a1[3], *(_WORD*)(a1[16] + 2i64 * a1[24]), (_QWORD*)(a1[21] + 8i64 * a1[24]));
			if (v5 < 0)
				return 0i64;
		}
	}
	return 1i64;
}

