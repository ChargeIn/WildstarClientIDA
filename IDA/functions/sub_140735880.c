#include "../winhttp.h"

//----- (0000000140735880) ----------------------------------------------------
__int64 __fastcall sub_140735880(_QWORD* a1)
{
	__int64 v1; // rdx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	_QWORD* v6; // rcx
	int v7; // edx
	_QWORD* v8; // rax
	__int64 v9; // r11
	__int64 v10; // r9
	int v11; // r8d
	__int64 v12; // rdx
	__int64(__fastcall * *v14)(); // [rsp+20h] [rbp-28h] BYREF
	int v15; // [rsp+28h] [rbp-20h]
	_QWORD* v16; // [rsp+30h] [rbp-18h]
	int v17; // [rsp+38h] [rbp-10h]

	v1 = a1[4];
	v14 = off_140B569F0;
	v3 = *(_QWORD*)(v1 + 112);
	v16 = a1;
	v17 = 1;
	if (*(_QWORD*)(v1 + 120) >= v3)
		sub_14005E2C0((__int64)a1);
	v4 = a1[2];
	v5 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	a1[2] += 16i64;
	v15 = sub_1400578C0((__int64)a1);
	v6 = a1;
	if (qword_140C7DFE0)
	{
		v7 = 53;
	}
	else
	{
		sub_140734230(a1, 12, (__int64)&v14);
		sub_140734230(a1, 54, (__int64)&v14);
		v7 = 22;
		v6 = a1;
	}
	sub_140734230(v6, v7, (__int64)&v14);
	v8 = sub_14005C3C0(*(_QWORD*)(v16[4] + 160i64), v15);
	v10 = *(_QWORD*)(v9 + 16);
	v11 = v15;
	*(_QWORD*)v10 = *v8;
	v12 = *((unsigned int*)v8 + 2);
	*(_DWORD*)(v10 + 8) = v12;
	*(_QWORD*)(v9 + 16) += 16i64;
	sub_1400579E0(v9, v12, v11);
	return 1i64;
}
// 140735945: variable 'v9' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C7DFE0: using guessed type __int64 qword_140C7DFE0;

