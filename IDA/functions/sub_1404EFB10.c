//----- (00000001404EFB10) ----------------------------------------------------
__int64 __fastcall sub_1404EFB10(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // eax
	__int64 v7; // rsi
	int v8; // r9d
	__int64 v9; // r12
	__int64 v10; // rcx
	unsigned __int64 v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rax
	int v14; // eax
	__int64 v15; // r8
	int v16; // r13d
	unsigned __int16** v17; // rax
	unsigned int v18; // ebx
	__int64 v19; // r9
	unsigned __int16* v20; // r10
	_DWORD* v21; // rdx
	__int64 v22; // rcx
	unsigned __int16* v23; // r10
	__int64 v24; // r9
	_DWORD* v25; // rdx
	__int64 v26; // rcx
	int v27; // r15d
	__int64 v28; // r10
	__int64 v29; // r9
	_DWORD* v30; // rcx
	unsigned __int64* v31; // r14
	unsigned __int64 v32; // rsi
	__int64 v33; // rbx
	__int64 v34; // rax
	__int64 v35; // rcx
	__int64 v36; // rax
	__int64* v37; // rax
	__int64 v38; // rcx
	int v39; // edx
	float v40; // xmm0_4
	unsigned __int64 v41; // rax
	__int64 v42; // rcx
	unsigned __int64 v43; // rbx
	__int64 v44; // rax
	__int64 v45; // r8
	_QWORD* v46; // rax
	__int64 v47; // rcx
	__int64 v48; // rcx
	__int64 v49; // rbx
	__int64 v50; // rax
	__int64 v51; // r9
	int v52; // r15d
	_QWORD* v53; // rax
	__int64 v54; // r10
	unsigned __int64* v55; // r14
	unsigned __int64 v56; // rsi
	__int64 v57; // rbx
	__int64 v58; // rax
	__int64 v59; // rcx
	__int64 v60; // rax
	__int64* v61; // rax
	double v62; // xmm6_8
	_QWORD* v63; // rax
	__int64 v64; // r10
	unsigned __int64* v65; // r14
	unsigned __int64 v66; // rsi
	__int64 v67; // rbx
	__int64 v68; // rax
	__int64 v69; // rcx
	__int64 v70; // rax
	__int64* v71; // rax
	int v72; // r15d
	_QWORD* v73; // rax
	__int64 v74; // r10
	unsigned __int64* v75; // r14
	unsigned __int64 v76; // rsi
	__int64 v77; // rbx
	__int64 v78; // rax
	__int64 v79; // rcx
	_DWORD* v80; // rcx
	__int64* v81; // rax
	__int64 v82; // rdx
	int v83; // ebx
	__int64 v84; // rdx
	__int64 v85; // r10
	_DWORD* v86; // rcx
	__int64 v87; // r8
	__int64 v88; // rdx
	__int64 v90; // [rsp+28h] [rbp-89h] BYREF
	int v91; // [rsp+30h] [rbp-81h]
	__int64 v92; // [rsp+38h] [rbp-79h] BYREF
	__int64 v93; // [rsp+40h] [rbp-71h]
	__int64 v94; // [rsp+48h] [rbp-69h]
	__int64(__fastcall * *v95)(); // [rsp+58h] [rbp-59h] BYREF
	int v96; // [rsp+60h] [rbp-51h]
	_QWORD* v97; // [rsp+68h] [rbp-49h]
	int v98; // [rsp+70h] [rbp-41h]
	__int64(__fastcall * *v99)(); // [rsp+78h] [rbp-39h] BYREF
	int v100; // [rsp+80h] [rbp-31h]
	_QWORD* v101; // [rsp+88h] [rbp-29h]
	__int128 v102; // [rsp+90h] [rbp-21h]
	__int64 v103; // [rsp+118h] [rbp+67h]
	double v104; // [rsp+118h] [rbp+67h]
	double v105; // [rsp+120h] [rbp+6Fh]
	double v106; // [rsp+120h] [rbp+6Fh]
	double v107; // [rsp+120h] [rbp+6Fh]
	unsigned __int64 v108; // [rsp+128h] [rbp+77h]
	__int64 v109; // [rsp+130h] [rbp+7Fh] BYREF

	v1 = (_QWORD*)a1;
	v101 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	LODWORD(v102) = 1;
	v3 = *(_QWORD*)(v2 + 112);
	v99 = off_140B569F0;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0((__int64)v1);
	v4 = v1[2];
	v5 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	v1[2] += 16i64;
	v6 = sub_1400578C0((__int64)v1);
	v7 = qword_140C65908;
	v8 = v6;
	v100 = v6;
	v103 = qword_140C65908;
	v108 = 0i64;
	if (*(_QWORD*)(qword_140C65908 + 24))
	{
		v9 = 0i64;
		do
		{
			v10 = v1[4];
			v95 = off_140B569F0;
			v97 = v1;
			v11 = *(_QWORD*)(v10 + 112);
			v98 = 1;
			if (*(_QWORD*)(v10 + 120) >= v11)
				sub_14005E2C0((__int64)v1);
			v12 = v1[2];
			v13 = sub_14005C1B0((__int64)v1, 0, 0);
			*(_DWORD*)(v12 + 8) = 5;
			*(_QWORD*)v12 = v13;
			v1[2] += 16i64;
			v14 = sub_1400578C0((__int64)v1);
			v15 = *(_QWORD*)(v9 + *(_QWORD*)(v7 + 16));
			v16 = v14;
			v96 = v14;
			v17 = (unsigned __int16**)sub_14018D540(&v109, (__int64)L"%llu", v15);
			v18 = v16 - 1;
			v19 = *(_QWORD*)(v1[4] + 160i64);
			v20 = *v17;
			if ((unsigned int)(v16 - 1) >= *(_DWORD*)(v19 + 56))
			{
				if ((double)v16 == 0.0)
				{
					v21 = *(_DWORD**)(v19 + 32);
				}
				else
				{
					v105 = (double)v16;
					v21 = (_DWORD*)(*(_QWORD*)(v19 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v105) + HIDWORD(v105)) % (((1i64 << *(_BYTE*)(v19 + 11)) - 1) | 1)));
				}
				while (v21[6] != 3 || (double)v16 != *((double*)v21 + 2))
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
				v21 = (_DWORD*)(*(_QWORD*)(v19 + 24) + 16i64 * (v16 - 1));
			}
			v22 = v1[2];
			*(_QWORD*)v22 = *(_QWORD*)v21;
			*(_DWORD*)(v22 + 8) = v21[2];
			v1[2] += 16i64;
			sub_1400F0870((__int64)v1, (__int64)v21, L"strPurchaseId", v20);
			v1[2] -= 16i64;
			if (v109)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v109 - 16) + 8i64))(v109 - 16);
			v23 = *(unsigned __int16**)(v9 + *(_QWORD*)(v7 + 16) + 8);
			v24 = *(_QWORD*)(v1[4] + 160i64);
			if (v18 >= *(_DWORD*)(v24 + 56))
			{
				if ((double)v16 == 0.0)
				{
					v25 = *(_DWORD**)(v24 + 32);
				}
				else
				{
					v106 = (double)v16;
					v25 = (_DWORD*)(*(_QWORD*)(v24 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v106) + HIDWORD(v106)) % (((1i64 << *(_BYTE*)(v24 + 11)) - 1) | 1)));
				}
				while (v25[6] != 3 || (double)v16 != *((double*)v25 + 2))
				{
					v25 = (_DWORD*)*((_QWORD*)v25 + 4);
					if (!v25)
					{
						v25 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v25 = (_DWORD*)(*(_QWORD*)(v24 + 24) + 16i64 * (v16 - 1));
			}
			v26 = v1[2];
			*(_QWORD*)v26 = *(_QWORD*)v25;
			*(_DWORD*)(v26 + 8) = v25[2];
			v1[2] += 16i64;
			sub_1400F0870((__int64)v1, (__int64)v25, L"strName", v23);
			v1[2] -= 16i64;
			v27 = *(_DWORD*)(v9 + *(_QWORD*)(v7 + 16) + 52);
			v28 = v1[2];
			v29 = *(_QWORD*)(v1[4] + 160i64);
			if (v18 >= *(_DWORD*)(v29 + 56))
			{
				if ((double)v16 == 0.0)
				{
					v30 = *(_DWORD**)(v29 + 32);
				}
				else
				{
					v107 = (double)v16;
					v30 = (_DWORD*)(*(_QWORD*)(v29 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v107) + HIDWORD(v107)) % (((1i64 << *(_BYTE*)(v29 + 11)) - 1) | 1)));
				}
				while (v30[6] != 3 || (double)v16 != *((double*)v30 + 2))
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
				v30 = (_DWORD*)(*(_QWORD*)(v29 + 24) + 16i64 * (v16 - 1));
			}
			*(_QWORD*)v28 = *(_QWORD*)v30;
			*(_DWORD*)(v28 + 8) = v30[2];
			v1[2] += 16i64;
			v31 = (unsigned __int64*)sub_14018F0E0(&v92, L"nQuantity")[1];
			if (v31)
			{
				v32 = -1i64;
				do
					++v32;
				while (*((_BYTE*)v31 + v32));
				if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
					sub_14005E2C0((__int64)v1);
				v33 = v1[2];
				v34 = sub_140062650((__int64)v1, v31, v32);
				v7 = v103;
				*(_DWORD*)(v33 + 8) = 4;
				*(_QWORD*)v33 = v34;
			}
			else
			{
				*(_DWORD*)(v1[2] + 8i64) = 0;
			}
			v35 = v93;
			v1[2] += 16i64;
			if (v35)
				sub_14018B900(v35, 0);
			v36 = v1[2];
			*(_DWORD*)(v36 + 8) = 3;
			*(double*)v36 = (double)v27;
			v1[2] += 16i64;
			v37 = (__int64*)sub_1400580E0((__int64)v1, -3);
			sub_14005EA50((__int64)v1, v37, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
			v1[2] -= 48i64;
			v38 = *(_QWORD*)(v7 + 16);
			v39 = *(_DWORD*)(v9 + v38 + 28);
			if (v39)
			{
				v40 = *(float*)(v9 + v38 + 24);
				v41 = 0i64;
				if (v40 >= 9.223372e18)
				{
					v40 = v40 - 9.223372e18;
					if (v40 < 9.223372e18)
						v41 = 0x8000000000000000ui64;
				}
				v42 = v1[4];
				v93 = 15i64;
				HIDWORD(v94) = v39;
				v43 = v41 + (unsigned int)(int)v40;
				LODWORD(v94) = 0;
				if (*(_QWORD*)(v42 + 120) >= *(_QWORD*)(v42 + 112))
					sub_14005E2C0((__int64)v1);
				v44 = v1[5];
				if (v44 == v1[10])
					v45 = v1[15];
				else
					v45 = *(_QWORD*)(**(_QWORD**)(v44 + 8) + 24i64);
				v46 = (_QWORD*)sub_1400627D0((__int64)v1, 0x18ui64, v45);
				v47 = v1[2];
				*(_QWORD*)v47 = v46;
				*(_DWORD*)(v47 + 8) = 7;
				v1[2] += 16i64;
				v48 = v93;
				v46[6] = v43;
				v46[7] = v48;
				v46[8] = v94;
				v49 = v1[4];
				v50 = sub_140062650((__int64)v1, (unsigned __int64*)"Game.Money", 0xAui64);
				v51 = v1[2];
				v90 = v50;
				v91 = 4;
				sub_14005E8E0((__int64)v1, v49 + 160, (int*)&v90, v51);
				v1[2] += 16i64;
				sub_140058BF0((__int64)v1, -2);
				sub_1400FB540((__int64)&v95);
				v1[2] -= 16i64;
			}
			else
			{
				v52 = *(_DWORD*)(v9 + v38 + 32);
				v53 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v16);
				*(_QWORD*)v54 = *v53;
				*(_DWORD*)(v54 + 8) = *((_DWORD*)v53 + 2);
				v1[2] += 16i64;
				v55 = (unsigned __int64*)sub_14018F0E0(&v92, L"eRealCurrency")[1];
				if (v55)
				{
					v56 = -1i64;
					do
						++v56;
					while (*((_BYTE*)v55 + v56));
					if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
						sub_14005E2C0((__int64)v1);
					v57 = v1[2];
					v58 = sub_140062650((__int64)v1, v55, v56);
					v7 = v103;
					*(_DWORD*)(v57 + 8) = 4;
					*(_QWORD*)v57 = v58;
				}
				else
				{
					*(_DWORD*)(v1[2] + 8i64) = 0;
				}
				v59 = v93;
				v1[2] += 16i64;
				if (v59)
					sub_14018B900(v59, 0);
				v60 = v1[2];
				*(_DWORD*)(v60 + 8) = 3;
				*(double*)v60 = (double)v52;
				v1[2] += 16i64;
				v61 = (__int64*)sub_1400580E0((__int64)v1, -3);
				sub_14005EA50((__int64)v1, v61, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
				v1[2] -= 48i64;
				v62 = *(float*)(v9 + *(_QWORD*)(v7 + 16) + 24);
				v63 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v16);
				*(_QWORD*)v64 = *v63;
				*(_DWORD*)(v64 + 8) = *((_DWORD*)v63 + 2);
				v1[2] += 16i64;
				v65 = (unsigned __int64*)sub_14018F0E0(&v92, L"nPrice")[1];
				if (v65)
				{
					v66 = -1i64;
					do
						++v66;
					while (*((_BYTE*)v65 + v66));
					if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
						sub_14005E2C0((__int64)v1);
					v67 = v1[2];
					v68 = sub_140062650((__int64)v1, v65, v66);
					v7 = v103;
					*(_DWORD*)(v67 + 8) = 4;
					*(_QWORD*)v67 = v68;
				}
				else
				{
					*(_DWORD*)(v1[2] + 8i64) = 0;
				}
				v69 = v93;
				v1[2] += 16i64;
				if (v69)
					sub_14018B900(v69, 0);
				v70 = v1[2];
				*(_DWORD*)(v70 + 8) = 3;
				*(double*)v70 = v62;
				v1[2] += 16i64;
				v71 = (__int64*)sub_1400580E0((__int64)v1, -3);
				sub_14005EA50((__int64)v1, v71, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
				v1[2] -= 48i64;
				v72 = *(_DWORD*)(v9 + *(_QWORD*)(v7 + 16) + 36);
				v73 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v16);
				*(_QWORD*)v74 = *v73;
				*(_DWORD*)(v74 + 8) = *((_DWORD*)v73 + 2);
				v1[2] += 16i64;
				v75 = (unsigned __int64*)sub_14018F0E0(&v92, L"bRefunded")[1];
				if (v75)
				{
					v76 = -1i64;
					do
						++v76;
					while (*((_BYTE*)v75 + v76));
					if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
						sub_14005E2C0((__int64)v1);
					v77 = v1[2];
					v78 = sub_140062650((__int64)v1, v75, v76);
					v7 = v103;
					*(_DWORD*)(v77 + 8) = 4;
					*(_QWORD*)v77 = v78;
				}
				else
				{
					*(_DWORD*)(v1[2] + 8i64) = 0;
				}
				v79 = v93;
				v1[2] += 16i64;
				if (v79)
					sub_14018B900(v79, 0);
				v80 = (_DWORD*)v1[2];
				v80[2] = 1;
				*v80 = v72 != 0;
				v1[2] += 16i64;
				v81 = (__int64*)sub_1400580E0((__int64)v1, -3);
				sub_14005EA50((__int64)v1, v81, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
				v1[2] -= 48i64;
				v82 = *(_QWORD*)(v7 + 16);
				if (*(_DWORD*)(v9 + v82 + 36))
					sub_1404EF920((__int64)&v95, *(FILETIME*)(v9 + v82 + 40), L"strRefundedTimestamp", L"nRefundedTimestamp");
			}
			sub_1404EF920((__int64)&v95, *(FILETIME*)(v9 + *(_QWORD*)(v7 + 16) + 16), L"strTimestamp", L"nTimestamp");
			v83 = v96;
			sub_1400FB1D0((__int64)&v99);
			if (v97)
				sub_1400579E0((__int64)v97, v84, v83);
			v9 += 56i64;
			++v108;
		} while (v108 < *(_QWORD*)(v7 + 24));
		v1 = v101;
		v8 = v100;
	}
	v85 = *(_QWORD*)(v1[4] + 160i64);
	if ((unsigned int)(v8 - 1) >= *(_DWORD*)(v85 + 56))
	{
		if ((double)v8 == 0.0)
		{
			v86 = *(_DWORD**)(v85 + 32);
		}
		else
		{
			v104 = (double)v8;
			v86 = (_DWORD*)(*(_QWORD*)(v85 + 32)
				+ 40 * ((unsigned int)(LODWORD(v104) + HIDWORD(v104)) % (((1i64 << *(_BYTE*)(v85 + 11)) - 1) | 1)));
		}
		while (v86[6] != 3 || (double)v8 != *((double*)v86 + 2))
		{
			v86 = (_DWORD*)*((_QWORD*)v86 + 4);
			if (!v86)
			{
				v86 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v86 = (_DWORD*)(*(_QWORD*)(v85 + 24) + 16i64 * (v8 - 1));
	}
	v87 = v1[2];
	*(_QWORD*)v87 = *(_QWORD*)v86;
	v88 = (unsigned int)v86[2];
	*(_DWORD*)(v87 + 8) = v88;
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v88, v8);
	return 1i64;
}
// 1404F0092: variable 'v54' is possibly undefined
// 1404F018B: variable 'v64' is possibly undefined
// 1404F027C: variable 'v74' is possibly undefined
// 1404F03AA: variable 'v84' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B0DC88: using guessed type wchar_t aNprice[7];
// 140B0DC98: using guessed type wchar_t aBrefunded[10];
// 140B0DCB0: using guessed type wchar_t aNrefundedtimes[19];
// 140B0DCD8: using guessed type wchar_t aStrrefundedtim[21];
// 140B0DD08: using guessed type wchar_t aStrname_24[8];
// 140B0DD18: using guessed type wchar_t aNquantity[10];
// 140B0DD48: using guessed type wchar_t aErealcurrency[14];
// 140B0DD68: using guessed type wchar_t aLlu_0[5];
// 140B0DD78: using guessed type wchar_t aStrpurchaseid[14];
// 140B0DEE8: using guessed type wchar_t aNtimestamp[11];
// 140B0DF00: using guessed type wchar_t aStrtimestamp[13];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65908: using guessed type __int64 qword_140C65908;

