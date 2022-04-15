#include "../winhttp.h"

//----- (000000014066E000) ----------------------------------------------------
__int64 __fastcall sub_14066E000(_DWORD* a1)
{
	__int64 v1; // rdi
	__int64 v3; // rdx
	unsigned __int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	_QWORD* v7; // rax
	__int64 v8; // r8
	__int64 v9; // rdx
	__int64(__fastcall * *v11)(); // [rsp+20h] [rbp-28h] BYREF
	int v12; // [rsp+28h] [rbp-20h]
	__int64 v13; // [rsp+30h] [rbp-18h]
	int v14; // [rsp+38h] [rbp-10h]

	v1 = *(_QWORD*)a1;
	v3 = *(_QWORD*)(*(_QWORD*)a1 + 32i64);
	v11 = off_140B569F0;
	v13 = v1;
	v4 = *(_QWORD*)(v3 + 112);
	v14 = 1;
	if (*(_QWORD*)(v3 + 120) >= v4)
		sub_14005E2C0(v1);
	v5 = *(_QWORD*)(v1 + 16);
	v6 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	*(_QWORD*)(v1 + 16) += 16i64;
	LODWORD(v5) = sub_1400578C0(v1);
	v12 = v5;
	sub_140008410((__int64)(a1 + 6));
	sub_140008410((__int64)(a1 + 14));
	sub_14066E1E0((__int64)a1, 1);
	a1[4] = 0;
	sub_140673B80((__int64)a1, (__int64)&v11);
	v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v5);
	v8 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v8 = *v7;
	v9 = *((unsigned int*)v7 + 2);
	*(_DWORD*)(v8 + 8) = v9;
	*(_QWORD*)(v1 + 16) += 16i64;
	sub_1400579E0(v1, v9, v5);
	return 1i64;
}
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

