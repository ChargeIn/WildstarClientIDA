#include "../winhttp.h"

//----- (0000000140569980) ----------------------------------------------------
void __fastcall sub_140569980(__int64 a1)
{
	_QWORD* v2; // rcx
	_QWORD* v3; // rcx
	_QWORD* v4; // rcx
	__int64 v5; // rcx

	if (*(_BYTE*)(a1 + 56))
		sub_14018B900(*(_QWORD*)(a1 + 64), 0);
	sub_140195D70(a1 + 120);
	*(_DWORD*)(a1 + 120) = 0;
	v2 = *(_QWORD**)(a1 + 136);
	if (v2)
		*v2 = *(_QWORD*)(a1 + 144);
	v3 = *(_QWORD**)(a1 + 144);
	if (v3)
		*v3 = *(_QWORD*)(a1 + 136);
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	v4 = *(_QWORD**)(a1 + 104);
	if (v4)
		*v4 = *(_QWORD*)(a1 + 112);
	v5 = *(_QWORD*)(a1 + 112);
	if (v5)
		*(_QWORD*)(v5 + 104) = *(_QWORD*)(a1 + 104);
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
}

