#include "../winhttp.h"

//----- (00000001404E7D00) ----------------------------------------------------
__int64 __fastcall sub_1404E7D00(__int64 a1)
{
	__int64 v1; // rdx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rcx
	_QWORD* v7; // rax
	__int64 v8; // rdx
	__int64(__fastcall * *v10)(); // [rsp+20h] [rbp-28h] BYREF
	int v11; // [rsp+28h] [rbp-20h]
	__int64 v12; // [rsp+30h] [rbp-18h]
	int v13; // [rsp+38h] [rbp-10h]

	v1 = *(_QWORD*)(a1 + 32);
	v10 = off_140B569F0;
	v3 = *(_QWORD*)(v1 + 112);
	v12 = a1;
	v13 = 1;
	if (*(_QWORD*)(v1 + 120) >= v3)
		sub_14005E2C0(a1);
	v4 = *(_QWORD*)(a1 + 16);
	v5 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(a1 + 16) += 16i64;
	LODWORD(v4) = sub_1400578C0(a1);
	v6 = *(_QWORD*)(qword_140C635F0 + 5584);
	v11 = v4;
	sub_140003D80(v6, (__int64)&v10);
	v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v4);
	v8 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v8 = *v7;
	*(_DWORD*)(v8 + 8) = *((_DWORD*)v7 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v8, v4);
	return 1i64;
}
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C635F0: using guessed type __int64 qword_140C635F0;

