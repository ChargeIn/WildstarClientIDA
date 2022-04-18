#include "../winhttp.h"

//----- (000000014060DD20) ----------------------------------------------------
void __fastcall sub_14060DD20(int* a1)
{
	__int64 v2; // rdx
	__int64 v3; // rdi
	__int64 v4; // rdx
	__int64 v5; // rbx
	__int64 v6; // rax
	_QWORD* v7; // rax
	__int64 v8; // rdx
	int v9; // r10d
	_QWORD* v10; // rax
	__int64 v11; // r10
	__int64 v12; // rdx
	int v13; // r11d
	_QWORD* v14; // rax
	__int64 v15; // r10
	__int64 v16; // rdx
	int v17; // r11d
	_QWORD* v18; // rax
	__int64 v19; // r10
	__int64 v20; // rdx
	int v21; // r11d
	__int64 v22; // rdx
	__int64(__fastcall * *v23)(); // [rsp+20h] [rbp-28h] BYREF
	int v24; // [rsp+28h] [rbp-20h]
	__int64 v25; // [rsp+30h] [rbp-18h]
	int v26; // [rsp+38h] [rbp-10h]

	if (a1[6])
	{
		v2 = *(_QWORD*)(qword_140C65898 + 29504);
		v26 = 1;
		v3 = *(_QWORD*)(v2 + 400);
		v23 = off_140B569F0;
		v4 = *(_QWORD*)(v3 + 32);
		v25 = v3;
		if (*(_QWORD*)(v4 + 120) >= *(_QWORD*)(v4 + 112))
			sub_14005E2C0(v3);
		v5 = *(_QWORD*)(v3 + 16);
		v6 = sub_14005C1B0(v3, 0, 0);
		*(_DWORD*)(v5 + 8) = 5;
		*(_QWORD*)v5 = v6;
		*(_QWORD*)(v3 + 16) += 16i64;
		LODWORD(v5) = sub_1400578C0(v3);
		v24 = v5;
		sub_14060B380(a1, (__int64)&v23);
		v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v5);
		v8 = *(_QWORD*)(v3 + 16);
		*(_QWORD*)v8 = *v7;
		*(_DWORD*)(v8 + 8) = *((_DWORD*)v7 + 2);
		*(_QWORD*)(v3 + 16) += 16i64;
		sub_1400F06F0(v3, v8, L"nHealAmount", v9);
		*(_QWORD*)(v3 + 16) -= 16i64;
		v10 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v5);
		*(_QWORD*)v11 = *v10;
		*(_DWORD*)(v11 + 8) = *((_DWORD*)v10 + 2);
		*(_QWORD*)(v3 + 16) += 16i64;
		sub_1400F06F0(v3, v12, L"nOverheal", v13);
		*(_QWORD*)(v3 + 16) -= 16i64;
		v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v5);
		*(_QWORD*)v15 = *v14;
		*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
		*(_QWORD*)(v3 + 16) += 16i64;
		sub_1400F06F0(v3, v16, L"eEffectType", v17);
		*(_QWORD*)(v3 + 16) -= 16i64;
		v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v5);
		*(_QWORD*)v19 = *v18;
		*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
		*(_QWORD*)(v3 + 16) += 16i64;
		sub_1400F06F0(v3, v20, L"nAbsorption", v21);
		*(_QWORD*)(v3 + 16) -= 16i64;
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "CombatLogHeal", "T", (unsigned int)v5, v23);
		sub_1400579E0(v3, v22, v5);
	}
}
// 14060DDF4: variable 'v9' is possibly undefined
// 14060DE25: variable 'v11' is possibly undefined
// 14060DE37: variable 'v12' is possibly undefined
// 14060DE37: variable 'v13' is possibly undefined
// 14060DE68: variable 'v15' is possibly undefined
// 14060DE7A: variable 'v16' is possibly undefined
// 14060DE7A: variable 'v17' is possibly undefined
// 14060DEAB: variable 'v19' is possibly undefined
// 14060DEBD: variable 'v20' is possibly undefined
// 14060DEBD: variable 'v21' is possibly undefined
// 14060DEF1: variable 'v22' is possibly undefined
// 140B26958: using guessed type wchar_t aNabsorption_6[12];
// 140B26988: using guessed type wchar_t aNoverheal[10];
// 140B269A0: using guessed type wchar_t aEeffecttype_2[12];
// 140B269D8: using guessed type wchar_t aNhealamount[12];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

