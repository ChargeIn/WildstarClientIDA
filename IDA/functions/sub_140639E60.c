//----- (0000000140639E60) ----------------------------------------------------
__int64 __fastcall sub_140639E60(__int64 a1, __int64 a2, int a3)
{
	__int64 v5; // rcx
	unsigned int v6; // eax
	_QWORD* v8; // rax
	__int64 v9; // r10
	__int64 v10; // rdx
	_QWORD* v11; // rax
	__int64 v12; // r10
	__int64 v13; // rdx
	int v14; // r11d
	_QWORD* v15; // rax
	__int64 v16; // r10
	__int64 v17; // rdx
	int v18; // r11d
	_QWORD* v19; // rax
	__int64 v20; // r10
	__int64 v21; // rdx
	float v22; // xmm6_4
	_QWORD* v23; // rax
	__int64 v24; // r10
	__int64 v25; // rdx
	__int64 v26; // rbx
	unsigned __int64* v27; // rdx
	unsigned __int64 v28; // r8
	__int64 v29; // rax
	__int64* v30; // rax
	__int64 v32; // [rsp+20h] [rbp-38h] BYREF
	__int64 v33; // [rsp+28h] [rbp-30h]

	if (*(_DWORD*)(a1 + 4) == 38)
		return 0i64;
	v5 = *(_QWORD*)(qword_140C65898 + 120);
	v6 = v5 ? *(_DWORD*)(v5 + 56) : 0;
	if (*(_DWORD*)(a1 + 16) > v6)
		return 0i64;
	if (a3 ? (*(_BYTE*)(a1 + 20) & 2) == 0 : (*(_BYTE*)(a1 + 20) & 1) == 0)
		return 0i64;
	v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v10 = *(_QWORD*)(v9 + 16);
	*(_QWORD*)v10 = *v8;
	*(_DWORD*)(v10 + 8) = *((_DWORD*)v8 + 2);
	*(_QWORD*)(v9 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v10, L"nRewardType", 3);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v13 = *(_QWORD*)(v12 + 16);
	*(_QWORD*)v13 = *v11;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v11 + 2);
	*(_QWORD*)(v12 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v13, L"eRewardProperty", v14);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v15 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v17 = *(_QWORD*)(v16 + 16);
	*(_QWORD*)v17 = *v15;
	*(_DWORD*)(v17 + 8) = *((_DWORD*)v15 + 2);
	*(_QWORD*)(v16 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v17, L"nObjectId", v18);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v21 = *(_QWORD*)(v20 + 16);
	*(_QWORD*)v21 = *v19;
	*(_DWORD*)(v21 + 8) = *((_DWORD*)v19 + 2);
	*(_QWORD*)(v20 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v21, L"eValueType", 2);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v22 = *(float*)(a1 + 12);
	v23 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v25 = *(_QWORD*)(v24 + 16);
	*(_QWORD*)v25 = *v23;
	*(_DWORD*)(v25 + 8) = *((_DWORD*)v23 + 2);
	*(_QWORD*)(v24 + 16) += 16i64;
	v26 = *(_QWORD*)(a2 + 16);
	v27 = (unsigned __int64*)sub_14018F0E0(&v32, L"nValue")[1];
	if (v27)
	{
		v28 = -1i64;
		do
			++v28;
		while (*((_BYTE*)v27 + v28));
		sub_140058710(v26, v27, v28);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v26 + 16) + 8i64) = 0;
		*(_QWORD*)(v26 + 16) += 16i64;
	}
	if (v33)
		sub_14018B900(v33, 0);
	v29 = *(_QWORD*)(v26 + 16);
	*(_DWORD*)(v29 + 8) = 3;
	*(double*)v29 = v22;
	*(_QWORD*)(v26 + 16) += 16i64;
	v30 = (__int64*)sub_1400580E0(v26, -3);
	sub_14005EA50(v26, v30, (int*)(*(_QWORD*)(v26 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v26 + 16) - 16i64));
	*(_QWORD*)(v26 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	return 1i64;
}
// 140639ECB: variable 'v9' is possibly undefined
// 140639F1A: variable 'v12' is possibly undefined
// 140639F3D: variable 'v14' is possibly undefined
// 140639F66: variable 'v16' is possibly undefined
// 140639F89: variable 'v18' is possibly undefined
// 140639FAE: variable 'v20' is possibly undefined
// 140639FFE: variable 'v24' is possibly undefined
// 140B28A98: using guessed type wchar_t aErewardpropert_2[16];
// 140B28AB8: using guessed type wchar_t aNobjectid_2[10];
// 140B28AE8: using guessed type wchar_t aNrewardtype_3[12];
// 140B28C10: using guessed type wchar_t aEvaluetype_3[11];
// 140B28C28: using guessed type wchar_t aNvalue_12[7];
// 140C65898: using guessed type __int64 qword_140C65898;

