//----- (00000001403AAFE0) ----------------------------------------------------
void __fastcall sub_1403AAFE0(__int64 a1, __int64 a2)
{
	int v2; // r15d
	__int64 v4; // rsi
	_QWORD* v5; // rax
	__int64 v6; // r10
	__int64 v7; // rdx
	float v8; // xmm6_4
	_QWORD* v9; // rax
	__int64 v10; // r10
	__int64 v11; // rdx
	__int64 v12; // rbx
	unsigned __int64* v13; // rdx
	unsigned __int64 v14; // r8
	_QWORD* v15; // rax
	__int64 v16; // r10
	__int64 v17; // rdx
	int v18; // r11d
	_QWORD* v19; // rax
	__int64 v20; // r10
	__int64 v21; // rdx
	__int64 v22; // rax
	__int64* v23; // rax
	__int64 v24; // rdi
	__int64 v25; // rcx
	__int64 v26; // rbx
	__int64 v27; // rax
	int v28; // ebx
	__int64 v29; // rdi
	__int64 v30; // rbx
	__int64 v31; // rax
	int v32; // eax
	__int64 v33; // rsi
	__int64 v34; // rbx
	unsigned int v35; // r15d
	int v36; // r13d
	int v37; // r12d
	__int64 v38; // r9
	_DWORD* v39; // rdx
	__int64 v40; // rcx
	unsigned __int64* v41; // r14
	unsigned __int64 v42; // rsi
	__int64 v43; // rbx
	__int64 v44; // rax
	__int64 v45; // rcx
	__int64 v46; // rax
	__int64* v47; // rax
	__int64 v48; // r10
	int v49; // r12d
	__int64 v50; // r9
	_DWORD* v51; // rcx
	unsigned __int64* v52; // r14
	unsigned __int64 v53; // rsi
	__int64 v54; // rbx
	__int64 v55; // rax
	__int64 v56; // rax
	__int64* v57; // rax
	float v58; // xmm6_4
	_QWORD* v59; // rax
	__int64 v60; // r11
	unsigned __int64* v61; // rdx
	unsigned __int64 v62; // r8
	_QWORD* v63; // rax
	__int64 v64; // r11
	__int64 v65; // rdx
	int v66; // r10d
	_QWORD* v67; // rax
	__int64 v68; // r11
	__int64 v69; // rax
	__int64* v70; // rax
	__int64 v71; // rdx
	bool v72; // cf
	__int64 v73; // rdx
	double v74; // [rsp+28h] [rbp-59h]
	double v75; // [rsp+28h] [rbp-59h]
	__int64 v76; // [rsp+30h] [rbp-51h]
	__int64(__fastcall * *v77)(); // [rsp+38h] [rbp-49h] BYREF
	__int64 v78; // [rsp+40h] [rbp-41h]
	__int64 v79; // [rsp+48h] [rbp-39h]
	int v80; // [rsp+50h] [rbp-31h]
	__int64 v81; // [rsp+58h] [rbp-29h] BYREF
	__int64 v82; // [rsp+60h] [rbp-21h]
	int v85; // [rsp+F8h] [rbp+77h]
	__int64 v86; // [rsp+100h] [rbp+7Fh]

	v2 = *(_DWORD*)(a1 + 8);
	v4 = a2;
	v85 = v2;
	v5 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v7 = *(_QWORD*)(v6 + 16);
	*(_QWORD*)v7 = *v5;
	*(_DWORD*)(v7 + 8) = *((_DWORD*)v5 + 2);
	*(_QWORD*)(v6 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(v4 + 16), v7, L"eValueType", v2);
	*(_QWORD*)(*(_QWORD*)(v4 + 16) + 16i64) -= 16i64;
	if (!v2)
	{
		v8 = *(float*)(a1 + 12);
		v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 16) + 32i64) + 160i64), *(_DWORD*)(v4 + 8));
		v21 = *(_QWORD*)(v20 + 16);
		*(_QWORD*)v21 = *v19;
		*(_DWORD*)(v21 + 8) = *((_DWORD*)v19 + 2);
		*(_QWORD*)(v20 + 16) += 16i64;
		v12 = *(_QWORD*)(v4 + 16);
		v13 = (unsigned __int64*)sub_14018F0E0(&v77, L"nValue")[1];
		if (!v13)
		{
			*(_DWORD*)(*(_QWORD*)(v12 + 16) + 8i64) = 0;
			*(_QWORD*)(v12 + 16) += 16i64;
			goto LABEL_15;
		}
		v14 = -1i64;
		do
			++v14;
		while (*((_BYTE*)v13 + v14));
	LABEL_14:
		sub_140058710(v12, v13, v14);
		goto LABEL_15;
	}
	if (v2 != 1)
	{
		if (v2 != 2)
			goto LABEL_19;
		v8 = *(float*)(a1 + 12);
		v9 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 16) + 32i64) + 160i64), *(_DWORD*)(v4 + 8));
		v11 = *(_QWORD*)(v10 + 16);
		*(_QWORD*)v11 = *v9;
		*(_DWORD*)(v11 + 8) = *((_DWORD*)v9 + 2);
		*(_QWORD*)(v10 + 16) += 16i64;
		v12 = *(_QWORD*)(v4 + 16);
		v13 = (unsigned __int64*)sub_14018F0E0(&v77, L"nValue")[1];
		if (!v13)
		{
			*(_DWORD*)(*(_QWORD*)(v12 + 16) + 8i64) = 0;
			*(_QWORD*)(v12 + 16) += 16i64;
		LABEL_15:
			if (v78)
				sub_14018B900(v78, 0);
			v22 = *(_QWORD*)(v12 + 16);
			*(double*)v22 = v8;
			*(_DWORD*)(v22 + 8) = 3;
			*(_QWORD*)(v12 + 16) += 16i64;
			v23 = (__int64*)sub_1400580E0(v12, -3);
			sub_14005EA50(v12, v23, (int*)(*(_QWORD*)(v12 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v12 + 16) - 16i64));
			*(_QWORD*)(v12 + 16) -= 32i64;
			goto LABEL_18;
		}
		v14 = -1i64;
		do
			++v14;
		while (*((_BYTE*)v13 + v14));
		goto LABEL_14;
	}
	v15 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 16) + 32i64) + 160i64), *(_DWORD*)(v4 + 8));
	v17 = *(_QWORD*)(v16 + 16);
	*(_QWORD*)v17 = *v15;
	*(_DWORD*)(v17 + 8) = *((_DWORD*)v15 + 2);
	*(_QWORD*)(v16 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(v4 + 16), v17, L"nValue", v18);
LABEL_18:
	*(_QWORD*)(*(_QWORD*)(v4 + 16) + 16i64) -= 16i64;
LABEL_19:
	v24 = *(_QWORD*)(v4 + 16);
	v80 = 1;
	v25 = *(_QWORD*)(v24 + 32);
	v77 = off_140B569F0;
	v79 = v24;
	if (*(_QWORD*)(v25 + 120) >= *(_QWORD*)(v25 + 112))
		sub_14005E2C0(v24);
	v26 = *(_QWORD*)(v24 + 16);
	v27 = sub_14005C1B0(v24, 0, 0);
	*(_DWORD*)(v26 + 8) = 5;
	*(_QWORD*)v26 = v27;
	*(_QWORD*)(v24 + 16) += 16i64;
	v28 = sub_1400578C0(v24);
	LODWORD(v78) = v28;
	v76 = 0i64;
	if (*(_QWORD*)(a1 + 24))
	{
		v86 = 0i64;
		while (1)
		{
			v29 = *(_QWORD*)(v4 + 16);
			if (*(_QWORD*)(*(_QWORD*)(v29 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v29 + 32) + 112i64))
				sub_14005E2C0(*(_QWORD*)(v4 + 16));
			v30 = *(_QWORD*)(v29 + 16);
			v31 = sub_14005C1B0(v29, 0, 0);
			*(_DWORD*)(v30 + 8) = 5;
			*(_QWORD*)v30 = v31;
			*(_QWORD*)(v29 + 16) += 16i64;
			v32 = sub_1400578C0(v29);
			v33 = a1;
			v34 = v86;
			v35 = v32 - 1;
			v36 = v32;
			v37 = *(_DWORD*)(v86 + *(_QWORD*)(a1 + 16));
			v38 = *(_QWORD*)(*(_QWORD*)(v29 + 32) + 160i64);
			if ((unsigned int)(v32 - 1) >= *(_DWORD*)(v38 + 56))
			{
				if ((double)v32 == 0.0)
				{
					v39 = *(_DWORD**)(v38 + 32);
				}
				else
				{
					v74 = (double)v32;
					v39 = (_DWORD*)(*(_QWORD*)(v38 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v74) + HIDWORD(v74)) % (((1i64 << *(_BYTE*)(v38 + 11)) - 1) | 1)));
				}
				while (v39[6] != 3 || (double)v32 != *((double*)v39 + 2))
				{
					v39 = (_DWORD*)*((_QWORD*)v39 + 4);
					if (!v39)
					{
						v39 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v39 = (_DWORD*)(*(_QWORD*)(v38 + 24) + 16i64 * (v32 - 1));
			}
			v40 = *(_QWORD*)(v29 + 16);
			*(_QWORD*)v40 = *(_QWORD*)v39;
			*(_DWORD*)(v40 + 8) = v39[2];
			*(_QWORD*)(v29 + 16) += 16i64;
			v41 = (unsigned __int64*)sub_14018F0E0(&v81, L"eOwnerType")[1];
			if (v41)
			{
				v42 = -1i64;
				do
					++v42;
				while (*((_BYTE*)v41 + v42));
				if (*(_QWORD*)(*(_QWORD*)(v29 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v29 + 32) + 112i64))
					sub_14005E2C0(v29);
				v43 = *(_QWORD*)(v29 + 16);
				v44 = sub_140062650(v29, v41, v42);
				v33 = a1;
				*(_DWORD*)(v43 + 8) = 4;
				*(_QWORD*)v43 = v44;
				v34 = v86;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v29 + 16) + 8i64) = 0;
			}
			v45 = v82;
			*(_QWORD*)(v29 + 16) += 16i64;
			if (v45)
				sub_14018B900(v45, 0);
			v46 = *(_QWORD*)(v29 + 16);
			*(_DWORD*)(v46 + 8) = 3;
			*(double*)v46 = (double)v37;
			*(_QWORD*)(v29 + 16) += 16i64;
			v47 = (__int64*)sub_1400580E0(v29, -3);
			sub_14005EA50(v29, v47, (int*)(*(_QWORD*)(v29 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v29 + 16) - 16i64));
			v48 = *(_QWORD*)(v29 + 16) - 48i64;
			*(_QWORD*)(v29 + 16) = v48;
			v49 = *(_DWORD*)(v34 + *(_QWORD*)(v33 + 16) + 4);
			v50 = *(_QWORD*)(*(_QWORD*)(v29 + 32) + 160i64);
			if (v35 >= *(_DWORD*)(v50 + 56))
			{
				if ((double)v36 == 0.0)
				{
					v51 = *(_DWORD**)(v50 + 32);
				}
				else
				{
					v75 = (double)v36;
					v51 = (_DWORD*)(*(_QWORD*)(v50 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v75) + HIDWORD(v75)) % (((1i64 << *(_BYTE*)(v50 + 11)) - 1) | 1)));
				}
				while (v51[6] != 3 || (double)v36 != *((double*)v51 + 2))
				{
					v51 = (_DWORD*)*((_QWORD*)v51 + 4);
					if (!v51)
					{
						v51 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v51 = (_DWORD*)(*(_QWORD*)(v50 + 24) + 16i64 * (v36 - 1));
			}
			*(_QWORD*)v48 = *(_QWORD*)v51;
			*(_DWORD*)(v48 + 8) = v51[2];
			*(_QWORD*)(v29 + 16) += 16i64;
			v52 = (unsigned __int64*)sub_14018F0E0(&v81, L"nOwnerId")[1];
			if (v52)
			{
				v53 = -1i64;
				do
					++v53;
				while (*((_BYTE*)v52 + v53));
				if (*(_QWORD*)(*(_QWORD*)(v29 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v29 + 32) + 112i64))
					sub_14005E2C0(v29);
				v54 = *(_QWORD*)(v29 + 16);
				v55 = sub_140062650(v29, v52, v53);
				v33 = a1;
				*(_DWORD*)(v54 + 8) = 4;
				*(_QWORD*)v54 = v55;
				*(_QWORD*)(v29 + 16) += 16i64;
				v34 = v86;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v29 + 16) + 8i64) = 0;
				*(_QWORD*)(v29 + 16) += 16i64;
			}
			if (v82)
				sub_14018B900(v82, 0);
			v56 = *(_QWORD*)(v29 + 16);
			*(_DWORD*)(v56 + 8) = 3;
			*(double*)v56 = (double)v49;
			*(_QWORD*)(v29 + 16) += 16i64;
			v57 = (__int64*)sub_1400580E0(v29, -3);
			sub_14005EA50(v29, v57, (int*)(*(_QWORD*)(v29 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v29 + 16) - 16i64));
			*(_QWORD*)(v29 + 16) -= 48i64;
			if (!v85)
				break;
			if (v85 == 1)
			{
				v63 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v29 + 32) + 160i64), v36);
				*(_QWORD*)v64 = *v63;
				*(_DWORD*)(v64 + 8) = *((_DWORD*)v63 + 2);
				*(_QWORD*)(v29 + 16) += 16i64;
				sub_1400F06F0(v29, v65, L"nValue", v66);
				*(_QWORD*)(v29 + 16) -= 16i64;
			}
			else if (v85 == 2)
			{
				v58 = *(float*)(v34 + *(_QWORD*)(v33 + 16) + 12);
				v59 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v29 + 32) + 160i64), v36);
				*(_QWORD*)v60 = *v59;
				*(_DWORD*)(v60 + 8) = *((_DWORD*)v59 + 2);
				*(_QWORD*)(v29 + 16) += 16i64;
				v61 = (unsigned __int64*)sub_14018F0E0(&v81, L"nValue")[1];
				if (!v61)
				{
					*(_DWORD*)(*(_QWORD*)(v29 + 16) + 8i64) = 0;
					*(_QWORD*)(v29 + 16) += 16i64;
				LABEL_75:
					if (v82)
						sub_14018B900(v82, 0);
					v69 = *(_QWORD*)(v29 + 16);
					*(double*)v69 = v58;
					*(_DWORD*)(v69 + 8) = 3;
					*(_QWORD*)(v29 + 16) += 16i64;
					v70 = (__int64*)sub_1400580E0(v29, -3);
					sub_14005EA50(
						v29,
						v70,
						(int*)(*(_QWORD*)(v29 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(v29 + 16) - 16i64));
					*(_QWORD*)(v29 + 16) -= 48i64;
					goto LABEL_78;
				}
				v62 = -1i64;
				do
					++v62;
				while (*((_BYTE*)v61 + v62));
				goto LABEL_74;
			}
		LABEL_78:
			sub_1400FB1D0((__int64)&v77);
			sub_1400579E0(v29, v71, v36);
			v86 = v34 + 16;
			v72 = (unsigned __int64)(v76 + 1) < *(_QWORD*)(v33 + 24);
			v4 = a2;
			++v76;
			if (!v72)
			{
				v24 = v79;
				v28 = v78;
				goto LABEL_80;
			}
		}
		v58 = *(float*)(v34 + *(_QWORD*)(v33 + 16) + 12);
		v67 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v29 + 32) + 160i64), v36);
		*(_QWORD*)v68 = *v67;
		*(_DWORD*)(v68 + 8) = *((_DWORD*)v67 + 2);
		*(_QWORD*)(v29 + 16) += 16i64;
		v61 = (unsigned __int64*)sub_14018F0E0(&v81, L"nValue")[1];
		if (!v61)
		{
			*(_DWORD*)(*(_QWORD*)(v29 + 16) + 8i64) = 0;
			*(_QWORD*)(v29 + 16) += 16i64;
			goto LABEL_75;
		}
		v62 = -1i64;
		do
			++v62;
		while (*((_BYTE*)v61 + v62));
	LABEL_74:
		sub_140058710(v29, v61, v62);
		goto LABEL_75;
	}
LABEL_80:
	sub_1400FB2A0(v4, (__int64)L"tModifiers", v28);
	if (v24)
		sub_1400579E0(v24, v73, v28);
}
// 1403AB02E: variable 'v6' is possibly undefined
// 1403AB096: variable 'v10' is possibly undefined
// 1403AB109: variable 'v16' is possibly undefined
// 1403AB12C: variable 'v18' is possibly undefined
// 1403AB153: variable 'v20' is possibly undefined
// 1403AB61C: variable 'v60' is possibly undefined
// 1403AB68B: variable 'v64' is possibly undefined
// 1403AB69D: variable 'v65' is possibly undefined
// 1403AB69D: variable 'v66' is possibly undefined
// 1403AB6D3: variable 'v68' is possibly undefined
// 1403AB788: variable 'v71' is possibly undefined
// 1403AB807: variable 'v73' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140AF5638: using guessed type wchar_t aEownertype[11];
// 140AF5650: using guessed type wchar_t aNvalue[7];
// 140AF5660: using guessed type wchar_t aNvalue_3[7];
// 140AF5670: using guessed type wchar_t aNownerid[9];
// 140AF5688: using guessed type wchar_t aNvalue_2[7];
// 140AF5698: using guessed type wchar_t aNvalue_4[7];
// 140AF56C0: using guessed type wchar_t aTmodifiers[11];
// 140AF56D8: using guessed type wchar_t aEvaluetype[11];
// 140AF5918: using guessed type wchar_t aNvalue_1[7];
// 140AF5928: using guessed type wchar_t aNvalue_0[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

