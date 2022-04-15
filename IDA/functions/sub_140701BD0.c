#include "../winhttp.h"

//----- (0000000140701BD0) ----------------------------------------------------
__int64 __fastcall sub_140701BD0(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	int v4; // r14d
	int* v5; // rsi
	double v6; // xmm0_8
	_QWORD* v7; // rax
	__int64 v8; // rdx
	unsigned __int64* v9; // rdx
	unsigned __int64 v10; // r8
	__int64 v11; // rax
	__int64* v12; // rax
	_QWORD* v13; // rax
	__int64 v14; // rdx
	int v15; // r10d
	int v16; // ebx
	_QWORD* v17; // rax
	__int64 v18; // rdx
	unsigned __int64* v19; // rdx
	unsigned __int64 v20; // r8
	_DWORD* v21; // rcx
	__int64* v22; // rax
	__int64 v23; // rbx
	__int64 v24; // rax
	int v25; // r13d
	__int64 v26; // r12
	_QWORD* v27; // rax
	__int64 v28; // rdx
	int v29; // r10d
	_QWORD* v30; // rax
	__int64 v31; // r10
	__int64 v32; // rdx
	int v33; // r11d
	__int64 v34; // rcx
	unsigned __int64 v35; // rax
	__int64 v36; // rbx
	__int64 v37; // rax
	__int64* v38; // r14
	unsigned int i; // esi
	__int64 v40; // rbx
	__int64 v41; // rcx
	unsigned __int64 v42; // rax
	__int64 v43; // rax
	__int64 v44; // r8
	__int64 v45; // rax
	__int64 v46; // rcx
	unsigned __int64 v47; // rcx
	__int64 v48; // rbx
	__int64 v49; // rax
	__int64 v50; // r9
	__int64 v51; // r9
	_DWORD* v52; // rdx
	__int64 v53; // rcx
	unsigned __int64* v54; // r14
	unsigned __int64 v55; // rsi
	__int64 v56; // rbx
	__int64 v57; // rax
	__int64 v58; // r9
	_DWORD* v59; // rdx
	__int64 v60; // rcx
	__int64 v61; // r8
	__int64 v62; // rbx
	__int64 v63; // rax
	int v64; // r13d
	int v65; // r14d
	__int64* v66; // r12
	__int64 v67; // r15
	__int64 v68; // rcx
	unsigned __int64 v69; // rax
	__int64 v70; // rax
	__int64 v71; // rsi
	__int64 v72; // rbx
	__int64 v73; // rax
	__int64 v74; // r8
	char v75; // dl
	__int64 v76; // rax
	unsigned __int64 v77; // rax
	__int64 v78; // rbx
	__int64 v79; // rax
	__int64 v80; // r9
	__int64 v81; // r10
	__int64 v82; // r9
	__int64 v83; // r11
	_DWORD* v84; // rcx
	__int64 v85; // rax
	_DWORD* v86; // rax
	__int64 v87; // rdx
	__int64 v88; // r8
	int v89; // r12d
	__int64 v90; // r9
	_DWORD* v91; // rdx
	double v92; // xmm0_8
	__int64 v93; // rcx
	unsigned __int64* v94; // r14
	unsigned __int64 v95; // r15
	unsigned __int64 v96; // rsi
	__int64 v97; // rbx
	__int64 v98; // rax
	__int64 v99; // r9
	_DWORD* v100; // rdx
	__int64 v101; // rcx
	__int64 v102; // r8
	__int64 v103; // r9
	int v104; // ebx
	__int64 v105; // r10
	_DWORD* v106; // rcx
	unsigned __int64* v107; // rsi
	__int64 v108; // rbx
	__int64 v109; // rax
	__int64 v110; // rcx
	_QWORD* v111; // rax
	__int64 v112; // rdx
	__int64 v113; // r8
	_QWORD* v114; // rax
	__int64 v115; // r10
	__int64 v116; // rdx
	__int64 v117; // rdx
	__int64 v118; // rdx
	__int64 v119; // rdx
	__int64 v121; // [rsp+20h] [rbp-60h] BYREF
	int v122; // [rsp+28h] [rbp-58h]
	__int64 v123; // [rsp+30h] [rbp-50h] BYREF
	__int128 v124; // [rsp+38h] [rbp-48h]
	__int64(__fastcall * *v125)(); // [rsp+50h] [rbp-30h] BYREF
	__int64 v126; // [rsp+58h] [rbp-28h]
	_QWORD* v127; // [rsp+60h] [rbp-20h]
	int v128; // [rsp+68h] [rbp-18h]
	int v129; // [rsp+C0h] [rbp+40h]
	int v130; // [rsp+C8h] [rbp+48h]
	double v131; // [rsp+C8h] [rbp+48h]
	double v132; // [rsp+C8h] [rbp+48h]
	double v133; // [rsp+C8h] [rbp+48h]
	double v134; // [rsp+D0h] [rbp+50h]
	double v135; // [rsp+D0h] [rbp+50h]
	double v136; // [rsp+D0h] [rbp+50h]

	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v2 = a1[2];
	v3 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	a1[2] += 16i64;
	v4 = sub_1400578C0((__int64)a1);
	v129 = v4;
	v5 = sub_14054F210();
	v6 = (*(double(__fastcall**)(int*))(*(_QWORD*)v5 + 64i64))(v5);
	v7 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v4);
	v8 = a1[2];
	*(_QWORD*)v8 = *v7;
	*(_DWORD*)(v8 + 8) = *((_DWORD*)v7 + 2);
	a1[2] += 16i64;
	v9 = (unsigned __int64*)sub_14018F0E0(&v125, L"fTimeRemaining")[1];
	if (v9)
	{
		v10 = -1i64;
		do
			++v10;
		while (*((_BYTE*)v9 + v10));
		sub_140058710((__int64)a1, v9, v10);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v126)
		sub_14018B900(v126, 0);
	v11 = a1[2];
	*(_DWORD*)(v11 + 8) = 3;
	*(double*)v11 = *(float*)&v6;
	a1[2] += 16i64;
	v12 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v12, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	(*(void(__fastcall**)(int*))(*(_QWORD*)v5 + 56i64))(v5);
	v13 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v4);
	v14 = a1[2];
	*(_QWORD*)v14 = *v13;
	*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v14, L"ePendingEvent", v15);
	a1[2] -= 16i64;
	v16 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v5 + 72i64))(v5);
	v17 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v4);
	v18 = a1[2];
	*(_QWORD*)v18 = *v17;
	*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
	a1[2] += 16i64;
	v19 = (unsigned __int64*)sub_14018F0E0(&v125, L"bConfirmed")[1];
	if (v19)
	{
		v20 = -1i64;
		do
			++v20;
		while (*((_BYTE*)v19 + v20));
		sub_140058710((__int64)a1, v19, v20);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v126)
		sub_14018B900(v126, 0);
	v21 = (_DWORD*)a1[2];
	v21[2] = 1;
	*v21 = v16 != 0;
	a1[2] += 16i64;
	v22 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v22, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v23 = a1[2];
	v24 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v23 + 8) = 5;
	*(_QWORD*)v23 = v24;
	a1[2] += 16i64;
	v25 = sub_1400578C0((__int64)a1);
	v130 = v25;
	v26 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v5 + 80i64))(v5);
	v27 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v25);
	v28 = a1[2];
	*(_QWORD*)v28 = *v27;
	*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v28, L"nXp", v29);
	a1[2] -= 16i64;
	v30 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v25);
	*(_QWORD*)v31 = *v30;
	*(_DWORD*)(v31 + 8) = *((_DWORD*)v30 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v32, L"nElderPoints", v33);
	a1[2] -= 16i64;
	v34 = a1[4];
	v125 = off_140B569F0;
	v35 = *(_QWORD*)(v34 + 112);
	v127 = a1;
	v128 = 1;
	if (*(_QWORD*)(v34 + 120) >= v35)
		sub_14005E2C0((__int64)a1);
	v36 = a1[2];
	v37 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v36 + 8) = 5;
	*(_QWORD*)v36 = v37;
	a1[2] += 16i64;
	LODWORD(v126) = sub_1400578C0((__int64)a1);
	v38 = (__int64*)(v26 + 8);
	for (i = 0; i < 0xF; ++i)
	{
		v40 = *v38;
		if (*v38)
		{
			v41 = a1[4];
			HIDWORD(v124) = 0;
			LODWORD(v124) = i;
			v42 = *(_QWORD*)(v41 + 112);
			*(_QWORD*)((char*)&v124 + 4) = 0i64;
			if (*(_QWORD*)(v41 + 120) >= v42)
				sub_14005E2C0((__int64)a1);
			v43 = a1[5];
			if (v43 == a1[10])
				v44 = a1[15];
			else
				v44 = *(_QWORD*)(**(_QWORD**)(v43 + 8) + 24i64);
			v45 = sub_1400627D0((__int64)a1, 0x18ui64, v44);
			v46 = a1[2];
			*(_QWORD*)v46 = v45;
			*(_DWORD*)(v46 + 8) = 7;
			a1[2] += 16i64;
			v47 = v124;
			*(_QWORD*)(v45 + 48) = v40;
			*(_OWORD*)(v45 + 56) = __PAIR128__(*((unsigned __int64*)&v124 + 1), v47);
			v48 = a1[4];
			v49 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
			v50 = a1[2];
			v121 = v49;
			v122 = 4;
			sub_14005E8E0((__int64)a1, v48 + 160, (int*)&v121, v50);
			a1[2] += 16i64;
			sub_140058BF0((__int64)a1, -2);
			sub_1400FB650((__int64)&v125, i);
			a1[2] -= 16i64;
		}
		++v38;
	}
	v51 = *(_QWORD*)(a1[4] + 160i64);
	if ((unsigned int)(v25 - 1) >= *(_DWORD*)(v51 + 56))
	{
		if ((double)v25 == 0.0)
		{
			v52 = *(_DWORD**)(v51 + 32);
		}
		else
		{
			v134 = (double)v25;
			v52 = (_DWORD*)(*(_QWORD*)(v51 + 32)
				+ 40 * ((unsigned int)(LODWORD(v134) + HIDWORD(v134)) % (((1i64 << *(_BYTE*)(v51 + 11)) - 1) | 1)));
		}
		while (v52[6] != 3 || (double)v25 != *((double*)v52 + 2))
		{
			v52 = (_DWORD*)*((_QWORD*)v52 + 4);
			if (!v52)
			{
				v52 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v52 = (_DWORD*)(*(_QWORD*)(v51 + 24) + 16i64 * (v25 - 1));
	}
	v53 = a1[2];
	*(_QWORD*)v53 = *(_QWORD*)v52;
	*(_DWORD*)(v53 + 8) = v52[2];
	a1[2] += 16i64;
	v54 = (unsigned __int64*)sub_14018F0E0(&v123, L"tCurrencies")[1];
	if (v54)
	{
		v55 = -1i64;
		do
			++v55;
		while (*((_BYTE*)v54 + v55));
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v56 = a1[2];
		v57 = sub_140062650((__int64)a1, v54, v55);
		*(_DWORD*)(v56 + 8) = 4;
		*(_QWORD*)v56 = v57;
		a1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if ((_QWORD)v124)
		sub_14018B900(v124, 0);
	v58 = *(_QWORD*)(a1[4] + 160i64);
	if ((unsigned int)(v126 - 1) >= *(_DWORD*)(v58 + 56))
	{
		if ((double)(int)v126 == 0.0)
		{
			v59 = *(_DWORD**)(v58 + 32);
		}
		else
		{
			v135 = (double)(int)v126;
			v59 = (_DWORD*)(*(_QWORD*)(v58 + 32)
				+ 40 * ((unsigned int)(LODWORD(v135) + HIDWORD(v135)) % (((1i64 << *(_BYTE*)(v58 + 11)) - 1) | 1)));
		}
		while (v59[6] != 3 || (double)(int)v126 != *((double*)v59 + 2))
		{
			v59 = (_DWORD*)*((_QWORD*)v59 + 4);
			if (!v59)
			{
				v59 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v59 = (_DWORD*)(*(_QWORD*)(v58 + 24) + 16i64 * ((int)v126 - 1));
	}
	v60 = a1[2];
	*(_QWORD*)v60 = *(_QWORD*)v59;
	*(_DWORD*)(v60 + 8) = v59[2];
	v61 = a1[2] + 16i64;
	a1[2] = v61;
	sub_14005EA50((__int64)a1, (__int64*)(v61 - 48), (int*)(v61 - 32), (unsigned int*)(v61 - 16));
	a1[2] -= 48i64;
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v62 = a1[2];
	v63 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v62 + 8) = 5;
	*(_QWORD*)v62 = v63;
	a1[2] += 16i64;
	v64 = sub_1400578C0((__int64)a1);
	v65 = 0;
	v66 = (__int64*)(v26 + 128);
	do
	{
		v67 = *v66;
		if (*v66)
		{
			v68 = a1[4];
			*(_QWORD*)&v124 = 15i64;
			DWORD2(v124) = 0;
			v69 = *(_QWORD*)(v68 + 112);
			HIDWORD(v124) = v65;
			if (*(_QWORD*)(v68 + 120) >= v69)
				sub_14005E2C0((__int64)a1);
			v70 = a1[5];
			if (v70 == a1[10])
				v71 = a1[15];
			else
				v71 = *(_QWORD*)(**(_QWORD**)(v70 + 8) + 24i64);
			v72 = a1[4];
			v73 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(v72 + 16))(
				*(_QWORD*)(v72 + 24),
				0i64,
				0i64,
				72i64);
			v74 = v73;
			if (!v73)
				sub_140061040((__int64)a1, 4);
			*(_QWORD*)(v72 + 120) += 72i64;
			v75 = *(_BYTE*)(a1[4] + 32i64);
			*(_BYTE*)(v73 + 8) = 7;
			*(_QWORD*)(v73 + 32) = 24i64;
			*(_QWORD*)(v73 + 16) = 0i64;
			*(_QWORD*)(v73 + 24) = v71;
			*(_BYTE*)(v73 + 9) = v75 & 3;
			*(_QWORD*)v73 = **(_QWORD**)(a1[4] + 176i64);
			**(_QWORD**)(a1[4] + 176i64) = v73;
			v76 = a1[2];
			*(_QWORD*)v76 = v74;
			*(_DWORD*)(v76 + 8) = 7;
			a1[2] += 16i64;
			v77 = v124;
			*(_QWORD*)(v74 + 48) = v67;
			*(_OWORD*)(v74 + 56) = __PAIR128__(*((unsigned __int64*)&v124 + 1), v77);
			v78 = a1[4];
			v79 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
			v80 = a1[2];
			v121 = v79;
			v122 = 4;
			sub_14005E8E0((__int64)a1, v78 + 160, (int*)&v121, v80);
			a1[2] += 16i64;
			sub_140058BF0((__int64)a1, -2);
			v81 = a1[2];
			v82 = *(_QWORD*)(a1[4] + 160i64);
			v83 = (v81 - a1[3]) >> 4;
			if ((unsigned int)(v64 - 1) >= *(_DWORD*)(v82 + 56))
			{
				if ((double)v64 == 0.0)
				{
					v84 = *(_DWORD**)(v82 + 32);
				}
				else
				{
					v136 = (double)v64;
					v84 = (_DWORD*)(*(_QWORD*)(v82 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v136) + HIDWORD(v136)) % (((1i64 << *(_BYTE*)(v82 + 11)) - 1) | 1)));
				}
				while (v84[6] != 3 || (double)v64 != *((double*)v84 + 2))
				{
					v84 = (_DWORD*)*((_QWORD*)v84 + 4);
					if (!v84)
					{
						v84 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v84 = (_DWORD*)(*(_QWORD*)(v82 + 24) + 16i64 * (v64 - 1));
			}
			*(_QWORD*)v81 = *(_QWORD*)v84;
			*(_DWORD*)(v81 + 8) = v84[2];
			a1[2] += 16i64;
			v85 = a1[2];
			*(_DWORD*)(v85 + 8) = 3;
			*(double*)v85 = (double)v65;
			a1[2] += 16i64;
			v86 = sub_1400580E0((__int64)a1, v83);
			v87 = a1[2];
			*(_QWORD*)v87 = *(_QWORD*)v86;
			*(_DWORD*)(v87 + 8) = v86[2];
			v88 = a1[2] + 16i64;
			a1[2] = v88;
			sub_14005EA50((__int64)a1, (__int64*)(v88 - 48), (int*)(v88 - 32), (unsigned int*)(v88 - 16));
			a1[2] -= 64i64;
		}
		++v65;
		++v66;
	} while ((unsigned int)v65 < 0x13);
	v89 = v130;
	v90 = *(_QWORD*)(a1[4] + 160i64);
	if ((unsigned int)(v130 - 1) >= *(_DWORD*)(v90 + 56))
	{
		v92 = (double)v130;
		v131 = (double)v130;
		if (v92 == 0.0)
			v91 = *(_DWORD**)(v90 + 32);
		else
			v91 = (_DWORD*)(*(_QWORD*)(v90 + 32)
				+ 40 * ((unsigned int)(LODWORD(v131) + HIDWORD(v131)) % (((1i64 << *(_BYTE*)(v90 + 11)) - 1) | 1)));
		while (v91[6] != 3 || v92 != *((double*)v91 + 2))
		{
			v91 = (_DWORD*)*((_QWORD*)v91 + 4);
			if (!v91)
			{
				v91 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v91 = (_DWORD*)(*(_QWORD*)(v90 + 24) + 16i64 * (v130 - 1));
	}
	v93 = a1[2];
	*(_QWORD*)v93 = *(_QWORD*)v91;
	*(_DWORD*)(v93 + 8) = v91[2];
	a1[2] += 16i64;
	v94 = (unsigned __int64*)sub_14018F0E0(&v123, L"tAccountCurrencies")[1];
	if (v94)
	{
		v95 = -1i64;
		v96 = -1i64;
		do
			++v96;
		while (*((_BYTE*)v94 + v96));
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v97 = a1[2];
		v98 = sub_140062650((__int64)a1, v94, v96);
		*(_DWORD*)(v97 + 8) = 4;
		*(_QWORD*)v97 = v98;
		a1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		v95 = -1i64;
	}
	if ((_QWORD)v124)
		sub_14018B900(v124, 0);
	v99 = *(_QWORD*)(a1[4] + 160i64);
	if ((unsigned int)(v64 - 1) >= *(_DWORD*)(v99 + 56))
	{
		if ((double)v64 == 0.0)
		{
			v100 = *(_DWORD**)(v99 + 32);
		}
		else
		{
			v132 = (double)v64;
			v100 = (_DWORD*)(*(_QWORD*)(v99 + 32)
				+ 40
				* ((unsigned int)(LODWORD(v132) + HIDWORD(v132)) % (((1i64 << *(_BYTE*)(v99 + 11)) - 1) | 1)));
		}
		while (v100[6] != 3 || (double)v64 != *((double*)v100 + 2))
		{
			v100 = (_DWORD*)*((_QWORD*)v100 + 4);
			if (!v100)
			{
				v100 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v100 = (_DWORD*)(*(_QWORD*)(v99 + 24) + 16i64 * (v64 - 1));
	}
	v101 = a1[2];
	*(_QWORD*)v101 = *(_QWORD*)v100;
	*(_DWORD*)(v101 + 8) = v100[2];
	v102 = a1[2] + 16i64;
	a1[2] = v102;
	sub_14005EA50((__int64)a1, (__int64*)(v102 - 48), (int*)(v102 - 32), (unsigned int*)(v102 - 16));
	a1[2] -= 48i64;
	v103 = *(_QWORD*)(a1[4] + 160i64);
	v104 = v129;
	v105 = a1[2];
	if ((unsigned int)(v129 - 1) >= *(_DWORD*)(v103 + 56))
	{
		if ((double)v129 == 0.0)
		{
			v106 = *(_DWORD**)(v103 + 32);
		}
		else
		{
			v133 = (double)v129;
			v106 = (_DWORD*)(*(_QWORD*)(v103 + 32)
				+ 40
				* ((unsigned int)(LODWORD(v133) + HIDWORD(v133)) % (((1i64 << *(_BYTE*)(v103 + 11)) - 1) | 1)));
		}
		while (v106[6] != 3 || (double)v129 != *((double*)v106 + 2))
		{
			v106 = (_DWORD*)*((_QWORD*)v106 + 4);
			if (!v106)
			{
				v106 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v106 = (_DWORD*)(*(_QWORD*)(v103 + 24) + 16i64 * (v129 - 1));
	}
	*(_QWORD*)v105 = *(_QWORD*)v106;
	*(_DWORD*)(v105 + 8) = v106[2];
	a1[2] += 16i64;
	v107 = (unsigned __int64*)sub_14018F0E0(&v123, L"tSignatureBonuses")[1];
	if (v107)
	{
		do
			++v95;
		while (*((_BYTE*)v107 + v95));
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v108 = a1[2];
		v109 = sub_140062650((__int64)a1, v107, v95);
		*(_DWORD*)(v108 + 8) = 4;
		*(_QWORD*)v108 = v109;
		v104 = v129;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	v110 = v124;
	a1[2] += 16i64;
	if (v110)
		sub_14018B900(v110, 0);
	v111 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v89);
	v112 = a1[2];
	*(_QWORD*)v112 = *v111;
	*(_DWORD*)(v112 + 8) = *((_DWORD*)v111 + 2);
	v113 = a1[2] + 16i64;
	a1[2] = v113;
	sub_14005EA50((__int64)a1, (__int64*)(v113 - 48), (int*)(v113 - 32), (unsigned int*)(v113 - 16));
	a1[2] -= 48i64;
	v114 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v104);
	*(_QWORD*)v115 = *v114;
	*(_DWORD*)(v115 + 8) = *((_DWORD*)v114 + 2);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v116, v64);
	sub_1400579E0((__int64)a1, v117, v126);
	sub_1400579E0((__int64)a1, v118, v89);
	sub_1400579E0((__int64)a1, v119, v104);
	return 1i64;
}
// 140701D47: variable 'v15' is possibly undefined
// 140701E9C: variable 'v29' is possibly undefined
// 140701ECF: variable 'v31' is possibly undefined
// 140701EE1: variable 'v32' is possibly undefined
// 140701EE1: variable 'v33' is possibly undefined
// 14070281C: variable 'v115' is possibly undefined
// 14070282E: variable 'v116' is possibly undefined
// 14070283A: variable 'v117' is possibly undefined
// 140702845: variable 'v118' is possibly undefined
// 140702850: variable 'v119' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B41B60: using guessed type wchar_t aTsignaturebonu[18];
// 140B41B88: using guessed type wchar_t aTaccountcurren[19];
// 140B41BB0: using guessed type wchar_t aTcurrencies[12];
// 140B41BC8: using guessed type wchar_t aNelderpoints_0[13];
// 140B41BE8: using guessed type wchar_t aNxp_7[4];
// 140B41BF0: using guessed type wchar_t aBconfirmed[11];
// 140B41C08: using guessed type wchar_t aEpendingevent[14];
// 140B41C28: using guessed type wchar_t aFtimeremaining_1[15];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

