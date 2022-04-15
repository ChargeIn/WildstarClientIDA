//----- (0000000140451EB0) ----------------------------------------------------
__int64 __fastcall sub_140451EB0(unsigned int* a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v5; // r15
	_QWORD* v6; // rax
	__int64 v7; // r10
	__int64 v8; // rdx
	int v9; // r11d
	unsigned __int16* v10; // rdi
	int v11; // r12d
	_QWORD* v12; // rax
	__int64 v13; // r10
	__int64 v14; // rdx
	__int64 v15; // rsi
	unsigned __int64 v16; // rbx
	unsigned __int64* v17; // rdx
	unsigned __int64 v18; // r8
	_DWORD* v19; // rcx
	__int64* v20; // rax
	unsigned int v21; // r12d
	_QWORD* v22; // rax
	__int64 v23; // r10
	__int64 v24; // rdx
	__int64 v25; // rsi
	unsigned __int64* v26; // rdx
	unsigned __int64 v27; // r8
	_DWORD* v28; // rcx
	__int64* v29; // rax
	unsigned int v30; // r14d
	_QWORD* v31; // rax
	__int64 v32; // r10
	__int64 v33; // rdx
	__int64 v34; // rsi
	unsigned __int64* v35; // rdx
	_DWORD* v36; // rcx
	__int64* v37; // rax
	_QWORD* v38; // rax
	__int64 v39; // r10
	__int64 v40; // rdx
	unsigned __int16* v41; // r11
	unsigned __int64 v42; // rcx
	_QWORD* v43; // rax
	__int64 v44; // r10
	__int64 v45; // rdx
	__int64 v46; // rcx
	_QWORD* v47; // rax
	__int64 v48; // r10
	__int64 v49; // rdx
	unsigned __int16* v50; // r11
	__int64 v51; // [rsp+20h] [rbp-38h] BYREF
	__int64 v52; // [rsp+28h] [rbp-30h]

	result = sub_140201320(*a1);
	v5 = result;
	if (result)
	{
		v6 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v8 = *(_QWORD*)(v7 + 16);
		*(_QWORD*)v8 = *v6;
		*(_DWORD*)(v8 + 8) = *((_DWORD*)v6 + 2);
		*(_QWORD*)(v7 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a2 + 16), v8, L"eGenericUnlockType", v9);
		v10 = 0i64;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		if (a1[1] || (v11 = 0, a1[2]))
			v11 = 1;
		v12 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v14 = *(_QWORD*)(v13 + 16);
		*(_QWORD*)v14 = *v12;
		*(_DWORD*)(v14 + 8) = *((_DWORD*)v12 + 2);
		*(_QWORD*)(v13 + 16) += 16i64;
		v15 = *(_QWORD*)(a2 + 16);
		v16 = -1i64;
		v17 = (unsigned __int64*)sub_14018F0E0(&v51, L"bUnlocked")[1];
		if (v17)
		{
			v18 = -1i64;
			do
				++v18;
			while (*((_BYTE*)v17 + v18));
			sub_140058710(v15, v17, v18);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v15 + 16) + 8i64) = 0;
			*(_QWORD*)(v15 + 16) += 16i64;
		}
		if (v52)
			sub_14018B900(v52, 0);
		v19 = *(_DWORD**)(v15 + 16);
		v19[2] = 1;
		*v19 = v11 != 0;
		*(_QWORD*)(v15 + 16) += 16i64;
		v20 = (__int64*)sub_1400580E0(v15, -3);
		sub_14005EA50(v15, v20, (int*)(*(_QWORD*)(v15 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v15 + 16) - 16i64));
		*(_QWORD*)(v15 + 16) -= 32i64;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		v21 = a1[2];
		v22 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v24 = *(_QWORD*)(v23 + 16);
		*(_QWORD*)v24 = *v22;
		*(_DWORD*)(v24 + 8) = *((_DWORD*)v22 + 2);
		*(_QWORD*)(v23 + 16) += 16i64;
		v25 = *(_QWORD*)(a2 + 16);
		v26 = (unsigned __int64*)sub_14018F0E0(&v51, L"bAccountUnlocked")[1];
		if (v26)
		{
			v27 = -1i64;
			do
				++v27;
			while (*((_BYTE*)v26 + v27));
			sub_140058710(v25, v26, v27);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v25 + 16) + 8i64) = 0;
			*(_QWORD*)(v25 + 16) += 16i64;
		}
		if (v52)
			sub_14018B900(v52, 0);
		v28 = *(_DWORD**)(v25 + 16);
		v28[2] = 1;
		*v28 = v21 != 0;
		*(_QWORD*)(v25 + 16) += 16i64;
		v29 = (__int64*)sub_1400580E0(v25, -3);
		sub_14005EA50(v25, v29, (int*)(*(_QWORD*)(v25 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v25 + 16) - 16i64));
		*(_QWORD*)(v25 + 16) -= 32i64;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		v30 = a1[1];
		v31 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v33 = *(_QWORD*)(v32 + 16);
		*(_QWORD*)v33 = *v31;
		*(_DWORD*)(v33 + 8) = *((_DWORD*)v31 + 2);
		*(_QWORD*)(v32 + 16) += 16i64;
		v34 = *(_QWORD*)(a2 + 16);
		v35 = (unsigned __int64*)sub_14018F0E0(&v51, L"bCharacterUnlocked")[1];
		if (v35)
		{
			do
				++v16;
			while (*((_BYTE*)v35 + v16));
			sub_140058710(v34, v35, v16);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v34 + 16) + 8i64) = 0;
			*(_QWORD*)(v34 + 16) += 16i64;
		}
		if (v52)
			sub_14018B900(v52, 0);
		v36 = *(_DWORD**)(v34 + 16);
		v36[2] = 1;
		*v36 = v30 != 0;
		*(_QWORD*)(v34 + 16) += 16i64;
		v37 = (__int64*)sub_1400580E0(v34, -3);
		sub_14005EA50(v34, v37, (int*)(*(_QWORD*)(v34 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v34 + 16) - 16i64));
		*(_QWORD*)(v34 + 16) -= 32i64;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		v38 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v40 = *(_QWORD*)(v39 + 16);
		*(_QWORD*)v40 = *v38;
		*(_DWORD*)(v40 + 8) = *((_DWORD*)v38 + 2);
		*(_QWORD*)(v39 + 16) += 16i64;
		sub_1400F0870(*(_QWORD*)(a2 + 16), v40, L"strIconSprite", v41);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		v42 = *(_QWORD*)(v5 + 16);
		if (v42)
		{
			if (v42 <= qword_140C3FE70)
				v10 = (unsigned __int16*)(v42 + qword_140C3FE68);
		}
		v43 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v45 = *(_QWORD*)(v44 + 16);
		*(_QWORD*)v45 = *v43;
		*(_DWORD*)(v45 + 8) = *((_DWORD*)v43 + 2);
		*(_QWORD*)(v44 + 16) += 16i64;
		sub_1400F0870(*(_QWORD*)(a2 + 16), v45, L"strPreviewSprite", v10);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		sub_14034BDD0(v46, *(_DWORD*)(v5 + 4));
		v47 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v49 = *(_QWORD*)(v48 + 16);
		*(_QWORD*)v49 = *v47;
		*(_DWORD*)(v49 + 8) = *((_DWORD*)v47 + 2);
		*(_QWORD*)(v48 + 16) += 16i64;
		sub_1400F0870(*(_QWORD*)(a2 + 16), v49, L"strUnlockName", v50);
		result = *(_QWORD*)(a2 + 16);
		*(_QWORD*)(result + 16) -= 16i64;
	}
	return result;
}
// 140451F02: variable 'v7' is possibly undefined
// 140451F25: variable 'v9' is possibly undefined
// 140451F61: variable 'v13' is possibly undefined
// 140452039: variable 'v23' is possibly undefined
// 140452109: variable 'v32' is possibly undefined
// 140452208: variable 'v39' is possibly undefined
// 14045222B: variable 'v41' is possibly undefined
// 14045226C: variable 'v44' is possibly undefined
// 1404522A1: variable 'v46' is possibly undefined
// 1404522C0: variable 'v48' is possibly undefined
// 1404522E3: variable 'v50' is possibly undefined
// 140B03608: using guessed type wchar_t aBaccountunlock[17];
// 140B03630: using guessed type wchar_t aBunlocked_1[10];
// 140B03648: using guessed type wchar_t aEgenericunlock[19];
// 140B03670: using guessed type wchar_t aStrunlockname[14];
// 140B03690: using guessed type wchar_t aStrpreviewspri[17];
// 140B036B8: using guessed type wchar_t aStriconsprite[14];
// 140B036D8: using guessed type wchar_t aBcharacterunlo[19];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

