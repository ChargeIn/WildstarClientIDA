//----- (000000014069AE80) ----------------------------------------------------
__int64 __fastcall sub_14069AE80(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rax
	__int64 v6; // rsi
	int v7; // edx
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // ebx
	_QWORD* v11; // rax
	__int64 v12; // rdx
	int v13; // r10d
	_QWORD* v14; // rax
	__int64 v15; // r10
	__int64 v16; // rdx
	int v17; // r11d
	_QWORD* v18; // rax
	__int64 v19; // r10
	__int64 v20; // rdx
	int v21; // r11d
	float v22; // xmm6_4
	_QWORD* v23; // rax
	__int64 v24; // r10
	unsigned __int64* v25; // rdx
	unsigned __int64 v26; // r8
	__int64 v27; // rax
	__int64* v28; // rax
	_QWORD* v29; // rax
	__int64 v30; // r10
	__int64 v31; // rdx
	__int64 v33; // [rsp+20h] [rbp-38h] BYREF
	__int64 v34; // [rsp+28h] [rbp-30h]

	v2 = sub_140056AB0(a1, 1u);
	if (!v2 || (v4 = *(_QWORD*)(v2 + 8)) == 0 || (v5 = sub_1405845F0(v3, *(_QWORD*)(v4 + 8)), (v6 = v5) == 0))
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		goto LABEL_18;
	}
	v7 = *(_DWORD*)(v5 + 16);
	if ((unsigned int)(v7 - 4) > 2 && v7 != 3)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	LABEL_18:
		a1[2] += 16i64;
		return 1i64;
	}
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v8 = a1[2];
	v9 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v8 + 8) = 5;
	*(_QWORD*)v8 = v9;
	a1[2] += 16i64;
	v10 = sub_1400578C0((__int64)a1);
	v11 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
	v12 = a1[2];
	*(_QWORD*)v12 = *v11;
	*(_DWORD*)(v12 + 8) = *((_DWORD*)v11 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v12, L"nWins", v13);
	a1[2] -= 16i64;
	v14 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
	*(_QWORD*)v15 = *v14;
	*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v16, L"nLosses", v17);
	a1[2] -= 16i64;
	v18 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
	*(_QWORD*)v19 = *v18;
	*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v20, L"nDraws", v21);
	a1[2] -= 16i64;
	v22 = *(float*)(v6 + 788);
	v23 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
	*(_QWORD*)v24 = *v23;
	*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
	a1[2] += 16i64;
	v25 = (unsigned __int64*)sub_14018F0E0(&v33, L"fParticipation")[1];
	if (v25)
	{
		v26 = -1i64;
		do
			++v26;
		while (*((_BYTE*)v25 + v26));
		sub_140058710((__int64)a1, v25, v26);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v34)
		sub_14018B900(v34, 0);
	v27 = a1[2];
	*(_DWORD*)(v27 + 8) = 3;
	*(double*)v27 = v22;
	a1[2] += 16i64;
	v28 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v28, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v29 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
	*(_QWORD*)v30 = *v29;
	*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v31, v10);
	return 1i64;
}
// 14069AEB8: variable 'v3' is possibly undefined
// 14069AF6E: variable 'v13' is possibly undefined
// 14069AFA2: variable 'v15' is possibly undefined
// 14069AFB4: variable 'v16' is possibly undefined
// 14069AFB4: variable 'v17' is possibly undefined
// 14069AFE8: variable 'v19' is possibly undefined
// 14069AFFA: variable 'v20' is possibly undefined
// 14069AFFA: variable 'v21' is possibly undefined
// 14069B02C: variable 'v24' is possibly undefined
// 14069B0E3: variable 'v30' is possibly undefined
// 14069B0F5: variable 'v31' is possibly undefined
// 140B34858: using guessed type wchar_t aNdraws_0[7];
// 140B34868: using guessed type wchar_t aFparticipation[15];
// 140B34888: using guessed type wchar_t aNwins_0[6];
// 140B34898: using guessed type wchar_t aNlosses_0[8];

