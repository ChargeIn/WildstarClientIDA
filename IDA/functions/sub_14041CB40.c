#include "../winhttp.h"

//----- (000000014041CB40) ----------------------------------------------------
__int64 __fastcall sub_14041CB40(__int64 a1)
{
	__int64** v2; // rax
	int v3; // ebx
	__int64 v4; // rsi
	int* v5; // rax
	__int64 v6; // rax
	int v7; // eax
	_DWORD* v8; // rcx

	v2 = (__int64**)sub_140417660(a1, 1);
	v3 = 0;
	if (v2 && *v2)
		v4 = **v2;
	else
		v4 = 0i64;
	v5 = (int*)sub_1406622C0(a1, 2);
	if (v5)
		v6 = sub_1403D90D0(qword_140C65898, *v5);
	else
		v6 = 0i64;
	if (v4 && v6)
	{
		v7 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v4 + 104i64))(v4, v6 + 416, 0i64);
		v8 = *(_DWORD**)(a1 + 16);
		v8[2] = 1;
		LOBYTE(v3) = v7 != 0;
		*v8 = v3;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

