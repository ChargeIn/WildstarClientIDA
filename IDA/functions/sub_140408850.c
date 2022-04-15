#include "../winhttp.h"

//----- (0000000140408850) ----------------------------------------------------
void __fastcall sub_140408850(__int64 a1, __int64 a2, __int64 a3)
{
	bool v3; // zf
	__int64 v4; // r14
	__int64 v6; // rbx
	__int64 v7; // rcx
	__int64 v8; // rdi
	__int64 v9; // rax
	int v10; // eax
	unsigned __int16* v11; // r8
	__int64 v12; // rcx
	__int64 v13; // rdx
	int* v14; // rax
	unsigned __int16* v15; // rax
	int* v16; // rbx
	int* v17; // r12
	__int64 v18; // rax
	__int64 v19; // rdi
	unsigned __int64 v20; // rdi
	__int64 v21; // r9
	_WORD* v22; // rax
	unsigned __int64 v23; // rbx
	void* v24; // rcx
	__int64 v25; // r13
	unsigned int v26; // r8d
	unsigned __int64 v27; // rsi
	unsigned __int64 v28; // rdx
	__int64 v29; // r12
	__int64 v30; // rax
	int v31; // ecx
	unsigned __int16 v32; // cx
	unsigned __int64 v33; // r15
	unsigned __int64 v34; // r13
	unsigned __int64 v35; // rsi
	unsigned __int64 v36; // r14
	char v37; // cl
	unsigned __int64 v38; // rax
	__int64 v39; // rsi
	unsigned __int64 v40; // rax
	unsigned __int64 v41; // rdi
	char* v42; // r14
	__int64 v43; // r12
	__int16 v44; // r9
	__int64 v45; // r9
	__int64 v46; // r9
	__int64 v47; // rdi
	int* v48; // rax
	__int64 v49; // rsi
	unsigned __int64 v50; // rbx
	unsigned __int64 v51; // r13
	__int64 v52; // r8
	unsigned __int64 i; // r12
	__int64 v54; // rdi
	int* v55; // rax
	unsigned __int16 v56; // dx
	__int64 v57; // rcx
	unsigned __int64 v58; // rax
	__int64 v59; // rdx
	int* v60; // rbx
	unsigned __int16 v61; // ax
	__int64 v62; // rcx
	__int64 v63; // rsi
	__int64 v64; // rdi
	__int64 v65; // rax
	int v66; // eax
	int v67; // ebx
	__int64 v68; // rdi
	_DWORD* v69; // rcx
	__int64 v70; // rdx
	__int64 v71; // rax
	unsigned __int64 v72; // rax
	__int64 v73; // rdi
	unsigned __int64 v74; // rdx
	__int64(__fastcall * **v75)(); // rax
	unsigned __int16* v76; // r14
	__int64 v77; // r8
	__int64(__fastcall * *v78)(); // rax
	_WORD* v79; // rsi
	_WORD* v80; // rbx
	unsigned __int64 v81; // rcx
	int* v82; // rax
	unsigned __int16* v83; // rdx
	__int64 v84; // rcx
	__int64 v85; // rbx
	__int64 v86; // rcx
	__int64 v87; // rdi
	__int64 v88; // rax
	int v89; // esi
	__int64 v90; // r12
	unsigned __int64 v91; // rdi
	unsigned __int64 v92; // r14
	__int64 v93; // rsi
	__int64 v94; // r15
	int* v95; // rbx
	__int64 v96; // rax
	__int64 v97; // rdx
	_DWORD* v98; // rcx
	__int64 v99; // rdx
	__int64 v100; // rax
	__int64(__fastcall * *v101)(); // [rsp+30h] [rbp-D0h] BYREF
	int* v102; // [rsp+38h] [rbp-C8h]
	__int64 v103; // [rsp+40h] [rbp-C0h]
	char* v104; // [rsp+48h] [rbp-B8h] BYREF
	unsigned __int64 v105; // [rsp+50h] [rbp-B0h]
	unsigned __int64 v106; // [rsp+58h] [rbp-A8h]
	unsigned __int64 v107; // [rsp+60h] [rbp-A0h]
	__int64 v108; // [rsp+68h] [rbp-98h]
	int v109; // [rsp+70h] [rbp-90h]
	__int64(__fastcall * *v110)(); // [rsp+78h] [rbp-88h] BYREF
	__int64 v111; // [rsp+80h] [rbp-80h]
	__int64 v112; // [rsp+88h] [rbp-78h]
	int v113; // [rsp+90h] [rbp-70h]
	__int64 v114; // [rsp+98h] [rbp-68h]
	__int64 v115; // [rsp+A0h] [rbp-60h]
	__int64(__fastcall * *v116)(); // [rsp+A8h] [rbp-58h] BYREF
	int v117; // [rsp+B0h] [rbp-50h]
	__int64 v118; // [rsp+B8h] [rbp-48h]
	int v119; // [rsp+C0h] [rbp-40h]
	unsigned __int64 v120[2]; // [rsp+C8h] [rbp-38h] BYREF
	__int64 v121; // [rsp+D8h] [rbp-28h]
	unsigned __int64 v122[2]; // [rsp+E0h] [rbp-20h] BYREF
	__int64 v123; // [rsp+F0h] [rbp-10h]
	__int64 v124; // [rsp+100h] [rbp+0h]
	__int64 v125; // [rsp+108h] [rbp+8h] BYREF
	__int64 v126; // [rsp+110h] [rbp+10h]
	__int64 v127; // [rsp+138h] [rbp+38h]
	int v128; // [rsp+160h] [rbp+60h]
	int v129[11]; // [rsp+164h] [rbp+64h] BYREF

	v3 = *(_DWORD*)(a3 + 8) == 0;
	v4 = a3;
	v108 = a3;
	v114 = a2;
	if (v3)
	{
		v6 = *(_QWORD*)(a2 + 16);
		v119 = 1;
		v7 = *(_QWORD*)(v6 + 32);
		v116 = off_140B569F0;
		v118 = v6;
		if (*(_QWORD*)(v7 + 120) >= *(_QWORD*)(v7 + 112))
			sub_14005E2C0(v6);
		v8 = *(_QWORD*)(v6 + 16);
		v9 = sub_14005C1B0(v6, 0, 0);
		*(_DWORD*)(v8 + 8) = 5;
		*(_QWORD*)v8 = v9;
		*(_QWORD*)(v6 + 16) += 16i64;
		v10 = sub_1400578C0(v6);
		v11 = *(unsigned __int16**)v4;
		LODWORD(v8) = v10;
		v117 = v10;
		sub_140409860(v12, (__int64)&v116, v11, 0, 0, 0);
		sub_1400FB1D0(a2);
		sub_1400579E0(v6, v13, v8);
		return;
	}
	v14 = sub_14018B280(24i64, 0);
	if (v14)
		v103 = sub_1401AE310((__int64)v14);
	else
		v103 = 0i64;
	v15 = *(unsigned __int16**)v4;
	v16 = (int*)&unk_1409E8714;
	v17 = 0i64;
	v3 = *(_QWORD*)v4 == 0i64;
	v102 = 0i64;
	if (!v3)
		v16 = (int*)v15;
	v18 = 0i64;
	if (*(_WORD*)v16)
	{
		do
			++v18;
		while (*((_WORD*)v16 + v18));
	}
	v19 = (2 * v18) >> 1;
	if ((unsigned __int64)(v19 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v17 = sub_14018B280(2 * (v19 + 1), 0);
		v102 = v17;
	}
	v20 = 2 * v19;
	sub_1407DB590(v17, v16, v20);
	v21 = (__int64)v102;
	v22 = (_WORD*)((char*)v102 + v20);
	if ((int*)((char*)v102 + v20))
		*v22 = 0;
	v23 = 0i64;
	v24 = 0i64;
	v25 = 0i64;
	v115 = 0i64;
	v107 = ((__int64)v22 - v21) >> 1;
	v26 = 0;
	v27 = (v107 >> 3) + 1;
	LODWORD(v101) = 0;
	v105 = 0i64;
	v104 = 0i64;
	if (v107 >> 3 != -1i64)
	{
		sub_140033620((__int64)&v104, (v107 >> 3) + 1);
		v23 = v105;
		v21 = (__int64)v102;
		if (v27)
			memset(v104, 0, v27);
		v26 = 0;
		v24 = v104;
	}
	if (v23)
		memset(v24, 0, v23);
	v28 = 0i64;
	v106 = 0i64;
	if (*(_DWORD*)(v4 + 8))
	{
		v29 = 0i64;
		while (1)
		{
			v30 = *(_QWORD*)(v4 + 16);
			v31 = *(_DWORD*)(v30 + v29);
			if (v31 == 1 || v31 == 7)
			{
				v32 = *(_WORD*)(v30 + v29 + 6);
				v26 = *(_DWORD*)(v30 + v29 + 8);
				v33 = *(unsigned __int16*)(v30 + v29 + 4);
				LODWORD(v101) = v26;
				if ((unsigned __int16)(8 * v23) < v32)
					v32 = 8 * v23;
				if (v33 >= v32)
					goto LABEL_41;
				v34 = v32;
				do
				{
					if (*(_DWORD*)(v29 + *(_QWORD*)(v4 + 16)) == 7)
						*(_WORD*)(v21 + 2 * v33) = 35;
					v35 = v33 >> 3;
					if (v33 >> 3 >= v23)
					{
						v36 = v35 + 1;
						if (v35 + 1 > v23)
						{
							sub_140033620((__int64)&v104, v35 + 1);
							if (v23 < v36)
								memset(&v104[v23], 0, v36 - v23);
							v23 = v105;
						}
						v4 = v108;
					}
					v21 = (__int64)v102;
					v37 = v33++ & 7;
					v104[v35] |= 1 << v37;
				} while (v33 < v34);
				v28 = v106;
			}
			v26 = (unsigned int)v101;
		LABEL_41:
			v38 = *(unsigned int*)(v4 + 8);
			v21 = (__int64)v102;
			++v28;
			v29 += 104i64;
			v106 = v28;
			if (v28 >= v38)
			{
				v25 = v115;
				break;
			}
		}
	}
	v39 = v103;
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v103 + 16i64))(v103, v26);
	v40 = v107;
	v41 = 0i64;
	if (v107)
	{
		v42 = v104;
		v43 = (__int64)v102;
		while (1)
		{
			v44 = *(_WORD*)(v43 + 2 * v41);
			if (v44 != 35 || v41 >> 3 >= v23)
				goto LABEL_52;
			if (((unsigned __int8)(1 << (v41 & 7)) & (unsigned __int8)v42[v41 >> 3]) == 0)
				break;
			if (++v25 >= (unsigned __int64)(*(int(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v39 + 64i64))(
				v39,
				3i64,
				12i64))
			{
				v40 = v107;
				v25 = 0i64;
				*(_WORD*)(v43 + 2 * v41) = 32;
			}
			else
			{
				*(_WORD*)(v43 + 2 * v41) = (*(__int64(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)v39 + 64i64))(
					v39,
					0i64,
					25i64)
					+ 97;
				v40 = v107;
			}
		LABEL_54:
			if (++v41 >= v40)
			{
				v4 = v108;
				goto LABEL_56;
			}
		}
		v40 = v107;
	LABEL_52:
		if (v44 == 32)
			v25 = 0i64;
		goto LABEL_54;
	}
LABEL_56:
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v39 + 8i64))(v39);
	v45 = *(_QWORD*)(v4 + 16);
	v111 = *(unsigned int*)(v4 + 8);
	v110 = 0i64;
	sub_1401D3110(
		v122,
		(__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_1404013B0,
		(unsigned __int64*)&v110,
		v45,
		2);
	v46 = *(_QWORD*)(v4 + 16);
	v111 = *(unsigned int*)(v4 + 8);
	v110 = 0i64;
	sub_1401D3110(
		v120,
		(__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_1404013E0,
		(unsigned __int64*)&v110,
		v46,
		2);
	v124 = 0i64;
	sub_1407E4830((int*)&v125, 0i64, 0x58ui64);
	v47 = *(unsigned int*)(v4 + 8);
	v115 = v47;
	if (v47)
	{
		v48 = sub_14018B280(4 * v47 + 16, 0);
		if (v48)
		{
			v49 = (__int64)(v48 + 4);
			*(_QWORD*)v48 = &off_140B5F110;
		}
		else
		{
			v49 = 16i64;
		}
	}
	else
	{
		v49 = 0i64;
	}
	v103 = v49;
	sub_1407E4830((int*)v49, 0i64, 4 * v47);
	v50 = 0i64;
	v106 = 0i64;
	v51 = 0i64;
	LOWORD(v52) = 0;
	LOWORD(v101) = 0;
	v109 = 0;
	while (2)
	{
		for (i = v107; v51 < *(unsigned int*)(v4 + 8); ++v51)
		{
			v54 = *(_QWORD*)(v123 + 8 * v51);
			v55 = (int*)(*(_QWORD*)(v4 + 16) + 104 * v54);
			v56 = *((_WORD*)v55 + 2);
			if (v56 <= *((_WORD*)v55 + 3))
			{
				v57 = *v55;
				if ((int)v57 <= 12)
				{
					if (v56 > (unsigned __int16)v52)
					{
						v58 = *((unsigned __int16*)v55 + 2);
						if (v58 < i)
							i = v58;
						break;
					}
					++* (&v124 + v57);
					*(_DWORD*)(v49 + 4 * v54) = 1;
				}
			}
		}
		if (v50 >= *(unsigned int*)(v4 + 8))
			goto LABEL_94;
		while (1)
		{
			v59 = *(_QWORD*)(v121 + 8 * v50);
			v60 = (int*)(*(_QWORD*)(v4 + 16) + 104 * v59);
			v61 = *((_WORD*)v60 + 3);
			if (*((_WORD*)v60 + 2) <= v61)
			{
				v62 = *v60;
				if ((int)v62 <= 12)
					break;
			}
		LABEL_90:
			v72 = *(unsigned int*)(v4 + 8);
			v50 = v106 + 1;
			v106 = v50;
			if (v50 >= v72)
				goto LABEL_94;
		}
		if (v61 <= (unsigned __int16)v52)
		{
			--* (&v124 + v62);
			*(_DWORD*)(v49 + 4 * v59) = 0;
			if (*((_WORD*)v60 + 2) == *((_WORD*)v60 + 3))
			{
				v110 = off_140B569F0;
				v113 = 1;
				v63 = *(_QWORD*)(v114 + 16);
				v112 = v63;
				if (*(_QWORD*)(*(_QWORD*)(v63 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v63 + 32) + 112i64))
					sub_14005E2C0(v63);
				v64 = *(_QWORD*)(v63 + 16);
				v65 = sub_14005C1B0(v63, 0, 0);
				*(_DWORD*)(v64 + 8) = 5;
				*(_QWORD*)v64 = v65;
				*(_QWORD*)(v63 + 16) += 16i64;
				LODWORD(v111) = sub_1400578C0(v63);
				v66 = sub_140409330((__int64)&v110, v60);
				v67 = v111;
				if (v66)
				{
					sub_140409860(v126 != 0, (__int64)&v110, word_1409E867C, v125 != 0, v127 != 0, v126 != 0);
					sub_1400FB1D0(v114);
				}
				v68 = v112;
				if (v112 && v67 >= 0)
				{
					v69 = *(_DWORD**)(*(_QWORD*)sub_1400580E0(v112, -10000) + 32i64);
					while (v69[6] != 3 || *((double*)v69 + 2) != 0.0)
					{
						v69 = (_DWORD*)*((_QWORD*)v69 + 4);
						if (!v69)
						{
							v69 = dword_140A12138;
							break;
						}
					}
					v70 = *(_QWORD*)(v68 + 16);
					*(_QWORD*)v70 = *(_QWORD*)v69;
					*(_DWORD*)(v70 + 8) = v69[2];
					*(_QWORD*)(v68 + 16) += 16i64;
					sub_140058B30(v68, -10000);
					v71 = *(_QWORD*)(v68 + 16);
					*(_DWORD*)(v71 + 8) = 3;
					*(double*)v71 = (double)v67;
					*(_QWORD*)(v68 + 16) += 16i64;
					sub_140058B30(v68, -10000);
				}
				LOWORD(v52) = (_WORD)v101;
				v49 = v103;
			}
			goto LABEL_90;
		}
		if (*((unsigned __int16*)v60 + 3) < i)
			i = *((unsigned __int16*)v60 + 3);
	LABEL_94:
		v73 = (unsigned __int16)v52;
		if (i >= v107)
		{
			v74 = v107;
			v109 = 1;
		}
		else
		{
			v74 = i;
		}
		v75 = &v110;
		v101 = (__int64(__fastcall**)())(v74 - (unsigned __int16)v52);
		v110 = (__int64(__fastcall**)())(v107 - (unsigned __int16)v52);
		v76 = 0i64;
		if (v110 >= v101)
			v75 = &v101;
		v77 = (__int64)v102;
		v78 = *v75;
		v79 = (_WORD*)v102 + v73;
		v110 = 0i64;
		v80 = (_WORD*)v102 + (_QWORD)v78 + v73;
		v81 = v80 - v79 + 1;
		if (v81 <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v82 = sub_14018B280(2 * v81, 0);
			v77 = (__int64)v102;
			v76 = (unsigned __int16*)v82;
			v110 = (__int64(__fastcall**)())v82;
		}
		v83 = v76;
		if (v79 != v80)
		{
			v84 = v77 - (_QWORD)v76 + 2 * v73;
			do
			{
				if (v83)
					*v83 = *(unsigned __int16*)((char*)v83 + v84);
				++v83;
			} while ((unsigned __int16*)((char*)v83 + v84) != v80);
		}
		if (v83)
			*v83 = 0;
		LOWORD(v101) = i;
		v119 = 1;
		v85 = *(_QWORD*)(v114 + 16);
		v86 = *(_QWORD*)(v85 + 32);
		v116 = off_140B569F0;
		v118 = v85;
		if (*(_QWORD*)(v86 + 120) >= *(_QWORD*)(v86 + 112))
			sub_14005E2C0(v85);
		v87 = *(_QWORD*)(v85 + 16);
		v88 = sub_14005C1B0(v85, 0, 0);
		*(_DWORD*)(v87 + 8) = 5;
		*(_QWORD*)v87 = v88;
		*(_QWORD*)(v85 + 16) += 16i64;
		v89 = sub_1400578C0(v85);
		v117 = v89;
		sub_140409860(v127 != 0, (__int64)&v116, v76, v125 != 0, v127 != 0, v126 != 0);
		v128 = 0;
		sub_1407E4830(v129, 0i64, 0x2Cui64);
		v90 = v103;
		v91 = 0i64;
		if (v115)
		{
			v92 = v115;
			v93 = 0i64;
			v94 = v108;
			do
			{
				v95 = (int*)(v93 + *(_QWORD*)(v94 + 16));
				if (*(_DWORD*)(v90 + 4 * v91))
				{
					v96 = *v95;
					if ((int)v96 < 12 && !v129[v96 - 1])
					{
						sub_140409330((__int64)&v116, (_DWORD*)(v93 + *(_QWORD*)(v94 + 16)));
						v129[*v95 - 1] = 1;
					}
				}
				++v91;
				v93 += 104i64;
			} while (v91 < v92);
			v85 = v118;
			v89 = v117;
			v76 = (unsigned __int16*)v110;
		}
		sub_1400FB1D0(v114);
		if (v85 && v89 >= 0)
		{
			v98 = *(_DWORD**)(*(_QWORD*)sub_1400580E0(v85, -10000) + 32i64);
			while (v98[6] != 3 || *((double*)v98 + 2) != 0.0)
			{
				v98 = (_DWORD*)*((_QWORD*)v98 + 4);
				if (!v98)
				{
					v98 = dword_140A12138;
					break;
				}
			}
			v99 = *(_QWORD*)(v85 + 16);
			*(_QWORD*)v99 = *(_QWORD*)v98;
			*(_DWORD*)(v99 + 8) = v98[2];
			*(_QWORD*)(v85 + 16) += 16i64;
			sub_140058B30(v85, -10000);
			v100 = *(_QWORD*)(v85 + 16);
			*(_DWORD*)(v100 + 8) = 3;
			*(double*)v100 = (double)v89;
			*(_QWORD*)(v85 + 16) += 16i64;
			sub_140058B30(v85, -10000);
		}
		if (v76)
			sub_14018B900((__int64)v76, 0);
		v4 = v108;
		v50 = v106;
		v52 = (unsigned __int16)v101;
		if (!v109)
		{
			v49 = v103;
			continue;
		}
		break;
	}
	if (v90)
		(**(void(__fastcall***)(__int64, __int64, _QWORD))(v90 - 16))(v90 - 16, v97, (unsigned __int16)v101);
	if (v120[0] < v120[1])
		sub_14018B900(v121 + 8 * v120[0], 0);
	if (v122[0] < v122[1])
		sub_14018B900(v123 + 8 * v122[0], 0);
	if (v104)
		(*(void(__fastcall**)(char*, __int64, __int64))(*((_QWORD*)v104 - 2) + 8i64))(v104 - 16, v97, v52);
	if (v102)
		sub_14018B900((__int64)v102, 0);
}
// 140408902: variable 'v12' is possibly undefined
// 140408917: variable 'v13' is possibly undefined
// 1404092A6: variable 'v97' is possibly undefined
// 1404092EC: variable 'v52' is possibly undefined
// 1409E867C: using guessed type unsigned __int16 word_1409E867C[12];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B5F110: using guessed type __int64 (__fastcall *off_140B5F110)();
// 140408850: using guessed type int var_7C[11];

