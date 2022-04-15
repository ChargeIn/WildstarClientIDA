//----- (00000001405E9900) ----------------------------------------------------
__int64 __fastcall sub_1405E9900(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rcx
	_DWORD* v10; // r14
	int v11; // esi
	int v12; // edx
	__int64 v13; // r15
	unsigned __int64 v14; // r8
	unsigned int v15; // ecx
	__int64 v16; // rbp
	__int64 v17; // rax
	__int64 v18; // rbp
	__int64 v19; // rdi
	__int64 v20; // rax
	int v21; // r12d
	__int64 v22; // rcx
	_QWORD* v23; // rax
	__int64 v24; // rdx
	unsigned __int16* v25; // r10
	_QWORD* v26; // rax
	__int64 v27; // r11
	__int64 v28; // rdx
	int v29; // r10d
	unsigned int v30; // eax
	int v31; // r15d
	_QWORD* v32; // rax
	__int64 v33; // r10
	unsigned __int64* v34; // rdx
	unsigned __int64 v35; // rdi
	unsigned __int64 v36; // r8
	_DWORD* v37; // rcx
	__int64* v38; // rax
	unsigned __int64 v39; // rdx
	unsigned __int64 v40; // rcx
	_DWORD* v41; // rax
	int v42; // ebp
	_QWORD* v43; // rax
	__int64 v44; // r10
	unsigned __int64* v45; // rdx
	_DWORD* v46; // rax
	__int64* v47; // rax
	_QWORD* v48; // rax
	__int64 v49; // r10
	__int64 v50; // rdx
	__int64 v51; // [rsp+20h] [rbp-38h] BYREF
	__int64 v52; // [rsp+28h] [rbp-30h]

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 < a1[2] && v1 != dword_140A12138 && !v1[2])
		goto LABEL_10;
	v3 = sub_140056AB0(a1, 1u);
	if (!v3)
		goto LABEL_10;
	v4 = *(_QWORD*)(v3 + 8);
	if (!v4)
		goto LABEL_10;
	v5 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v4 + 8), *(_QWORD*)(qword_140C65898 + 120));
	if (!v5)
		goto LABEL_10;
	if (!*(_DWORD*)(v5 + 40))
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v7 = *(_QWORD*)(v5 + 48);
	if (*(_DWORD*)(v7 + 16) == 38)
	{
		v8 = sub_140245C00(*(_DWORD*)(v7 + 64));
		v10 = (_DWORD*)v8;
		if (v8)
		{
			v11 = 0;
			v13 = sub_1405BE150(v9, *(_DWORD*)(v8 + 8));
			if (v13)
			{
				v14 = *(_QWORD*)(qword_140C65898 + 5792);
				v15 = 0;
				if (v14)
				{
					v16 = *(_QWORD*)(qword_140C65898 + 5784);
					v17 = 0i64;
					while (*(_DWORD*)(*(_QWORD*)(v16 + 8 * v17) + 8i64) != v12)
					{
						v17 = ++v15;
						if (v15 >= v14)
							goto LABEL_19;
					}
					v18 = *(_QWORD*)(v16 + 8i64 * v15);
				}
				else
				{
				LABEL_19:
					v18 = 0i64;
				}
				if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
					sub_14005E2C0((__int64)a1);
				v19 = a1[2];
				v20 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v19 + 8) = 5;
				*(_QWORD*)v19 = v20;
				a1[2] += 16i64;
				v21 = sub_1400578C0((__int64)a1);
				sub_14034BDD0(v22, *(_DWORD*)(v13 + 4));
				v23 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v21);
				v24 = a1[2];
				*(_QWORD*)v24 = *v23;
				*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
				a1[2] += 16i64;
				sub_1400F0870((__int64)a1, v24, L"strName", v25);
				a1[2] -= 16i64;
				v26 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v21);
				*(_QWORD*)v27 = *v26;
				*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v28, L"eTier", v29);
				a1[2] -= 16i64;
				if (!v18 || (!*(_DWORD*)(v18 + 12) ? (v30 = 0) : (v30 = *(_DWORD*)(v18 + 84)), v31 = 1, v30 < v10[7]))
					v31 = 0;
				v32 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v21);
				*(_QWORD*)v33 = *v32;
				*(_DWORD*)(v33 + 8) = *((_DWORD*)v32 + 2);
				a1[2] += 16i64;
				v34 = (unsigned __int64*)sub_14018F0E0(&v51, L"bCanLearn")[1];
				v35 = -1i64;
				if (v34)
				{
					v36 = -1i64;
					do
						++v36;
					while (*((_BYTE*)v34 + v36));
					sub_140058710((__int64)a1, v34, v36);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v52)
					sub_14018B900(v52, 0);
				v37 = (_DWORD*)a1[2];
				v37[2] = 1;
				*v37 = v31 != 0;
				a1[2] += 16i64;
				v38 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v38, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				if (v18 && (v39 = *(_QWORD*)(v18 + 72), v40 = 0i64, v39))
				{
					v41 = *(_DWORD**)(v18 + 64);
					while (*v41 != *v10)
					{
						++v40;
						++v41;
						if (v40 >= v39)
							goto LABEL_41;
					}
					v42 = 1;
				}
				else
				{
				LABEL_41:
					v42 = 0;
				}
				v43 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v21);
				*(_QWORD*)v44 = *v43;
				*(_DWORD*)(v44 + 8) = *((_DWORD*)v43 + 2);
				a1[2] += 16i64;
				v45 = (unsigned __int64*)sub_14018F0E0(&v51, L"bIsKnown")[1];
				if (v45)
				{
					do
						++v35;
					while (*((_BYTE*)v45 + v35));
					sub_140058710((__int64)a1, v45, v35);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v52)
					sub_14018B900(v52, 0);
				v46 = (_DWORD*)a1[2];
				LOBYTE(v11) = v42 != 0;
				v46[2] = 1;
				*v46 = v11;
				a1[2] += 16i64;
				v47 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v47, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				v48 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v21);
				*(_QWORD*)v49 = *v48;
				*(_DWORD*)(v49 + 8) = *((_DWORD*)v48 + 2);
				a1[2] += 16i64;
				sub_1400579E0((__int64)a1, v50, v21);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			return 1i64;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
	LABEL_10:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1405E99E1: variable 'v9' is possibly undefined
// 1405E9A38: variable 'v12' is possibly undefined
// 1405E9A8F: variable 'v22' is possibly undefined
// 1405E9ACC: variable 'v25' is possibly undefined
// 1405E9AFE: variable 'v27' is possibly undefined
// 1405E9B10: variable 'v28' is possibly undefined
// 1405E9B10: variable 'v29' is possibly undefined
// 1405E9B6A: variable 'v33' is possibly undefined
// 1405E9C55: variable 'v44' is possibly undefined
// 1405E9D18: variable 'v49' is possibly undefined
// 1405E9D2A: variable 'v50' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B23728: using guessed type wchar_t aBcanlearn[10];
// 140B23740: using guessed type wchar_t aBisknown_3[9];
// 140B23758: using guessed type wchar_t aStrname_40[8];
// 140B23768: using guessed type wchar_t aEtier_3[6];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

