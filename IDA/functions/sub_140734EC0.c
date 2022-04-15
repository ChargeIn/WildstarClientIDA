#include "../winhttp.h"

//----- (0000000140734EC0) ----------------------------------------------------
__int64 __fastcall sub_140734EC0(_QWORD* a1)
{
	__int64 v1; // rdx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	int v9; // edx
	_QWORD* v10; // rax
	__int64 v11; // r11
	__int64 v12; // r9
	int v13; // r8d
	__int64 v14; // rdx
	__int64(__fastcall * *v16)(); // [rsp+20h] [rbp-28h] BYREF
	int v17; // [rsp+28h] [rbp-20h]
	_QWORD* v18; // [rsp+30h] [rbp-18h]
	int v19; // [rsp+38h] [rbp-10h]

	v1 = a1[4];
	v16 = off_140B569F0;
	v3 = *(_QWORD*)(v1 + 112);
	v18 = a1;
	v19 = 1;
	if (*(_QWORD*)(v1 + 120) >= v3)
		sub_14005E2C0((__int64)a1);
	v4 = a1[2];
	v5 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	a1[2] += 16i64;
	v17 = sub_1400578C0((__int64)a1);
	v6 = sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824));
	if (v6 && (v7 = sub_1402074E0(*(_DWORD*)(v6 + 68))) != 0 && (v8 = sub_140203DA0(*(_DWORD*)(v7 + 4))) != 0)
		v9 = *(_DWORD*)(v8 + 8);
	else
		v9 = 63;
	sub_140734230(a1, v9, (__int64)&v16);
	v10 = sub_14005C3C0(*(_QWORD*)(v18[4] + 160i64), v17);
	v12 = *(_QWORD*)(v11 + 16);
	v13 = v17;
	*(_QWORD*)v12 = *v10;
	v14 = *((unsigned int*)v10 + 2);
	*(_DWORD*)(v12 + 8) = v14;
	*(_QWORD*)(v11 + 16) += 16i64;
	sub_1400579E0(v11, v14, v13);
	return 1i64;
}
// 140734F87: variable 'v11' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C659F0: using guessed type __int64 qword_140C659F0;

