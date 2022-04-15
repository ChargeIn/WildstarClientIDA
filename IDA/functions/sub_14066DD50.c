#include "../winhttp.h"

//----- (000000014066DD50) ----------------------------------------------------
__int64 __fastcall sub_14066DD50(_DWORD* a1)
{
	__int64 v1; // rsi
	__int64 v3; // rdx
	unsigned __int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	int v7; // edi
	_QWORD* v8; // rax
	__int64 v9; // r8
	__int64 v10; // rdx
	__int64(__fastcall * *v12)(); // [rsp+20h] [rbp-28h] BYREF
	int v13; // [rsp+28h] [rbp-20h]
	__int64 v14; // [rsp+30h] [rbp-18h]
	int v15; // [rsp+38h] [rbp-10h]

	v1 = *(_QWORD*)a1;
	v3 = *(_QWORD*)(*(_QWORD*)a1 + 32i64);
	v12 = off_140B569F0;
	v14 = v1;
	v4 = *(_QWORD*)(v3 + 112);
	v15 = 1;
	if (*(_QWORD*)(v3 + 120) >= v4)
		sub_14005E2C0(v1);
	v5 = *(_QWORD*)(v1 + 16);
	v6 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	*(_QWORD*)(v1 + 16) += 16i64;
	v7 = sub_1400578C0(v1);
	v13 = v7;
	LODWORD(v5) = sub_14066DE30(a1, (__int64)&v12);
	v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v7);
	v9 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v9 = *v8;
	v10 = *((unsigned int*)v8 + 2);
	*(_DWORD*)(v9 + 8) = v10;
	*(_QWORD*)(v1 + 16) += 16i64;
	sub_1400579E0(v1, v10, v7);
	return (unsigned int)v5;
}
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

