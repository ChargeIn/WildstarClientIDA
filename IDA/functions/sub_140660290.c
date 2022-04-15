//----- (0000000140660290) ----------------------------------------------------
__int64 __fastcall sub_140660290(__int64 a1)
{
	__int64 v1; // rsi
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rcx
	unsigned int v8; // r14d
	_DWORD* v9; // r15
	int* v10; // rax
	__int64 v11; // rbp
	__int64 v12; // rdi
	__int64 v13; // rax
	int v14; // r12d
	int v15; // edi
	_QWORD* v16; // rax
	__int64 v17; // rdx
	unsigned __int64* v18; // rdx
	unsigned __int64 v19; // r8
	_DWORD* v20; // rcx
	__int64* v21; // rax
	int* v22; // rax
	int* v23; // r14
	__int64 v24; // rbp
	int v25; // edx
	int* v26; // rax
	__int64 v27; // rcx
	__int64 v28; // rdi
	__int64 v29; // rcx
	__int16* v30; // rsi
	__int16* v31; // rax
	__int64* v32; // rax
	_QWORD* v33; // rax
	__int64 v34; // rdx
	_QWORD* v35; // rax
	__int64 v36; // rdx
	__int64 v38; // [rsp+30h] [rbp-58h] BYREF
	int* v39; // [rsp+38h] [rbp-50h]
	int* v40; // [rsp+40h] [rbp-48h]
	int* v41; // [rsp+48h] [rbp-40h]
	__int64 v42; // [rsp+50h] [rbp-38h] BYREF
	__int64 v43; // [rsp+58h] [rbp-30h]

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = sub_1400F26A0(v7 + 384, 2);
	v9 = (_DWORD*)sub_1402259C0(v8);
	if (!v9)
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	v10 = (int*)sub_1406622C0(a1, 1);
	if (!v10 || (v11 = sub_1403D90D0(qword_140C65898, *v10)) == 0)
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v12 = *(_QWORD*)(a1 + 16);
	v13 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v12 + 8) = 5;
	*(_QWORD*)v12 = v13;
	*(_QWORD*)(a1 + 16) += 16i64;
	v14 = sub_1400578C0(a1);
	v15 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0 + 24i64))(
		qword_140C659A0,
		v11,
		v8,
		0i64,
		0i64,
		0);
	v16 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v14);
	v17 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v17 = *v16;
	*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v18 = (unsigned __int64*)sub_14018F0E0(&v38, L"bIsMet")[1];
	if (v18)
	{
		v19 = -1i64;
		do
			++v19;
		while (*((_BYTE*)v18 + v19));
		sub_140058710(a1, v18, v19);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v39)
		sub_14018B900((__int64)v39, 0);
	v20 = *(_DWORD**)(a1 + 16);
	v20[2] = 1;
	*v20 = v15 != 0;
	*(_QWORD*)(a1 + 16) += 16i64;
	v21 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v21, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 48i64;
	v22 = sub_14018B280(16i64, 0);
	v23 = v22;
	v39 = v22;
	v24 = (__int64)v22;
	v40 = v22;
	v41 = v22 + 4;
	if (v22)
		*(_WORD*)v22 = 0;
	v25 = v9[14];
	if (!v25 || (v26 = (int*)sub_14034BDD0((__int64)(v22 + 4), v25)) == 0i64)
	{
	LABEL_29:
		if (v9[2] == 5)
		{
			v28 = sub_1401FF120(v9[8]);
			if (v28)
			{
				v30 = sub_14034BDD0(v27, 196182);
				if (v30)
				{
					v31 = sub_14034BDD0(v29, *(_DWORD*)(v28 + 12));
					v32 = sub_14018EFA0(&v42, (__int64)v30, (unsigned int)v9[11], v31);
					if (v32 != &v38)
					{
						sub_14001C480((__int64)&v38, (int*)v32[1], (int*)v32[2]);
						v24 = (__int64)v40;
						v23 = v39;
					}
					if (v43)
						sub_14018B900(v43, 0);
				}
			}
		}
		if (v23 == (int*)v24)
			goto LABEL_38;
		goto LABEL_37;
	}
	if (*(_WORD*)v26)
	{
		do
			++v1;
		while (*((_WORD*)v26 + v1));
	}
	if (!((2 * v1) >> 1))
	{
		sub_1407DB590(v23, v26, 0i64);
		goto LABEL_29;
	}
	sub_14001C310(&v38, v26, (int*)((char*)v26 + 2 * v1));
	v24 = (__int64)v40;
	v23 = v39;
	if (v39 == v40)
		goto LABEL_29;
LABEL_37:
	v33 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v14);
	v34 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v34 = *v33;
	*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F0870(a1, v34, L"strText", (unsigned __int16*)v23);
	*(_QWORD*)(a1 + 16) -= 16i64;
LABEL_38:
	v35 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v14);
	v36 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v36 = *v35;
	*(_DWORD*)(v36 + 8) = *((_DWORD*)v35 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	if (v23)
		sub_14018B900((__int64)v23, 0);
	sub_1400579E0(a1, v36, v14);
	return 1i64;
}
// 140660554: variable 'v27' is possibly undefined
// 140660564: variable 'v29' is possibly undefined
// 14066063D: variable 'v36' is possibly undefined
// 140B2DAD8: using guessed type wchar_t aBismet[7];
// 140B2DAE8: using guessed type wchar_t aStrtext_1[8];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;

