#include "../winhttp.h"

//----- (0000000140690330) ----------------------------------------------------
__int64 __fastcall sub_140690330(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	int v7; // eax
	_DWORD* v8; // rcx
	_DWORD* v9; // rax

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
			qword_140C65980,
			**(unsigned int**)(*(_QWORD*)(v3 + 8) + 8i64),
			0i64),
			(v5 = v4) != 0)
		&& (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 40i64))(v4)
		&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 104i64))(v5)
		&& (v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 40i64))(v5),
			(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v6 + 104i64))(v6)))
	{
		v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 512i64))(v5);
		v8 = (_DWORD*)a1[2];
		v8[2] = 1;
		*v8 = v7 != 0;
	}
	else
	{
		v9 = (_DWORD*)a1[2];
		*v9 = 0;
		v9[2] = 1;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

