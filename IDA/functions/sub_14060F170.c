#include "../winhttp.h"

//----- (000000014060F170) ----------------------------------------------------
void __fastcall sub_14060F170(int* a1)
{
	__int64 v2; // rdi
	__int64 v3; // rdx
	__int64 v4; // rbx
	__int64 v5; // rax
	unsigned int v6; // esi
	_QWORD* v7; // rax
	__int64 v8; // rdx
	int v9; // r10d
	_QWORD* v10; // rax
	__int64 v11; // r10
	__int64 v12; // rdx
	int v13; // r11d
	int v14; // ebp
	_QWORD* v15; // rax
	__int64 v16; // r10
	unsigned __int64* v17; // rdx
	int v18; // ebx
	unsigned __int64 v19; // r8
	_DWORD* v20; // rax
	__int64* v21; // rax
	__int64 v22; // rcx
	__int64 v23; // rdx
	__int64(__fastcall * *v24)(); // [rsp+20h] [rbp-28h] BYREF
	__int64 v25; // [rsp+28h] [rbp-20h]
	__int64 v26; // [rsp+30h] [rbp-18h]
	int v27; // [rsp+38h] [rbp-10h]

	v27 = 1;
	v2 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
	v24 = off_140B569F0;
	v3 = *(_QWORD*)(v2 + 32);
	v26 = v2;
	if (*(_QWORD*)(v3 + 120) >= *(_QWORD*)(v3 + 112))
		sub_14005E2C0(v2);
	v4 = *(_QWORD*)(v2 + 16);
	v5 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(v2 + 16) += 16i64;
	v6 = sub_1400578C0(v2);
	LODWORD(v25) = v6;
	sub_14060B380(a1, (__int64)&v24);
	v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v6);
	v8 = *(_QWORD*)(v2 + 16);
	*(_QWORD*)v8 = *v7;
	*(_DWORD*)(v8 + 8) = *((_DWORD*)v7 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_1400F06F0(v2, v8, L"nAmount", v9);
	*(_QWORD*)(v2 + 16) -= 16i64;
	v10 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v6);
	*(_QWORD*)v11 = *v10;
	*(_DWORD*)(v11 + 8) = *((_DWORD*)v10 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_1400F06F0(v2, v12, L"eVitalType", v13);
	*(_QWORD*)(v2 + 16) -= 16i64;
	v14 = a1[10];
	v15 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v6);
	*(_QWORD*)v16 = *v15;
	*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	v17 = (unsigned __int64*)sub_14018F0E0(&v24, L"bShowCombatLog")[1];
	v18 = 0;
	if (v17)
	{
		v19 = -1i64;
		do
			++v19;
		while (*((_BYTE*)v17 + v19));
		sub_140058710(v2, v17, v19);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
		*(_QWORD*)(v2 + 16) += 16i64;
	}
	if (v25)
		sub_14018B900(v25, 0);
	v20 = *(_DWORD**)(v2 + 16);
	LOBYTE(v18) = v14 != 0;
	v20[2] = 1;
	*v20 = v18;
	*(_QWORD*)(v2 + 16) += 16i64;
	v21 = (__int64*)sub_1400580E0(v2, -3);
	sub_14005EA50(v2, v21, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
	v22 = qword_140C65898;
	*(_QWORD*)(v2 + 16) -= 48i64;
	sub_1400EA3E0(*(_QWORD*)(v22 + 29504), "CombatLogVitalModifier", "T", v6, v24);
	sub_1400579E0(v2, v23, v6);
}
// 14060F240: variable 'v9' is possibly undefined
// 14060F271: variable 'v11' is possibly undefined
// 14060F283: variable 'v12' is possibly undefined
// 14060F283: variable 'v13' is possibly undefined
// 14060F2B0: variable 'v16' is possibly undefined
// 14060F386: variable 'v23' is possibly undefined
// 140B26DC8: using guessed type wchar_t aBshowcombatlog[15];
// 140B26E00: using guessed type wchar_t aNamount_3[8];
// 140B26E10: using guessed type wchar_t aEvitaltype_0[11];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

