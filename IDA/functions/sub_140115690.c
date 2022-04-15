//----- (0000000140115690) ----------------------------------------------------
__int64 __fastcall sub_140115690(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // ecx
	_QWORD* v6; // rax
	_QWORD* v7; // rbx
	__int64 v8; // rax
	__int64* v9; // r13
	__int64 v10; // rcx
	__int64 v11; // rdi
	__int64 v12; // rax
	int v13; // eax
	__int64 v14; // r12
	unsigned int v15; // r14d
	__int64 v16; // r9
	int v17; // edi
	_DWORD* v18; // rdx
	__int64 v19; // rcx
	unsigned __int64* v20; // r15
	unsigned __int64 v21; // r14
	__int64 v22; // rdi
	__int64 v23; // rax
	__int64 v24; // rcx
	__int64 v25; // rcx
	__int64* v26; // rax
	__int64 v27; // rax
	__int64 v28; // r10
	__int64 v29; // r9
	__int64 v30; // r12
	_DWORD* v31; // rcx
	unsigned __int64* v32; // r15
	unsigned __int64 v33; // r14
	__int64 v34; // rdi
	__int64 v35; // rax
	__int64 v36; // rcx
	__int64 v37; // rcx
	__int64* v38; // rax
	__int64 v39; // rax
	__int64 v40; // r10
	__int64 v41; // r9
	int v42; // r13d
	_DWORD* v43; // rcx
	unsigned __int64* v44; // r15
	unsigned __int64 v45; // r14
	__int64 v46; // rdi
	__int64 v47; // rax
	__int64 v48; // rcx
	__int64 v49; // r9
	_DWORD* v50; // rdx
	__int64 v51; // rcx
	__int64 v52; // r8
	__int64 v53; // rax
	__int64 v54; // r10
	__int64 v55; // r9
	_DWORD* v56; // rcx
	__int64 v57; // rdx
	__int64 v59; // [rsp+20h] [rbp-29h]
	__int64 v60; // [rsp+28h] [rbp-21h] BYREF
	__int64 v61; // [rsp+30h] [rbp-19h]
	int v62; // [rsp+B0h] [rbp+67h]
	double v63; // [rsp+B0h] [rbp+67h]
	double v64; // [rsp+B0h] [rbp+67h]
	int v65; // [rsp+B8h] [rbp+6Fh]
	int v66; // [rsp+C0h] [rbp+77h]
	double v67; // [rsp+C8h] [rbp+7Fh]
	double v68; // [rsp+C8h] [rbp+7Fh]
	double v69; // [rsp+C8h] [rbp+7Fh]

	v2 = sub_140114A30(a1);
	v59 = v2;
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v3 = a1[2];
	v4 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	v5 = 0;
	*(_QWORD*)v3 = v4;
	a1[2] += 16i64;
	v6 = *(_QWORD**)(v2 + 1224);
	v7 = (_QWORD*)*v6;
	if ((_QWORD*)*v6 != v6)
	{
		do
		{
			v8 = a1[2];
			v9 = (__int64*)v7[2];
			*(_DWORD*)(v8 + 8) = 3;
			v66 = v5 + 1;
			*(double*)v8 = (double)(v5 + 1);
			v10 = a1[4];
			a1[2] += 16i64;
			if (*(_QWORD*)(v10 + 120) >= *(_QWORD*)(v10 + 112))
				sub_14005E2C0((__int64)a1);
			v11 = a1[2];
			v12 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v11 + 8) = 5;
			*(_QWORD*)v11 = v12;
			a1[2] += 16i64;
			v13 = sub_1400578C0((__int64)a1);
			v14 = *v9;
			v15 = v13 - 1;
			v16 = *(_QWORD*)(a1[4] + 160i64);
			v17 = v13;
			v62 = v13;
			v65 = v13 - 1;
			if ((unsigned int)(v13 - 1) >= *(_DWORD*)(v16 + 56))
			{
				if ((double)v13 == 0.0)
				{
					v18 = *(_DWORD**)(v16 + 32);
				}
				else
				{
					v67 = (double)v13;
					v18 = (_DWORD*)(*(_QWORD*)(v16 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v67) + HIDWORD(v67)) % (((1i64 << *(_BYTE*)(v16 + 11)) - 1) | 1)));
				}
				while (v18[6] != 3 || (double)v13 != *((double*)v18 + 2))
				{
					v18 = (_DWORD*)*((_QWORD*)v18 + 4);
					if (!v18)
					{
						v18 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v18 = (_DWORD*)(*(_QWORD*)(v16 + 24) + 16i64 * (v13 - 1));
			}
			v19 = a1[2];
			*(_QWORD*)v19 = *(_QWORD*)v18;
			*(_DWORD*)(v19 + 8) = v18[2];
			a1[2] += 16i64;
			v20 = (unsigned __int64*)sub_14018F0E0(&v60, L"iMin")[1];
			if (v20)
			{
				v21 = -1i64;
				do
					++v21;
				while (*((_BYTE*)v20 + v21));
				if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
					sub_14005E2C0((__int64)a1);
				v22 = a1[2];
				v23 = sub_140062650((__int64)a1, v20, v21);
				v15 = v65;
				*(_DWORD*)(v22 + 8) = 4;
				*(_QWORD*)v22 = v23;
				v17 = v62;
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
			}
			v24 = v61;
			a1[2] += 16i64;
			if (v24)
				sub_14018B900(v24, 0);
			v25 = a1[2];
			*(_DWORD*)(v25 + 8) = 3;
			*(double*)v25 = (double)((int)v14 + 1);
			a1[2] += 16i64;
			v26 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v26, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			v27 = a1[4];
			v28 = a1[2] - 48i64;
			a1[2] = v28;
			v29 = *(_QWORD*)(v27 + 160);
			v30 = v9[1];
			if (v15 >= *(_DWORD*)(v29 + 56))
			{
				if ((double)v17 == 0.0)
				{
					v31 = *(_DWORD**)(v29 + 32);
				}
				else
				{
					v68 = (double)v17;
					v31 = (_DWORD*)(*(_QWORD*)(v29 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v68) + HIDWORD(v68)) % (((1i64 << *(_BYTE*)(v29 + 11)) - 1) | 1)));
				}
				while (v31[6] != 3 || (double)v17 != *((double*)v31 + 2))
				{
					v31 = (_DWORD*)*((_QWORD*)v31 + 4);
					if (!v31)
					{
						v31 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v31 = (_DWORD*)(*(_QWORD*)(v29 + 24) + 16i64 * (v17 - 1));
			}
			*(_QWORD*)v28 = *(_QWORD*)v31;
			*(_DWORD*)(v28 + 8) = v31[2];
			a1[2] += 16i64;
			v32 = (unsigned __int64*)sub_14018F0E0(&v60, L"iLim")[1];
			if (v32)
			{
				v33 = -1i64;
				do
					++v33;
				while (*((_BYTE*)v32 + v33));
				if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
					sub_14005E2C0((__int64)a1);
				v34 = a1[2];
				v35 = sub_140062650((__int64)a1, v32, v33);
				v15 = v65;
				*(_DWORD*)(v34 + 8) = 4;
				*(_QWORD*)v34 = v35;
				v17 = v62;
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
			}
			v36 = v61;
			a1[2] += 16i64;
			if (v36)
				sub_14018B900(v36, 0);
			v37 = a1[2];
			*(_DWORD*)(v37 + 8) = 3;
			*(double*)v37 = (double)((int)v30 + 1);
			a1[2] += 16i64;
			v38 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v38, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			v39 = a1[4];
			v40 = a1[2] - 48i64;
			a1[2] = v40;
			v41 = *(_QWORD*)(v39 + 160);
			v42 = *((_DWORD*)v9 + 6);
			if (v15 >= *(_DWORD*)(v41 + 56))
			{
				if ((double)v17 == 0.0)
				{
					v43 = *(_DWORD**)(v41 + 32);
				}
				else
				{
					v69 = (double)v17;
					v43 = (_DWORD*)(*(_QWORD*)(v41 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v69) + HIDWORD(v69)) % (((1i64 << *(_BYTE*)(v41 + 11)) - 1) | 1)));
				}
				while (v43[6] != 3 || (double)v17 != *((double*)v43 + 2))
				{
					v43 = (_DWORD*)*((_QWORD*)v43 + 4);
					if (!v43)
					{
						v43 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v43 = (_DWORD*)(*(_QWORD*)(v41 + 24) + 16i64 * (v17 - 1));
			}
			*(_QWORD*)v40 = *(_QWORD*)v43;
			*(_DWORD*)(v40 + 8) = v43[2];
			a1[2] += 16i64;
			v44 = (unsigned __int64*)sub_14018F0E0(&v60, L"data")[1];
			if (v44)
			{
				v45 = -1i64;
				do
					++v45;
				while (*((_BYTE*)v44 + v45));
				if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
					sub_14005E2C0((__int64)a1);
				v46 = a1[2];
				v47 = sub_140062650((__int64)a1, v44, v45);
				v15 = v65;
				*(_DWORD*)(v46 + 8) = 4;
				*(_QWORD*)v46 = v47;
				v17 = v62;
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
			}
			v48 = v61;
			a1[2] += 16i64;
			if (v48)
				sub_14018B900(v48, 0);
			v49 = *(_QWORD*)(a1[4] + 160i64);
			if ((unsigned int)(v42 - 1) >= *(_DWORD*)(v49 + 56))
			{
				if ((double)v42 == 0.0)
				{
					v50 = *(_DWORD**)(v49 + 32);
				}
				else
				{
					v63 = (double)v42;
					v50 = (_DWORD*)(*(_QWORD*)(v49 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v63) + HIDWORD(v63)) % (((1i64 << *(_BYTE*)(v49 + 11)) - 1) | 1)));
				}
				while (v50[6] != 3 || (double)v42 != *((double*)v50 + 2))
				{
					v50 = (_DWORD*)*((_QWORD*)v50 + 4);
					if (!v50)
					{
						v50 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v50 = (_DWORD*)(*(_QWORD*)(v49 + 24) + 16i64 * (v42 - 1));
			}
			v51 = a1[2];
			*(_QWORD*)v51 = *(_QWORD*)v50;
			*(_DWORD*)(v51 + 8) = v50[2];
			v52 = a1[2] + 16i64;
			a1[2] = v52;
			sub_14005EA50((__int64)a1, (__int64*)(v52 - 48), (int*)(v52 - 32), (unsigned int*)(v52 - 16));
			v53 = a1[4];
			v54 = a1[2] - 48i64;
			a1[2] = v54;
			v55 = *(_QWORD*)(v53 + 160);
			if (v15 >= *(_DWORD*)(v55 + 56))
			{
				if ((double)v17 == 0.0)
				{
					v56 = *(_DWORD**)(v55 + 32);
				}
				else
				{
					v64 = (double)v17;
					v56 = (_DWORD*)(*(_QWORD*)(v55 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v64) + HIDWORD(v64)) % (((1i64 << *(_BYTE*)(v55 + 11)) - 1) | 1)));
				}
				while (v56[6] != 3 || (double)v17 != *((double*)v56 + 2))
				{
					v56 = (_DWORD*)*((_QWORD*)v56 + 4);
					if (!v56)
					{
						v56 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v56 = (_DWORD*)(*(_QWORD*)(v55 + 24) + 16i64 * (v17 - 1));
			}
			*(_QWORD*)v54 = *(_QWORD*)v56;
			*(_DWORD*)(v54 + 8) = v56[2];
			a1[2] += 16i64;
			sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 32i64;
			sub_1400579E0((__int64)a1, v57, v17);
			v7 = (_QWORD*)*v7;
			v5 = v66;
		} while (v7 != *(_QWORD**)(v59 + 1224));
	}
	return 1i64;
}
// 140115D15: variable 'v57' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A1C2D8: using guessed type wchar_t aImin[5];
// 140A1C2E8: using guessed type wchar_t aIlim[5];
// 140A1C2F8: using guessed type wchar_t aData[5];

