#include "../winhttp.h"

//----- (00000001405022C0) ----------------------------------------------------
__int64 __fastcall sub_1405022C0(_QWORD* a1)
{
	__int64 v1; // rdi
	unsigned int* v2; // rbx
	__int64 v3; // rcx
	unsigned __int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	int v7; // eax
	__int64 v8; // r14
	__int64 v9; // rsi
	int v10; // r10d
	int v11; // r13d
	__int64 v12; // rsi
	__int64 v13; // rbx
	__int64 v14; // rax
	int v15; // eax
	__int64 v16; // rsi
	__int64 v17; // rbx
	int v18; // r12d
	_QWORD* v19; // rax
	__int64 v20; // rdx
	unsigned __int64* v21; // r14
	unsigned __int64 v22; // rsi
	__int64 v23; // rbx
	__int64 v24; // rax
	__int64 v25; // rcx
	__int64 v26; // rax
	__int64* v27; // rax
	int v28; // r12d
	_QWORD* v29; // rax
	__int64 v30; // r10
	unsigned __int64* v31; // r14
	unsigned __int64 v32; // rsi
	__int64 v33; // rbx
	__int64 v34; // rax
	__int64 v35; // rcx
	__int64 v36; // rax
	__int64* v37; // rax
	_QWORD* v38; // rax
	__int64 v39; // r10
	__int64 v40; // rdx
	unsigned __int16* v41; // r11
	int v42; // r12d
	_QWORD* v43; // rax
	__int64 v44; // r10
	unsigned __int64* v45; // r14
	unsigned __int64 v46; // rsi
	__int64 v47; // rbx
	__int64 v48; // rax
	__int64 v49; // rcx
	__int64 v50; // rax
	__int64* v51; // rax
	int v52; // r12d
	_QWORD* v53; // rax
	__int64 v54; // r10
	unsigned __int64* v55; // r14
	unsigned __int64 v56; // rsi
	__int64 v57; // rbx
	__int64 v58; // rax
	__int64 v59; // rcx
	__int64 v60; // rax
	__int64* v61; // rax
	_QWORD* v62; // rax
	__int64 v63; // r10
	__int64 v64; // rdx
	unsigned __int16* v65; // r11
	__int64 v66; // rdx
	__int64* v67; // rax
	__int64 v68; // r8
	__int64 v69; // rdx
	int v70; // r10d
	__int64* v71; // rbx
	__int64 v72; // rcx
	__int64* v73; // rbx
	__int64 v74; // rcx
	int v76; // [rsp+30h] [rbp-D0h]
	unsigned int v77; // [rsp+34h] [rbp-CCh]
	__int64 v78; // [rsp+38h] [rbp-C8h]
	char v79[8]; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v80; // [rsp+48h] [rbp-B8h]
	__int64 v81; // [rsp+50h] [rbp-B0h]
	__int64 v82; // [rsp+58h] [rbp-A8h]
	unsigned __int64 v83; // [rsp+60h] [rbp-A0h]
	__int64 v84; // [rsp+68h] [rbp-98h] BYREF
	__int64 v85; // [rsp+70h] [rbp-90h]
	__int64(__fastcall * *v86)(); // [rsp+88h] [rbp-78h] BYREF
	int v87; // [rsp+90h] [rbp-70h]
	__int64 v88; // [rsp+98h] [rbp-68h]
	int v89; // [rsp+A0h] [rbp-60h]
	__int64 v90[50]; // [rsp+B0h] [rbp-50h] BYREF
	char v91; // [rsp+248h] [rbp+148h] BYREF

	v1 = (__int64)a1;
	v2 = (unsigned int*)sub_140056AB0(a1, 1u);
	if (v2)
	{
		v80 = 0i64;
		v81 = 0i64;
		v82 = 0i64;
		sub_140503450((__int64)v90);
		sub_140503600((__int64)v90, v2[2], v2[3], v2[4], v2[5]);
		sub_140505590((__int64)v90, (__int64)v79, (int)*v2);
		v3 = *(_QWORD*)(v1 + 32);
		v86 = off_140B569F0;
		v4 = *(_QWORD*)(v3 + 112);
		v88 = v1;
		v89 = 1;
		if (*(_QWORD*)(v3 + 120) >= v4)
			sub_14005E2C0(v1);
		v5 = *(_QWORD*)(v1 + 16);
		v6 = sub_14005C1B0(v1, 0, 0);
		*(_DWORD*)(v5 + 8) = 5;
		*(_QWORD*)v5 = v6;
		*(_QWORD*)(v1 + 16) += 16i64;
		v7 = sub_1400578C0(v1);
		v8 = v81;
		v9 = v80;
		v10 = v7;
		v87 = v7;
		v77 = 0;
		v11 = 3;
		v83 = (v81 - v80) / 88;
		if (v83)
		{
			v12 = 0i64;
			do
			{
				if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
					sub_14005E2C0(v1);
				v13 = *(_QWORD*)(v1 + 16);
				v14 = sub_14005C1B0(v1, 0, 0);
				*(_DWORD*)(v13 + 8) = 5;
				*(_QWORD*)v13 = v14;
				*(_QWORD*)(v1 + 16) += 16i64;
				v15 = sub_1400578C0(v1);
				v16 = 88 * v12;
				v17 = v80;
				v18 = *(_DWORD*)(v16 + v80);
				v76 = v15;
				v78 = v16;
				v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v15);
				v20 = *(_QWORD*)(v1 + 16);
				*(_QWORD*)v20 = *v19;
				*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
				*(_QWORD*)(v1 + 16) += 16i64;
				v21 = (unsigned __int64*)sub_14018F0E0(&v84, L"nAmount")[1];
				if (v21)
				{
					v22 = -1i64;
					do
						++v22;
					while (*((_BYTE*)v21 + v22));
					if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
						sub_14005E2C0(v1);
					v23 = *(_QWORD*)(v1 + 16);
					v24 = sub_140062650(v1, v21, v22);
					v16 = v78;
					*(_DWORD*)(v23 + 8) = 4;
					*(_QWORD*)v23 = v24;
					v17 = v80;
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
				}
				v25 = v85;
				*(_QWORD*)(v1 + 16) += 16i64;
				if (v25)
					sub_14018B900(v25, 0);
				v26 = *(_QWORD*)(v1 + 16);
				*(_DWORD*)(v26 + 8) = 3;
				*(double*)v26 = (double)v18;
				*(_QWORD*)(v1 + 16) += 16i64;
				v27 = (__int64*)sub_1400580E0(v1, -3);
				sub_14005EA50(v1, v27, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
				*(_QWORD*)(v1 + 16) -= 48i64;
				v28 = *(_DWORD*)(v16 + v17 + 8);
				v29 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v76);
				*(_QWORD*)v30 = *v29;
				*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
				*(_QWORD*)(v1 + 16) += 16i64;
				v31 = (unsigned __int64*)sub_14018F0E0(&v84, L"nCapAmount")[1];
				if (v31)
				{
					v32 = -1i64;
					do
						++v32;
					while (*((_BYTE*)v31 + v32));
					if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
						sub_14005E2C0(v1);
					v33 = *(_QWORD*)(v1 + 16);
					v34 = sub_140062650(v1, v31, v32);
					v16 = v78;
					*(_DWORD*)(v33 + 8) = 4;
					*(_QWORD*)v33 = v34;
					v17 = v80;
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
				}
				v35 = v85;
				*(_QWORD*)(v1 + 16) += 16i64;
				if (v35)
					sub_14018B900(v35, 0);
				v36 = *(_QWORD*)(v1 + 16);
				*(_DWORD*)(v36 + 8) = 3;
				*(double*)v36 = (double)v28;
				*(_QWORD*)(v1 + 16) += 16i64;
				v37 = (__int64*)sub_1400580E0(v1, -3);
				sub_14005EA50(v1, v37, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
				*(_QWORD*)(v1 + 16) -= 48i64;
				v38 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v76);
				*(_QWORD*)v39 = *v38;
				*(_DWORD*)(v39 + 8) = *((_DWORD*)v38 + 2);
				*(_QWORD*)(v1 + 16) += 16i64;
				sub_1400F0870(v1, v40, L"strName", v41);
				*(_QWORD*)(v1 + 16) -= 16i64;
				v42 = *(_DWORD*)(v16 + v17 + 48);
				v43 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v76);
				*(_QWORD*)v44 = *v43;
				*(_DWORD*)(v44 + 8) = *((_DWORD*)v43 + 2);
				*(_QWORD*)(v1 + 16) += 16i64;
				v45 = (unsigned __int64*)sub_14018F0E0(&v84, L"nRate")[1];
				if (v45)
				{
					v46 = -1i64;
					do
						++v46;
					while (*((_BYTE*)v45 + v46));
					if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
						sub_14005E2C0(v1);
					v47 = *(_QWORD*)(v1 + 16);
					v48 = sub_140062650(v1, v45, v46);
					v16 = v78;
					*(_DWORD*)(v47 + 8) = 4;
					*(_QWORD*)v47 = v48;
					v17 = v80;
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
				}
				v49 = v85;
				*(_QWORD*)(v1 + 16) += 16i64;
				if (v49)
					sub_14018B900(v49, 0);
				v50 = *(_QWORD*)(v1 + 16);
				*(_DWORD*)(v50 + 8) = 3;
				*(double*)v50 = (double)v42;
				*(_QWORD*)(v1 + 16) += 16i64;
				v51 = (__int64*)sub_1400580E0(v1, -3);
				sub_14005EA50(v1, v51, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
				*(_QWORD*)(v1 + 16) -= 48i64;
				v52 = *(_DWORD*)(v16 + v17 + 52);
				v53 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v76);
				*(_QWORD*)v54 = *v53;
				*(_DWORD*)(v54 + 8) = *((_DWORD*)v53 + 2);
				*(_QWORD*)(v1 + 16) += 16i64;
				v55 = (unsigned __int64*)sub_14018F0E0(&v84, L"nTextWidth")[1];
				if (v55)
				{
					v56 = -1i64;
					do
						++v56;
					while (*((_BYTE*)v55 + v56));
					if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
						sub_14005E2C0(v1);
					v57 = *(_QWORD*)(v1 + 16);
					v58 = sub_140062650(v1, v55, v56);
					*(_DWORD*)(v57 + 8) = 4;
					*(_QWORD*)v57 = v58;
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
				}
				v59 = v85;
				*(_QWORD*)(v1 + 16) += 16i64;
				if (v59)
					sub_14018B900(v59, 0);
				v60 = *(_QWORD*)(v1 + 16);
				*(_DWORD*)(v60 + 8) = 3;
				*(double*)v60 = (double)v52;
				*(_QWORD*)(v1 + 16) += 16i64;
				v61 = (__int64*)sub_1400580E0(v1, -3);
				sub_14005EA50(v1, v61, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
				*(_QWORD*)(v1 + 16) -= 48i64;
				v62 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v76);
				*(_QWORD*)v63 = *v62;
				*(_DWORD*)(v63 + 8) = *((_DWORD*)v62 + 2);
				*(_QWORD*)(v1 + 16) += 16i64;
				sub_1400F0870(v1, v64, L"strSprite", v65);
				*(_QWORD*)(v1 + 16) -= 16i64;
				sub_1400FB1D0((__int64)&v86);
				sub_1400579E0(v1, v66, v76);
				v12 = ++v77;
			} while (v77 < v83);
			v1 = v88;
			v10 = v87;
			v9 = v80;
			v8 = v81;
		}
		v67 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v10);
		v68 = *(_QWORD*)(v1 + 16);
		v69 = *v67;
		*(_QWORD*)v68 = *v67;
		*(_DWORD*)(v68 + 8) = *((_DWORD*)v67 + 2);
		*(_QWORD*)(v1 + 16) += 16i64;
		sub_1400579E0(v1, v69, v70);
		v71 = (__int64*)&v91;
		v90[0] = (__int64)off_140B6A420;
		do
		{
			v72 = *(v71 - 6);
			v71 -= 11;
			if (v72)
				sub_14018B900(v72, 0);
			if (*v71)
				sub_14018B900(*v71, 0);
			--v11;
		} while (v11 >= 0);
		if (v9 != v8)
		{
			v73 = (__int64*)(v9 + 24);
			do
			{
				v74 = v73[5];
				if (v74)
					sub_14018B900(v74, 0);
				if (*v73)
					sub_14018B900(*v73, 0);
				v73 += 11;
			} while (v73 - 3 != (__int64*)v8);
		}
		if (v9)
			sub_14018B900(v9, 0);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
		*(_QWORD*)(v1 + 16) += 16i64;
	}
	return 1i64;
}
// 140502588: variable 'v30' is possibly undefined
// 140502688: variable 'v39' is possibly undefined
// 14050269A: variable 'v40' is possibly undefined
// 14050269A: variable 'v41' is possibly undefined
// 1405026CB: variable 'v44' is possibly undefined
// 1405027C5: variable 'v54' is possibly undefined
// 1405028BF: variable 'v63' is possibly undefined
// 1405028D1: variable 'v64' is possibly undefined
// 1405028D1: variable 'v65' is possibly undefined
// 1405028EC: variable 'v66' is possibly undefined
// 140502955: variable 'v70' is possibly undefined
// 140B0FE00: using guessed type wchar_t aStrsprite_1[10];
// 140B0FE18: using guessed type wchar_t aStrname_28[8];
// 140B0FE28: using guessed type wchar_t aNcapamount[11];
// 140B0FE40: using guessed type wchar_t aNtextwidth[11];
// 140B0FE58: using guessed type wchar_t aNrate[6];
// 140B0FE90: using guessed type wchar_t aNamount[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B6A420: using guessed type __int64 (__fastcall *off_140B6A420[3])();
// 1405022C0: using guessed type char var_230[8];

