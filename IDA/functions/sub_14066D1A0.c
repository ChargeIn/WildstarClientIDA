#include "../winhttp.h"

//----- (000000014066D1A0) ----------------------------------------------------
__int64 __fastcall sub_14066D1A0(_QWORD* a1)
{
	int v1; // edi
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rsi
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rcx
	int v9; // eax
	_DWORD* v10; // rcx
	_DWORD* v11; // rax

	v1 = 0;
	if (*(_QWORD*)(qword_140C65898 + 120) && (v3 = sub_140056AB0(a1, 1u)) != 0 && (v4 = *(_QWORD*)(v3 + 8)) != 0)
		v5 = sub_14066DAB0(*(_QWORD*)(*(_QWORD*)(v4 + 8) + 8i64), **(_DWORD**)(*(_QWORD*)(v4 + 8) + 8i64));
	else
		v5 = 0i64;
	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v6 = sub_140056AB0(a1, 1u)) != 0
		&& (v7 = *(_QWORD*)(v6 + 8)) != 0
		&& (v8 = *(_QWORD*)(v7 + 8)) != 0
		&& v5)
	{
		v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v5 + 96i64))(v5, **(unsigned int**)(v8 + 8));
		v10 = (_DWORD*)a1[2];
		v10[2] = 1;
		LOBYTE(v1) = v9 != 0;
		*v10 = v1;
	}
	else
	{
		v11 = (_DWORD*)a1[2];
		*v11 = 0;
		v11[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

