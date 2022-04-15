//----- (0000000140027900) ----------------------------------------------------
__int64 __fastcall sub_140027900(__int64 a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	int v4; // ebp
	_QWORD* v5; // rax
	__int64 v6; // rdx
	unsigned __int16* v7; // r10
	_QWORD* v8; // rax
	__int64 v9; // r11
	__int64 v10; // rdx
	int v11; // r10d
	int v12; // esi
	_QWORD* v13; // rax
	__int64 v14; // r10
	unsigned __int64* v15; // rdx
	unsigned __int64 v16; // rdi
	unsigned __int64 v17; // r8
	_DWORD* v18; // rcx
	__int64* v19; // rax
	unsigned int v20; // esi
	_QWORD* v21; // rax
	__int64 v22; // r10
	unsigned __int64* v23; // rdx
	int* v24; // rax
	__int64* v25; // rax
	__int64 v26; // rcx
	int v27; // edx
	_QWORD* v28; // rax
	__int64 v29; // rdx
	unsigned __int16* v30; // r10
	_QWORD* v31; // rax
	__int64 v32; // rdx
	__int64 v34; // [rsp+20h] [rbp-28h] BYREF
	__int64 v35; // [rsp+28h] [rbp-20h]

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v4 = sub_1400578C0(a1);
	v5 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v4);
	v6 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v6 = *v5;
	*(_DWORD*)(v6 + 8) = *((_DWORD*)v5 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F0870(a1, v6, L"strName", v7);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v4);
	*(_QWORD*)v9 = *v8;
	*(_DWORD*)(v9 + 8) = *((_DWORD*)v8 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v10, L"nRealmPVPType", v11);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v12 = *(_DWORD*)(qword_140C66DA8 + 532) & 1;
	v13 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v4);
	*(_QWORD*)v14 = *v13;
	*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v15 = (unsigned __int64*)sub_14018F0E0(&v34, L"bFreeRealmTransfer")[1];
	v16 = -1i64;
	if (v15)
	{
		v17 = -1i64;
		do
			++v17;
		while (*((_BYTE*)v15 + v17));
		sub_140058710(a1, v15, v17);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v35)
		sub_14018B900(v35, 0);
	v18 = *(_DWORD**)(a1 + 16);
	v18[2] = 1;
	*v18 = v12 != 0;
	*(_QWORD*)(a1 + 16) += 16i64;
	v19 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v19, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 48i64;
	v20 = *(_DWORD*)(qword_140C635F0 + 5764);
	v21 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v4);
	*(_QWORD*)v22 = *v21;
	*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v23 = (unsigned __int64*)sub_14018F0E0(&v34, L"bFactionRestricted")[1];
	if (v23)
	{
		do
			++v16;
		while (*((_BYTE*)v23 + v16));
		sub_140058710(a1, v23, v16);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v35)
		sub_14018B900(v35, 0);
	v24 = *(int**)(a1 + 16);
	v24[2] = 1;
	*v24 = (v20 >> 4) & 1;
	*(_QWORD*)(a1 + 16) += 16i64;
	v25 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v25, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 48i64;
	v27 = *(_DWORD*)(qword_140C635F0 + 5772);
	if (v27)
	{
		sub_14034BDD0(v26, v27);
		v28 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v4);
		v29 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v29 = *v28;
		*(_DWORD*)(v29 + 8) = *((_DWORD*)v28 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F0870(a1, v29, L"strRealmNote", v30);
		*(_QWORD*)(a1 + 16) -= 16i64;
	}
	v31 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v4);
	v32 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v32 = *v31;
	*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v32, v4);
	return 1i64;
}
// 140027999: variable 'v7' is possibly undefined
// 1400279D4: variable 'v9' is possibly undefined
// 1400279E6: variable 'v10' is possibly undefined
// 1400279E6: variable 'v11' is possibly undefined
// 140027A20: variable 'v14' is possibly undefined
// 140027AF2: variable 'v22' is possibly undefined
// 140027B99: variable 'v26' is possibly undefined
// 140027BD5: variable 'v30' is possibly undefined
// 1409EE0A0: using guessed type wchar_t aStrname_1[8];
// 1409EE0B0: using guessed type wchar_t aNrealmpvptype_0[14];
// 1409EE0D0: using guessed type wchar_t aBfreerealmtran[19];
// 1409EE0F8: using guessed type wchar_t aBfactionrestri[19];
// 1409EE120: using guessed type wchar_t aStrrealmnote[13];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

