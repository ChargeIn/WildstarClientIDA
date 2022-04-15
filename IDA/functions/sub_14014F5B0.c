#include "../winhttp.h"

//----- (000000014014F5B0) ----------------------------------------------------
__int64 __fastcall sub_14014F5B0(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // r15
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // eax
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	float* v11; // rsi
	_QWORD* v12; // rbx
	__int64 v13; // r14
	float v14; // xmm1_4
	int v15; // esi
	__int64 v16; // rbx
	__int64 v17; // rax
	int v18; // r13d
	int* v19; // r15
	__int64 v20; // rbx
	unsigned int v21; // ecx
	int v22; // r10d
	__int64 v23; // r9
	_DWORD* v24; // rdx
	__int64 v25; // rcx
	__int64 v26; // rcx
	int v27; // eax
	__int64 v28; // rax
	__int64 v29; // r8
	int v30; // ebx
	__int64 v31; // r9
	unsigned int v32; // r12d
	_DWORD* v33; // rdx
	__int64 v34; // rcx
	unsigned __int64 v35; // r14
	unsigned __int64* v36; // r15
	unsigned __int64 v37; // rsi
	__int64 v38; // rbx
	__int64 v39; // rax
	__int64 v40; // rcx
	int v41; // r15d
	__int64 v42; // r9
	_DWORD* v43; // rdx
	__int64 v44; // rcx
	__int64 v45; // r8
	__int64 v46; // rax
	__int64 v47; // r10
	__int64 v48; // r9
	_DWORD* v49; // rcx
	unsigned __int64* v50; // rsi
	__int64 v51; // rbx
	__int64 v52; // rax
	__int64 v53; // rcx
	__int64 v54; // r9
	_DWORD* v55; // rdx
	__int64 v56; // rcx
	__int64 v57; // r8
	__int64 v58; // rdx
	__int64 v59; // rax
	__int64 v60; // r10
	__int64 v61; // r9
	_DWORD* v62; // rcx
	__int64 v63; // rdx
	__int64(__fastcall * *v64)(); // [rsp+20h] [rbp-29h] BYREF
	int v65; // [rsp+28h] [rbp-21h]
	__int64 v66; // [rsp+30h] [rbp-19h]
	int v67; // [rsp+38h] [rbp-11h]
	__int64 v68; // [rsp+40h] [rbp-9h] BYREF
	__int64 v69; // [rsp+48h] [rbp-1h]
	int v70; // [rsp+B8h] [rbp+6Fh]
	double v71; // [rsp+B8h] [rbp+6Fh]
	double v72; // [rsp+B8h] [rbp+6Fh]
	double v73; // [rsp+C0h] [rbp+77h]
	double v74; // [rsp+C0h] [rbp+77h]
	double v75; // [rsp+C0h] [rbp+77h]
	double v76; // [rsp+C0h] [rbp+77h]

	result = sub_14014EBC0(a1, 1);
	v3 = result;
	if (result)
	{
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v4 = *(_QWORD*)(a1 + 16);
		v5 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v4 + 8) = 5;
		*(_QWORD*)v4 = v5;
		*(_QWORD*)(a1 + 16) += 16i64;
		v6 = sub_1400578C0(a1);
		v7 = *(_QWORD*)(a1 + 32);
		v70 = v6;
		v64 = off_140B569F0;
		v8 = *(_QWORD*)(v7 + 112);
		v66 = a1;
		v67 = 1;
		if (*(_QWORD*)(v7 + 120) >= v8)
			sub_14005E2C0(a1);
		v9 = *(_QWORD*)(a1 + 16);
		v10 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v9 + 8) = 5;
		*(_QWORD*)v9 = v10;
		*(_QWORD*)(a1 + 16) += 16i64;
		v65 = sub_1400578C0(a1);
		v11 = (float*)(v3 + 48);
		v12 = (_QWORD*)(v3 + 16);
		v13 = 4i64;
		do
		{
			if (*v12)
				v14 = 0.0;
			else
				v14 = *v11;
			sub_1400FAF20((__int64)&v64, v14);
			++v12;
			++v11;
			--v13;
		} while (v13);
		v15 = 1;
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v16 = *(_QWORD*)(a1 + 16);
		v17 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v16 + 8) = 5;
		*(_QWORD*)v16 = v17;
		*(_QWORD*)(a1 + 16) += 16i64;
		v18 = sub_1400578C0(a1);
		v19 = (int*)(v3 + 64);
		v20 = 4i64;
		v21 = v18 - 1;
		do
		{
			v22 = *v19;
			v23 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
			if (v21 >= *(_DWORD*)(v23 + 56))
			{
				if ((double)v18 == 0.0)
				{
					v24 = *(_DWORD**)(v23 + 32);
				}
				else
				{
					v73 = (double)v18;
					v24 = (_DWORD*)(*(_QWORD*)(v23 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v73) + HIDWORD(v73)) % (((1i64 << *(_BYTE*)(v23 + 11)) - 1) | 1)));
				}
				while (v24[6] != 3 || (double)v18 != *((double*)v24 + 2))
				{
					v24 = (_DWORD*)*((_QWORD*)v24 + 4);
					if (!v24)
					{
						v24 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v24 = (_DWORD*)(*(_QWORD*)(v23 + 24) + 16i64 * (v18 - 1));
			}
			v25 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v25 = *(_QWORD*)v24;
			*(_DWORD*)(v25 + 8) = v24[2];
			*(_QWORD*)(a1 + 16) += 16i64;
			v26 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v26 + 8) = 3;
			v27 = v15++;
			*(double*)v26 = (double)v27;
			*(_QWORD*)(a1 + 16) += 16i64;
			v28 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v28 + 8) = 3;
			*(double*)v28 = (double)v22;
			v29 = *(_QWORD*)(a1 + 16) + 16i64;
			*(_QWORD*)(a1 + 16) = v29;
			sub_14005EA50(a1, (__int64*)(v29 - 48), (int*)(v29 - 32), (unsigned int*)(v29 - 16));
			*(_QWORD*)(a1 + 16) -= 48i64;
			++v19;
			v21 = v18 - 1;
			--v20;
		} while (v20);
		v30 = v70;
		v31 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
		v32 = v70 - 1;
		if ((unsigned int)(v70 - 1) >= *(_DWORD*)(v31 + 56))
		{
			if ((double)v70 == 0.0)
			{
				v33 = *(_DWORD**)(v31 + 32);
			}
			else
			{
				v74 = (double)v70;
				v33 = (_DWORD*)(*(_QWORD*)(v31 + 32)
					+ 40 * ((unsigned int)(LODWORD(v74) + HIDWORD(v74)) % (((1i64 << *(_BYTE*)(v31 + 11)) - 1) | 1)));
			}
			while (v33[6] != 3 || (double)v70 != *((double*)v33 + 2))
			{
				v33 = (_DWORD*)*((_QWORD*)v33 + 4);
				if (!v33)
				{
					v33 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v33 = (_DWORD*)(*(_QWORD*)(v31 + 24) + 16i64 * (v70 - 1));
		}
		v34 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v34 = *(_QWORD*)v33;
		*(_DWORD*)(v34 + 8) = v33[2];
		*(_QWORD*)(a1 + 16) += 16i64;
		v35 = -1i64;
		v36 = (unsigned __int64*)sub_14018F0E0(&v68, L"fPoints")[1];
		if (v36)
		{
			v37 = -1i64;
			do
				++v37;
			while (*((_BYTE*)v36 + v37));
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v38 = *(_QWORD*)(a1 + 16);
			v39 = sub_140062650(a1, v36, v37);
			*(_DWORD*)(v38 + 8) = 4;
			*(_QWORD*)v38 = v39;
			v30 = v70;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		}
		v40 = v69;
		*(_QWORD*)(a1 + 16) += 16i64;
		if (v40)
			sub_14018B900(v40, 0);
		v41 = v65;
		v42 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
		if ((unsigned int)(v65 - 1) >= *(_DWORD*)(v42 + 56))
		{
			if ((double)v65 == 0.0)
			{
				v43 = *(_DWORD**)(v42 + 32);
			}
			else
			{
				v75 = (double)v65;
				v43 = (_DWORD*)(*(_QWORD*)(v42 + 32)
					+ 40 * ((unsigned int)(LODWORD(v75) + HIDWORD(v75)) % (((1i64 << *(_BYTE*)(v42 + 11)) - 1) | 1)));
			}
			while (v43[6] != 3 || (double)v65 != *((double*)v43 + 2))
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
			v43 = (_DWORD*)(*(_QWORD*)(v42 + 24) + 16i64 * (v65 - 1));
		}
		v44 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v44 = *(_QWORD*)v43;
		*(_DWORD*)(v44 + 8) = v43[2];
		v45 = *(_QWORD*)(a1 + 16) + 16i64;
		*(_QWORD*)(a1 + 16) = v45;
		sub_14005EA50(a1, (__int64*)(v45 - 48), (int*)(v45 - 32), (unsigned int*)(v45 - 16));
		v46 = *(_QWORD*)(a1 + 32);
		v47 = *(_QWORD*)(a1 + 16) - 48i64;
		*(_QWORD*)(a1 + 16) = v47;
		v48 = *(_QWORD*)(v46 + 160);
		if (v32 >= *(_DWORD*)(v48 + 56))
		{
			if ((double)v30 == 0.0)
			{
				v49 = *(_DWORD**)(v48 + 32);
			}
			else
			{
				v76 = (double)v30;
				v49 = (_DWORD*)(*(_QWORD*)(v48 + 32)
					+ 40 * ((unsigned int)(LODWORD(v76) + HIDWORD(v76)) % (((1i64 << *(_BYTE*)(v48 + 11)) - 1) | 1)));
			}
			while (v49[6] != 3 || (double)v30 != *((double*)v49 + 2))
			{
				v49 = (_DWORD*)*((_QWORD*)v49 + 4);
				if (!v49)
				{
					v49 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v49 = (_DWORD*)(*(_QWORD*)(v48 + 24) + 16i64 * (v30 - 1));
		}
		*(_QWORD*)v47 = *(_QWORD*)v49;
		*(_DWORD*)(v47 + 8) = v49[2];
		*(_QWORD*)(a1 + 16) += 16i64;
		v50 = (unsigned __int64*)sub_14018F0E0(&v68, L"nOffsets")[1];
		if (v50)
		{
			do
				++v35;
			while (*((_BYTE*)v50 + v35));
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v51 = *(_QWORD*)(a1 + 16);
			v52 = sub_140062650(a1, v50, v35);
			*(_DWORD*)(v51 + 8) = 4;
			*(_QWORD*)v51 = v52;
			v30 = v70;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		}
		v53 = v69;
		*(_QWORD*)(a1 + 16) += 16i64;
		if (v53)
			sub_14018B900(v53, 0);
		v54 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
		if ((unsigned int)(v18 - 1) >= *(_DWORD*)(v54 + 56))
		{
			if ((double)v18 == 0.0)
			{
				v55 = *(_DWORD**)(v54 + 32);
			}
			else
			{
				v71 = (double)v18;
				v55 = (_DWORD*)(*(_QWORD*)(v54 + 32)
					+ 40 * ((unsigned int)(LODWORD(v71) + HIDWORD(v71)) % (((1i64 << *(_BYTE*)(v54 + 11)) - 1) | 1)));
			}
			while (v55[6] != 3 || (double)v18 != *((double*)v55 + 2))
			{
				v55 = (_DWORD*)*((_QWORD*)v55 + 4);
				if (!v55)
				{
					v55 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v55 = (_DWORD*)(*(_QWORD*)(v54 + 24) + 16i64 * (v18 - 1));
		}
		v56 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v56 = *(_QWORD*)v55;
		*(_DWORD*)(v56 + 8) = v55[2];
		v57 = *(_QWORD*)(a1 + 16) + 16i64;
		*(_QWORD*)(a1 + 16) = v57;
		sub_14005EA50(a1, (__int64*)(v57 - 48), (int*)(v57 - 32), (unsigned int*)(v57 - 16));
		v59 = *(_QWORD*)(a1 + 32);
		v60 = *(_QWORD*)(a1 + 16) - 48i64;
		*(_QWORD*)(a1 + 16) = v60;
		v61 = *(_QWORD*)(v59 + 160);
		if (v32 >= *(_DWORD*)(v61 + 56))
		{
			if ((double)v30 == 0.0)
			{
				v62 = *(_DWORD**)(v61 + 32);
			}
			else
			{
				v72 = (double)v30;
				v58 = (unsigned int)(LODWORD(v72) + HIDWORD(v72)) % (((1i64 << *(_BYTE*)(v61 + 11)) - 1) | 1);
				v62 = (_DWORD*)(*(_QWORD*)(v61 + 32) + 40 * v58);
			}
			while (v62[6] != 3 || (double)v30 != *((double*)v62 + 2))
			{
				v62 = (_DWORD*)*((_QWORD*)v62 + 4);
				if (!v62)
				{
					v62 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v62 = (_DWORD*)(*(_QWORD*)(v61 + 24) + 16i64 * (v30 - 1));
		}
		*(_QWORD*)v60 = *(_QWORD*)v62;
		*(_DWORD*)(v60 + 8) = v62[2];
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400579E0(a1, v58, v18);
		if (v66)
			sub_1400579E0(v66, v63, v41);
		sub_1400579E0(a1, v63, v30);
		return 1i64;
	}
	return result;
}
// 14014FCAD: variable 'v58' is possibly undefined
// 14014FCC8: variable 'v63' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A2E5E0: using guessed type wchar_t aFpoints_2[8];
// 140A2E5F0: using guessed type wchar_t aNoffsets_2[9];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

