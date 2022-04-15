#include "../winhttp.h"

//----- (000000014051A510) ----------------------------------------------------
int* __fastcall sub_14051A510(__int64 a1, int* a2)
{
	__int64 v4; // rcx
	__int64 v5; // rax
	_DWORD* v6; // rax
	int v7; // ecx
	int v9[6]; // [rsp+20h] [rbp-18h] BYREF

	if (*(_QWORD*)(a1 + 40)
		&& (v4 = *(_QWORD*)(a1 + 8)) != 0
		&& (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 168i64))(v4))
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
// 14051A510: using guessed type int var_18[6];

