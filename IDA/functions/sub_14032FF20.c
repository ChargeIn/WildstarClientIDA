#include "../winhttp.h"

//----- (000000014032FF20) ----------------------------------------------------
__int64 __fastcall sub_14032FF20(__int64 a1, __int64 a2)
{
	__int64 v4; // rdi
	int* v5; // rax
	int* v6; // rsi

	if (*(_QWORD*)(a1 + 32))
	{
		v4 = *(unsigned __int16*)(*(_QWORD*)(a1 + 24) + 2i64 * *(_QWORD*)(a1 + 32) - 2);
		*(_QWORD*)(*(_QWORD*)a1 + 8 * v4) = a2;
		sub_140334370(a1 + 24, *(_QWORD*)(a1 + 32) - 1i64);
	}
	else
	{
		v4 = *(_QWORD*)(a1 + 8);
		v5 = sub_14018DB00(*(_QWORD*)a1, v4 + 1, 8i64);
		v6 = v5;
		*(_QWORD*)&v5[2 * v4] = a2;
		if (*(int**)a1 != v5)
		{
			sub_1407DB590(v5, *(int**)a1, 8i64 * *(_QWORD*)(a1 + 8));
			if (*(_QWORD*)a1)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)a1 - 16i64) + 8i64))(*(_QWORD*)a1 - 16i64);
			*(_QWORD*)a1 = v6;
		}
		*(_QWORD*)(a1 + 8) = v4 + 1;
	}
	if ((unsigned int)v4 >= 0xFFFF)
		return 0xFFFFFFFFi64;
	return (unsigned __int16)v4 | ((unsigned __int16)++ * (_WORD*)(a1 + 16) << 16);
}

