//----- (00000001405EBAB0) ----------------------------------------------------
__int64 __fastcall sub_1405EBAB0(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v2; // rsi
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rbp
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // r10d
	__int64 v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rax
	int v14; // edi
	_QWORD* v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rdx
	int v18; // r11d
	__int64 v19; // rbx
	_QWORD* v20; // rax
	__int64 v21; // rdx
	int v22; // r11d
	__int64 v23; // rbx
	_QWORD* v24; // rax
	__int64 v25; // rdx
	int v26; // r11d
	__int64 v27; // rdx
	_QWORD* v28; // rax
	__int64 v29; // r8
	__int64 v30; // rdx
	int v31; // r10d
	__int64(__fastcall * *v33)(); // [rsp+20h] [rbp-28h] BYREF
	int v34; // [rsp+28h] [rbp-20h]
	__int64 v35; // [rsp+30h] [rbp-18h]
	int v36; // [rsp+38h] [rbp-10h]

	v1 = (_DWORD*)a1[3];
	v2 = (__int64)a1;
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		&& (v3 = sub_140056AB0(a1, 1u)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0
		&& (v5 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v4 + 8), *(_QWORD*)(qword_140C65898 + 120))) != 0)
	{
		v6 = *(_QWORD*)(v2 + 32);
		v33 = off_140B569F0;
		v7 = *(_QWORD*)(v6 + 112);
		v35 = v2;
		v36 = 1;
		if (*(_QWORD*)(v6 + 120) >= v7)
			sub_14005E2C0(v2);
		v8 = *(_QWORD*)(v2 + 16);
		v9 = sub_14005C1B0(v2, 0, 0);
		*(_DWORD*)(v8 + 8) = 5;
		*(_QWORD*)v8 = v9;
		*(_QWORD*)(v2 + 16) += 16i64;
		v10 = sub_1400578C0(v2);
		v34 = v10;
		v11 = *(_QWORD*)(v5 + 64);
		if (v11 && *(int*)(v11 + 32) > 0)
		{
			if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
				sub_14005E2C0(v2);
			v12 = *(_QWORD*)(v2 + 16);
			v13 = sub_14005C1B0(v2, 0, 0);
			*(_DWORD*)(v12 + 8) = 5;
			*(_QWORD*)v12 = v13;
			*(_QWORD*)(v2 + 16) += 16i64;
			v14 = sub_1400578C0(v2);
			v15 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v14);
			v16 = *(_QWORD*)(v2 + 16);
			*(_QWORD*)v16 = *v15;
			*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
			*(_QWORD*)(v2 + 16) += 16i64;
			sub_1400F06F0(v2, v17, L"eVital", v18);
			*(_QWORD*)(v2 + 16) -= 16i64;
			v19 = *(_QWORD*)(v2 + 16);
			v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v14);
			*(_QWORD*)v19 = *v20;
			*(_DWORD*)(v19 + 8) = *((_DWORD*)v20 + 2);
			*(_QWORD*)(v2 + 16) += 16i64;
			sub_1400F06F0(v2, v21, L"nValue", v22);
			*(_QWORD*)(v2 + 16) -= 16i64;
			v23 = *(_QWORD*)(v2 + 16);
			v24 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v14);
			*(_QWORD*)v23 = *v24;
			*(_DWORD*)(v23 + 8) = *((_DWORD*)v24 + 2);
			*(_QWORD*)(v2 + 16) += 16i64;
			sub_1400F06F0(v2, v25, L"eEval", v26);
			*(_QWORD*)(v2 + 16) -= 16i64;
			sub_1400FB1D0((__int64)&v33);
			sub_1400579E0(v2, v27, v14);
			v2 = v35;
			v10 = v34;
		}
		v28 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v10);
		v29 = *(_QWORD*)(v2 + 16);
		*(_QWORD*)v29 = *v28;
		v30 = *((unsigned int*)v28 + 2);
		*(_DWORD*)(v29 + 8) = v30;
		*(_QWORD*)(v2 + 16) += 16i64;
		sub_1400579E0(v2, v30, v31);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
		*(_QWORD*)(v2 + 16) += 16i64;
		return 1i64;
	}
}
// 1405EBC2C: variable 'v17' is possibly undefined
// 1405EBC2C: variable 'v18' is possibly undefined
// 1405EBC76: variable 'v21' is possibly undefined
// 1405EBC76: variable 'v22' is possibly undefined
// 1405EBCC0: variable 'v25' is possibly undefined
// 1405EBCC0: variable 'v26' is possibly undefined
// 1405EBCDC: variable 'v27' is possibly undefined
// 1405EBD1F: variable 'v31' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B23888: using guessed type wchar_t aEeval_0[6];
// 140B238B0: using guessed type wchar_t aEvital_1[7];
// 140B238C0: using guessed type wchar_t aNvalue_10[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

