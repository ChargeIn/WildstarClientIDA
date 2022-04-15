#include "../winhttp.h"

//----- (000000014068C220) ----------------------------------------------------
__int64 __fastcall sub_14068C220(_QWORD* a1)
{
	int v1; // edi
	__int64 v3; // rax
	__int64 v4; // rcx
	unsigned int v5; // eax
	__int64 v6; // rax
	int v7; // eax
	_DWORD* v8; // rcx
	bool v9; // zf
	__int64 result; // rax

	v1 = 0;
	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v3 = sub_140056AB0(a1, 1u)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0
		&& (v5 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v4 + 8) + 32i64))(*(_QWORD*)(v4 + 8)),
			(v6 = sub_140498A40(qword_140C65980, v5, 0)) != 0))
	{
		v7 = (*(_DWORD*)(*(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 24i64))(v6) + 8) + 40i64) >> 15) & 1;
	}
	else
	{
		v7 = 0;
	}
	v8 = (_DWORD*)a1[2];
	v9 = v7 == 0;
	result = 1i64;
	LOBYTE(v1) = !v9;
	v8[2] = 1;
	*v8 = v1;
	a1[2] += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

