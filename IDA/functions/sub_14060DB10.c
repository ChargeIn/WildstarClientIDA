//----- (000000014060DB10) ----------------------------------------------------
void __fastcall sub_14060DB10(int* a1)
{
	_QWORD* v2; // rbx
	__int64 v3; // rdx
	__int64 v4; // rdi
	__int64 v5; // rax
	unsigned int v6; // edi
	int v7; // r14d
	_QWORD* v8; // rax
	__int64 v9; // rdx
	int v10; // ebp
	unsigned __int64* v11; // rdx
	unsigned __int64 v12; // r8
	_DWORD* v13; // rax
	__int64* v14; // rax
	_QWORD* v15; // rax
	__int64 v16; // r10
	__int64 v17; // rdx
	int v18; // r11d
	__int64 v19; // rdx
	__int64(__fastcall * *v20)(); // [rsp+20h] [rbp-58h] BYREF
	unsigned int v21; // [rsp+28h] [rbp-50h]
	_QWORD* v22; // [rsp+30h] [rbp-48h]
	int v23; // [rsp+38h] [rbp-40h]
	__int64 v24; // [rsp+40h] [rbp-38h] BYREF
	__int64 v25; // [rsp+48h] [rbp-30h]
	int v26; // [rsp+80h] [rbp+8h] BYREF

	v23 = 1;
	v2 = *(_QWORD**)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
	v20 = off_140B569F0;
	v3 = v2[4];
	v22 = v2;
	if (*(_QWORD*)(v3 + 120) >= *(_QWORD*)(v3 + 112))
		sub_14005E2C0((__int64)v2);
	v4 = v2[2];
	v5 = sub_14005C1B0((__int64)v2, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	v2[2] += 16i64;
	v6 = sub_1400578C0((__int64)v2);
	v21 = v6;
	sub_14060B380(a1, (__int64)&v20);
	v7 = a1[8];
	v8 = sub_14005C3C0(*(_QWORD*)(v2[4] + 160i64), v6);
	v9 = v2[2];
	*(_QWORD*)v9 = *v8;
	*(_DWORD*)(v9 + 8) = *((_DWORD*)v8 + 2);
	v2[2] += 16i64;
	v10 = 0;
	v11 = (unsigned __int64*)sub_14018F0E0(&v24, L"bRemovesSingleInstance")[1];
	if (v11)
	{
		v12 = -1i64;
		do
			++v12;
		while (*((_BYTE*)v11 + v12));
		sub_140058710((__int64)v2, v11, v12);
	}
	else
	{
		*(_DWORD*)(v2[2] + 8i64) = 0;
		v2[2] += 16i64;
	}
	if (v25)
		sub_14018B900(v25, 0);
	v13 = (_DWORD*)v2[2];
	LOBYTE(v10) = v7 != 0;
	v13[2] = 1;
	*v13 = v10;
	v2[2] += 16i64;
	v14 = (__int64*)sub_1400580E0((__int64)v2, -3);
	sub_14005EA50((__int64)v2, v14, (int*)(v2[2] - 32i64), (unsigned int*)(v2[2] - 16i64));
	v2[2] -= 48i64;
	v15 = sub_14005C3C0(*(_QWORD*)(v2[4] + 160i64), v6);
	*(_QWORD*)v16 = *v15;
	*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
	v2[2] += 16i64;
	sub_1400F06F0((__int64)v2, v17, L"nInstancesRemoved", v18);
	v2[2] -= 16i64;
	v26 = a1[10];
	if ((unsigned int)sub_1403D3470(v2, &v26))
	{
		sub_1400FB540((__int64)&v20);
		v2[2] -= 16i64;
	}
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "CombatLogDispel", "T", v6, v20);
	sub_1400579E0((__int64)v2, v19, v6);
}
// 14060DC8B: variable 'v16' is possibly undefined
// 14060DC9D: variable 'v17' is possibly undefined
// 14060DC9D: variable 'v18' is possibly undefined
// 14060DD19: variable 'v19' is possibly undefined
// 140B269F0: using guessed type wchar_t aBremovessingle[23];
// 140B26A20: using guessed type wchar_t aNinstancesremo[18];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

