#include "../winhttp.h"

//----- (000000014042FBC0) ----------------------------------------------------
void __fastcall sub_14042FBC0(__int64 a1, float* a2, int a3)
{
	__int64 v3; // rdi
	__int64 v5; // r9
	unsigned __int64 v7; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	unsigned int v11; // ebx
	__int64 v12; // rcx
	_QWORD* v13; // rax
	__int64 v14; // rdx
	_QWORD* v15; // rax
	__int64 v16; // r10
	__int64 v17; // rdx
	int v18; // ebp
	__int64 v19; // rdx
	__int64(__fastcall * *v20)(); // [rsp+20h] [rbp-48h] BYREF
	__int64 v21; // [rsp+28h] [rbp-40h]
	__int64 v22; // [rsp+30h] [rbp-38h]
	__int64 v23; // [rsp+38h] [rbp-30h]
	char v24[8]; // [rsp+40h] [rbp-28h] BYREF
	int v25; // [rsp+48h] [rbp-20h]
	__int64 v26; // [rsp+50h] [rbp-18h]

	v3 = *(_QWORD*)(a1 + 400);
	v5 = *(_QWORD*)(v3 + 32);
	v20 = off_140B569F0;
	v7 = *(_QWORD*)(v5 + 112);
	v22 = v3;
	LODWORD(v23) = 1;
	if (*(_QWORD*)(v5 + 120) >= v7)
		sub_14005E2C0(v3);
	v9 = *(_QWORD*)(v3 + 16);
	v10 = sub_14005C1B0(v3, 0, 0);
	*(_DWORD*)(v9 + 8) = 5;
	*(_QWORD*)v9 = v10;
	*(_QWORD*)(v3 + 16) += 16i64;
	v11 = sub_1400578C0(v3);
	v12 = *(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64);
	LODWORD(v21) = v11;
	v13 = sub_14005C3C0(v12, v11);
	v14 = *(_QWORD*)(v3 + 16);
	*(_QWORD*)v14 = *v13;
	*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
	*(_QWORD*)(v3 + 16) += 16i64;
	sub_1400F06F0(v3, v14, L"nReason", 1);
	*(_QWORD*)(v3 + 16) -= 16i64;
	v15 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v11);
	*(_QWORD*)v16 = *v15;
	*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
	*(_QWORD*)(v3 + 16) += 16i64;
	sub_1400F06F0(v3, v17, L"nMapZoneId", a3);
	*(_QWORD*)(v3 + 16) -= 16i64;
	sub_1400FA3C0((__int64)v24, v3, a2);
	v18 = v25;
	sub_1400FB2A0((__int64)&v20, (__int64)L"tPosition", v25);
	Apollo_LUAEvent(a1, "SetNavPointFailed", "T", v11, v20, v21, v22, v23);
	if (v26)
		sub_1400579E0(v26, v19, v18);
	sub_1400579E0(v3, v19, v11);
}
// 14042FCAB: variable 'v16' is possibly undefined
// 14042FCBD: variable 'v17' is possibly undefined
// 14042FD15: variable 'v19' is possibly undefined
// 140B013C0: using guessed type wchar_t aTposition_0[10];
// 140B013D8: using guessed type wchar_t aNmapzoneid_0[11];
// 140B013F0: using guessed type wchar_t aNreason[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 14042FBC0: using guessed type char var_28[8];

