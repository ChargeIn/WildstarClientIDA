#include "../winhttp.h"

//----- (0000000140889A90) ----------------------------------------------------
__int64 __fastcall sub_140889A90(__int64* a1, unsigned int a2, unsigned int a3)
{
	__int64 v4; // r8
	__int64 v5; // r10
	__int16 v7; // bx
	__int64 result; // rax
	unsigned int v9; // r8d
	__int64 v10; // r10
	__int64 v11; // rcx
	__int16 v12; // ax

	LODWORD(v4) = a2;
	v5 = 2i64 * a2;
	v7 = *(_WORD*)(v5 + *a1);
	if (a2 < a3)
	{
		--a3;
		v9 = a2 + 1;
		if (a2 + 1 <= a3)
		{
			v10 = 2i64 * v9;
			do
			{
				v11 = v9++ - 1;
				v12 = *(_WORD*)(v10 + *a1);
				v10 += 2i64;
				*(_WORD*)(*a1 + 2 * v11) = v12;
			} while (v9 <= a3);
		}
		goto LABEL_8;
	}
	if (a2 <= a3)
	{
	LABEL_8:
		result = *a1;
		*(_WORD*)(*a1 + 2i64 * a3) = v7;
		return result;
	}
	do
	{
		v4 = (unsigned int)(v4 - 1);
		v5 -= 2i64;
		*(_WORD*)(v5 + *a1 + 2) = *(_WORD*)(*a1 + 2 * v4);
	} while ((unsigned int)v4 > a3);
	result = *a1;
	*(_WORD*)(*a1 + 2i64 * a3) = v7;
	return result;
}

