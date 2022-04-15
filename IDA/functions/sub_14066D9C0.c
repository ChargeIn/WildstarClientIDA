#include "../winhttp.h"

//----- (000000014066D9C0) ----------------------------------------------------
__int64 __fastcall sub_14066D9C0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rax
	__int64 v6; // rsi
	__int64 v7; // rsi
	int* v8; // rdx

	if (*(_QWORD*)(qword_140C65898 + 120) && (v2 = sub_140056AB0(a1, 1u)) != 0 && (v3 = *(_QWORD*)(v2 + 8)) != 0)
		v4 = sub_14066DAB0(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 8i64), **(_DWORD**)(*(_QWORD*)(v3 + 8) + 8i64));
	else
		v4 = 0i64;
	if (!*(_QWORD*)(qword_140C65898 + 120)
		|| (v5 = sub_140056AB0(a1, 1u)) == 0
		|| (v6 = *(_QWORD*)(v5 + 8)) == 0
		|| (v7 = *(_QWORD*)(v6 + 8)) == 0
		|| !v4
		|| !(*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 88i64))(v4, **(unsigned int**)(v7 + 8)))
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		goto LABEL_16;
	}
	v8 = (int*)(*(_QWORD*)(v7 + 8) + 92i64);
	if (!*v8)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	LABEL_16:
		a1[2] += 16i64;
		return 1i64;
	}
	sub_14066DB90(a1, v8);
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

