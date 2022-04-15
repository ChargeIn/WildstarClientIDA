#include "../winhttp.h"

//----- (00000001401DA4F0) ----------------------------------------------------
void __fastcall sub_1401DA4F0(__int64 a1)
{
	__int64 v2; // rcx
	_QWORD* v3; // rcx
	_QWORD* v4; // rcx

	*(_QWORD*)a1 = off_140B600E0;
	v2 = *(_QWORD*)(a1 + 16);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	sub_140195D70(a1 + 80);
	*(_DWORD*)(a1 + 80) = 0;
	v3 = *(_QWORD**)(a1 + 96);
	if (v3)
		*v3 = *(_QWORD*)(a1 + 104);
	v4 = *(_QWORD**)(a1 + 104);
	if (v4)
		*v4 = *(_QWORD*)(a1 + 96);
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
}
// 140B600E0: using guessed type __int64 (__fastcall *off_140B600E0[8])();

