//----- (00000001406042B0) ----------------------------------------------------
__int64 __fastcall sub_1406042B0(__int64 a1, __int64 a2)
{
	__int64 v2; // r15
	__int64 v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // rbx
	__int64 v6; // rax
	unsigned int v7; // r12d
	unsigned int v8; // ebx
	__int64 v9; // r14
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // r13
	int v13; // esi
	unsigned int v14; // ebx
	__int64 v15; // r9
	_DWORD* v16; // rdx
	__int64 v17; // rcx
	unsigned __int16* v18; // rdi
	__int64 v19; // r10
	int v20; // r12d
	__int64 v21; // r9
	_DWORD* v22; // rcx
	unsigned __int64* v23; // r15
	unsigned __int64 v24; // rsi
	__int64 v25; // rbx
	__int64 v26; // rax
	__int64 v27; // rcx
	__int64 v28; // rax
	__int64* v29; // rax
	__int64 v30; // rax
	__int64 v31; // r10
	int v32; // r12d
	__int64 v33; // r9
	_DWORD* v34; // rcx
	unsigned __int64* v35; // r15
	unsigned __int64 v36; // rsi
	__int64 v37; // rbx
	__int64 v38; // rax
	__int64 v39; // rcx
	__int64 v40; // rax
	__int64* v41; // rax
	unsigned int v42; // ebx
	__int64 v43; // rax
	__int64 v44; // rcx
	int v45; // edx
	_QWORD* v46; // rax
	__int64 v47; // rdx
	unsigned __int16* v48; // r10
	int* v49; // rbx
	FILETIME v50; // rcx
	signed int LastError; // eax
	bool v52; // sf
	_QWORD* v53; // rax
	__int64 v54; // rdx
	unsigned __int16* v55; // r9
	float v56; // xmm6_4
	__int64 v57; // r9
	_DWORD* v58; // rdx
	__int64 v59; // rcx
	unsigned __int64* v60; // r12
	unsigned __int64 v61; // r15
	__int64 v62; // rsi
	__int64 v63; // rax
	__int64 v64; // rcx
	__int64 v65; // rax
	__int64* v66; // rax
	__int64 v67; // rdx
	__int64 v68; // rdx
	double v70; // [rsp+28h] [rbp-89h]
	int v71; // [rsp+30h] [rbp-81h]
	int* v72; // [rsp+38h] [rbp-79h] BYREF
	unsigned int v73; // [rsp+40h] [rbp-71h]
	__int64 v74; // [rsp+48h] [rbp-69h]
	unsigned __int16* v75; // [rsp+50h] [rbp-61h] BYREF
	__int64 v76; // [rsp+58h] [rbp-59h] BYREF
	FILETIME FileTime; // [rsp+60h] [rbp-51h] BYREF
	struct _FILETIME LocalFileTime; // [rsp+68h] [rbp-49h] BYREF
	__int64(__fastcall * *v79)(); // [rsp+70h] [rbp-41h] BYREF
	unsigned int v80; // [rsp+78h] [rbp-39h]
	__int64 v81; // [rsp+80h] [rbp-31h]
	int v82; // [rsp+88h] [rbp-29h]
	__int64 v83; // [rsp+90h] [rbp-21h] BYREF
	__int64 v84; // [rsp+98h] [rbp-19h]
	struct _SYSTEMTIME SystemTime; // [rsp+B0h] [rbp-1h] BYREF

	v2 = a2;
	v3 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
	v79 = off_140B569F0;
	v74 = a2;
	v4 = *(_QWORD*)(v3 + 32);
	v81 = v3;
	v82 = 1;
	if (*(_QWORD*)(v4 + 120) >= *(_QWORD*)(v4 + 112))
		sub_14005E2C0(v3);
	v5 = *(_QWORD*)(v3 + 16);
	v6 = sub_14005C1B0(v3, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	*(_QWORD*)(v3 + 16) += 16i64;
	v7 = 0;
	v8 = sub_1400578C0(v3);
	v80 = v8;
	v73 = 0;
	if (*(_DWORD*)v2)
	{
		while (1)
		{
			v9 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
			if (*(_QWORD*)(*(_QWORD*)(v9 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v9 + 32) + 112i64))
				sub_14005E2C0(*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64));
			v10 = *(_QWORD*)(v9 + 16);
			v11 = sub_14005C1B0(v9, 0, 0);
			*(_DWORD*)(v10 + 8) = 5;
			*(_QWORD*)v10 = v11;
			*(_QWORD*)(v9 + 16) += 16i64;
			v12 = 32i64 * v7;
			v13 = sub_1400578C0(v9);
			v71 = v13;
			sub_14018D540(&v75, (__int64)L"%I64u", *(_QWORD*)(*(_QWORD*)(v2 + 8) + v12));
			sub_14018D540(&v76, (__int64)L"%u", *(unsigned int*)(*(_QWORD*)(v2 + 8) + v12 + 28));
			v14 = v13 - 1;
			v15 = *(_QWORD*)(*(_QWORD*)(v9 + 32) + 160i64);
			LODWORD(v72) = v13 - 1;
			if ((unsigned int)(v13 - 1) >= *(_DWORD*)(v15 + 56))
			{
				v70 = (double)v13;
				v16 = (double)v13 == 0.0
					? *(_DWORD**)(v15 + 32)
					: (_DWORD*)(*(_QWORD*)(v15 + 32)
						+ 40 * ((unsigned int)(LODWORD(v70) + HIDWORD(v70)) % (((1i64 << *(_BYTE*)(v15 + 11)) - 1) | 1)));
				while (v16[6] != 3 || (double)v13 != *((double*)v16 + 2))
				{
					v16 = (_DWORD*)*((_QWORD*)v16 + 4);
					if (!v16)
					{
						v16 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v16 = (_DWORD*)(*(_QWORD*)(v15 + 24) + 16i64 * (v13 - 1));
			}
			v17 = *(_QWORD*)(v9 + 16);
			v18 = v75;
			*(_QWORD*)v17 = *(_QWORD*)v16;
			*(_DWORD*)(v17 + 8) = v16[2];
			*(_QWORD*)(v9 + 16) += 16i64;
			sub_1400F0870(v9, (__int64)v16, L"strSavedInstanceId", v18);
			v19 = *(_QWORD*)(v9 + 16) - 16i64;
			*(_QWORD*)(v9 + 16) = v19;
			v20 = *(_DWORD*)(*(_QWORD*)(v2 + 8) + v12 + 8);
			v21 = *(_QWORD*)(*(_QWORD*)(v9 + 32) + 160i64);
			if (v14 >= *(_DWORD*)(v21 + 56))
			{
				v70 = (double)v13;
				v22 = (double)v13 == 0.0
					? *(_DWORD**)(v21 + 32)
					: (_DWORD*)(*(_QWORD*)(v21 + 32)
						+ 40 * ((unsigned int)(LODWORD(v70) + HIDWORD(v70)) % (((1i64 << *(_BYTE*)(v21 + 11)) - 1) | 1)));
				while (v22[6] != 3 || (double)v13 != *((double*)v22 + 2))
				{
					v22 = (_DWORD*)*((_QWORD*)v22 + 4);
					if (!v22)
					{
						v22 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v22 = (_DWORD*)(*(_QWORD*)(v21 + 24) + 16i64 * (v13 - 1));
			}
			*(_QWORD*)v19 = *(_QWORD*)v22;
			*(_DWORD*)(v19 + 8) = v22[2];
			*(_QWORD*)(v9 + 16) += 16i64;
			v23 = (unsigned __int64*)sub_14018F0E0(&v83, L"nWorldId")[1];
			if (v23)
			{
				v24 = -1i64;
				do
					++v24;
				while (*((_BYTE*)v23 + v24));
				if (*(_QWORD*)(*(_QWORD*)(v9 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v9 + 32) + 112i64))
					sub_14005E2C0(v9);
				v25 = *(_QWORD*)(v9 + 16);
				v26 = sub_140062650(v9, v23, v24);
				v13 = v71;
				*(_DWORD*)(v25 + 8) = 4;
				*(_QWORD*)v25 = v26;
				v14 = (unsigned int)v72;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v9 + 16) + 8i64) = 0;
			}
			v27 = v84;
			*(_QWORD*)(v9 + 16) += 16i64;
			if (v27)
				sub_14018B900(v27, 0);
			v28 = *(_QWORD*)(v9 + 16);
			*(_DWORD*)(v28 + 8) = 3;
			*(double*)v28 = (double)v20;
			*(_QWORD*)(v9 + 16) += 16i64;
			v29 = (__int64*)sub_1400580E0(v9, -3);
			sub_14005EA50(v9, v29, (int*)(*(_QWORD*)(v9 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v9 + 16) - 16i64));
			v30 = v74;
			v31 = *(_QWORD*)(v9 + 16) - 48i64;
			*(_QWORD*)(v9 + 16) = v31;
			v32 = *(_DWORD*)(*(_QWORD*)(v30 + 8) + v12 + 28);
			v33 = *(_QWORD*)(*(_QWORD*)(v9 + 32) + 160i64);
			if (v14 >= *(_DWORD*)(v33 + 56))
			{
				v70 = (double)v13;
				v34 = (double)v13 == 0.0
					? *(_DWORD**)(v33 + 32)
					: (_DWORD*)(*(_QWORD*)(v33 + 32)
						+ 40 * ((unsigned int)(LODWORD(v70) + HIDWORD(v70)) % (((1i64 << *(_BYTE*)(v33 + 11)) - 1) | 1)));
				while (v34[6] != 3 || (double)v13 != *((double*)v34 + 2))
				{
					v34 = (_DWORD*)*((_QWORD*)v34 + 4);
					if (!v34)
					{
						v34 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v34 = (_DWORD*)(*(_QWORD*)(v33 + 24) + 16i64 * (v13 - 1));
			}
			*(_QWORD*)v31 = *(_QWORD*)v34;
			*(_DWORD*)(v31 + 8) = v34[2];
			*(_QWORD*)(v9 + 16) += 16i64;
			v35 = (unsigned __int64*)sub_14018F0E0(&v83, L"nPrimeLevel")[1];
			if (v35)
			{
				v36 = -1i64;
				do
					++v36;
				while (*((_BYTE*)v35 + v36));
				if (*(_QWORD*)(*(_QWORD*)(v9 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v9 + 32) + 112i64))
					sub_14005E2C0(v9);
				v37 = *(_QWORD*)(v9 + 16);
				v38 = sub_140062650(v9, v35, v36);
				v13 = v71;
				*(_DWORD*)(v37 + 8) = 4;
				*(_QWORD*)v37 = v38;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v9 + 16) + 8i64) = 0;
			}
			v39 = v84;
			*(_QWORD*)(v9 + 16) += 16i64;
			if (v39)
				sub_14018B900(v39, 0);
			v40 = *(_QWORD*)(v9 + 16);
			*(_DWORD*)(v40 + 8) = 3;
			*(double*)v40 = (double)v32;
			*(_QWORD*)(v9 + 16) += 16i64;
			v41 = (__int64*)sub_1400580E0(v9, -3);
			sub_14005EA50(v9, v41, (int*)(*(_QWORD*)(v9 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v9 + 16) - 16i64));
			*(_QWORD*)(v9 + 16) -= 48i64;
			v2 = v74;
			v42 = *(_DWORD*)(*(_QWORD*)(v74 + 8) + v12 + 8);
			if (qword_140C63840)
				break;
			if (!dword_140C64698 && (int)sub_14024AA60() >= 0)
			{
				v43 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C08 + 24i64))(qword_140C63C08, v42);
				goto LABEL_56;
			}
		LABEL_60:
			v49 = 0i64;
			v50 = *(FILETIME*)(*(_QWORD*)(v2 + 8) + v12 + 16);
			v72 = 0i64;
			FileTime = v50;
			if (FileTimeToLocalFileTime(&FileTime, &LocalFileTime) && FileTimeToSystemTime(&LocalFileTime, &SystemTime))
				goto LABEL_65;
			LastError = GetLastError();
			v52 = LastError < 0;
			if (LastError > 0)
				v52 = 1;
			if (!v52)
			{
			LABEL_65:
				if (sub_14034BFC0(&SystemTime, &v72) < 0)
				{
					v49 = v72;
				}
				else
				{
					v53 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v9 + 32) + 160i64), v13);
					v54 = *(_QWORD*)(v9 + 16);
					v49 = v72;
					v55 = (unsigned __int16*)v72;
					*(_QWORD*)v54 = *v53;
					*(_DWORD*)(v54 + 8) = *((_DWORD*)v53 + 2);
					*(_QWORD*)(v9 + 16) += 16i64;
					sub_1400F0870(v9, v54, L"strDateExpireUTC", v55);
					*(_QWORD*)(v9 + 16) -= 16i64;
				}
			}
			v56 = *(float*)(*(_QWORD*)(v2 + 8) + v12 + 24);
			v57 = *(_QWORD*)(*(_QWORD*)(v9 + 32) + 160i64);
			if ((unsigned int)(v13 - 1) >= *(_DWORD*)(v57 + 56))
			{
				v70 = (double)v13;
				if ((double)v13 == 0.0)
					v58 = *(_DWORD**)(v57 + 32);
				else
					v58 = (_DWORD*)(*(_QWORD*)(v57 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v70) + HIDWORD(v70)) % (((1i64 << *(_BYTE*)(v57 + 11)) - 1) | 1)));
				while (v58[6] != 3 || (double)v13 != *((double*)v58 + 2))
				{
					v58 = (_DWORD*)*((_QWORD*)v58 + 4);
					if (!v58)
					{
						v58 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v58 = (_DWORD*)(*(_QWORD*)(v57 + 24) + 16i64 * (v13 - 1));
			}
			v59 = *(_QWORD*)(v9 + 16);
			*(_QWORD*)v59 = *(_QWORD*)v58;
			*(_DWORD*)(v59 + 8) = v58[2];
			*(_QWORD*)(v9 + 16) += 16i64;
			v60 = (unsigned __int64*)sub_14018F0E0(&v83, L"fDaysFromNow")[1];
			if (v60)
			{
				v61 = -1i64;
				do
					++v61;
				while (*((_BYTE*)v60 + v61));
				if (*(_QWORD*)(*(_QWORD*)(v9 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v9 + 32) + 112i64))
					sub_14005E2C0(v9);
				v62 = *(_QWORD*)(v9 + 16);
				v63 = sub_140062650(v9, v60, v61);
				v2 = v74;
				*(_DWORD*)(v62 + 8) = 4;
				*(_QWORD*)v62 = v63;
				v13 = v71;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v9 + 16) + 8i64) = 0;
			}
			v64 = v84;
			*(_QWORD*)(v9 + 16) += 16i64;
			if (v64)
				sub_14018B900(v64, 0);
			v65 = *(_QWORD*)(v9 + 16);
			*(_DWORD*)(v65 + 8) = 3;
			*(double*)v65 = v56;
			*(_QWORD*)(v9 + 16) += 16i64;
			v66 = (__int64*)sub_1400580E0(v9, -3);
			sub_14005EA50(v9, v66, (int*)(*(_QWORD*)(v9 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v9 + 16) - 16i64));
			*(_QWORD*)(v9 + 16) -= 48i64;
			sub_1400FB1D0((__int64)&v79);
			if (v49)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v49 - 2) + 8i64))(v49 - 4);
			if (v76)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v76 - 16) + 8i64))(v76 - 16);
			if (v18)
				(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v18 - 2) + 8i64))(v18 - 8);
			sub_1400579E0(v9, v67, v13);
			v7 = v73 + 1;
			v73 = v7;
			if (v7 >= *(_DWORD*)v2)
			{
				v3 = v81;
				v8 = v80;
				goto LABEL_94;
			}
		}
		v43 = qword_140C63840(off_140A6E180, v42, qword_140C63858);
	LABEL_56:
		if (v43)
		{
			v45 = *(_DWORD*)(v43 + 60);
			if (v45)
			{
				if (sub_14034BDD0(v44, v45))
				{
					v46 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v9 + 32) + 160i64), v13);
					v47 = *(_QWORD*)(v9 + 16);
					*(_QWORD*)v47 = *v46;
					*(_DWORD*)(v47 + 8) = *((_DWORD*)v46 + 2);
					*(_QWORD*)(v9 + 16) += 16i64;
					sub_1400F0870(v9, v47, L"strWorldName", v48);
					*(_QWORD*)(v9 + 16) -= 16i64;
				}
			}
		}
		goto LABEL_60;
	}
LABEL_94:
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "RaidInfoResponse", byte_1409EA36C, v8, v70);
	if (v3)
		sub_1400579E0(v3, v68, v8);
	return 0i64;
}
// 14060481B: variable 'v44' is possibly undefined
// 14060485C: variable 'v48' is possibly undefined
// 140604AC2: variable 'v67' is possibly undefined
// 140604B29: variable 'v70' is possibly undefined
// 140604B49: variable 'v68' is possibly undefined
// 1409EA36C: using guessed type _BYTE byte_1409EA36C[72];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6E180: using guessed type wchar_t *off_140A6E180[2];
// 140B242D4: using guessed type wchar_t aU_17[3];
// 140B24AF0: using guessed type wchar_t aFdaysfromnow[13];
// 140B24B28: using guessed type wchar_t aStrworldname[13];
// 140B24B48: using guessed type wchar_t aStrdateexpireu[17];
// 140B24B70: using guessed type wchar_t aNworldid_0[9];
// 140B24B88: using guessed type wchar_t aNprimelevel_0[12];
// 140B24BA0: using guessed type wchar_t aStrsavedinstan[19];
// 140B24BD8: using guessed type wchar_t aI64u_3[6];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C08: using guessed type __int64 qword_140C63C08;
// 140C64698: using guessed type int dword_140C64698;
// 140C65898: using guessed type __int64 qword_140C65898;

