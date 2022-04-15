#include "../winhttp.h"

//----- (000000014010A3E0) ----------------------------------------------------
void __fastcall sub_14010A3E0(unsigned int* a1, unsigned int* a2)
{
	unsigned int* v3; // rbx

	if (a1 != a2)
	{
		v3 = a1;
		do
		{
			if (*(_QWORD*)v3)
			{
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)v3 + 8i64))(*(_QWORD*)v3);
				*(_QWORD*)v3 = 0i64;
			}
			sub_1401429A0(qword_140C63678, v3[23]);
			sub_1401429A0(qword_140C63678, v3[22]);
			v3 += 76;
		} while (v3 != a2);
	}
}
// 140C63678: using guessed type __int64 qword_140C63678;

