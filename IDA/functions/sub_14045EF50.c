#include "../winhttp.h"

//----- (000000014045EF50) ----------------------------------------------------
__int64 __fastcall sub_14045EF50(__int64 a1, __int64 a2, double a3, double a4)
{
	__int64 v4; // r10
	unsigned int v5; // r8d
	__int64 v7; // rcx
	_DWORD* v8; // rdx
	__int64 v9; // rax
	int v11; // eax
	_DWORD* v12; // [rsp+50h] [rbp+8h]

	v4 = qword_140C65898;
	v5 = *(_DWORD*)(a1 + 8);
	v7 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
	v8 = (_DWORD*)v7;
	v9 = *(_QWORD*)(v7 + 8);
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < v5)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v8 = (_DWORD*)v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v8 == (_DWORD*)v7 || (v12 = v8, v5 < v8[8]))
		v12 = *(_DWORD**)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
	if (v12 != (_DWORD*)v7 && v12 != (_DWORD*)-40i64)
	{
		if (!v12[28])
			return sub_14045BF30(a1, 5, 0);
		v11 = sub_1403DA850(v7, v12[13], v12[12], v12[27]);
		sub_1403DAB40(qword_140C65898, a1, *(_QWORD*)(qword_140C65898 + 120), v11, v12[13], v12[12], v12[19]);
		sub_1405FEFC0(*(_QWORD*)(qword_140C65898 + 32144), *(_DWORD*)(a1 + 8));
		v4 = qword_140C65898;
	}
	Apollo_LUAEvent(*(_QWORD*)(v4 + 29504), "UnitDestroyed", L"U", *(unsigned int*)(a1 + 8));
	return sub_1403D9590(qword_140C65898, a1, a3, a4);
}
// 1409EDDFC: using guessed type wchar_t aU_5[2];
// 140C65898: using guessed type __int64 qword_140C65898;

