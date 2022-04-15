#include "../winhttp.h"

//----- (000000014060DF10) ----------------------------------------------------
void __fastcall sub_14060DF10(int* a1)
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
	int v18; // r14d
	_QWORD* v19; // rax
	__int64 v20; // r10
	unsigned __int64* v21; // rdx
	int v22; // ebp
	unsigned __int64 v23; // r8
	_DWORD* v24; // rax
	__int64* v25; // rax
	_QWORD* v26; // rax
	__int64 v27; // r10
	__int64 v28; // rdx
	int v29; // r11d
	__int64 v30; // rcx
	__int64 v31; // rdx
	__int64(__fastcall * *v32)(); // [rsp+20h] [rbp-28h] BYREF
	__int64 v33; // [rsp+28h] [rbp-20h]
	__int64 v34; // [rsp+30h] [rbp-18h]
	int v35; // [rsp+38h] [rbp-10h]

	if (a1[6])
	{
		v2 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
		v32 = off_140B569F0;
		v3 = *(_QWORD*)(v2 + 32);
		v34 = v2;
		v35 = 1;
		if (*(_QWORD*)(v3 + 120) >= *(_QWORD*)(v3 + 112))
			sub_14005E2C0(v2);
		v4 = *(_QWORD*)(v2 + 16);
		v5 = sub_14005C1B0(v2, 0, 0);
		*(_DWORD*)(v4 + 8) = 5;
		*(_QWORD*)v4 = v5;
		*(_QWORD*)(v2 + 16) += 16i64;
		v6 = sub_1400578C0(v2);
		LODWORD(v33) = v6;
		sub_14060B380(a1, (__int64)&v32);
		v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v6);
		v8 = *(_QWORD*)(v2 + 16);
		*(_QWORD*)v8 = *v7;
		*(_DWORD*)(v8 + 8) = *((_DWORD*)v7 + 2);
		*(_QWORD*)(v2 + 16) += 16i64;
		sub_1400F06F0(v2, v8, L"nHealAmount", v9);
		*(_QWORD*)(v2 + 16) -= 16i64;
		v10 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v6);
		*(_QWORD*)v11 = *v10;
		*(_DWORD*)(v11 + 8) = *((_DWORD*)v10 + 2);
		*(_QWORD*)(v2 + 16) += 16i64;
		sub_1400F06F0(v2, v12, L"nOverheal", v13);
		*(_QWORD*)(v2 + 16) -= 16i64;
		v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v6);
		*(_QWORD*)v15 = *v14;
		*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
		*(_QWORD*)(v2 + 16) += 16i64;
		sub_1400F06F0(v2, v16, L"nAbsorption", v17);
		*(_QWORD*)(v2 + 16) -= 16i64;
		v18 = a1[11];
		v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v6);
		*(_QWORD*)v20 = *v19;
		*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
		*(_QWORD*)(v2 + 16) += 16i64;
		v21 = (unsigned __int64*)sub_14018F0E0(&v32, L"bPeriodic")[1];
		v22 = 0;
		if (v21)
		{
			v23 = -1i64;
			do
				++v23;
			while (*((_BYTE*)v21 + v23));
			sub_140058710(v2, v21, v23);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			*(_QWORD*)(v2 + 16) += 16i64;
		}
		if (v33)
			sub_14018B900(v33, 0);
		v24 = *(_DWORD**)(v2 + 16);
		LOBYTE(v22) = v18 != 0;
		v24[2] = 1;
		*v24 = v22;
		*(_QWORD*)(v2 + 16) += 16i64;
		v25 = (__int64*)sub_1400580E0(v2, -3);
		sub_14005EA50(v2, v25, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
		*(_QWORD*)(v2 + 16) -= 48i64;
		v26 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v6);
		*(_QWORD*)v27 = *v26;
		*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
		*(_QWORD*)(v2 + 16) += 16i64;
		sub_1400F06F0(v2, v28, L"eEffectType", v29);
		v30 = qword_140C65898;
		*(_QWORD*)(v2 + 16) -= 16i64;
		sub_1400EA3E0(*(_QWORD*)(v30 + 29504), "CombatLogMultiHeal", L"T", v6, v32);
		v31 = *(unsigned int*)(*(_QWORD*)(qword_140C65898 + 120) + 8i64);
		if ((_DWORD)v31 == a1[2] || (_DWORD)v31 == a1[4])
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "FloaterMultiHeal", L"T", v6);
		sub_1400579E0(v2, v31, v6);
	}
}
// 14060DFEE: variable 'v9' is possibly undefined
// 14060E01F: variable 'v11' is possibly undefined
// 14060E031: variable 'v12' is possibly undefined
// 14060E031: variable 'v13' is possibly undefined
// 14060E062: variable 'v15' is possibly undefined
// 14060E074: variable 'v16' is possibly undefined
// 14060E074: variable 'v17' is possibly undefined
// 14060E0A2: variable 'v20' is possibly undefined
// 14060E16B: variable 'v27' is possibly undefined
// 14060E17D: variable 'v28' is possibly undefined
// 14060E17D: variable 'v29' is possibly undefined
// 14060E1F0: variable 'v31' is possibly undefined
// 1409EB11C: using guessed type wchar_t aT_25[2];
// 1409EB2FC: using guessed type wchar_t aT_32[2];
// 140B26970: using guessed type wchar_t aNhealamount_0[12];
// 140B26C68: using guessed type wchar_t aBperiodic_3[10];
// 140B26C80: using guessed type wchar_t aEeffecttype_3[12];
// 140B26C98: using guessed type wchar_t aNoverheal_0[10];
// 140B26CB0: using guessed type wchar_t aNabsorption_7[12];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

