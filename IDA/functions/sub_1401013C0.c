#include "../winhttp.h"

//----- (00000001401013C0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1401013C0(__int64 a1)
{
	__int64 v1; // r9
	__int64 v3; // r8
	unsigned int* v4; // rdi

	v1 = *(_QWORD*)(a1 + 64);
	if ((int)((v1 - *(_QWORD*)(a1 + 56)) / 304) > 0)
	{
		v3 = *(_QWORD*)(a1 + 56);
		if (v3 + 304 != v1)
			sub_14010AA70(v3 + 304, v1, v3);
		*(_QWORD*)(a1 + 64) -= 304i64;
		v4 = *(unsigned int**)(a1 + 64);
		if (*(_QWORD*)v4)
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)v4 + 8i64))(*(_QWORD*)v4);
			*(_QWORD*)v4 = 0i64;
		}
		sub_1401429A0(qword_140C63678, v4[23]);
		sub_1401429A0(qword_140C63678, v4[22]);
	}
	return sub_140101100(a1);
}
// 140C63678: using guessed type __int64 qword_140C63678;

