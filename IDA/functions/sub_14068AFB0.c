#include "../winhttp.h"

//----- (000000014068AFB0) ----------------------------------------------------
__int64 __fastcall sub_14068AFB0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v5; // rax
	__int64 v6; // r14
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // edi
	unsigned int v12; // eax
	_QWORD* v13; // rax
	__int64 v14; // rdx
	__int64(__fastcall * *v16)(); // [rsp+20h] [rbp-28h] BYREF
	int v17; // [rsp+28h] [rbp-20h]
	_QWORD* v18; // [rsp+30h] [rbp-18h]
	int v19; // [rsp+38h] [rbp-10h]

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 8) + 32i64))(*(_QWORD*)(v3 + 8)),
			v5 = sub_140498A40(qword_140C65980, v4, 0),
			(v6 = v5) != 0)
		&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 104i64))(v5))
	{
		v7 = a1[4];
		v16 = off_140B569F0;
		v8 = *(_QWORD*)(v7 + 112);
		v18 = a1;
		v19 = 1;
		if (*(_QWORD*)(v7 + 120) >= v8)
			sub_14005E2C0((__int64)a1);
		v9 = a1[2];
		v10 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v9 + 8) = 5;
		*(_QWORD*)v9 = v10;
		a1[2] += 16i64;
		v11 = sub_1400578C0((__int64)a1);
		v17 = v11;
		LODWORD(v9) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 368i64))(v6);
		v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
		sub_1405F0430(v6 + 432, (__int64)&v16, v12, v9);
		v13 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
		v14 = a1[2];
		*(_QWORD*)v14 = *v13;
		*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v14, v11);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

