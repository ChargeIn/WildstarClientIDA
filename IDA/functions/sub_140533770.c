#include "../winhttp.h"

//----- (0000000140533770) ----------------------------------------------------
_QWORD* __fastcall sub_140533770(_QWORD* a1)
{
	_QWORD* v1; // r13
	_QWORD* result; // rax
	__int64 v3; // rdx
	__int64 v4; // r15
	__int128* v5; // rcx
	int* v6; // r12
	int v7; // eax
	__int128* v8; // rcx
	int v9; // eax
	int v10; // edi
	int v11; // eax
	__int64 v12; // r10
	_DWORD* v13; // rcx
	__int64 v14; // r8
	_DWORD* v15; // rcx
	unsigned __int64 v16; // rdx
	_QWORD* v17; // rax
	__int64 v18; // r10
	__int64 v19; // rdx
	_DWORD* v20; // rcx
	int v21; // eax
	__int64 v22; // rcx
	__int64 v23; // rax
	__int64 v24; // rdx
	__int64 v25; // r10
	_QWORD* v26; // rax
	__int64 v27; // r10
	__int64 v28; // rdx
	_DWORD* v29; // rcx
	int v30; // eax
	_QWORD* v31; // rax
	__int64 v32; // r10
	__int64 v33; // rdx
	__int64 v34; // rbx
	unsigned __int64* v35; // rdx
	unsigned __int64 v36; // r8
	__int64 v37; // rcx
	unsigned __int64* v38; // rax
	int v39; // ecx
	int v40; // eax
	_QWORD* v41; // rax
	__int64 v42; // r10
	__int64 v43; // rdx
	__int64 v44; // rbx
	unsigned __int64* v45; // rdx
	unsigned __int64 v46; // r8
	__int128* v47; // rax
	int v48; // ecx
	int v49; // eax
	__int64 v50; // rsi
	int* v51; // r14
	__int64 v52; // r8
	_DWORD* v53; // rcx
	unsigned __int64 v54; // rdx
	__int64(__fastcall * **v55)(_QWORD); // rcx
	unsigned int v56; // ebx
	__int64 v57; // rax
	__int64 v58; // rdx
	__int64 v59; // rcx
	__int64 v60; // rax
	unsigned int* v61; // rax
	__int64 v62; // rax
	__int64 v63; // rax
	int v64; // edi
	int v65; // r15d
	__int64 v66; // r13
	unsigned int v67; // eax
	__int64(__fastcall * **v68)(_QWORD); // rax
	__int64 v69; // rdi
	int* v70; // rbx
	__int64 v71; // rbx
	__int64 v72; // r15
	int* v73; // rax
	_DWORD* v74; // rcx
	__int64 v75; // r8
	_DWORD* v76; // rax
	__int64 v77; // rdx
	__int64 v78; // rdx
	char* v79; // rdx
	_DWORD* v80; // rax
	_QWORD* v81; // r15
	unsigned int v82; // r12d
	void(__fastcall * **v83)(_QWORD); // rbx
	int** v84; // rdi
	int* v85; // rax
	int* v86; // rbx
	__int64 v87; // r9
	unsigned int* v88; // rax
	__m128i v89; // xmm0
	void(__fastcall * **v90)(_QWORD); // [rsp+40h] [rbp-C0h]
	__int128 v91; // [rsp+50h] [rbp-B0h] BYREF
	__int64(__fastcall * *v92)(); // [rsp+60h] [rbp-A0h] BYREF
	int* v93; // [rsp+68h] [rbp-98h]
	__int64 v94; // [rsp+70h] [rbp-90h]
	unsigned __int64 v95; // [rsp+80h] [rbp-80h] BYREF
	__int64(__fastcall * *v96)(); // [rsp+88h] [rbp-78h] BYREF
	int v97; // [rsp+90h] [rbp-70h]
	_QWORD* v98; // [rsp+98h] [rbp-68h]
	int v99; // [rsp+A0h] [rbp-60h]
	__int64(__fastcall * *v100)(); // [rsp+A8h] [rbp-58h] BYREF
	int v101; // [rsp+B0h] [rbp-50h]
	_QWORD* v102; // [rsp+B8h] [rbp-48h]
	_QWORD* v103; // [rsp+C0h] [rbp-40h]
	__int64(__fastcall * *v104)(); // [rsp+C8h] [rbp-38h] BYREF
	int v105; // [rsp+D0h] [rbp-30h]
	_QWORD* v106; // [rsp+D8h] [rbp-28h]
	__int64(__fastcall * **v107)(); // [rsp+E0h] [rbp-20h]
	__int128 v108; // [rsp+F0h] [rbp-10h] BYREF
	unsigned __int64 v109; // [rsp+100h] [rbp+0h] BYREF
	unsigned __int64 v110; // [rsp+108h] [rbp+8h] BYREF
	int v111; // [rsp+110h] [rbp+10h]
	__int64 v112; // [rsp+118h] [rbp+18h] BYREF
	__int64 v113; // [rsp+120h] [rbp+20h]
	unsigned __int64 v115; // [rsp+198h] [rbp+98h] BYREF
	int v116; // [rsp+1A0h] [rbp+A0h]
	unsigned int v117; // [rsp+1A8h] [rbp+A8h]

	v1 = a1;
	result = (_QWORD*)sub_14052E9B0(a1);
	v4 = (__int64)result;
	v103 = result;
	if (!result)
		return result;
	v5 = (__int128*)dword_140A12138;
	if ((unsigned __int64)(v1[3] + 16i64) < v1[2])
		v5 = (__int128*)(v1[3] + 16i64);
	v6 = 0i64;
	v7 = *((_DWORD*)v5 + 2);
	if (v7 != 3)
	{
		if (v7 != 4 || !sub_14005AC80((char*)(*(_QWORD*)v5 + 32i64), &v115))
		{
			v117 = 0;
			goto LABEL_11;
		}
		DWORD2(v91) = 3;
		v5 = &v91;
		*(_QWORD*)&v91 = v115;
	}
	v3 = (unsigned int)(int)*(double*)v5;
	v117 = v3;
	if ((int)v3 < 0)
		return 0i64;
LABEL_11:
	v8 = (__int128*)dword_140A12138;
	if ((unsigned __int64)(v1[3] + 32i64) < v1[2])
		v8 = (__int128*)(v1[3] + 32i64);
	v9 = *((_DWORD*)v8 + 2);
	if (v9 == 3)
		goto LABEL_17;
	if (v9 == 4 && sub_14005AC80((char*)(*(_QWORD*)v8 + 32i64), &v115))
	{
		DWORD2(v91) = 3;
		v8 = &v91;
		*(_QWORD*)&v91 = v115;
	LABEL_17:
		v10 = (int)*(double*)v8;
		goto LABEL_18;
	}
	v10 = 0;
LABEL_18:
	v98 = v1;
	v99 = 1;
	v96 = off_140B569F0;
	v11 = -2;
	v116 = v10;
	v97 = -2;
	v12 = (__int64)v1;
	v13 = (_DWORD*)(v1[3] + 48i64);
	if ((unsigned __int64)v13 < v1[2] && v13 != dword_140A12138 && *(_DWORD*)(v1[3] + 56i64) == 5)
	{
		sub_1400579E0((__int64)v1, v3, -2);
		v14 = (__int64)v98;
		v15 = dword_140A12138;
		v16 = v98[2];
		if (v98[3] + 48i64 < v16)
			v15 = (_DWORD*)(v98[3] + 48i64);
		*(_QWORD*)v16 = *(_QWORD*)v15;
		*(_DWORD*)(v16 + 8) = v15[2];
		*(_QWORD*)(v14 + 16) += 16i64;
		v11 = sub_1400578C0((__int64)v98);
		v12 = (__int64)v98;
		v97 = v11;
	}
	if (!v12 || v11 == -2)
		goto LABEL_137;
	v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v12 + 32) + 160i64), v11);
	v19 = *(_QWORD*)(v18 + 16);
	*(_QWORD*)v19 = *v17;
	*(_DWORD*)(v19 + 8) = *((_DWORD*)v17 + 2);
	*(_QWORD*)(v18 + 16) += 16i64;
	v3 = (__int64)v98;
	v20 = (_DWORD*)(v98[2] - 16i64);
	if (v20 == dword_140A12138)
		v21 = -1;
	else
		v21 = v20[2];
	v98[2] = v20;
	if (v21 != 5)
		goto LABEL_136;
	v22 = (__int64)v98;
	v104 = off_140B56A08;
	v105 = -2;
	v106 = v98;
	v107 = &v96;
	v23 = v98[2];
	*((_QWORD*)&v91 + 1) = 0i64;
	*(_DWORD*)(v23 + 8) = 0;
	*(_QWORD*)(v22 + 16) += 16i64;
	*(_QWORD*)&v91 = 0i64;
	((void(__fastcall*)(__int64(__fastcall***)(), __int64))v104[2])(&v104, 0xFFFFFFFFi64);
	v98[2] -= 16i64;
	while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v107)[1])(v107)
		&& (unsigned int)sub_1400FCBA0((__int64)&v104))
	{
		sub_1400FBF40((__int64)&v104, (__int64)&v92);
		v25 = v94;
		if (v94)
		{
			v24 = (unsigned int)v93;
			if ((_DWORD)v93 != -2)
			{
				v26 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v94 + 32) + 160i64), (int)v93);
				v28 = *(_QWORD*)(v27 + 16);
				*(_QWORD*)v28 = *v26;
				*(_DWORD*)(v28 + 8) = *((_DWORD*)v26 + 2);
				*(_QWORD*)(v27 + 16) += 16i64;
				v24 = v94;
				v29 = (_DWORD*)(*(_QWORD*)(v94 + 16) - 16i64);
				if (v29 == dword_140A12138)
					v30 = -1;
				else
					v30 = v29[2];
				*(_QWORD*)(v94 + 16) = v29;
				if (v30 != 5 || !((unsigned int(__fastcall*)(__int64(__fastcall***)()))v92[1])(&v92))
					goto LABEL_74;
				v31 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v94 + 32) + 160i64), (int)v93);
				v33 = *(_QWORD*)(v32 + 16);
				*(_QWORD*)v33 = *v31;
				*(_DWORD*)(v33 + 8) = *((_DWORD*)v31 + 2);
				*(_QWORD*)(v32 + 16) += 16i64;
				v34 = v94;
				v35 = (unsigned __int64*)sub_14018F0E0(&v112, word_1409F207C)[1];
				if (v35)
				{
					v36 = -1i64;
					do
						++v36;
					while (*((_BYTE*)v35 + v36));
					sub_140058710(v34, v35, v36);
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v34 + 16) + 8i64) = 0;
					*(_QWORD*)(v34 + 16) += 16i64;
				}
				if (v113)
					sub_14018B900(v113, 0);
				sub_14005E8E0(
					v94,
					*(_QWORD*)(v94 + 16) - 32i64,
					(int*)(*(_QWORD*)(v94 + 16) - 16i64),
					*(_QWORD*)(v94 + 16) - 16i64);
				v37 = v94;
				v24 = *(_QWORD*)(v94 + 16);
				v38 = (unsigned __int64*)(v24 - 16);
				if ((_DWORD*)(v24 - 16) != dword_140A12138 && *((_DWORD*)v38 + 2) == 3)
				{
					v39 = *((_DWORD*)v38 + 2);
					if (v39 == 3)
						goto LABEL_54;
					if (v39 == 4 && sub_14005AC80((char*)(*v38 + 32), &v95))
					{
						v111 = 3;
						v38 = &v110;
						v110 = v95;
					LABEL_54:
						v40 = (int)*(double*)v38;
					}
					else
					{
						v40 = 0;
					}
					LODWORD(v115) = v40;
					*(_QWORD*)(v94 + 16) -= 32i64;
					if (!((unsigned int(__fastcall*)(__int64(__fastcall***)()))v92[1])(&v92))
						goto LABEL_74;
					v41 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v94 + 32) + 160i64), (int)v93);
					v43 = *(_QWORD*)(v42 + 16);
					*(_QWORD*)v43 = *v41;
					*(_DWORD*)(v43 + 8) = *((_DWORD*)v41 + 2);
					*(_QWORD*)(v42 + 16) += 16i64;
					v44 = v94;
					v45 = (unsigned __int64*)sub_14018F0E0(&v112, word_1409F2014)[1];
					if (v45)
					{
						v46 = -1i64;
						do
							++v46;
						while (*((_BYTE*)v45 + v46));
						sub_140058710(v44, v45, v46);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v44 + 16) + 8i64) = 0;
						*(_QWORD*)(v44 + 16) += 16i64;
					}
					if (v113)
						sub_14018B900(v113, 0);
					sub_14005E8E0(
						v94,
						*(_QWORD*)(v94 + 16) - 32i64,
						(int*)(*(_QWORD*)(v94 + 16) - 16i64),
						*(_QWORD*)(v94 + 16) - 16i64);
					v37 = v94;
					v24 = *(_QWORD*)(v94 + 16);
					v47 = (__int128*)(v24 - 16);
					if ((_DWORD*)(v24 - 16) != dword_140A12138 && *((_DWORD*)v47 + 2) == 3)
					{
						v48 = *((_DWORD*)v47 + 2);
						if (v48 == 3)
							goto LABEL_70;
						if (v48 == 4 && sub_14005AC80((char*)(*(_QWORD*)v47 + 32i64), &v109))
						{
							DWORD2(v108) = 3;
							v47 = &v108;
							*(_QWORD*)&v108 = v109;
						LABEL_70:
							v49 = (int)*(double*)v47;
						}
						else
						{
							v49 = 0;
						}
						HIDWORD(v115) = v49;
						*(_QWORD*)(v94 + 16) -= 32i64;
						sub_140527690((__int64*)&v91, (int*)&v115);
					LABEL_74:
						v25 = v94;
						goto LABEL_75;
					}
				}
				*(_QWORD*)(v37 + 16) = v24 - 32;
				goto LABEL_74;
			}
		}
	LABEL_75:
		v92 = off_140B56A08;
		if (v25)
			sub_1400579E0(v25, v24, (int)v93);
	}
	v50 = *((_QWORD*)&v91 + 1);
	if (*((_QWORD*)&v91 + 1))
	{
		v102 = v1;
		v101 = -2;
		v100 = off_140B56A08;
		sub_1400579E0((__int64)v1, v3, -2);
		v52 = (__int64)v102;
		v53 = dword_140A12138;
		v54 = v102[2];
		if (v102[3] + 64i64 < v54)
			v53 = (_DWORD*)(v102[3] + 64i64);
		*(_QWORD*)v54 = *(_QWORD*)v53;
		*(_DWORD*)(v54 + 8) = v53[2];
		*(_QWORD*)(v52 + 16) += 16i64;
		v101 = sub_1400578C0((__int64)v102);
		v55 = *(__int64(__fastcall****)(_QWORD))(v4 + 1152);
		if (v55)
		{
			v56 = (**v55)(v55);
			LODWORD(v115) = v56;
		}
		else
		{
			v56 = 0;
			LODWORD(v115) = 0;
		}
		v57 = sub_140527CB0((__int64)v1, 5);
		v51 = (int*)v91;
		if (v57)
		{
			v56 = sub_14052BAB0(v4, v57);
			LODWORD(v115) = v56;
		}
		else
		{
			v60 = sub_140527A10((__int64)v1, 5);
			if (v60)
			{
				v61 = (unsigned int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v60 + 8) + 24i64))(*(_QWORD*)(v60 + 8));
				v56 = sub_14052B980(v4, v61);
				LODWORD(v115) = v56;
			}
			else
			{
				v62 = sub_140527E00((__int64)v1);
				if (v62)
				{
					v63 = sub_140213040(*(_DWORD*)(v62 + 8));
					if (v63)
					{
						v56 = *(_DWORD*)(v63 + 4);
						LODWORD(v115) = v56;
					}
				}
				else if (v10)
				{
					v64 = *v51;
					v108 = 0i64;
					v65 = v51[1];
					v66 = v103[144];
					v67 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72);
					if (qword_140C658F8)
					{
						v95 = __PAIR64__(v65, v64);
						v68 = (__int64(__fastcall***)(_QWORD))sub_140448BE0(
							(__int64)&v95,
							v67,
							v116,
							(float*)&v108,
							v66,
							1,
							(__int64*)&v95);
						if (v68)
						{
							v56 = (**v68)(v68);
							LODWORD(v115) = v56;
						}
					}
					v1 = a1;
				}
			}
		}
		if (v50)
		{
			if (qword_140C658F8)
			{
				v69 = sub_140448420(v59, v56);
				if (v69)
				{
					v91 = 0ui64;
					v70 = v51;
					do
					{
						if (((*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)v69 + 104i64))(v69, v70) & 1) == 0)
							sub_140527690((__int64*)&v91, v70);
						v70 += 2;
						--v50;
					} while (v50);
					v71 = *((_QWORD*)&v91 + 1);
					v72 = v91;
					if (*((_QWORD*)&v91 + 1))
					{
						v73 = sub_14018B280(8i64 * *((_QWORD*)&v91 + 1) + 16, 0);
						if (v73)
						{
							*((_QWORD*)v73 + 1) = v71;
							*(_QWORD*)v73 = off_140B55060;
						}
						else
						{
							v73 = 0i64;
						}
						v6 = v73 + 4;
						v74 = v73 + 4;
						v75 = v71;
						v58 = v72 - (_QWORD)v6;
						do
						{
							if (v74)
							{
								*v74 = *(_DWORD*)((char*)v74 + v58);
								v74[1] = *(_DWORD*)((char*)v74 + v58 + 4);
							}
							v74 += 2;
							--v75;
						} while (v75);
					}
					if (v51)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v51 - 2) + 8i64))(v51 - 4);
					LODWORD(v50) = v71;
					v51 = v6;
					if (v72)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v72 - 16) + 8i64))(v72 - 16);
				}
			}
		}
		v76 = (_DWORD*)(v1[3] + 80i64);
		v91 = 0i64;
		if ((unsigned __int64)v76 < v1[2] && v76 != dword_140A12138 && (int)v76[2] > 0)
		{
			sub_1400F0BB0((__int64)v1, v58, word_1409F20BC, (float*)&v91);
			sub_1400F0BB0((__int64)v1, v77, word_1409F2094, (float*)&v91 + 1);
			sub_1400F0BB0((__int64)v1, v78, word_1409F1EEC, (float*)&v91 + 2);
		}
		v79 = (char*)sub_14018F0E0(&v112, word_1409F1ECC)[1];
		v80 = (_DWORD*)(v1[3] + 96i64);
		if ((unsigned __int64)v80 < v1[2] && v80 != dword_140A12138 && *(int*)(v1[3] + 104i64) > 0)
			v79 = (char*)sub_140056BB0(v1, 7u, 0i64);
		sub_14018F2D0(&v92, v79);
		if (v113)
			sub_14018B900(v113, 0);
		v81 = v103;
		v82 = v117;
		v83 = *(void(__fastcall****)(_QWORD))(v103[87] + 96i64);
		v84 = (int**)(v103[197] + 96i64 * (int)v117);
		v85 = sub_140538120((__int64)(v103 + 172), (int*)&v115);
		v90 = v83;
		v86 = v93;
		v88 = (unsigned int*)sub_140772910((__int64)v85, v82, v84, v87, v51, v50, &v91, v93, v90, (__int64*)&v100);
		v3 = v1[2];
		LODWORD(v6) = 1;
		v89 = _mm_cvtsi32_si128(*v88);
		*(_DWORD*)(v3 + 8) = 3;
		*(_QWORD*)v3 = *(_OWORD*)&_mm_cvtepi32_pd(v89);
		v1[2] += 16i64;
		*((_DWORD*)v81 + 392) = 1;
		if (v86)
			sub_14018B900((__int64)v86, 0);
		v100 = off_140B56A08;
		if (v102)
			sub_1400579E0((__int64)v102, v3, v101);
	}
	else
	{
		v51 = (int*)v91;
	}
	v104 = off_140B56A08;
	if (v106)
		sub_1400579E0((__int64)v106, v3, v105);
	if (v51)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v51 - 2) + 8i64))(v51 - 4);
LABEL_136:
	v12 = (__int64)v98;
	v11 = v97;
LABEL_137:
	v96 = off_140B56A08;
	if (v12)
		sub_1400579E0(v12, v3, v11);
	return (_QWORD*)(unsigned int)v6;
}
// 140533EE9: conditional instruction was optimized away because rsi.8!=0
// 140533F53: conditional instruction was optimized away because rbx.8!=0
// 1405338E3: variable 'v3' is possibly undefined
// 14053394E: variable 'v18' is possibly undefined
// 140533A3E: variable 'v27' is possibly undefined
// 140533AA8: variable 'v32' is possibly undefined
// 140533BCA: variable 'v42' is possibly undefined
// 140533CF7: variable 'v24' is possibly undefined
// 140533EC5: variable 'v59' is possibly undefined
// 140533FD8: variable 'v58' is possibly undefined
// 140533FEC: variable 'v77' is possibly undefined
// 140534000: variable 'v78' is possibly undefined
// 1405340CA: variable 'v87' is possibly undefined
// 1409F1ECC: using guessed type unsigned __int16 word_1409F1ECC[16];
// 1409F1EEC: using guessed type unsigned __int16 word_1409F1EEC[128];
// 1409F2014: using guessed type unsigned __int16 word_1409F2014[48];
// 1409F207C: using guessed type unsigned __int16 word_1409F207C[12];
// 1409F2094: using guessed type unsigned __int16 word_1409F2094[20];
// 1409F20BC: using guessed type unsigned __int16 word_1409F20BC[24];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F8: using guessed type __int64 qword_140C658F8;

