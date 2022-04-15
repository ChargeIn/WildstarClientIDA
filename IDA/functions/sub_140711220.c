#include "../winhttp.h"

//----- (0000000140711220) ----------------------------------------------------
__int64 __fastcall sub_140711220(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	int v4; // r13d
	__int64 v5; // rbx
	__int64 v6; // rax
	int v7; // r15d
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // r12d
	float v11; // xmm0_4
	__int64 v12; // rcx
	int v13; // ebx
	int v14; // esi
	_QWORD* v15; // rax
	__int64 v16; // rdx
	unsigned __int64 v17; // r14
	unsigned __int64* v18; // rdx
	unsigned __int64 v19; // r8
	__int64 v20; // rcx
	__int64* v21; // rax
	_QWORD* v22; // rax
	__int64 v23; // r10
	unsigned __int64* v24; // rdx
	unsigned __int64 v25; // r8
	__int64 v26; // rcx
	__int64* v27; // rax
	__int64 v28; // rcx
	int v29; // eax
	int v30; // eax
	int v31; // ebx
	int v32; // esi
	_QWORD* v33; // rax
	__int64 v34; // rdx
	unsigned __int64* v35; // rdx
	unsigned __int64 v36; // r8
	__int64 v37; // rcx
	__int64* v38; // rax
	_QWORD* v39; // rax
	__int64 v40; // r10
	unsigned __int64* v41; // rdx
	unsigned __int64 v42; // r8
	__int64 v43; // rcx
	__int64* v44; // rax
	__int64 v45; // rcx
	int v46; // eax
	int v47; // eax
	int v48; // ebx
	int v49; // esi
	_QWORD* v50; // rax
	__int64 v51; // rdx
	unsigned __int64* v52; // rdx
	unsigned __int64 v53; // r8
	__int64 v54; // rcx
	__int64* v55; // rax
	_QWORD* v56; // rax
	__int64 v57; // r10
	unsigned __int64* v58; // rdx
	unsigned __int64 v59; // r8
	__int64 v60; // rcx
	__int64* v61; // rax
	__int64 v62; // rax
	int v63; // r13d
	__int64 v64; // r8
	float v65; // xmm6_4
	float v66; // xmm7_4
	__int64 v67; // rcx
	unsigned int v68; // ecx
	_QWORD* v69; // rax
	__int64 v70; // r11
	unsigned __int64* v71; // rdx
	unsigned __int64 v72; // r8
	__int64 v73; // rax
	__int64* v74; // rax
	unsigned int v75; // ecx
	_QWORD* v76; // rax
	__int64 v77; // rdx
	unsigned __int64* v78; // rdx
	unsigned __int64 v79; // r8
	__int64 v80; // rax
	__int64* v81; // rax
	__int64 v82; // rcx
	unsigned __int64 v83; // rax
	__int64 v84; // rbx
	__int64 v85; // rax
	int v86; // r12d
	__int64 v87; // rcx
	_QWORD* v88; // rax
	__int64 v89; // rdx
	unsigned __int64* v90; // r15
	unsigned __int64 v91; // rsi
	__int64 v92; // rbx
	__int64 v93; // rax
	__int64 v94; // rcx
	_QWORD* v95; // rax
	__int64 v96; // rdx
	_QWORD* v97; // rax
	__int64 v98; // r10
	unsigned __int64* v99; // rsi
	__int64 v100; // rbx
	__int64 v101; // rax
	__int64 v102; // rcx
	_QWORD* v103; // rax
	__int64 v104; // rdx
	_QWORD* v105; // rax
	__int64 v106; // rdx
	__int64 v107; // rdx
	__int64 v108; // rdx
	__int64 v109; // rdx
	int v111; // [rsp+28h] [rbp-59h]
	__int64(__fastcall * *v112)(); // [rsp+30h] [rbp-51h] BYREF
	__int64 v113; // [rsp+38h] [rbp-49h]
	__int64 v114; // [rsp+40h] [rbp-41h]
	int v115; // [rsp+48h] [rbp-39h]
	__int64 v116; // [rsp+50h] [rbp-31h] BYREF
	__int64 v117; // [rsp+58h] [rbp-29h]
	int v118; // [rsp+E8h] [rbp+67h]
	int v119; // [rsp+100h] [rbp+7Fh]

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v4 = sub_1400578C0(a1);
	v119 = v4;
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v5 = *(_QWORD*)(a1 + 16);
	v6 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	*(_QWORD*)(a1 + 16) += 16i64;
	v7 = sub_1400578C0(a1);
	v111 = v7;
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v8 = *(_QWORD*)(a1 + 16);
	v9 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v8 + 8) = 5;
	*(_QWORD*)v8 = v9;
	*(_QWORD*)(a1 + 16) += 16i64;
	v10 = sub_1400578C0(a1);
	v118 = v10;
	v11 = sub_1403AC060(qword_140C65898 + 7160, 4, 3u);
	v12 = (unsigned int)dword_140DC4DAC;
	if ((dword_140DC4DAC & 1) == 0)
	{
		v12 = dword_140DC4DAC | 1u;
		dword_140DC4DB4 = 0;
		dword_140DC4DBC = 0;
		dword_140DC4DC4 = 0;
		dword_140DC4DCC = 0;
		dword_140DC4DD4 = 0;
		dword_140DC4DAC |= 1u;
	}
	v13 = (unsigned int)sub_14079D2F0(v12, 0);
	v14 = (int)(float)((float)v13 * v11);
	v15 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v7);
	v16 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v16 = *v15;
	*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v17 = -1i64;
	v18 = (unsigned __int64*)sub_14018F0E0(&v112, L"nBronze")[1];
	if (v18)
	{
		v19 = -1i64;
		do
			++v19;
		while (*((_BYTE*)v18 + v19));
		sub_140058710(a1, v18, v19);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v113)
		sub_14018B900(v113, 0);
	v20 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v20 + 8) = 3;
	*(double*)v20 = (double)v13;
	*(_QWORD*)(a1 + 16) += 16i64;
	v21 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v21, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 48i64;
	v22 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v4);
	*(_QWORD*)v23 = *v22;
	*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v24 = (unsigned __int64*)sub_14018F0E0(&v112, L"nBronze")[1];
	if (v24)
	{
		v25 = -1i64;
		do
			++v25;
		while (*((_BYTE*)v24 + v25));
		sub_140058710(a1, v24, v25);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v113)
		sub_14018B900(v113, 0);
	v26 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v26 + 8) = 3;
	*(double*)v26 = (double)v14;
	*(_QWORD*)(a1 + 16) += 16i64;
	v27 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v27, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	v29 = dword_140DC4DAC;
	*(_QWORD*)(a1 + 16) -= 48i64;
	if ((v29 & 1) == 0)
	{
		dword_140DC4DAC = v29 | 1;
		dword_140DC4DB4 = 0;
		dword_140DC4DBC = 0;
		dword_140DC4DC4 = 0;
		dword_140DC4DCC = 0;
		dword_140DC4DD4 = 0;
	}
	v30 = (unsigned int)sub_14079D2F0(v28, 1);
	v31 = v30 + v13;
	v32 = (int)(float)((float)v30 * v11) + v14;
	v33 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v7);
	v34 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v34 = *v33;
	*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v35 = (unsigned __int64*)sub_14018F0E0(&v112, L"nSilver")[1];
	if (v35)
	{
		v36 = -1i64;
		do
			++v36;
		while (*((_BYTE*)v35 + v36));
		sub_140058710(a1, v35, v36);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v113)
		sub_14018B900(v113, 0);
	v37 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v37 + 8) = 3;
	*(double*)v37 = (double)v31;
	*(_QWORD*)(a1 + 16) += 16i64;
	v38 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v38, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 48i64;
	v39 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v4);
	*(_QWORD*)v40 = *v39;
	*(_DWORD*)(v40 + 8) = *((_DWORD*)v39 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v41 = (unsigned __int64*)sub_14018F0E0(&v112, L"nSilver")[1];
	if (v41)
	{
		v42 = -1i64;
		do
			++v42;
		while (*((_BYTE*)v41 + v42));
		sub_140058710(a1, v41, v42);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v113)
		sub_14018B900(v113, 0);
	v43 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v43 + 8) = 3;
	*(double*)v43 = (double)v32;
	*(_QWORD*)(a1 + 16) += 16i64;
	v44 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v44, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	v46 = dword_140DC4DAC;
	*(_QWORD*)(a1 + 16) -= 48i64;
	if ((v46 & 1) == 0)
	{
		dword_140DC4DAC = v46 | 1;
		dword_140DC4DB4 = 0;
		dword_140DC4DBC = 0;
		dword_140DC4DC4 = 0;
		dword_140DC4DCC = 0;
		dword_140DC4DD4 = 0;
	}
	v47 = (unsigned int)sub_14079D2F0(v45, 2);
	v48 = v47 + v31;
	v49 = (int)(float)((float)v47 * v11) + v32;
	v50 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v7);
	v51 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v51 = *v50;
	*(_DWORD*)(v51 + 8) = *((_DWORD*)v50 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v52 = (unsigned __int64*)sub_14018F0E0(&v112, L"nGold")[1];
	if (v52)
	{
		v53 = -1i64;
		do
			++v53;
		while (*((_BYTE*)v52 + v53));
		sub_140058710(a1, v52, v53);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v113)
		sub_14018B900(v113, 0);
	v54 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v54 + 8) = 3;
	*(double*)v54 = (double)v48;
	*(_QWORD*)(a1 + 16) += 16i64;
	v55 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v55, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 48i64;
	v56 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v4);
	*(_QWORD*)v57 = *v56;
	*(_DWORD*)(v57 + 8) = *((_DWORD*)v56 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v58 = (unsigned __int64*)sub_14018F0E0(&v112, L"nGold")[1];
	if (v58)
	{
		v59 = -1i64;
		do
			++v59;
		while (*((_BYTE*)v58 + v59));
		sub_140058710(a1, v58, v59);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v113)
		sub_14018B900(v113, 0);
	v60 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v60 + 8) = 3;
	*(double*)v60 = (double)v49;
	*(_QWORD*)(a1 + 16) += 16i64;
	v61 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v61, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 48i64;
	v62 = sub_1403ABB90(qword_140C65898 + 7160, 4, 3u);
	v63 = 0;
	if (v62)
	{
		v64 = *(_QWORD*)(v62 + 24);
		v65 = 0.0;
		v66 = 0.0;
		if (v64)
		{
			v67 = *(_QWORD*)(v62 + 16);
			do
			{
				if (*(_DWORD*)v67 == 5)
				{
					if (*(_DWORD*)(v67 + 4) == 44)
						v66 = v66 + *(float*)(v67 + 12);
				}
				else if (*(_DWORD*)v67 == 6)
				{
					v65 = v65 + *(float*)(v67 + 12);
				}
				v67 += 16i64;
				--v64;
			} while (v64);
		}
		v68 = 0;
		if (v65 < 0.0)
			v68 = 0x80000000;
		if ((int)abs32(v68 - LODWORD(v65)) > 84)
		{
			v63 = 1;
			v69 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v10);
			*(_QWORD*)v70 = *v69;
			*(_DWORD*)(v70 + 8) = *((_DWORD*)v69 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			v71 = (unsigned __int64*)sub_14018F0E0(&v112, L"fSignature")[1];
			if (v71)
			{
				v72 = -1i64;
				do
					++v72;
				while (*((_BYTE*)v71 + v72));
				sub_140058710(a1, v71, v72);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
				*(_QWORD*)(a1 + 16) += 16i64;
			}
			if (v113)
				sub_14018B900(v113, 0);
			v73 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v73 + 8) = 3;
			*(double*)v73 = v65;
			*(_QWORD*)(a1 + 16) += 16i64;
			v74 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v74, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 48i64;
		}
		v75 = 0;
		if (v66 < 0.0)
			v75 = 0x80000000;
		if ((int)abs32(v75 - LODWORD(v66)) > 84)
		{
			v63 = 1;
			v76 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v10);
			v77 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v77 = *v76;
			*(_DWORD*)(v77 + 8) = *((_DWORD*)v76 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			v78 = (unsigned __int64*)sub_14018F0E0(&v112, L"fLoyalty")[1];
			if (v78)
			{
				v79 = -1i64;
				do
					++v79;
				while (*((_BYTE*)v78 + v79));
				sub_140058710(a1, v78, v79);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
				*(_QWORD*)(a1 + 16) += 16i64;
			}
			if (v113)
				sub_14018B900(v113, 0);
			v80 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v80 + 8) = 3;
			*(double*)v80 = v66;
			*(_QWORD*)(a1 + 16) += 16i64;
			v81 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v81, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 48i64;
		}
	}
	v82 = *(_QWORD*)(a1 + 32);
	v112 = off_140B569F0;
	v83 = *(_QWORD*)(v82 + 112);
	v114 = a1;
	v115 = 1;
	if (*(_QWORD*)(v82 + 120) >= v83)
		sub_14005E2C0(a1);
	v84 = *(_QWORD*)(a1 + 16);
	v85 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v84 + 8) = 5;
	*(_QWORD*)v84 = v85;
	*(_QWORD*)(a1 + 16) += 16i64;
	v86 = sub_1400578C0(a1);
	v87 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
	LODWORD(v113) = v86;
	v88 = sub_14005C3C0(v87, v86);
	v89 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v89 = *v88;
	*(_DWORD*)(v89 + 8) = *((_DWORD*)v88 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v90 = (unsigned __int64*)sub_14018F0E0(&v116, L"tFinal")[1];
	if (v90)
	{
		v91 = -1i64;
		do
			++v91;
		while (*((_BYTE*)v90 + v91));
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v92 = *(_QWORD*)(a1 + 16);
		v93 = sub_140062650(a1, v90, v91);
		*(_DWORD*)(v92 + 8) = 4;
		*(_QWORD*)v92 = v93;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	}
	v94 = v117;
	*(_QWORD*)(a1 + 16) += 16i64;
	if (v94)
		sub_14018B900(v94, 0);
	v95 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v119);
	v96 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v96 = *v95;
	*(_DWORD*)(v96 + 8) = *((_DWORD*)v95 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_14005EA50(
		a1,
		(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
		(int*)(*(_QWORD*)(a1 + 16) - 32i64),
		(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 48i64;
	v97 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v86);
	*(_QWORD*)v98 = *v97;
	*(_DWORD*)(v98 + 8) = *((_DWORD*)v97 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v99 = (unsigned __int64*)sub_14018F0E0(&v116, L"tBase")[1];
	if (v99)
	{
		do
			++v17;
		while (*((_BYTE*)v99 + v17));
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v100 = *(_QWORD*)(a1 + 16);
		v101 = sub_140062650(a1, v99, v17);
		*(_DWORD*)(v100 + 8) = 4;
		*(_QWORD*)v100 = v101;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	}
	v102 = v117;
	*(_QWORD*)(a1 + 16) += 16i64;
	if (v102)
		sub_14018B900(v102, 0);
	v103 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v111);
	v104 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v104 = *v103;
	*(_DWORD*)(v104 + 8) = *((_DWORD*)v103 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_14005EA50(
		a1,
		(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
		(int*)(*(_QWORD*)(a1 + 16) - 32i64),
		(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 48i64;
	if (v63)
		sub_1400FB2A0((__int64)&v112, (__int64)L"tBonuses", v118);
	v105 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v86);
	v106 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v106 = *v105;
	*(_DWORD*)(v106 + 8) = *((_DWORD*)v105 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v106, v86);
	sub_1400579E0(a1, v107, v118);
	sub_1400579E0(a1, v108, v111);
	sub_1400579E0(a1, v109, v119);
	return 1i64;
}
// 140711459: variable 'v23' is possibly undefined
// 140711531: variable 'v28' is possibly undefined
// 14071162A: variable 'v40' is possibly undefined
// 140711701: variable 'v45' is possibly undefined
// 140711800: variable 'v57' is possibly undefined
// 14071195E: variable 'v70' is possibly undefined
// 140711C5B: variable 'v98' is possibly undefined
// 140711D81: variable 'v107' is possibly undefined
// 140711D8C: variable 'v108' is possibly undefined
// 140711D97: variable 'v109' is possibly undefined
// 140B45750: using guessed type wchar_t aTbase[6];
// 140B45760: using guessed type wchar_t aTfinal[7];
// 140B45770: using guessed type wchar_t aFloyalty[9];
// 140B45788: using guessed type wchar_t aFsignature[11];
// 140B457A0: using guessed type wchar_t aNgold_0[6];
// 140B457B0: using guessed type wchar_t aNgold[6];
// 140B457C0: using guessed type wchar_t aNsilver_0[8];
// 140B457D0: using guessed type wchar_t aNsilver[8];
// 140B457E0: using guessed type wchar_t aNbronze_0[8];
// 140B457F0: using guessed type wchar_t aNbronze[8];
// 140B45958: using guessed type wchar_t aTbonuses[9];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC4DAC: using guessed type int dword_140DC4DAC;
// 140DC4DB4: using guessed type int dword_140DC4DB4;
// 140DC4DBC: using guessed type int dword_140DC4DBC;
// 140DC4DC4: using guessed type int dword_140DC4DC4;
// 140DC4DCC: using guessed type int dword_140DC4DCC;
// 140DC4DD4: using guessed type int dword_140DC4DD4;

