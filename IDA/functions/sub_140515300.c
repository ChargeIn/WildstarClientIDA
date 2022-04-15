#include "../winhttp.h"

//----- (0000000140515300) ----------------------------------------------------
int* __fastcall sub_140515300(__int64 a1, int* a2, char a3)
{
	int v5; // eax
	unsigned int v6; // ecx
	__int64 v7; // rax
	_DWORD* v8; // rax
	int v9; // ecx
	int v11[6]; // [rsp+20h] [rbp-18h] BYREF

	if (a3
		&& (v5 = *(_DWORD*)(a1 + 16), v5 < 300)
		&& (v6 = *(_DWORD*)(a1 + 20), v6 != -1)
		&& (v5 || v6 < 0x1F)
		&& (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 168i64))(*(_QWORD*)(a1 + 8)))
	{
		v7 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 168i64))(*(_QWORD*)(a1 + 8));
		v8 = sub_1400CB3D0(v7, v11);
		v9 = v8[2] - *v8;
		LODWORD(v8) = v8[3] - v8[1];
		*a2 = v9;
		a2[1] = (int)v8;
		return a2;
	}
	else
	{
		*(_QWORD*)a2 = 0i64;
		return a2;
	}
}
// 140515300: using guessed type int var_18[6];

