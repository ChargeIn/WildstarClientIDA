//----- (00000001404F04F0) ----------------------------------------------------
__int64 __fastcall sub_1404F04F0(__int64 a1)
{
	__int64 v1; // rsi
	__int64 v2; // rdi
	__int64 v3; // rcx
	unsigned __int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	unsigned __int64 v7; // r14
	int v8; // r9d
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // eax
	unsigned int v12; // ebx
	__int64 v13; // r12
	int v14; // r13d
	int v15; // r15d
	__int64 v16; // r9
	_DWORD* v17; // rdx
	__int64 v18; // rcx
	unsigned __int64* v19; // r14
	unsigned __int64 v20; // rsi
	__int64 v21; // rbx
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64 v24; // rax
	__int64* v25; // rax
	__int64 v26; // rdx
	__int64 v27; // r10
	unsigned __int16* v28; // r11
	__int64 v29; // r9
	_DWORD* v30; // rcx
	__int64 v31; // rax
	__int64 v32; // r10
	int v33; // r15d
	__int64 v34; // r9
	_DWORD* v35; // rcx
	unsigned __int64* v36; // r14
	unsigned __int64 v37; // rsi
	__int64 v38; // rbx
	__int64 v39; // rax
	__int64 v40; // rcx
	__int64 v41; // rax
	__int64* v42; // rax
	__int64 v43; // r10
	double v44; // xmm6_8
	__int64 v45; // r9
	_DWORD* v46; // rcx
	unsigned __int64* v47; // r14
	unsigned __int64 v48; // rsi
	__int64 v49; // rbx
	__int64 v50; // rax
	__int64 v51; // rcx
	__int64 v52; // rax
	__int64* v53; // rax
	__int64 v54; // r10
	__int64 v55; // r9
	double v56; // xmm6_8
	_DWORD* v57; // rcx
	unsigned __int64* v58; // r14
	unsigned __int64 v59; // rsi
	__int64 v60; // rbx
	__int64 v61; // rax
	__int64 v62; // rcx
	__int64 v63; // rax
	__int64* v64; // rax
	__int64 v65; // rdx
	__int64 v66; // r10
	_DWORD* v67; // rcx
	__int64 v68; // r8
	__int64 v69; // rdx
	__int64(__fastcall * *v71)(); // [rsp+28h] [rbp-39h] BYREF
	int v72; // [rsp+30h] [rbp-31h]
	__int64 v73; // [rsp+38h] [rbp-29h]
	int v74; // [rsp+40h] [rbp-21h]
	__int64 v75; // [rsp+48h] [rbp-19h] BYREF
	__int64 v76; // [rsp+50h] [rbp-11h]
	__int64 v77; // [rsp+C8h] [rbp+67h]
	double v78; // [rsp+C8h] [rbp+67h]
	double v79; // [rsp+D0h] [rbp+6Fh]
	double v80; // [rsp+D0h] [rbp+6Fh]
	double v81; // [rsp+D0h] [rbp+6Fh]
	double v82; // [rsp+D0h] [rbp+6Fh]
	double v83; // [rsp+D0h] [rbp+6Fh]
	unsigned __int64 v84; // [rsp+D8h] [rbp+77h]

	v1 = qword_140C65908;
	v2 = a1;
	v73 = a1;
	v3 = *(_QWORD*)(a1 + 32);
	v71 = off_140B569F0;
	v4 = *(_QWORD*)(v3 + 112);
	v77 = qword_140C65908;
	v74 = 1;
	if (*(_QWORD*)(v3 + 120) >= v4)
		sub_14005E2C0(v2);
	v5 = *(_QWORD*)(v2 + 16);
	v6 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	*(_QWORD*)(v2 + 16) += 16i64;
	v7 = 0i64;
	v8 = sub_1400578C0(v2);
	v72 = v8;
	v84 = 0i64;
	if (*(_QWORD*)(v1 + 64))
	{
		do
		{
			if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
				sub_14005E2C0(v2);
			v9 = *(_QWORD*)(v2 + 16);
			v10 = sub_14005C1B0(v2, 0, 0);
			*(_DWORD*)(v9 + 8) = 5;
			*(_QWORD*)v9 = v10;
			*(_QWORD*)(v2 + 16) += 16i64;
			v11 = sub_1400578C0(v2);
			v12 = v11 - 1;
			v13 = 32 * v7;
			v14 = v11;
			v15 = *(_DWORD*)(32 * v7 + *(_QWORD*)(v1 + 56));
			v16 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
			if ((unsigned int)(v11 - 1) >= *(_DWORD*)(v16 + 56))
			{
				if ((double)v11 == 0.0)
				{
					v17 = *(_DWORD**)(v16 + 32);
				}
				else
				{
					v79 = (double)v11;
					v17 = (_DWORD*)(*(_QWORD*)(v16 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v79) + HIDWORD(v79)) % (((1i64 << *(_BYTE*)(v16 + 11)) - 1) | 1)));
				}
				while (v17[6] != 3 || (double)v11 != *((double*)v17 + 2))
				{
					v17 = (_DWORD*)*((_QWORD*)v17 + 4);
					if (!v17)
					{
						v17 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v17 = (_DWORD*)(*(_QWORD*)(v16 + 24) + 16i64 * (v11 - 1));
			}
			v18 = *(_QWORD*)(v2 + 16);
			*(_QWORD*)v18 = *(_QWORD*)v17;
			*(_DWORD*)(v18 + 8) = v17[2];
			*(_QWORD*)(v2 + 16) += 16i64;
			v19 = (unsigned __int64*)sub_14018F0E0(&v75, L"nPackageId")[1];
			if (v19)
			{
				v20 = -1i64;
				do
					++v20;
				while (*((_BYTE*)v19 + v20));
				if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
					sub_14005E2C0(v2);
				v21 = *(_QWORD*)(v2 + 16);
				v22 = sub_140062650(v2, v19, v20);
				v1 = v77;
				*(_DWORD*)(v21 + 8) = 4;
				*(_QWORD*)v21 = v22;
				v12 = v14 - 1;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			}
			v23 = v76;
			*(_QWORD*)(v2 + 16) += 16i64;
			if (v23)
				sub_14018B900(v23, 0);
			v24 = *(_QWORD*)(v2 + 16);
			*(_DWORD*)(v24 + 8) = 3;
			*(double*)v24 = (double)v15;
			*(_QWORD*)(v2 + 16) += 16i64;
			v25 = (__int64*)sub_1400580E0(v2, -3);
			sub_14005EA50(v2, v25, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
			v27 = *(_QWORD*)(v2 + 16) - 48i64;
			*(_QWORD*)(v2 + 16) = v27;
			v28 = *(unsigned __int16**)(v13 + *(_QWORD*)(v1 + 56) + 16);
			v29 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
			if (v12 >= *(_DWORD*)(v29 + 56))
			{
				if ((double)v14 == 0.0)
				{
					v30 = *(_DWORD**)(v29 + 32);
				}
				else
				{
					v80 = (double)v14;
					v26 = (unsigned int)(LODWORD(v80) + HIDWORD(v80)) % (((1i64 << *(_BYTE*)(v29 + 11)) - 1) | 1);
					v30 = (_DWORD*)(*(_QWORD*)(v29 + 32) + 40 * v26);
				}
				while (v30[6] != 3 || (double)v14 != *((double*)v30 + 2))
				{
					v30 = (_DWORD*)*((_QWORD*)v30 + 4);
					if (!v30)
					{
						v30 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v30 = (_DWORD*)(*(_QWORD*)(v29 + 24) + 16i64 * (v14 - 1));
			}
			*(_QWORD*)v27 = *(_QWORD*)v30;
			*(_DWORD*)(v27 + 8) = v30[2];
			*(_QWORD*)(v2 + 16) += 16i64;
			sub_1400F0870(v2, v26, L"strPackageName", v28);
			v31 = qword_140C65908;
			v32 = *(_QWORD*)(v2 + 16) - 16i64;
			*(_QWORD*)(v2 + 16) = v32;
			v33 = *(_DWORD*)(v31 + 48);
			v34 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
			if (v12 >= *(_DWORD*)(v34 + 56))
			{
				if ((double)v14 == 0.0)
				{
					v35 = *(_DWORD**)(v34 + 32);
				}
				else
				{
					v81 = (double)v14;
					v35 = (_DWORD*)(*(_QWORD*)(v34 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v81) + HIDWORD(v81)) % (((1i64 << *(_BYTE*)(v34 + 11)) - 1) | 1)));
				}
				while (v35[6] != 3 || (double)v14 != *((double*)v35 + 2))
				{
					v35 = (_DWORD*)*((_QWORD*)v35 + 4);
					if (!v35)
					{
						v35 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v35 = (_DWORD*)(*(_QWORD*)(v34 + 24) + 16i64 * (v14 - 1));
			}
			*(_QWORD*)v32 = *(_QWORD*)v35;
			*(_DWORD*)(v32 + 8) = v35[2];
			*(_QWORD*)(v2 + 16) += 16i64;
			v36 = (unsigned __int64*)sub_14018F0E0(&v75, L"eRealCurrency")[1];
			if (v36)
			{
				v37 = -1i64;
				do
					++v37;
				while (*((_BYTE*)v36 + v37));
				if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
					sub_14005E2C0(v2);
				v38 = *(_QWORD*)(v2 + 16);
				v39 = sub_140062650(v2, v36, v37);
				v1 = v77;
				*(_DWORD*)(v38 + 8) = 4;
				*(_QWORD*)v38 = v39;
				v12 = v14 - 1;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			}
			v40 = v76;
			*(_QWORD*)(v2 + 16) += 16i64;
			if (v40)
				sub_14018B900(v40, 0);
			v41 = *(_QWORD*)(v2 + 16);
			*(_DWORD*)(v41 + 8) = 3;
			*(double*)v41 = (double)v33;
			*(_QWORD*)(v2 + 16) += 16i64;
			v42 = (__int64*)sub_1400580E0(v2, -3);
			sub_14005EA50(v2, v42, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
			v43 = *(_QWORD*)(v2 + 16) - 48i64;
			*(_QWORD*)(v2 + 16) = v43;
			v44 = *(float*)(v13 + *(_QWORD*)(v1 + 56) + 24);
			v45 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
			if (v12 >= *(_DWORD*)(v45 + 56))
			{
				if ((double)v14 == 0.0)
				{
					v46 = *(_DWORD**)(v45 + 32);
				}
				else
				{
					v82 = (double)v14;
					v46 = (_DWORD*)(*(_QWORD*)(v45 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v82) + HIDWORD(v82)) % (((1i64 << *(_BYTE*)(v45 + 11)) - 1) | 1)));
				}
				while (v46[6] != 3 || (double)v14 != *((double*)v46 + 2))
				{
					v46 = (_DWORD*)*((_QWORD*)v46 + 4);
					if (!v46)
					{
						v46 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v46 = (_DWORD*)(*(_QWORD*)(v45 + 24) + 16i64 * (v14 - 1));
			}
			*(_QWORD*)v43 = *(_QWORD*)v46;
			*(_DWORD*)(v43 + 8) = v46[2];
			*(_QWORD*)(v2 + 16) += 16i64;
			v47 = (unsigned __int64*)sub_14018F0E0(&v75, L"nPrice")[1];
			if (v47)
			{
				v48 = -1i64;
				do
					++v48;
				while (*((_BYTE*)v47 + v48));
				if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
					sub_14005E2C0(v2);
				v49 = *(_QWORD*)(v2 + 16);
				v50 = sub_140062650(v2, v47, v48);
				v1 = v77;
				*(_DWORD*)(v49 + 8) = 4;
				*(_QWORD*)v49 = v50;
				v12 = v14 - 1;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			}
			v51 = v76;
			*(_QWORD*)(v2 + 16) += 16i64;
			if (v51)
				sub_14018B900(v51, 0);
			v52 = *(_QWORD*)(v2 + 16);
			*(_DWORD*)(v52 + 8) = 3;
			*(double*)v52 = v44;
			*(_QWORD*)(v2 + 16) += 16i64;
			v53 = (__int64*)sub_1400580E0(v2, -3);
			sub_14005EA50(v2, v53, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
			v54 = *(_QWORD*)(v2 + 16) - 48i64;
			*(_QWORD*)(v2 + 16) = v54;
			v55 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
			v56 = (double)*(int*)(v13 + *(_QWORD*)(v1 + 56) + 8);
			if (v12 >= *(_DWORD*)(v55 + 56))
			{
				if ((double)v14 == 0.0)
				{
					v57 = *(_DWORD**)(v55 + 32);
				}
				else
				{
					v83 = (double)v14;
					v57 = (_DWORD*)(*(_QWORD*)(v55 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v83) + HIDWORD(v83)) % (((1i64 << *(_BYTE*)(v55 + 11)) - 1) | 1)));
				}
				while (v57[6] != 3 || (double)v14 != *((double*)v57 + 2))
				{
					v57 = (_DWORD*)*((_QWORD*)v57 + 4);
					if (!v57)
					{
						v57 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v57 = (_DWORD*)(*(_QWORD*)(v55 + 24) + 16i64 * (v14 - 1));
			}
			*(_QWORD*)v54 = *(_QWORD*)v57;
			*(_DWORD*)(v54 + 8) = v57[2];
			*(_QWORD*)(v2 + 16) += 16i64;
			v58 = (unsigned __int64*)sub_14018F0E0(&v75, L"nCount")[1];
			if (v58)
			{
				v59 = -1i64;
				do
					++v59;
				while (*((_BYTE*)v58 + v59));
				if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
					sub_14005E2C0(v2);
				v60 = *(_QWORD*)(v2 + 16);
				v61 = sub_140062650(v2, v58, v59);
				v1 = v77;
				*(_DWORD*)(v60 + 8) = 4;
				*(_QWORD*)v60 = v61;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			}
			v62 = v76;
			*(_QWORD*)(v2 + 16) += 16i64;
			if (v62)
				sub_14018B900(v62, 0);
			v63 = *(_QWORD*)(v2 + 16);
			*(_DWORD*)(v63 + 8) = 3;
			*(double*)v63 = v56;
			*(_QWORD*)(v2 + 16) += 16i64;
			v64 = (__int64*)sub_1400580E0(v2, -3);
			sub_14005EA50(v2, v64, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
			*(_QWORD*)(v2 + 16) -= 48i64;
			sub_1400FB1D0((__int64)&v71);
			sub_1400579E0(v2, v65, v14);
			v7 = v84 + 1;
			v84 = v7;
		} while (v7 < *(_QWORD*)(v1 + 64));
		v2 = v73;
		v8 = v72;
	}
	v66 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
	if ((unsigned int)(v8 - 1) >= *(_DWORD*)(v66 + 56))
	{
		if ((double)v8 == 0.0)
		{
			v67 = *(_DWORD**)(v66 + 32);
		}
		else
		{
			v78 = (double)v8;
			v67 = (_DWORD*)(*(_QWORD*)(v66 + 32)
				+ 40 * ((unsigned int)(LODWORD(v78) + HIDWORD(v78)) % (((1i64 << *(_BYTE*)(v66 + 11)) - 1) | 1)));
		}
		while (v67[6] != 3 || (double)v8 != *((double*)v67 + 2))
		{
			v67 = (_DWORD*)*((_QWORD*)v67 + 4);
			if (!v67)
			{
				v67 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v67 = (_DWORD*)(*(_QWORD*)(v66 + 24) + 16i64 * (v8 - 1));
	}
	v68 = *(_QWORD*)(v2 + 16);
	*(_QWORD*)v68 = *(_QWORD*)v67;
	v69 = (unsigned int)v67[2];
	*(_DWORD*)(v68 + 8) = v69;
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_1400579E0(v2, v69, v8);
	return 1i64;
}
// 1404F0823: variable 'v26' is possibly undefined
// 1404F0C8A: variable 'v65' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B0DEA8: using guessed type wchar_t aErealcurrency_0[14];
// 140B0DEC8: using guessed type wchar_t aNprice_0[7];
// 140B0DED8: using guessed type wchar_t aNcount_19[7];
// 140B0DF20: using guessed type wchar_t aNpackageid[11];
// 140B0DF38: using guessed type wchar_t aStrpackagename[15];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65908: using guessed type __int64 qword_140C65908;

