#include "../winhttp.h"

//----- (00000001404FD910) ----------------------------------------------------
__int64 __fastcall sub_1404FD910(_QWORD* a1)
{
	__int64 v2; // rbp
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // edi
	_QWORD* v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // r9
	_QWORD* v13; // rax
	__int64 v14; // rbx
	__int64 v15; // rax
	__int64 v16; // r9
	_QWORD* v17; // rax
	__int64 v18; // r10
	__int64 v19; // rdx
	__int64 v20; // [rsp+20h] [rbp-58h] BYREF
	__int64 v21; // [rsp+28h] [rbp-50h]
	__int64 v22; // [rsp+30h] [rbp-48h]
	__int64 v23[3]; // [rsp+38h] [rbp-40h] BYREF
	__int64(__fastcall * *v24)(); // [rsp+50h] [rbp-28h] BYREF
	int v25; // [rsp+58h] [rbp-20h]
	_QWORD* v26; // [rsp+60h] [rbp-18h]
	int v27; // [rsp+68h] [rbp-10h]

	v2 = sub_1404F87C0(a1, 1u);
	if (v2)
	{
		v4 = a1[4];
		v24 = off_140B569F0;
		v5 = *(_QWORD*)(v4 + 112);
		v26 = a1;
		v27 = 1;
		if (*(_QWORD*)(v4 + 120) >= v5)
			sub_14005E2C0((__int64)a1);
		v6 = a1[2];
		v7 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v6 + 8) = 5;
		*(_QWORD*)v6 = v7;
		a1[2] += 16i64;
		v8 = sub_1400578C0((__int64)a1);
		v25 = v8;
		sub_1404FD530(v2, (__int64)&v20, 0);
		sub_1404FD530(v2, (__int64)v23, 1);
		v9 = (_QWORD*)sub_140059170(a1, 0x18ui64);
		*v9 = v20;
		v9[1] = v21;
		v9[2] = v22;
		v10 = a1[4];
		v11 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
		v12 = a1[2];
		v20 = v11;
		LODWORD(v21) = 4;
		sub_14005E8E0((__int64)a1, v10 + 160, (int*)&v20, v12);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
		sub_1400FB540((__int64)&v24);
		a1[2] -= 16i64;
		v13 = (_QWORD*)sub_140059170(a1, 0x18ui64);
		*v13 = v23[0];
		v13[1] = v23[1];
		v13[2] = v23[2];
		v14 = a1[4];
		v15 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
		v16 = a1[2];
		v20 = v15;
		LODWORD(v21) = 4;
		sub_14005E8E0((__int64)a1, v14 + 160, (int*)&v20, v16);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
		sub_1400FB540((__int64)&v24);
		a1[2] -= 16i64;
		v17 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
		*(_QWORD*)v18 = *v17;
		*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v19, v8);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1404FDB12: variable 'v18' is possibly undefined
// 1404FDB24: variable 'v19' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

