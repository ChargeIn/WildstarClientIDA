//----- (000000014060F600) ----------------------------------------------------
void __fastcall sub_14060F600(int* a1)
{
	_QWORD* v2; // rdi
	__int64 v3; // rdx
	__int64 v4; // rbx
	__int64 v5; // rax
	unsigned int v6; // ebx
	_QWORD* v7; // rax
	__int64 v8; // rdx
	int v9; // r10d
	__int64 v10; // rcx
	_QWORD* v11; // rax
	__int64 v12; // rdx
	unsigned __int16* v13; // r10
	__int64 v14; // rdx
	__int64(__fastcall * *v15)(); // [rsp+30h] [rbp-28h] BYREF
	__int64 v16; // [rsp+38h] [rbp-20h]
	_QWORD* v17; // [rsp+40h] [rbp-18h]
	int v18; // [rsp+48h] [rbp-10h]
	int v19; // [rsp+60h] [rbp+8h] BYREF

	v18 = 1;
	v2 = *(_QWORD**)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
	v15 = off_140B569F0;
	v3 = v2[4];
	v17 = v2;
	if (*(_QWORD*)(v3 + 120) >= *(_QWORD*)(v3 + 112))
		sub_14005E2C0((__int64)v2);
	v4 = v2[2];
	v5 = sub_14005C1B0((__int64)v2, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	v2[2] += 16i64;
	v6 = sub_1400578C0((__int64)v2);
	LODWORD(v16) = v6;
	sub_14060B380(a1, (__int64)&v15);
	v19 = a1[8];
	if ((unsigned int)sub_1403D3470(v2, &v19))
	{
		sub_1400FB540((__int64)&v15);
		v2[2] -= 16i64;
	}
	v7 = sub_14005C3C0(*(_QWORD*)(v2[4] + 160i64), v6);
	v8 = v2[2];
	*(_QWORD*)v8 = *v7;
	*(_DWORD*)(v8 + 8) = *((_DWORD*)v7 + 2);
	v2[2] += 16i64;
	sub_1400F06F0((__int64)v2, v8, L"eCastResult", v9);
	v2[2] -= 16i64;
	sub_1405648A0(v10, &v15, a1[9], a1[2], a1[5]);
	v11 = sub_14005C3C0(*(_QWORD*)(v2[4] + 160i64), v6);
	v12 = v2[2];
	*(_QWORD*)v12 = *v11;
	*(_DWORD*)(v12 + 8) = *((_DWORD*)v11 + 2);
	v2[2] += 16i64;
	sub_1400F0870((__int64)v2, v12, L"strCastResult", v13);
	v2[2] -= 16i64;
	if (v16)
		sub_14018B900(v16, 0);
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "CombatLogInterrupted", "T", v6);
	sub_1400579E0((__int64)v2, v14, v6);
}
// 14060F6F7: variable 'v9' is possibly undefined
// 14060F715: variable 'v10' is possibly undefined
// 14060F752: variable 'v13' is possibly undefined
// 14060F7A6: variable 'v14' is possibly undefined
// 140B26D48: using guessed type wchar_t aStrcastresult[14];
// 140B26DB0: using guessed type wchar_t aEcastresult[12];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

