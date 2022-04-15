//----- (0000000140530620) ----------------------------------------------------
__int64 __fastcall sub_140530620(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	unsigned __int16* v4; // rbx
	_DWORD* v5; // rax
	unsigned int v6; // eax
	__int64 v7; // rax
	__int64 v8; // r15
	__int64 v9; // rdi
	__int64 v10; // rax
	int v11; // r12d
	_QWORD* v12; // rax
	__int64 v13; // rdx
	int v14; // r10d
	_QWORD* v15; // rax
	__int64 v16; // r10
	__int64 v17; // rdx
	int v18; // r11d
	__int64 v19; // rcx
	__int16* v20; // rax
	int* v21; // r14
	unsigned __int64 v22; // rbp
	int* v23; // rax
	unsigned __int16* v24; // rdi
	unsigned __int64 v25; // rbp
	_QWORD* v26; // rax
	__int64 v27; // rdx
	__int64 v28; // rax
	__int64 v29; // rcx
	__int16* v30; // rax
	int* v31; // r15
	unsigned __int64 v32; // rbp
	int* v33; // rax
	unsigned __int16* v34; // r14
	unsigned __int64 v35; // rbp
	_QWORD* v36; // rax
	__int64 v37; // rdx
	_QWORD* v38; // rax
	__int64 v39; // rdx
	__int64 v40; // r10

	v2 = *(_QWORD*)(qword_140C65898 + 7152);
	v3 = sub_14052E9B0(a1);
	if (!v3 || !*(_QWORD*)(v3 + 1152) || !v2)
		return 0i64;
	v4 = 0i64;
	v5 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v6 = 0;
	else
		v6 = sub_140056D60(a1, 2u);
	v7 = sub_140213D00(v6);
	v8 = v7;
	if (!v7 || !(*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v2 + 48i64))(v2, *(unsigned int*)(v7 + 12)))
		return 0i64;
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v9 = a1[2];
	v10 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v9 + 8) = 5;
	*(_QWORD*)v9 = v10;
	a1[2] += 16i64;
	v11 = sub_1400578C0((__int64)a1);
	v12 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
	v13 = a1[2];
	*(_QWORD*)v13 = *v12;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v13, L"id", v14);
	a1[2] -= 16i64;
	v15 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
	*(_QWORD*)v16 = *v15;
	*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v17, L"hexGroupId", v18);
	a1[2] -= 16i64;
	v20 = sub_14034BDD0(v19, *(_DWORD*)(v8 + 8));
	v21 = (int*)v20;
	if (v20)
	{
		v22 = 0i64;
		if (*v20)
		{
			do
				++v22;
			while (v20[v22]);
		}
		v23 = sub_14018B280(2 * v22 + 18, 0);
		if (v23)
		{
			*(_QWORD*)v23 = off_140B55060;
			*((_QWORD*)v23 + 1) = v22;
		}
		else
		{
			v23 = 0i64;
		}
		v24 = (unsigned __int16*)(v23 + 4);
		v25 = v22;
		sub_1407DB590(v23 + 4, v21, v25 * 2);
		v24[v25] = 0;
	}
	else
	{
		v24 = 0i64;
	}
	v26 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
	v27 = a1[2];
	*(_QWORD*)v27 = *v26;
	*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
	a1[2] += 16i64;
	sub_1400F0870((__int64)a1, v27, L"strDescription", v24);
	a1[2] -= 16i64;
	v28 = sub_1401FF120(*(_DWORD*)(v8 + 12));
	if (v28)
	{
		v30 = sub_14034BDD0(v29, *(_DWORD*)(v28 + 12));
		v31 = (int*)v30;
		if (v30)
		{
			v32 = 0i64;
			if (*v30)
			{
				do
					++v32;
				while (v30[v32]);
			}
			v33 = sub_14018B280(2 * v32 + 18, 0);
			if (v33)
			{
				*(_QWORD*)v33 = off_140B55060;
				*((_QWORD*)v33 + 1) = v32;
			}
			else
			{
				v33 = 0i64;
			}
			v34 = (unsigned __int16*)(v33 + 4);
			v35 = v32;
			sub_1407DB590(v33 + 4, v31, v35 * 2);
			v34[v35] = 0;
			v4 = v34;
		}
	}
	v36 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
	v37 = a1[2];
	*(_QWORD*)v37 = *v36;
	*(_DWORD*)(v37 + 8) = *((_DWORD*)v36 + 2);
	a1[2] += 16i64;
	sub_1400F0870((__int64)a1, v37, L"strFactionName", v4);
	a1[2] -= 16i64;
	v38 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
	*(_QWORD*)v40 = *v38;
	*(_DWORD*)(v40 + 8) = *((_DWORD*)v38 + 2);
	a1[2] += 16i64;
	if (v4)
		(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v4 - 2) + 8i64))(v4 - 8);
	if (v24)
		(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v24 - 2) + 8i64))(v24 - 8);
	sub_1400579E0((__int64)a1, v39, v11);
	return 1i64;
}
// 14053074B: variable 'v14' is possibly undefined
// 14053077D: variable 'v16' is possibly undefined
// 14053078F: variable 'v17' is possibly undefined
// 14053078F: variable 'v18' is possibly undefined
// 14053079D: variable 'v19' is possibly undefined
// 140530857: variable 'v29' is possibly undefined
// 14053091E: variable 'v40' is possibly undefined
// 140530953: variable 'v39' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B13340: using guessed type wchar_t aHexgroupid_0[11];
// 140B13358: using guessed type wchar_t aId_19[3];
// 140B13360: using guessed type wchar_t aStrfactionname_0[15];
// 140B13380: using guessed type wchar_t aStrdescription_9[15];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;

