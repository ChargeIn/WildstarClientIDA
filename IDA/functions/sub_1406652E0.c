//----- (00000001406652E0) ----------------------------------------------------
__int64 __fastcall sub_1406652E0(_QWORD* a1)
{
	__int64* v2; // rax
	__int64 v3; // rdx
	__int64 v5; // rdi
	int* v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	unsigned int v9; // esi
	unsigned int v10; // eax
	__int64 v11; // rbp
	__int64 v12; // rbx
	unsigned int v13; // ecx
	unsigned int v14; // ebx
	__int64 v15; // rcx
	__int64 v16; // rax
	int v17; // ecx
	unsigned int v18; // ebx
	__int64 v19; // r14
	unsigned int v20; // eax
	__int64 v21; // r14
	unsigned int v22; // eax
	BOOL v23; // r14d
	__int64 v24; // rcx
	unsigned int* v25; // rcx
	unsigned int v26; // edx
	unsigned __int64 v27; // rax
	int v28; // r13d
	int v29; // ebp
	unsigned int v30; // eax
	unsigned int* v31; // rcx
	unsigned __int64 v32; // rax
	__int64 v33; // rax
	__m128i v34; // xmm0
	__int64 v35; // rcx
	__int64 v36; // rbx
	__int64 v37; // rax
	__int64 v38; // rax
	__int64* v39; // rax
	unsigned __int16* v40; // r9
	__int64 v41; // rdx
	__int64 v42; // rax
	__int64* v43; // rax
	__int64 v44; // rax
	__int64* v45; // rax
	BOOL* v46; // rcx
	__int64* v47; // rax
	BOOL* v48; // rcx
	__int64* v49; // rax
	__int64 v50; // [rsp+20h] [rbp-78h]
	char v51[8]; // [rsp+30h] [rbp-68h] BYREF
	int* v52; // [rsp+38h] [rbp-60h]
	int* v53; // [rsp+40h] [rbp-58h]
	int* v54; // [rsp+48h] [rbp-50h]
	int v55; // [rsp+50h] [rbp-48h]
	int v56; // [rsp+54h] [rbp-44h]
	BOOL v57; // [rsp+58h] [rbp-40h]
	BOOL v58; // [rsp+5Ch] [rbp-3Ch]
	unsigned int v59; // [rsp+A8h] [rbp+10h]
	unsigned int v60; // [rsp+B0h] [rbp+18h]
	BOOL v61; // [rsp+B8h] [rbp+20h]

	v2 = (__int64*)sub_140056AB0(a1, 1u);
	if (!v2)
	{
		v3 = a1[2];
		*(_QWORD*)v3 = 0i64;
		*(_DWORD*)(v3 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	v5 = *v2;
	v6 = sub_14018B280(16i64, 0);
	v52 = v6;
	v53 = v6;
	v54 = v6 + 4;
	if (v6)
		*(_WORD*)v6 = 0;
	v60 = 1;
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v7 = a1[2];
	v8 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	v9 = 0;
	*(_QWORD*)v7 = v8;
	a1[2] += 16i64;
	v59 = *(_DWORD*)(v5 + 16);
	v10 = v59;
	v11 = 0i64;
	v50 = 0i64;
	v12 = 0x400000018104i64;
	do
	{
		v13 = *(_DWORD*)(v5 + 16);
		if (v9 > v13)
			goto LABEL_73;
		if (v9 != v13)
		{
			v16 = *(_QWORD*)(v5 + 8 * v11 + 24);
			if (!v16)
				goto LABEL_72;
			if (!*(_DWORD*)(v16 + 4))
				goto LABEL_72;
			v17 = *(_DWORD*)(v16 + 8);
			if ((v17 & 8) != 0)
				goto LABEL_72;
			if ((v17 & 1) == 0)
			{
			LABEL_38:
				sub_140551D40(v5, v9, (__int64)v51, 0);
				v22 = *(_DWORD*)(v5 + 16);
				v61 = v9 == v22;
				v57 = v61;
				if (v9 == v22)
				{
					v23 = 0;
				}
				else if (v9 <= v22)
				{
					v24 = *(_QWORD*)(v5 + 8 * v11 + 24);
					if (v24)
						v23 = (*(_DWORD*)(v24 + 8) & 0x20) == 0;
					else
						v23 = 0;
				}
				else
				{
					v23 = 0;
				}
				v58 = v23;
				if (v9 >= v22)
					goto LABEL_55;
				v25 = *(unsigned int**)(v5 + 8 * v11 + 24);
				if (!v25)
					goto LABEL_55;
				v26 = v25[4];
				if (!v26)
					goto LABEL_55;
				v27 = v25[1];
				if ((unsigned int)v27 <= 0x2E && _bittest64(&v12, v27))
				{
					if (v26 <= 1)
						goto LABEL_55;
					if ((v25[2] & 0x200) == 0)
						goto LABEL_53;
				}
				if (v26 > 1)
				{
				LABEL_53:
					if ((v25[2] & 0x400) == 0)
					{
						v28 = sub_140551630(v5, v9);
						v56 = v28;
						v29 = 100;
						v55 = 100;
					LABEL_68:
						v33 = a1[2];
						*(_DWORD*)(v33 + 8) = 3;
						v34 = _mm_cvtsi32_si128(v60++);
						*(_QWORD*)v33 = *(_OWORD*)&_mm_cvtepi32_pd(v34);
						v35 = a1[4];
						a1[2] += 16i64;
						if (*(_QWORD*)(v35 + 120) >= *(_QWORD*)(v35 + 112))
							sub_14005E2C0((__int64)a1);
						v36 = a1[2];
						v37 = sub_14005C1B0((__int64)a1, 0, 0);
						*(_DWORD*)(v36 + 8) = 5;
						*(_QWORD*)v36 = v37;
						a1[2] += 16i64;
						sub_140058710((__int64)a1, (unsigned __int64*)"nIndex", 6ui64);
						v38 = a1[2];
						*(_DWORD*)(v38 + 8) = 3;
						*(double*)v38 = (double)(int)v9;
						a1[2] += 16i64;
						v39 = (__int64*)sub_1400580E0((__int64)a1, -3);
						sub_14005EA50((__int64)a1, v39, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
						v40 = (unsigned __int16*)v52;
						a1[2] -= 32i64;
						sub_1400F0090((__int64)a1, v41, (unsigned __int64*)"strDescription", v40);
						sub_140058710((__int64)a1, (unsigned __int64*)"nNeeded", 7ui64);
						v42 = a1[2];
						*(_DWORD*)(v42 + 8) = 3;
						*(double*)v42 = (double)v29;
						a1[2] += 16i64;
						v43 = (__int64*)sub_1400580E0((__int64)a1, -3);
						sub_14005EA50((__int64)a1, v43, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
						a1[2] -= 32i64;
						sub_140058710((__int64)a1, (unsigned __int64*)"nCompleted", 0xAui64);
						v44 = a1[2];
						*(_DWORD*)(v44 + 8) = 3;
						*(double*)v44 = (double)v28;
						a1[2] += 16i64;
						v45 = (__int64*)sub_1400580E0((__int64)a1, -3);
						sub_14005EA50((__int64)a1, v45, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
						a1[2] -= 32i64;
						sub_140058710((__int64)a1, (unsigned __int64*)"bIsReward", 9ui64);
						v46 = (BOOL*)a1[2];
						*v46 = v61;
						v46[2] = 1;
						a1[2] += 16i64;
						v47 = (__int64*)sub_1400580E0((__int64)a1, -3);
						sub_14005EA50((__int64)a1, v47, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
						a1[2] -= 32i64;
						sub_140058710((__int64)a1, (unsigned __int64*)"bIsRequired", 0xBui64);
						v48 = (BOOL*)a1[2];
						v48[2] = 1;
						*v48 = v23;
						a1[2] += 16i64;
						v49 = (__int64*)sub_1400580E0((__int64)a1, -3);
						sub_14005EA50((__int64)a1, v49, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
						a1[2] -= 32i64;
						sub_14005EA50(
							(__int64)a1,
							(__int64*)(a1[2] - 48i64),
							(int*)(a1[2] - 32i64),
							(unsigned int*)(a1[2] - 16i64));
						a1[2] -= 32i64;
						v11 = v50;
					LABEL_71:
						v12 = 0x400000018104i64;
						goto LABEL_72;
					}
				}
			LABEL_55:
				v28 = sub_1405515C0(v5, v9);
				v56 = v28;
				v30 = *(_DWORD*)(v5 + 16);
				if (v9 != v30 && v9 <= v30 && (v31 = *(unsigned int**)(v5 + 8 * v11 + 24)) != 0i64 && (v29 = v31[4]) != 0)
				{
					if (v9 < v30)
					{
						v32 = v31[1];
						if ((unsigned int)v32 <= 0x2E && _bittest64(&v12, v32) && (unsigned int)v29 > 1 && (v31[2] & 0x200) == 0)
							v29 = 100;
					}
				}
				else
				{
					v29 = 0;
				}
				v55 = v29;
				goto LABEL_68;
			}
			v18 = 0;
			if ((v17 & 2) != 0)
			{
				if (v9)
				{
					v19 = v5 + 24;
					do
					{
						v20 = *(_DWORD*)(v5 + 16);
						if (v18 != v20
							&& v18 <= v20
							&& *(_QWORD*)v19
							&& (*(_DWORD*)(*(_QWORD*)v19 + 8i64) & 0x20) == 0
							&& !(unsigned int)sub_1405510D0(v5, v18))
						{
							goto LABEL_71;
						}
						++v18;
						v19 += 8i64;
					} while (v18 < v9);
				}
			}
			else if (v9)
			{
				v21 = v5 + 24;
				while (!*(_DWORD*)(*(_QWORD*)v21 + 4i64)
					|| (*(_BYTE*)(*(_QWORD*)v21 + 8i64) & 8) != 0
					|| (unsigned int)sub_140550F70(v5, v18, 1))
				{
					++v18;
					v21 += 8i64;
					if (v18 >= v9)
						goto LABEL_37;
				}
				goto LABEL_71;
			}
		LABEL_37:
			v12 = 0x400000018104i64;
			goto LABEL_38;
		}
		if ((*(_BYTE*)(*(_QWORD*)(v5 + 8) + 12i64) & 2) == 0)
		{
			v14 = 0;
			if (v13)
			{
				while (1)
				{
					v15 = *(_QWORD*)(v5 + 8i64 * v14 + 24);
					if (*(_DWORD*)(v15 + 4))
					{
						if ((*(_BYTE*)(v15 + 8) & 8) == 0 && !(unsigned int)sub_140550F70(v5, v14, 1))
							goto LABEL_71;
					}
					if (++v14 >= *(_DWORD*)(v5 + 16))
						goto LABEL_37;
				}
			}
			goto LABEL_37;
		}
	LABEL_72:
		v10 = v59;
	LABEL_73:
		++v11;
		++v9;
		v50 = v11;
	} while (v9 <= v10);
	if (v52)
		sub_14018B900((__int64)v52, 0);
	return 1i64;
}
// 140665582: conditional instruction was optimized away because rcx.8!=0
// 1406655FE: conditional instruction was optimized away because rcx.8!=0
// 1406656F8: variable 'v41' is possibly undefined
// 1406652E0: using guessed type char var_68[8];

