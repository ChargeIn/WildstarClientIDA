#include "../winhttp.h"

//----- (00000001406C3500) ----------------------------------------------------
void __fastcall sub_1406C3500(__int64 a1)
{
	_QWORD* v2; // rcx

	v2 = *(_QWORD**)(a1 + 1072);
	if (v2
		&& !v2[2]
		&& ((*(void(__fastcall**)(_QWORD*))(*v2 + 8i64))(v2),
			*(_QWORD*)(a1 + 1072) = 0i64,
			(*(_BYTE*)(a1 + 664) & 1) != 0))
	{
		sub_1400C6B20(a1);
	}
	else
	{
		sub_1406C2FC0(a1, 1);
	}
}
// 1406C351F: conditional instruction was optimized away because rcx.8!=0

