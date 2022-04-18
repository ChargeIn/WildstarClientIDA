#include "../winhttp.h"

//----- (000000014042FF50) ----------------------------------------------------
void __fastcall sub_14042FF50(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v3; // r8
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	int* v8; // rsi
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // eax
	int v12; // r15d
	unsigned int v13; // r12d
	__int64 v14; // r9
	int v15; // r13d
	_DWORD* v16; // rdx
	__int64 v17; // rcx
	unsigned __int64* v18; // r14
	unsigned __int64 v19; // rsi
	__int64 v20; // rbx
	__int64 v21; // rax
	__int64 v22; // rcx
	__int64 v23; // rax
	__int64* v24; // rax
	__int64 v25; // rax
	__int64 v26; // r10
	__int64 v27; // r9
	int v28; // r15d
	_DWORD* v29; // rcx
	unsigned __int64* v30; // r14
	unsigned __int64 v31; // rsi
	__int64 v32; // rbx
	__int64 v33; // rax
	__int64 v34; // rcx
	__int64 v35; // rax
	__int64* v36; // rax
	__int64 v37; // rax
	__int64 v38; // r10
	__int64 v39; // r9
	int v40; // r15d
	_DWORD* v41; // rcx
	unsigned __int64* v42; // r14
	unsigned __int64 v43; // rsi
	__int64 v44; // rbx
	__int64 v45; // rax
	__int64 v46; // rcx
	__int64 v47; // rax
	__int64* v48; // rax
	__int64 v49; // rax
	__int64 v50; // r10
	__int64 v51; // r9
	int v52; // r15d
	_DWORD* v53; // rcx
	unsigned __int64* v54; // r14
	unsigned __int64 v55; // rsi
	__int64 v56; // rbx
	__int64 v57; // rax
	__int64 v58; // rcx
	__int64 v59; // rax
	__int64* v60; // rax
	__int64 v61; // rdx
	bool v62; // zf
	int v63; // ebx
	__int64 v64; // rdx
	__int64 v65; // [rsp+20h] [rbp-60h]
	__int64(__fastcall * *v66)(); // [rsp+28h] [rbp-58h] BYREF
	unsigned int v67; // [rsp+30h] [rbp-50h]
	__int64 v68; // [rsp+38h] [rbp-48h]
	int v69; // [rsp+40h] [rbp-40h]
	__int64 v70; // [rsp+48h] [rbp-38h] BYREF
	__int64 v71; // [rsp+50h] [rbp-30h]
	int* v73; // [rsp+D0h] [rbp+50h]
	double v74; // [rsp+D8h] [rbp+58h]
	double v75; // [rsp+D8h] [rbp+58h]
	double v76; // [rsp+D8h] [rbp+58h]
	double v77; // [rsp+D8h] [rbp+58h]

	v2 = *(_QWORD*)(a1 + 400);
	v3 = *(_QWORD*)(v2 + 32);
	v66 = off_140B569F0;
	v5 = *(_QWORD*)(v3 + 112);
	v68 = v2;
	v69 = 1;
	if (*(_QWORD*)(v3 + 120) >= v5)
		sub_14005E2C0(v2);
	v6 = *(_QWORD*)(v2 + 16);
	v7 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	*(_QWORD*)(v2 + 16) += 16i64;
	v8 = (int*)(a2 + 8);
	v67 = sub_1400578C0(v2);
	v65 = 2i64;
	v73 = v8;
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
		v12 = *(v8 - 2);
		v13 = v11 - 1;
		v14 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
		v15 = v11;
		if ((unsigned int)(v11 - 1) >= *(_DWORD*)(v14 + 56))
		{
			if ((double)v11 == 0.0)
			{
				v16 = *(_DWORD**)(v14 + 32);
			}
			else
			{
				v74 = (double)v11;
				v16 = (_DWORD*)(*(_QWORD*)(v14 + 32)
					+ 40 * ((unsigned int)(LODWORD(v74) + HIDWORD(v74)) % (((1i64 << *(_BYTE*)(v14 + 11)) - 1) | 1)));
			}
			while (v16[6] != 3 || (double)v11 != *((double*)v16 + 2))
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
			v16 = (_DWORD*)(*(_QWORD*)(v14 + 24) + 16i64 * (v11 - 1));
		}
		v17 = *(_QWORD*)(v2 + 16);
		*(_QWORD*)v17 = *(_QWORD*)v16;
		*(_DWORD*)(v17 + 8) = v16[2];
		*(_QWORD*)(v2 + 16) += 16i64;
		v18 = (unsigned __int64*)sub_14018F0E0(&v70, L"nRating")[1];
		if (v18)
		{
			v19 = -1i64;
			do
				++v19;
			while (*((_BYTE*)v18 + v19));
			if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
				sub_14005E2C0(v2);
			v20 = *(_QWORD*)(v2 + 16);
			v21 = sub_140062650(v2, v18, v19);
			v8 = v73;
			*(_DWORD*)(v20 + 8) = 4;
			*(_QWORD*)v20 = v21;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
		}
		v22 = v71;
		*(_QWORD*)(v2 + 16) += 16i64;
		if (v22)
			sub_14018B900(v22, 0);
		v23 = *(_QWORD*)(v2 + 16);
		*(_DWORD*)(v23 + 8) = 3;
		*(double*)v23 = (double)v12;
		*(_QWORD*)(v2 + 16) += 16i64;
		v24 = (__int64*)sub_1400580E0(v2, -3);
		sub_14005EA50(v2, v24, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
		v25 = *(_QWORD*)(v2 + 32);
		v26 = *(_QWORD*)(v2 + 16) - 48i64;
		*(_QWORD*)(v2 + 16) = v26;
		v27 = *(_QWORD*)(v25 + 160);
		v28 = *(v8 - 1);
		if (v13 >= *(_DWORD*)(v27 + 56))
		{
			if ((double)v15 == 0.0)
			{
				v29 = *(_DWORD**)(v27 + 32);
			}
			else
			{
				v75 = (double)v15;
				v29 = (_DWORD*)(*(_QWORD*)(v27 + 32)
					+ 40 * ((unsigned int)(LODWORD(v75) + HIDWORD(v75)) % (((1i64 << *(_BYTE*)(v27 + 11)) - 1) | 1)));
			}
			while (v29[6] != 3 || (double)v15 != *((double*)v29 + 2))
			{
				v29 = (_DWORD*)*((_QWORD*)v29 + 4);
				if (!v29)
				{
					v29 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v29 = (_DWORD*)(*(_QWORD*)(v27 + 24) + 16i64 * (v15 - 1));
		}
		*(_QWORD*)v26 = *(_QWORD*)v29;
		*(_DWORD*)(v26 + 8) = v29[2];
		*(_QWORD*)(v2 + 16) += 16i64;
		v30 = (unsigned __int64*)sub_14018F0E0(&v70, L"nRepairCost")[1];
		if (v30)
		{
			v31 = -1i64;
			do
				++v31;
			while (*((_BYTE*)v30 + v31));
			if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
				sub_14005E2C0(v2);
			v32 = *(_QWORD*)(v2 + 16);
			v33 = sub_140062650(v2, v30, v31);
			v8 = v73;
			*(_DWORD*)(v32 + 8) = 4;
			*(_QWORD*)v32 = v33;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
		}
		v34 = v71;
		*(_QWORD*)(v2 + 16) += 16i64;
		if (v34)
			sub_14018B900(v34, 0);
		v35 = *(_QWORD*)(v2 + 16);
		*(_DWORD*)(v35 + 8) = 3;
		*(double*)v35 = (double)v28;
		*(_QWORD*)(v2 + 16) += 16i64;
		v36 = (__int64*)sub_1400580E0(v2, -3);
		sub_14005EA50(v2, v36, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
		v37 = *(_QWORD*)(v2 + 32);
		v38 = *(_QWORD*)(v2 + 16) - 48i64;
		*(_QWORD*)(v2 + 16) = v38;
		v39 = *(_QWORD*)(v37 + 160);
		v40 = *v8;
		if (v13 >= *(_DWORD*)(v39 + 56))
		{
			if ((double)v15 == 0.0)
			{
				v41 = *(_DWORD**)(v39 + 32);
			}
			else
			{
				v76 = (double)v15;
				v41 = (_DWORD*)(*(_QWORD*)(v39 + 32)
					+ 40 * ((unsigned int)(LODWORD(v76) + HIDWORD(v76)) % (((1i64 << *(_BYTE*)(v39 + 11)) - 1) | 1)));
			}
			while (v41[6] != 3 || (double)v15 != *((double*)v41 + 2))
			{
				v41 = (_DWORD*)*((_QWORD*)v41 + 4);
				if (!v41)
				{
					v41 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v41 = (_DWORD*)(*(_QWORD*)(v39 + 24) + 16i64 * (v15 - 1));
		}
		*(_QWORD*)v38 = *(_QWORD*)v41;
		*(_DWORD*)(v38 + 8) = v41[2];
		*(_QWORD*)(v2 + 16) += 16i64;
		v42 = (unsigned __int64*)sub_14018F0E0(&v70, L"nDestroyedPlugs")[1];
		if (v42)
		{
			v43 = -1i64;
			do
				++v43;
			while (*((_BYTE*)v42 + v43));
			if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
				sub_14005E2C0(v2);
			v44 = *(_QWORD*)(v2 + 16);
			v45 = sub_140062650(v2, v42, v43);
			v8 = v73;
			*(_DWORD*)(v44 + 8) = 4;
			*(_QWORD*)v44 = v45;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
		}
		v46 = v71;
		*(_QWORD*)(v2 + 16) += 16i64;
		if (v46)
			sub_14018B900(v46, 0);
		v47 = *(_QWORD*)(v2 + 16);
		*(_DWORD*)(v47 + 8) = 3;
		*(double*)v47 = (double)v40;
		*(_QWORD*)(v2 + 16) += 16i64;
		v48 = (__int64*)sub_1400580E0(v2, -3);
		sub_14005EA50(v2, v48, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
		v49 = *(_QWORD*)(v2 + 32);
		v50 = *(_QWORD*)(v2 + 16) - 48i64;
		*(_QWORD*)(v2 + 16) = v50;
		v51 = *(_QWORD*)(v49 + 160);
		v52 = v8[1];
		if (v13 >= *(_DWORD*)(v51 + 56))
		{
			if ((double)v15 == 0.0)
			{
				v53 = *(_DWORD**)(v51 + 32);
			}
			else
			{
				v77 = (double)v15;
				v53 = (_DWORD*)(*(_QWORD*)(v51 + 32)
					+ 40 * ((unsigned int)(LODWORD(v77) + HIDWORD(v77)) % (((1i64 << *(_BYTE*)(v51 + 11)) - 1) | 1)));
			}
			while (v53[6] != 3 || (double)v15 != *((double*)v53 + 2))
			{
				v53 = (_DWORD*)*((_QWORD*)v53 + 4);
				if (!v53)
				{
					v53 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v53 = (_DWORD*)(*(_QWORD*)(v51 + 24) + 16i64 * (v15 - 1));
		}
		*(_QWORD*)v50 = *(_QWORD*)v53;
		*(_DWORD*)(v50 + 8) = v53[2];
		*(_QWORD*)(v2 + 16) += 16i64;
		v54 = (unsigned __int64*)sub_14018F0E0(&v70, L"nWarCoinsEarned")[1];
		if (v54)
		{
			v55 = -1i64;
			do
				++v55;
			while (*((_BYTE*)v54 + v55));
			if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
				sub_14005E2C0(v2);
			v56 = *(_QWORD*)(v2 + 16);
			v57 = sub_140062650(v2, v54, v55);
			v8 = v73;
			*(_DWORD*)(v56 + 8) = 4;
			*(_QWORD*)v56 = v57;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
		}
		v58 = v71;
		*(_QWORD*)(v2 + 16) += 16i64;
		if (v58)
			sub_14018B900(v58, 0);
		v59 = *(_QWORD*)(v2 + 16);
		*(_DWORD*)(v59 + 8) = 3;
		*(double*)v59 = (double)v52;
		*(_QWORD*)(v2 + 16) += 16i64;
		v60 = (__int64*)sub_1400580E0(v2, -3);
		sub_14005EA50(v2, v60, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
		*(_QWORD*)(v2 + 16) -= 48i64;
		sub_1400FB1D0((__int64)&v66);
		sub_1400579E0(v2, v61, v15);
		v8 += 4;
		v62 = v65-- == 1;
		v73 = v8;
	} while (!v62);
	v63 = v67;
	Apollo_LUAEvent(a1, "WarPartyMatchResults", L"T", v67);
	if (v68)
		sub_1400579E0(v68, v64, v63);
}
// 1404305E3: variable 'v61' is possibly undefined
// 140430623: variable 'v64' is possibly undefined
// 1409EED14: using guessed type wchar_t aT_53[2];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B01488: using guessed type wchar_t aNrating[8];
// 140B014A0: using guessed type wchar_t aNwarcoinsearne[16];
// 140B014C0: using guessed type wchar_t aNdestroyedplug[16];
// 140B014E0: using guessed type wchar_t aNrepaircost[12];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

