#include "../winhttp.h"

//----- (000000014068BA90) ----------------------------------------------------
__int64 __fastcall sub_14068BA90(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v5; // rax
	__int64 v6; // rdi
	__int64 v7; // rax
	__int64 v8; // rax

	if (!*(_QWORD*)(qword_140C65898 + 120)
		|| (v2 = sub_140056AB0(a1, 1u)) == 0
		|| (v3 = *(_QWORD*)(v2 + 8)) == 0
		|| (v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 8) + 32i64))(*(_QWORD*)(v3 + 8)),
			v5 = sub_140498A40(qword_140C65980, v4, 0),
			(v6 = v5) == 0)
		|| !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 104i64))(v5))
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		goto LABEL_12;
	}
	if (!*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 32i64))(v6) + 36))
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	LABEL_12:
		a1[2] += 16i64;
		return 1i64;
	}
	v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 32i64))(v6);
	v8 = sub_14020FD40(*(_DWORD*)(v7 + 36));
	if (v8 && (*(_BYTE*)(v8 + 12) & 8) == 0)
	{
		sub_1406B91F0(a1, v8);
		return 1i64;
	}
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

