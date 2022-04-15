#include "../winhttp.h"

//----- (00000001406EE2C0) ----------------------------------------------------
__int64 __fastcall sub_1406EE2C0(_QWORD* a1)
{
	unsigned int v2; // ebx
	int v3; // ebp
	_DWORD* v4; // rax
	_QWORD* v5; // rax
	_QWORD* v6; // rsi
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	int v12; // ebx
	__int64 v13; // rcx
	_QWORD* v14; // rax
	__int64 v15; // rdx
	_QWORD* v16; // rax
	__int64 v17; // r11
	__int64 v18; // rdx
	int v19; // r10d
	_QWORD* v20; // rax
	__int64 v21; // r11
	__int64 v22; // rdx
	int v23; // r10d
	int v24; // esi
	_QWORD* v25; // rax
	__int64 v26; // rdx
	__int64 v27; // rcx
	__int64(__fastcall * *v28)(); // [rsp+20h] [rbp-48h] BYREF
	int v29; // [rsp+28h] [rbp-40h]
	_QWORD* v30; // [rsp+30h] [rbp-38h]
	int v31; // [rsp+38h] [rbp-30h]
	char v32[8]; // [rsp+40h] [rbp-28h] BYREF
	int v33; // [rsp+48h] [rbp-20h]
	__int64 v34; // [rsp+50h] [rbp-18h]

	if (qword_140C65898 && *(_QWORD*)(qword_140C65898 + 120) && qword_140C65970)
	{
		v2 = sub_140056D60(a1, 1u);
		v3 = *(_DWORD*)(qword_140C65970 + 8);
		v4 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v4 < a1[2] && v4 != dword_140A12138 && *(int*)(a1[3] + 24i64) > 0)
			v3 = sub_140056D60(a1, 2u);
		v5 = (_QWORD*)sub_140491CF0(qword_140C65968, v3, v2);
		v6 = v5;
		if (v5)
		{
			if (*v5)
			{
				v8 = a1[4];
				v30 = a1;
				v28 = off_140B569F0;
				v9 = *(_QWORD*)(v8 + 112);
				v31 = 1;
				if (*(_QWORD*)(v8 + 120) >= v9)
					sub_14005E2C0((__int64)a1);
				v10 = a1[2];
				v11 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v10 + 8) = 5;
				*(_QWORD*)v10 = v11;
				a1[2] += 16i64;
				v12 = sub_1400578C0((__int64)a1);
				v13 = *(_QWORD*)(a1[4] + 160i64);
				v29 = v12;
				v14 = sub_14005C3C0(v13, v12);
				v15 = a1[2];
				*(_QWORD*)v15 = *v14;
				*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v15, L"nPathType", v3);
				a1[2] -= 16i64;
				v16 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v12);
				*(_QWORD*)v17 = *v16;
				*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v18, L"nLevel", v19);
				a1[2] -= 16i64;
				v20 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v12);
				*(_QWORD*)v21 = *v20;
				*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v22, L"nXp", v23);
				a1[2] -= 16i64;
				sub_1406EE640((__int64)v32, a1, (__int64)(v6 + 1));
				v24 = v33;
				sub_1400FB2A0((__int64)&v28, (__int64)L"tRewards", v33);
				v25 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v12);
				v26 = a1[2];
				*(_QWORD*)v26 = *v25;
				v27 = v34;
				*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
				a1[2] += 16i64;
				if (v27)
					sub_1400579E0(v27, v26, v24);
				sub_1400579E0((__int64)a1, v26, v12);
				return 1i64;
			}
			*(_DWORD*)(a1[2] + 8i64) = 0;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
		}
		a1[2] += 16i64;
		return 1i64;
	}
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	return 1i64;
}
// 1406EE463: variable 'v17' is possibly undefined
// 1406EE475: variable 'v18' is possibly undefined
// 1406EE475: variable 'v19' is possibly undefined
// 1406EE4A9: variable 'v21' is possibly undefined
// 1406EE4BB: variable 'v22' is possibly undefined
// 1406EE4BB: variable 'v23' is possibly undefined
// 1406EE52D: variable 'v26' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B3FCA8: using guessed type wchar_t aTrewards[9];
// 140B3FCC0: using guessed type wchar_t aNxp_5[4];
// 140B3FCC8: using guessed type wchar_t aNlevel_13[7];
// 140B3FCD8: using guessed type wchar_t aNpathtype[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65968: using guessed type __int64 qword_140C65968;
// 140C65970: using guessed type __int64 qword_140C65970;
// 1406EE2C0: using guessed type char var_28[8];

