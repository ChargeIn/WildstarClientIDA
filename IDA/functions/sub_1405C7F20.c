//----- (00000001405C7F20) ----------------------------------------------------
__int64 __fastcall sub_1405C7F20(_DWORD* a1, int a2, int a3, int a4)
{
	int v4; // r9d
	__int64 v6; // rdi
	__int64 v7; // rax
	wchar_t* v8; // r14
	bool v9; // zf
	int* v10; // rcx
	int* v11; // rsi
	unsigned __int64 v12; // r8
	unsigned __int64 v13; // rbx
	unsigned __int64 v14; // rbx

	a1[126] = a2;
	a1[127] = a3;
	a1[129] = a4;
	if (a4)
	{
		v4 = a4 - 1;
		if (v4)
		{
			if (v4 != 1)
				return 2147500037i64;
			v6 = (__int64)(a1 + 4);
			v7 = 0i64;
			v8 = L"Icon_SkillMisc_UI_ss_recharge";
			do
				v9 = aIconSkillmiscU_1[++v7] == 0;
			while (!v9);
		}
		else
		{
			v6 = (__int64)(a1 + 4);
			v7 = 0i64;
			v8 = L"Icon_SkillMisc_UI_misc_dshbck";
			do
				v9 = aIconSkillmiscU_2[++v7] == 0;
			while (!v9);
		}
	}
	else
	{
		v6 = (__int64)(a1 + 4);
		v7 = 0i64;
		v8 = L"Icon_PowerSlash";
		do
			v9 = aIconPowerslash_0[++v7] == 0;
		while (!v9);
	}
	v10 = *(int**)(v6 + 8);
	v11 = (int*)&v8[v7];
	v12 = (__int64)(*(_QWORD*)(v6 + 16) - (_QWORD)v10) >> 1;
	v13 = (2 * v7) >> 1;
	if (v13 > v12)
	{
		sub_1407DB590(v10, (int*)v8, 2 * v12);
		sub_14001C310((_QWORD*)v6, (int*)&v8[(__int64)(*(_QWORD*)(v6 + 16) - *(_QWORD*)(v6 + 8)) >> 1], v11);
	}
	else
	{
		v14 = 2 * v13;
		sub_1407DB590(v10, (int*)v8, v14);
		sub_14001C2B0(v6, (int*)(v14 + *(_QWORD*)(v6 + 8)), *(int**)(v6 + 16));
	}
	return 0i64;
}
// 140B22360: using guessed type wchar_t aIconSkillmiscU_2[30];
// 140B223A0: using guessed type wchar_t aIconSkillmiscU_1[30];
// 140B22420: using guessed type wchar_t aIconPowerslash_0[16];

