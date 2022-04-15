//----- (00000001405F05B0) ----------------------------------------------------
__int64 __fastcall sub_1405F05B0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v5; // r14
	unsigned int i; // ebx
	unsigned __int16* v7; // rax
	int v8; // r11d
	__int64 v9; // r10
	int v10; // edx
	__int64 v11; // r9
	_DWORD* v12; // rdx
	double v13; // xmm0_8
	__int64 v14; // rcx
	unsigned int j; // ebx
	unsigned __int16* v16; // rax
	int v17; // r11d
	__int64 v18; // r10
	int v19; // edx
	__int64 v20; // r9
	_DWORD* v21; // rdx
	double v22; // xmm0_8
	__int64 v23; // rcx
	__int64 v24; // r13
	__int64 v25; // rbx
	__int64 v26; // rax
	int v27; // r15d
	unsigned int v28; // eax
	__int64 v29; // rcx
	unsigned __int64 v30; // rdi
	__int64 v31; // rdi
	__int64 v32; // r14
	__int64 v33; // rbx
	__int64 v34; // rax
	int v35; // ebx
	__int64 v36; // rcx
	__int16* v37; // rax
	unsigned int v38; // r12d
	__int64 v39; // r9
	_DWORD* v40; // rdx
	__int64 v41; // rcx
	__int64 v42; // rdx
	__int64 v43; // r11
	unsigned __int64 v44; // rcx
	unsigned __int16* v45; // r10
	__int64 v46; // r9
	_DWORD* v47; // rcx
	__int64 v48; // r10
	int v49; // r15d
	__int64 v50; // r9
	_DWORD* v51; // rcx
	unsigned __int64* v52; // rsi
	unsigned __int64 v53; // rdi
	__int64 v54; // rbx
	__int64 v55; // rax
	__int64 v56; // rcx
	__int64 v57; // rax
	__int64* v58; // rax
	__int64 v59; // r9
	_DWORD* v60; // rdx
	__int64 v61; // rcx
	__int64 v62; // rcx
	int v63; // eax
	__int64 v64; // rax
	__int64 v65; // r10
	__int64 v66; // r9
	_DWORD* v67; // rcx
	__int64 v68; // r8
	_DWORD* v69; // rcx
	__int64 v70; // rdx
	__int64 v71; // rax
	__int64 result; // rax
	_DWORD* v73; // rcx
	__int64 v74; // r8
	__int64 v75; // rax
	int v76; // [rsp+28h] [rbp-69h]
	unsigned __int64 v77; // [rsp+30h] [rbp-61h]
	double v78; // [rsp+38h] [rbp-59h]
	double v79; // [rsp+38h] [rbp-59h]
	double v80; // [rsp+38h] [rbp-59h]
	_QWORD v81[4]; // [rsp+40h] [rbp-51h] BYREF
	__int64 v82[6]; // [rsp+60h] [rbp-31h] BYREF
	double v85; // [rsp+108h] [rbp+77h]
	double v86; // [rsp+108h] [rbp+77h]
	int v87; // [rsp+108h] [rbp+77h]
	int v88; // [rsp+110h] [rbp+7Fh]
	double v89; // [rsp+110h] [rbp+7Fh]
	double v90; // [rsp+110h] [rbp+7Fh]

	v5 = a1;
	for (i = 0; i < 0xE; ++i)
	{
		sub_1405F8A80(a2, i);
		v7 = (unsigned __int16*)sub_1405F02C0(i);
		v9 = *(_QWORD*)(v5 + 16);
		v10 = *(_DWORD*)(v5 + 8);
		v11 = *(_QWORD*)(*(_QWORD*)(v9 + 32) + 160i64);
		if ((unsigned int)(v10 - 1) >= *(_DWORD*)(v11 + 56))
		{
			v13 = (double)v10;
			if ((double)v10 == 0.0)
			{
				v12 = *(_DWORD**)(v11 + 32);
			}
			else
			{
				v85 = (double)v10;
				v12 = (_DWORD*)(*(_QWORD*)(v11 + 32)
					+ 40 * ((unsigned int)(LODWORD(v85) + HIDWORD(v85)) % (((1i64 << *(_BYTE*)(v11 + 11)) - 1) | 1)));
			}
			while (v12[6] != 3 || v13 != *((double*)v12 + 2))
			{
				v12 = (_DWORD*)*((_QWORD*)v12 + 4);
				if (!v12)
				{
					v12 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v12 = (_DWORD*)(*(_QWORD*)(v11 + 24) + 16i64 * (v10 - 1));
		}
		v14 = *(_QWORD*)(v9 + 16);
		*(_QWORD*)v14 = *(_QWORD*)v12;
		*(_DWORD*)(v14 + 8) = v12[2];
		*(_QWORD*)(v9 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(v5 + 16), (__int64)v12, v7, v8);
		*(_QWORD*)(*(_QWORD*)(v5 + 16) + 16i64) -= 16i64;
	}
	for (j = 100; j < 0x68; ++j)
	{
		sub_1405F8A80(a2, j);
		v16 = (unsigned __int16*)sub_1405F02C0(j);
		v18 = *(_QWORD*)(v5 + 16);
		v19 = *(_DWORD*)(v5 + 8);
		v20 = *(_QWORD*)(*(_QWORD*)(v18 + 32) + 160i64);
		if ((unsigned int)(v19 - 1) >= *(_DWORD*)(v20 + 56))
		{
			v22 = (double)v19;
			if ((double)v19 == 0.0)
			{
				v21 = *(_DWORD**)(v20 + 32);
			}
			else
			{
				v86 = (double)v19;
				v21 = (_DWORD*)(*(_QWORD*)(v20 + 32)
					+ 40 * ((unsigned int)(LODWORD(v86) + HIDWORD(v86)) % (((1i64 << *(_BYTE*)(v20 + 11)) - 1) | 1)));
			}
			while (v21[6] != 3 || v22 != *((double*)v21 + 2))
			{
				v21 = (_DWORD*)*((_QWORD*)v21 + 4);
				if (!v21)
				{
					v21 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v21 = (_DWORD*)(*(_QWORD*)(v20 + 24) + 16i64 * (v19 - 1));
		}
		v23 = *(_QWORD*)(v18 + 16);
		*(_QWORD*)v23 = *(_QWORD*)v21;
		*(_DWORD*)(v23 + 8) = v21[2];
		*(_QWORD*)(v18 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(v5 + 16), (__int64)v21, v16, v17);
		*(_QWORD*)(*(_QWORD*)(v5 + 16) + 16i64) -= 16i64;
	}
	v24 = *(_QWORD*)(v5 + 16);
	v87 = 1;
	if (*(_QWORD*)(*(_QWORD*)(v24 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v24 + 32) + 112i64))
		sub_14005E2C0(v24);
	v25 = *(_QWORD*)(v24 + 16);
	v26 = sub_14005C1B0(v24, 0, 0);
	*(_DWORD*)(v25 + 8) = 5;
	*(_QWORD*)v25 = v26;
	*(_QWORD*)(v24 + 16) += 16i64;
	v27 = sub_1400578C0(v24);
	v76 = v27;
	LODWORD(v25) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 40i64))(a3);
	v28 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 32i64))(a3);
	sub_1405F6F90(v29, v28, v25, v82);
	v30 = 0i64;
	v77 = 0i64;
	do
	{
		v31 = v82[v30];
		if (v31)
		{
			v32 = *(_QWORD*)(v5 + 16);
			if (*(_QWORD*)(*(_QWORD*)(v32 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v32 + 32) + 112i64))
				sub_14005E2C0(v32);
			v33 = *(_QWORD*)(v32 + 16);
			v34 = sub_14005C1B0(v32, 0, 0);
			*(_DWORD*)(v33 + 8) = 5;
			*(_QWORD*)v33 = v34;
			*(_QWORD*)(v32 + 16) += 16i64;
			v35 = sub_1400578C0(v32);
			v88 = v35;
			v37 = sub_14034BDD0(v36, *(_DWORD*)(v31 + 16));
			v38 = v35 - 1;
			v39 = *(_QWORD*)(*(_QWORD*)(v32 + 32) + 160i64);
			if ((unsigned int)(v35 - 1) >= *(_DWORD*)(v39 + 56))
			{
				if ((double)v35 == 0.0)
				{
					v40 = *(_DWORD**)(v39 + 32);
				}
				else
				{
					v78 = (double)v35;
					v40 = (_DWORD*)(*(_QWORD*)(v39 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v78) + HIDWORD(v78)) % (((1i64 << *(_BYTE*)(v39 + 11)) - 1) | 1)));
				}
				while (v40[6] != 3 || (double)v35 != *((double*)v40 + 2))
				{
					v40 = (_DWORD*)*((_QWORD*)v40 + 4);
					if (!v40)
					{
						v40 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v40 = (_DWORD*)(*(_QWORD*)(v39 + 24) + 16i64 * (v35 - 1));
			}
			v41 = *(_QWORD*)(v32 + 16);
			*(_QWORD*)v41 = *(_QWORD*)v40;
			*(_DWORD*)(v41 + 8) = v40[2];
			*(_QWORD*)(v32 + 16) += 16i64;
			sub_1400F0870(v32, (__int64)v40, L"strName", (unsigned __int16*)v37);
			v43 = *(_QWORD*)(v32 + 16) - 16i64;
			*(_QWORD*)(v32 + 16) = v43;
			v44 = *(_QWORD*)(v31 + 24);
			if (v44)
			{
				if (v44 <= qword_140C3FE70)
					v45 = (unsigned __int16*)(v44 + qword_140C3FE68);
				else
					v45 = 0i64;
			}
			else
			{
				v45 = 0i64;
			}
			v46 = *(_QWORD*)(*(_QWORD*)(v32 + 32) + 160i64);
			if (v38 >= *(_DWORD*)(v46 + 56))
			{
				if ((double)v35 == 0.0)
				{
					v47 = *(_DWORD**)(v46 + 32);
				}
				else
				{
					v79 = (double)v35;
					v42 = (unsigned int)(LODWORD(v79) + HIDWORD(v79)) % (((1i64 << *(_BYTE*)(v46 + 11)) - 1) | 1);
					v47 = (_DWORD*)(*(_QWORD*)(v46 + 32) + 40 * v42);
				}
				while (v47[6] != 3 || (double)v35 != *((double*)v47 + 2))
				{
					v47 = (_DWORD*)*((_QWORD*)v47 + 4);
					if (!v47)
					{
						v47 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v47 = (_DWORD*)(*(_QWORD*)(v46 + 24) + 16i64 * (v35 - 1));
			}
			*(_QWORD*)v43 = *(_QWORD*)v47;
			*(_DWORD*)(v43 + 8) = v47[2];
			*(_QWORD*)(v32 + 16) += 16i64;
			sub_1400F0870(v32, v42, L"strIcon", v45);
			v48 = *(_QWORD*)(v32 + 16) - 16i64;
			*(_QWORD*)(v32 + 16) = v48;
			v49 = *(_DWORD*)(a2 + 8 * v77 + 144);
			v50 = *(_QWORD*)(*(_QWORD*)(v32 + 32) + 160i64);
			if (v38 >= *(_DWORD*)(v50 + 56))
			{
				if ((double)v35 == 0.0)
				{
					v51 = *(_DWORD**)(v50 + 32);
				}
				else
				{
					v80 = (double)v35;
					v51 = (_DWORD*)(*(_QWORD*)(v50 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v80) + HIDWORD(v80)) % (((1i64 << *(_BYTE*)(v50 + 11)) - 1) | 1)));
				}
				while (v51[6] != 3 || (double)v35 != *((double*)v51 + 2))
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
				v51 = (_DWORD*)(*(_QWORD*)(v50 + 24) + 16i64 * (v35 - 1));
			}
			*(_QWORD*)v48 = *(_QWORD*)v51;
			*(_DWORD*)(v48 + 8) = v51[2];
			*(_QWORD*)(v32 + 16) += 16i64;
			v52 = (unsigned __int64*)sub_14018F0E0(v81, L"nValue")[1];
			if (v52)
			{
				v53 = -1i64;
				do
					++v53;
				while (*((_BYTE*)v52 + v53));
				if (*(_QWORD*)(*(_QWORD*)(v32 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v32 + 32) + 112i64))
					sub_14005E2C0(v32);
				v54 = *(_QWORD*)(v32 + 16);
				v55 = sub_140062650(v32, v52, v53);
				*(_DWORD*)(v54 + 8) = 4;
				*(_QWORD*)v54 = v55;
				v35 = v88;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v32 + 16) + 8i64) = 0;
			}
			v56 = v81[1];
			*(_QWORD*)(v32 + 16) += 16i64;
			if (v56)
				sub_14018B900(v56, 0);
			v57 = *(_QWORD*)(v32 + 16);
			*(_DWORD*)(v57 + 8) = 3;
			*(double*)v57 = (double)v49;
			*(_QWORD*)(v32 + 16) += 16i64;
			v58 = (__int64*)sub_1400580E0(v32, -3);
			sub_14005EA50(v32, v58, (int*)(*(_QWORD*)(v32 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v32 + 16) - 16i64));
			*(_QWORD*)(v32 + 16) -= 48i64;
			v59 = *(_QWORD*)(*(_QWORD*)(v24 + 32) + 160i64);
			v27 = v76;
			if ((unsigned int)(v76 - 1) >= *(_DWORD*)(v59 + 56))
			{
				if ((double)v76 == 0.0)
				{
					v60 = *(_DWORD**)(v59 + 32);
				}
				else
				{
					v89 = (double)v76;
					v60 = (_DWORD*)(*(_QWORD*)(v59 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v89) + HIDWORD(v89)) % (((1i64 << *(_BYTE*)(v59 + 11)) - 1) | 1)));
				}
				while (v60[6] != 3 || (double)v76 != *((double*)v60 + 2))
				{
					v60 = (_DWORD*)*((_QWORD*)v60 + 4);
					if (!v60)
					{
						v60 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v60 = (_DWORD*)(*(_QWORD*)(v59 + 24) + 16i64 * (v76 - 1));
			}
			v61 = *(_QWORD*)(v24 + 16);
			*(_QWORD*)v61 = *(_QWORD*)v60;
			*(_DWORD*)(v61 + 8) = v60[2];
			*(_QWORD*)(v24 + 16) += 16i64;
			v62 = *(_QWORD*)(v24 + 16);
			*(_DWORD*)(v62 + 8) = 3;
			v63 = v87++;
			*(double*)v62 = (double)v63;
			v64 = *(_QWORD*)(v24 + 32);
			v65 = *(_QWORD*)(v24 + 16) + 16i64;
			*(_QWORD*)(v24 + 16) = v65;
			v66 = *(_QWORD*)(v64 + 160);
			if (v38 >= *(_DWORD*)(v66 + 56))
			{
				if ((double)v35 == 0.0)
				{
					v67 = *(_DWORD**)(v66 + 32);
				}
				else
				{
					v90 = (double)v35;
					v67 = (_DWORD*)(*(_QWORD*)(v66 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v90) + HIDWORD(v90)) % (((1i64 << *(_BYTE*)(v66 + 11)) - 1) | 1)));
				}
				while (v67[6] != 3 || (double)v35 != *((double*)v67 + 2))
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
				v67 = (_DWORD*)(*(_QWORD*)(v66 + 24) + 16i64 * (v35 - 1));
			}
			*(_QWORD*)v65 = *(_QWORD*)v67;
			*(_DWORD*)(v65 + 8) = v67[2];
			v68 = *(_QWORD*)(v24 + 16) + 16i64;
			*(_QWORD*)(v24 + 16) = v68;
			sub_14005EA50(v24, (__int64*)(v68 - 48), (int*)(v68 - 32), (unsigned int*)(v68 - 16));
			*(_QWORD*)(v24 + 16) -= 48i64;
			if (v35 >= 0)
			{
				v69 = *(_DWORD**)(*(_QWORD*)sub_1400580E0(v32, -10000) + 32i64);
				while (v69[6] != 3 || *((double*)v69 + 2) != 0.0)
				{
					v69 = (_DWORD*)*((_QWORD*)v69 + 4);
					if (!v69)
					{
						v69 = dword_140A12138;
						break;
					}
				}
				v70 = *(_QWORD*)(v32 + 16);
				*(_QWORD*)v70 = *(_QWORD*)v69;
				*(_DWORD*)(v70 + 8) = v69[2];
				*(_QWORD*)(v32 + 16) += 16i64;
				sub_140058B30(v32, -10000);
				v71 = *(_QWORD*)(v32 + 16);
				*(_DWORD*)(v71 + 8) = 3;
				*(double*)v71 = (double)v35;
				*(_QWORD*)(v32 + 16) += 16i64;
				sub_140058B30(v32, -10000);
			}
			v5 = a1;
		}
		v30 = v77 + 1;
		v77 = v30;
	} while (v30 < 6);
	result = sub_1400FB2A0(v5, (__int64)L"arCustomStats", v27);
	if (v27 >= 0)
	{
		v73 = *(_DWORD**)(*(_QWORD*)sub_1400580E0(v24, -10000) + 32i64);
		while (v73[6] != 3 || *((double*)v73 + 2) != 0.0)
		{
			v73 = (_DWORD*)*((_QWORD*)v73 + 4);
			if (!v73)
			{
				v73 = dword_140A12138;
				break;
			}
		}
		v74 = *(_QWORD*)(v24 + 16);
		*(_QWORD*)v74 = *(_QWORD*)v73;
		*(_DWORD*)(v74 + 8) = v73[2];
		*(_QWORD*)(v24 + 16) += 16i64;
		sub_140058B30(v24, -10000);
		v75 = *(_QWORD*)(v24 + 16);
		*(_DWORD*)(v75 + 8) = 3;
		*(double*)v75 = (double)v27;
		*(_QWORD*)(v24 + 16) += 16i64;
		return sub_140058B30(v24, -10000);
	}
	return result;
}
// 1405F06B0: variable 'v8' is possibly undefined
// 1405F0790: variable 'v17' is possibly undefined
// 1405F0815: variable 'v29' is possibly undefined
// 1405F0878: variable 'v36' is possibly undefined
// 1405F0A0C: variable 'v42' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B24080: using guessed type wchar_t aNvalue_11[7];
// 140B24090: using guessed type wchar_t aArcustomstats[14];
// 140B240B0: using guessed type wchar_t aStrname_41[8];
// 140B240C0: using guessed type wchar_t aStricon_2[8];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 1405F05B0: using guessed type __int64 var_88[6];

