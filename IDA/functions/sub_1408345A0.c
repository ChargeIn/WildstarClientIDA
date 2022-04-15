#include "../winhttp.h"

//----- (00000001408345A0) ----------------------------------------------------
__int64 __fastcall sub_1408345A0(__int64 a1)
{
	bool v1; // zf
	unsigned int v2; // esi
	int v4; // ebx

	v1 = (*(_DWORD*)(a1 + 8))-- == 1;
	v2 = *(_DWORD*)(a1 + 8);
	if (v1)
	{
		v4 = dword_140C10F28;
		*(_QWORD*)a1 = off_1409A2E70;
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 56i64))(*(_QWORD*)(a1 + 16), a1);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 16i64))(*(_QWORD*)(a1 + 16));
		sub_140881720(v4, a1);
	}
	return v2;
}
// 1409A2E70: using guessed type __int64 (__fastcall *off_1409A2E70[8])();
// 140C10F28: using guessed type int dword_140C10F28;

