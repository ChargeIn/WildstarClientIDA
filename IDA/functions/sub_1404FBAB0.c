#include "../winhttp.h"

//----- (00000001404FBAB0) ----------------------------------------------------
__int64 __fastcall sub_1404FBAB0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rsi
	__int64 v4; // rcx
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	_QWORD* v9; // rax
	__int64 v10; // r11
	__int64 v11; // r9
	int v12; // r8d
	__int64 v13; // rdx
	__int64(__fastcall * *v15)(); // [rsp+20h] [rbp-28h] BYREF
	int v16; // [rsp+28h] [rbp-20h]
	_QWORD* v17; // [rsp+30h] [rbp-18h]
	int v18; // [rsp+38h] [rbp-10h]

	v2 = sub_1404F87C0(a1, 1u);
	v3 = v2;
	if (!v2)
		return 0i64;
	v4 = *(_QWORD*)(v2 + 2328);
	if (v4 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 2328) + 112i64))(*(_QWORD*)(v3 + 2328));
	if (!*(_QWORD*)(v3 + 2168))
		return 0i64;
	v5 = a1[4];
	v15 = off_140B569F0;
	v6 = *(_QWORD*)(v5 + 112);
	v17 = a1;
	v18 = 1;
	if (*(_QWORD*)(v5 + 120) >= v6)
		sub_14005E2C0((__int64)a1);
	v7 = a1[2];
	v8 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	a1[2] += 16i64;
	v16 = sub_1400578C0((__int64)a1);
	sub_1400307C0((_DWORD*)(v3 + 2336), (__int64)&v15);
	v9 = sub_14005C3C0(*(_QWORD*)(v17[4] + 160i64), v16);
	v11 = *(_QWORD*)(v10 + 16);
	v12 = v16;
	*(_QWORD*)v11 = *v9;
	v13 = *((unsigned int*)v9 + 2);
	*(_DWORD*)(v11 + 8) = v13;
	*(_QWORD*)(v10 + 16) += 16i64;
	sub_1400579E0(v10, v13, v12);
	return 1i64;
}
// 1404FBB8E: variable 'v10' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

