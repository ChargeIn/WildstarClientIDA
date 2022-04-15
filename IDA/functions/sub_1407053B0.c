#include "../winhttp.h"

//----- (00000001407053B0) ----------------------------------------------------
__int64 __fastcall sub_1407053B0(__int64 a1)
{
	__int64 v3; // rcx
	unsigned __int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	_QWORD* v7; // rax
	__int64 v8; // rdx
	__int64(__fastcall * *v9)(); // [rsp+20h] [rbp-28h] BYREF
	int v10; // [rsp+28h] [rbp-20h]
	__int64 v11; // [rsp+30h] [rbp-18h]
	int v12; // [rsp+38h] [rbp-10h]

	if (*(_DWORD*)(qword_140C65898 + 32500))
	{
		v11 = a1;
		v3 = *(_QWORD*)(a1 + 32);
		v9 = off_140B569F0;
		v4 = *(_QWORD*)(v3 + 112);
		v12 = 1;
		if (*(_QWORD*)(v3 + 120) >= v4)
			sub_14005E2C0(a1);
		v5 = *(_QWORD*)(a1 + 16);
		v6 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v5 + 8) = 5;
		*(_QWORD*)v5 = v6;
		*(_QWORD*)(a1 + 16) += 16i64;
		LODWORD(v5) = sub_1400578C0(a1);
		v10 = v5;
		sub_140705250((__int64)&v9);
		v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v5);
		v8 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v8 = *v7;
		*(_DWORD*)(v8 + 8) = *((_DWORD*)v7 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400579E0(a1, v8, v5);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
}
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

