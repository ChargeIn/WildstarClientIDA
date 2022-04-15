#include "../winhttp.h"

//----- (00000001401C0050) ----------------------------------------------------
__int64 __fastcall sub_1401C0050(__int64 a1)
{
	int v2; // eax
	unsigned int v3; // ecx

	if ((*(_BYTE*)(a1 + 48) & 2) == 0)
		return 2147942405i64;
	if (*(_DWORD*)(a1 + 64))
		return 2684551172i64;
	v2 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 40) + 144i64))(*(_QWORD*)(a1 + 40));
	v3 = 0;
	if (v2 < 0)
		return (unsigned int)v2;
	return v3;
}

