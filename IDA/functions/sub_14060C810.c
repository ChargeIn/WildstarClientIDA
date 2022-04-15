#include "../winhttp.h"

//----- (000000014060C810) ----------------------------------------------------
void __fastcall sub_14060C810(int* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rdx
	__int64 v4; // rdi
	__int64 v5; // rax
	unsigned int v6; // edi
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
	_QWORD* v22; // rax
	__int64 v23; // r10
	__int64 v24; // rdx
	int v25; // r11d
	_QWORD* v26; // rax
	__int64 v27; // r10
	__int64 v28; // rdx
	int v29; // r11d
	_QWORD* v30; // rax
	__int64 v31; // r10
	__int64 v32; // rdx
	int v33; // r11d
	int v34; // r14d
	_QWORD* v35; // rax
	__int64 v36; // r10
	unsigned __int64* v37; // rdx
	int v38; // esi
	unsigned __int64 v39; // r8
	_DWORD* v40; // rax
	__int64* v41; // rax
	_QWORD* v42; // rax
	__int64 v43; // r10
	__int64 v44; // rdx
	int v45; // r11d
	__int64 v46; // rcx
	__int64 v47; // rdx
	__int64(__fastcall * *v48)(); // [rsp+20h] [rbp-28h] BYREF
	__int64 v49; // [rsp+28h] [rbp-20h]
	__int64 v50; // [rsp+30h] [rbp-18h]
	int v51; // [rsp+38h] [rbp-10h]

	v51 = 1;
	v2 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
	v48 = off_140B569F0;
	v3 = *(_QWORD*)(v2 + 32);
	v50 = v2;
	if (*(_QWORD*)(v3 + 120) >= *(_QWORD*)(v3 + 112))
		sub_14005E2C0(v2);
	v4 = *(_QWORD*)(v2 + 16);
	v5 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(v2 + 16) += 16i64;
	v6 = sub_1400578C0(v2);
	LODWORD(v49) = v6;
	sub_14060B380(a1, (__int64)&v48);
	v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v6);
	v8 = *(_QWORD*)(v2 + 16);
	*(_QWORD*)v8 = *v7;
	*(_DWORD*)(v8 + 8) = *((_DWORD*)v7 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_1400F06F0(v2, v8, L"nDamageAmount", v9);
	*(_QWORD*)(v2 + 16) -= 16i64;
	v10 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v6);
	*(_QWORD*)v11 = *v10;
	*(_DWORD*)(v11 + 8) = *((_DWORD*)v10 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_1400F06F0(v2, v12, L"nRawDamage", v13);
	*(_QWORD*)(v2 + 16) -= 16i64;
	v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v6);
	*(_QWORD*)v15 = *v14;
	*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_1400F06F0(v2, v16, L"eDamageType", v17);
	*(_QWORD*)(v2 + 16) -= 16i64;
	v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v6);
	*(_QWORD*)v19 = *v18;
	*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_1400F06F0(v2, v20, L"nShield", v21);
	*(_QWORD*)(v2 + 16) -= 16i64;
	v22 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v6);
	*(_QWORD*)v23 = *v22;
	*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_1400F06F0(v2, v24, L"nGlanceAmount", v25);
	*(_QWORD*)(v2 + 16) -= 16i64;
	v26 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v6);
	*(_QWORD*)v27 = *v26;
	*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_1400F06F0(v2, v28, L"nAbsorption", v29);
	*(_QWORD*)(v2 + 16) -= 16i64;
	v30 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v6);
	*(_QWORD*)v31 = *v30;
	*(_DWORD*)(v31 + 8) = *((_DWORD*)v30 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_1400F06F0(v2, v32, L"nOverKill", v33);
	*(_QWORD*)(v2 + 16) -= 16i64;
	v34 = a1[14];
	v35 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v6);
	*(_QWORD*)v36 = *v35;
	*(_DWORD*)(v36 + 8) = *((_DWORD*)v35 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	v37 = (unsigned __int64*)sub_14018F0E0(&v48, L"bTargetKilled")[1];
	v38 = 0;
	if (v37)
	{
		v39 = -1i64;
		do
			++v39;
		while (*((_BYTE*)v37 + v39));
		sub_140058710(v2, v37, v39);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
		*(_QWORD*)(v2 + 16) += 16i64;
	}
	if (v49)
		sub_14018B900(v49, 0);
	v40 = *(_DWORD**)(v2 + 16);
	LOBYTE(v38) = v34 != 0;
	v40[2] = 1;
	*v40 = v38;
	*(_QWORD*)(v2 + 16) += 16i64;
	v41 = (__int64*)sub_1400580E0(v2, -3);
	sub_14005EA50(v2, v41, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
	*(_QWORD*)(v2 + 16) -= 48i64;
	v42 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v6);
	*(_QWORD*)v43 = *v42;
	*(_DWORD*)(v43 + 8) = *((_DWORD*)v42 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_1400F06F0(v2, v44, L"eEffectType", v45);
	v46 = qword_140C65898;
	*(_QWORD*)(v2 + 16) -= 16i64;
	sub_1400EA3E0(*(_QWORD*)(v46 + 29504), "CombatLogReflect", "T", v6, v48);
	sub_1400579E0(v2, v47, v6);
}
// 14060C8E4: variable 'v9' is possibly undefined
// 14060C915: variable 'v11' is possibly undefined
// 14060C927: variable 'v12' is possibly undefined
// 14060C927: variable 'v13' is possibly undefined
// 14060C958: variable 'v15' is possibly undefined
// 14060C96A: variable 'v16' is possibly undefined
// 14060C96A: variable 'v17' is possibly undefined
// 14060C99B: variable 'v19' is possibly undefined
// 14060C9AD: variable 'v20' is possibly undefined
// 14060C9AD: variable 'v21' is possibly undefined
// 14060C9DE: variable 'v23' is possibly undefined
// 14060C9F0: variable 'v24' is possibly undefined
// 14060C9F0: variable 'v25' is possibly undefined
// 14060CA21: variable 'v27' is possibly undefined
// 14060CA33: variable 'v28' is possibly undefined
// 14060CA33: variable 'v29' is possibly undefined
// 14060CA64: variable 'v31' is possibly undefined
// 14060CA76: variable 'v32' is possibly undefined
// 14060CA76: variable 'v33' is possibly undefined
// 14060CAA4: variable 'v36' is possibly undefined
// 14060CB6B: variable 'v43' is possibly undefined
// 14060CB7D: variable 'v44' is possibly undefined
// 14060CB7D: variable 'v45' is possibly undefined
// 14060CBCB: variable 'v47' is possibly undefined
// 140B26600: using guessed type wchar_t aBtargetkilled_1[14];
// 140B26620: using guessed type wchar_t aEeffecttype_1[12];
// 140B26638: using guessed type wchar_t aNabsorption_2[12];
// 140B26650: using guessed type wchar_t aNoverkill_1[10];
// 140B26668: using guessed type wchar_t aNshield_2[8];
// 140B26678: using guessed type wchar_t aNglanceamount_1[14];
// 140B26698: using guessed type wchar_t aNrawdamage_1[11];
// 140B266B0: using guessed type wchar_t aEdamagetype_1[12];
// 140B266E0: using guessed type wchar_t aNdamageamount_1[14];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

