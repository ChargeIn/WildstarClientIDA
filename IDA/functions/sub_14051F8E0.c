#include "../winhttp.h"

//----- (000000014051F8E0) ----------------------------------------------------
int* __fastcall sub_14051F8E0(__int64 a1, int* a2)
{
	__int64 v3; // rcx
	__int64 v5; // rax
	_DWORD* v6; // rax
	int v7; // ecx
	int v9[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = *(_QWORD*)(a1 + 8);
	if (v3 && (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 168i64))(v3))
	{
		v5 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 168i64))(*(_QWORD*)(a1 + 8));
		v6 = sub_1400CB3D0(v5, v9);
		v7 = v6[2] - *v6;
		LODWORD(v6) = v6[3] - v6[1];
		*a2 = v7;
		a2[1] = (int)v6;
		return a2;
	}
	else
	{
		*(_QWORD*)a2 = 0i64;
		return a2;
	}
}
// 14051F8E0: using guessed type int var_18[6];

