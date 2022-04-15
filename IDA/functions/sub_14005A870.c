#include "../winhttp.h"

//----- (000000014005A870) ----------------------------------------------------
char* __fastcall sub_14005A870(__int64 a1, __int64 a2, __int64* a3)
{
	_DWORD* v3; // rax
	_DWORD* v6; // rax
	_DWORD* v7; // r8
	__int64 v8; // r10
	int v9; // eax
	int v10; // ecx

	v3 = *(_DWORD**)(a2 + 8);
	if (v3[2] == 6 && !*(_BYTE*)(*(_QWORD*)v3 + 10i64) && *(int*)(a2 + 36) > 0)
		return 0i64;
	v6 = *(_DWORD**)(a2 - 32);
	if (v6[2] != 6 || *(_BYTE*)(*(_QWORD*)v6 + 10i64))
		return 0i64;
	v7 = *(_DWORD**)(a2 - 32);
	v8 = a2 - 40;
	if (v7[2] != 6 || *(_BYTE*)(*(_QWORD*)v7 + 10i64))
	{
		v9 = -1;
	}
	else
	{
		if (v8 == *(_QWORD*)(a1 + 40))
			*(_QWORD*)(v8 + 24) = *(_QWORD*)(a1 + 48);
		v9 = ((__int64)(*(_QWORD*)(v8 + 24) - *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v7 + 32i64) + 24i64)) >> 2) - 1;
	}
	v10 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v7 + 32i64) + 24i64) + 4i64 * v9) & 0x3F;
	if (((v10 - 28) & 0xFFFFFFFA) != 0 || v10 == 32 || v7[2] != 6)
		return 0i64;
	else
		return sub_14005A5E0(
			a1,
			v8,
			(unsigned __int8)(*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v7 + 32i64) + 24i64) + 4i64 * v9) >> 6),
			a3);
}

