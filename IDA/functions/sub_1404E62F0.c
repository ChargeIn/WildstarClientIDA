//----- (00000001404E62F0) ----------------------------------------------------
void __fastcall sub_1404E62F0(__int64 a1, _DWORD* a2)
{
	_QWORD* v4; // rax
	__int64 v5; // r10
	__int64 v6; // rdx
	int v7; // r11d
	_QWORD* v8; // rax
	__int64 v9; // r10
	__int64 v10; // rdx
	int v11; // r11d
	_QWORD* v12; // rax
	__int64 v13; // r10
	__int64 v14; // rdx
	int v15; // r11d
	int v16; // edi
	BOOL v17; // r14d
	_QWORD* v18; // rax
	__int64 v19; // r10
	__int64 v20; // rdx
	__int64 v21; // rbx
	unsigned __int64* v22; // rdx
	unsigned __int64 v23; // r8
	_DWORD* v24; // rax
	__int64* v25; // rax
	__int64 v26; // rdi
	__int64 v27; // rcx
	__int64 v28; // rbx
	__int64 v29; // rax
	int v30; // eax
	unsigned int v31; // ecx
	int v32; // ebx
	__int64 v33; // rax
	__int64 v34; // rdx
	__int64(__fastcall * *v35)(); // [rsp+20h] [rbp-28h] BYREF
	__int64 v36; // [rsp+28h] [rbp-20h]
	__int64 v37; // [rsp+30h] [rbp-18h]
	int v38; // [rsp+38h] [rbp-10h]

	v4 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v6 = *(_QWORD*)(v5 + 16);
	*(_QWORD*)v6 = *v4;
	*(_DWORD*)(v6 + 8) = *((_DWORD*)v4 + 2);
	*(_QWORD*)(v5 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v6, L"nLoginDay", v7);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v10 = *(_QWORD*)(v9 + 16);
	*(_QWORD*)v10 = *v8;
	*(_DWORD*)(v10 + 8) = *((_DWORD*)v8 + 2);
	*(_QWORD*)(v9 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v10, L"eDailyLoginRewardType", v11);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v12 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v14 = *(_QWORD*)(v13 + 16);
	*(_QWORD*)v14 = *v12;
	*(_DWORD*)(v14 + 8) = *((_DWORD*)v12 + 2);
	*(_QWORD*)(v13 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v14, L"eDailyLoginRewardTier", v15);
	v16 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v17 = a2[1] <= *(_DWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 392i64);
	v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v20 = *(_QWORD*)(v19 + 16);
	*(_QWORD*)v20 = *v18;
	*(_DWORD*)(v20 + 8) = *((_DWORD*)v18 + 2);
	*(_QWORD*)(v19 + 16) += 16i64;
	v21 = *(_QWORD*)(a1 + 16);
	v22 = (unsigned __int64*)sub_14018F0E0(&v35, L"bRewarded")[1];
	if (v22)
	{
		v23 = -1i64;
		do
			++v23;
		while (*((_BYTE*)v22 + v23));
		sub_140058710(v21, v22, v23);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v21 + 16) + 8i64) = 0;
		*(_QWORD*)(v21 + 16) += 16i64;
	}
	if (v36)
		sub_14018B900(v36, 0);
	v24 = *(_DWORD**)(v21 + 16);
	LOBYTE(v16) = v17;
	v24[2] = 1;
	*v24 = v16;
	*(_QWORD*)(v21 + 16) += 16i64;
	v25 = (__int64*)sub_1400580E0(v21, -3);
	sub_14005EA50(v21, v25, (int*)(*(_QWORD*)(v21 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v21 + 16) - 16i64));
	*(_QWORD*)(v21 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	if (!a2[2])
	{
		v26 = *(_QWORD*)(a1 + 16);
		v38 = 1;
		v27 = *(_QWORD*)(v26 + 32);
		v35 = off_140B569F0;
		v37 = v26;
		if (*(_QWORD*)(v27 + 120) >= *(_QWORD*)(v27 + 112))
			sub_14005E2C0(v26);
		v28 = *(_QWORD*)(v26 + 16);
		v29 = sub_14005C1B0(v26, 0, 0);
		*(_DWORD*)(v28 + 8) = 5;
		*(_QWORD*)v28 = v29;
		*(_QWORD*)(v26 + 16) += 16i64;
		v30 = sub_1400578C0(v26);
		v31 = a2[3];
		v32 = v30;
		LODWORD(v36) = v30;
		v33 = sub_1401E8C20(v31);
		if (v33)
			sub_1404E34B0((__int64)&v35, v33);
		sub_1400FB2A0(a1, (__int64)L"tReward", v32);
		sub_1400579E0(v26, v34, v32);
	}
}
// 1404E632B: variable 'v5' is possibly undefined
// 1404E634E: variable 'v7' is possibly undefined
// 1404E6377: variable 'v9' is possibly undefined
// 1404E639A: variable 'v11' is possibly undefined
// 1404E63C3: variable 'v13' is possibly undefined
// 1404E63E6: variable 'v15' is possibly undefined
// 1404E642B: variable 'v19' is possibly undefined
// 1404E657A: variable 'v34' is possibly undefined
// 140B0BA90: using guessed type wchar_t aNloginday[10];
// 140B0BAA8: using guessed type wchar_t aEdailyloginrew[22];
// 140B0BAD8: using guessed type wchar_t aEdailyloginrew_0[22];
// 140B0BD70: using guessed type wchar_t aBrewarded[10];
// 140B0BD88: using guessed type wchar_t aTreward[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C635F0: using guessed type __int64 qword_140C635F0;

