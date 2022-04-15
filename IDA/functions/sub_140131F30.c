#include "../winhttp.h"

//----- (0000000140131F30) ----------------------------------------------------
__int64 __fastcall sub_140131F30(__int64 a1, __int64 a2, int* a3, __int64 a4, __int64 a5)
{
	__int64 v7; // rax
	__int64 v8; // rax
	int* v9; // rdi
	__m128i* v10; // r14
	__int64 v11; // rax
	__int64 v12; // rbx
	unsigned __int64 v13; // rbx
	__int64 v14; // r14
	unsigned __int64 v15; // rbx
	int v16; // r12d
	wchar_t* v17; // rdx
	__int64 v18; // rax
	wchar_t* v19; // rax
	char v20; // r15
	__int64 v21; // rax
	__int64 v22; // rax
	int* v23; // rdi
	int* v24; // r9
	__int64 v25; // rax
	__int64 v26; // rsi
	__int64 v27; // rbx
	int* v28; // rsi
	int* v29; // rdi
	__int64 v30; // rax
	__int64 v31; // rax
	int* v32; // rdx
	__int64 v33; // rax
	int* v34; // rax
	__int64 v35; // r12
	__int64 v36; // r13
	int v37; // esi
	__int64 v38; // rax
	__int64 v39; // rax
	int* v40; // rdi
	int* v41; // r14
	__int64 v42; // rax
	__int64 v43; // rbx
	unsigned __int64 v44; // rbx
	char* v45; // rdi
	unsigned __int64 v46; // rdx
	char v47; // r11
	wchar_t** v48; // rbx
	__int64 v49; // rdi
	char* v50; // rax
	unsigned __int64 v51; // rcx
	signed __int64 v52; // r10
	__int64 v53; // rdi
	const wchar_t* v54; // rbx
	wchar_t* v55; // rax
	int v56; // ecx
	bool v57; // zf
	unsigned __int16* v58; // rax
	__int64 v59; // rdi
	const wchar_t* v60; // rbx
	wchar_t* v61; // rax
	int v62; // ecx
	bool v63; // zf
	__int64 v64; // rax
	int* v65; // rdi
	int* v66; // r15
	__int64 v67; // rax
	__int64 v68; // rbx
	unsigned __int64 v69; // rbx
	__int64 v70; // rdi
	const wchar_t* v71; // rbx
	wchar_t* v72; // rax
	int v73; // ecx
	bool v74; // zf
	_WORD* v75; // rax
	int v76; // ebx
	__int64 v77; // rax
	__int64 v78; // rdi
	const wchar_t* v79; // rbx
	wchar_t* v80; // rax
	int v81; // ecx
	bool v82; // zf
	WCHAR* v83; // rax
	float v84; // xmm1_4
	wchar_t** v85; // rdi
	unsigned int* v86; // rbx
	unsigned int* v87; // rsi
	unsigned __int64 v88; // rax
	__int64 v89; // r8
	__int64 v90; // rdx
	__int64 v91; // rcx
	int v92; // r9d
	unsigned __int64 v93; // rbx
	int* v94; // r15
	unsigned int* v95; // rdi
	__int64 v96; // rdx
	__int64 v97; // rdx
	__int64 v98; // rcx
	int v99; // r8d
	__int64 v100; // rsi
	const wchar_t* v101; // rdi
	wchar_t* v102; // rax
	int v103; // ecx
	bool v104; // zf
	_WORD* v105; // rax
	__int64 v106; // rsi
	const wchar_t* v107; // rdi
	wchar_t* v108; // rax
	int v109; // ecx
	bool v110; // zf
	_WORD* v111; // rax
	__int64 v113; // [rsp+68h] [rbp-A0h] BYREF
	__int64 v114; // [rsp+70h] [rbp-98h] BYREF
	__int64 v115; // [rsp+78h] [rbp-90h] BYREF
	int v116; // [rsp+80h] [rbp-88h] BYREF
	__int64 v117; // [rsp+88h] [rbp-80h]
	int* v118; // [rsp+90h] [rbp-78h]
	__m128i* v119; // [rsp+98h] [rbp-70h]
	__int64 v120; // [rsp+A0h] [rbp-68h] BYREF
	int* v121; // [rsp+A8h] [rbp-60h]
	__int64 v122; // [rsp+B0h] [rbp-58h]
	__int64 v123; // [rsp+B8h] [rbp-50h]
	__int64 v124; // [rsp+C0h] [rbp-48h]
	_OWORD v125[6]; // [rsp+C8h] [rbp-40h] BYREF

	v124 = a2;
	v117 = a4;
	v118 = a3;
	v114 = a5;
	v7 = sub_1401A6B80(a5, L"Base");
	if (v7)
		v8 = sub_1401A4F40(v7 + 32);
	else
		v8 = 0i64;
	v9 = (int*)&unk_1409D8834;
	v10 = 0i64;
	if (v8)
		v9 = (int*)v8;
	v11 = 0i64;
	v119 = 0i64;
	if (*(_WORD*)v9)
	{
		do
			++v11;
		while (*((_WORD*)v9 + v11));
	}
	v12 = (2 * v11) >> 1;
	if ((unsigned __int64)(v12 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v10 = (__m128i*)sub_14018B280(2 * (v12 + 1), 0);
		v119 = v10;
	}
	v13 = 2 * v12;
	sub_1407DB590(v10->m128i_i32, v9, v13);
	if (&v10->m128i_i8[v13])
		v10->m128i_i16[v13 / 2] = 0;
	sub_1400D45E0((__int64)v125, a1, a2, a5, 0i64);
	v14 = 0i64;
	v15 = 0i64;
	v16 = (unsigned int)sub_140132AE0(a5);
	do
	{
		v17 = off_140A20F60[v15];
		LOBYTE(v113) = 0;
		v18 = sub_1401A6B80(a5, v17);
		if (v18)
		{
			v19 = (wchar_t*)sub_1401A4F40(v18 + 32);
			sub_1401A52E0(v19, (bool*)&v113);
			if ((_BYTE)v113)
				v14 |= 1i64 << v15;
		}
		++v15;
	} while (v15 < 0xA);
	v20 = 0;
	v21 = sub_1401A6B80(v114, L"RadioGroup");
	if (v21)
		v22 = sub_1401A4F40(v21 + 32);
	else
		v22 = 0i64;
	v23 = (int*)&unk_1409D8874;
	v24 = 0i64;
	if (v22)
		v23 = (int*)v22;
	v25 = 0i64;
	v121 = 0i64;
	v123 = 0i64;
	if (*(_WORD*)v23)
	{
		do
			++v25;
		while (*((_WORD*)v23 + v25));
	}
	v26 = (2 * v25) >> 1;
	if ((unsigned __int64)(v26 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v24 = sub_14018B280(2 * (v26 + 1), 0);
		v121 = v24;
		v123 = (__int64)v24 + 2 * v26 + 2;
	}
	v27 = 2 * v26;
	sub_1407DB590(v24, v23, 2 * v26);
	v28 = v121;
	v29 = (int*)((char*)v121 + v27);
	v122 = (__int64)v121 + v27;
	if ((int*)((char*)v121 + v27))
		*(_WORD*)v29 = 0;
	if ((((char*)v29 - (char*)v28) & 0xFFFFFFFFFFFFFFFEui64) == 0)
	{
		v30 = sub_1401A6B80(v114, L"GlobalRadioGroup");
		if (v30)
			v31 = sub_1401A4F40(v30 + 32);
		else
			v31 = 0i64;
		v32 = (int*)&unk_1409D87EC;
		if (v31)
			v32 = (int*)v31;
		v33 = 0i64;
		if (*(_WORD*)v32)
		{
			do
				++v33;
			while (*((_WORD*)v32 + v33));
		}
		if ((2 * v33) >> 1)
		{
			sub_14001C310(&v120, v32, (int*)((char*)v32 + 2 * v33));
			v28 = v121;
		}
		else
		{
			sub_1407DB590(v28, v32, 0i64);
			if (v28 != v29)
				sub_1407DB590(v28, v29, 2ui64);
		}
		v20 = 1;
	}
	v34 = sub_14018B280(1568i64, 0);
	if (v34)
		v35 = sub_14012FA20((__int64)v34, a1, v124, v119, v16, (unsigned __int16*)v28, v20, v118, v125, v117, v14);
	else
		v35 = 0i64;
	v36 = v114;
	v37 = 0;
	v38 = sub_1401A6B80(v114, L"Metakey");
	if (v38)
		v39 = sub_1401A4F40(v38 + 32);
	else
		v39 = 0i64;
	v40 = (int*)&unk_1409D8804;
	v41 = 0i64;
	if (v39)
		v40 = (int*)v39;
	v117 = 0i64;
	v42 = 0i64;
	if (*(_WORD*)v40)
	{
		do
			++v42;
		while (*((_WORD*)v40 + v42));
	}
	v43 = (2 * v42) >> 1;
	if ((unsigned __int64)(v43 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v41 = sub_14018B280(2 * (v43 + 1), 0);
		v117 = (__int64)v41;
	}
	v44 = 2 * v43;
	sub_1407DB590(v41, v40, v44);
	v45 = (char*)v41 + v44;
	v46 = 0i64;
	if ((int*)((char*)v41 + v44))
		*(_WORD*)v45 = 0;
	v47 = 0;
	v48 = off_140A31678;
	v49 = (v45 - (char*)v41) >> 1;
	while (1)
	{
		v50 = (char*)*v48;
		v51 = 0i64;
		if (**v48)
		{
			do
				++v51;
			while (*(_WORD*)&v50[2 * v51]);
		}
		if (v49 == v51)
			break;
	LABEL_78:
		++v47;
		++v48;
		if (((1 << v47) & 7) == 0)
			goto LABEL_64;
	}
	if (v51)
	{
		v52 = (char*)v41 - v50;
		while (*(_WORD*)&v50[v52] == *(_WORD*)v50)
		{
			++v46;
			v50 += 2;
			if (v46 >= v51)
				goto LABEL_63;
		}
		v46 = 0i64;
		goto LABEL_78;
	}
LABEL_63:
	v37 = 1 << v47;
LABEL_64:
	v53 = *(_QWORD*)(v36 + 96);
	if (v53)
	{
		while (1)
		{
			v54 = L"Hotkey";
			v55 = (wchar_t*)sub_1401A4F40(v53 + 8);
			if (v55 == L"Hotkey")
				break;
			v56 = 0;
			if (*v55)
			{
				do
				{
					if (!*v54 || *v55 != *v54)
						break;
					v57 = v56 == 0x7FFFFFFF;
					if (v56 == 0x7FFFFFFF)
						goto LABEL_72;
					++v55;
					++v54;
					++v56;
				} while (*v55);
				v57 = v56 == 0x7FFFFFFF;
			LABEL_72:
				if (v57)
					break;
			}
			if (!*v55 && !*v54)
				break;
			v53 = *(_QWORD*)(v53 + 56);
			if (!v53)
				goto LABEL_82;
		}
		v58 = (unsigned __int16*)sub_1401A4F40(v53 + 32);
		if (v58)
		{
			LODWORD(v114) = *v58;
			HIDWORD(v114) = v37;
			sub_140130080(v35, &v114);
		}
	}
LABEL_82:
	v59 = *(_QWORD*)(v36 + 96);
	if (v59)
	{
		while (1)
		{
			v60 = L"ContentType";
			v61 = (wchar_t*)sub_1401A4F40(v59 + 8);
			if (v61 == L"ContentType")
				break;
			v62 = 0;
			if (*v61)
			{
				do
				{
					if (!*v60 || *v61 != *v60)
						break;
					v63 = v62 == 0x7FFFFFFF;
					if (v62 == 0x7FFFFFFF)
						goto LABEL_90;
					++v61;
					++v60;
					++v62;
				} while (*v61);
				v63 = v62 == 0x7FFFFFFF;
			LABEL_90:
				if (v63)
					break;
			}
			if (!*v61 && !*v60)
				break;
			v59 = *(_QWORD*)(v59 + 56);
			if (!v59)
				goto LABEL_94;
		}
		v64 = sub_1401A4F40(v59 + 32);
	}
	else
	{
	LABEL_94:
		v64 = 0i64;
	}
	v65 = (int*)&unk_1409D881C;
	v66 = 0i64;
	if (v64)
		v65 = (int*)v64;
	v118 = 0i64;
	v67 = 0i64;
	if (*(_WORD*)v65)
	{
		do
			++v67;
		while (*((_WORD*)v65 + v67));
	}
	v68 = (2 * v67) >> 1;
	if ((unsigned __int64)(v68 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v66 = sub_14018B280(2 * (v68 + 1), 0);
		v118 = v66;
	}
	v69 = 2 * v68;
	sub_1407DB590(v66, v65, v69);
	if ((int*)((char*)v66 + v69))
		*(_WORD*)((char*)v66 + v69) = 0;
	v70 = *(_QWORD*)(v36 + 96);
	v116 = 0;
	if (v70)
	{
		while (1)
		{
			v71 = L"ContentId";
			v72 = (wchar_t*)sub_1401A4F40(v70 + 8);
			if (v72 == L"ContentId")
				break;
			v73 = 0;
			if (!*v72)
				goto LABEL_113;
			do
			{
				if (!*v71 || *v72 != *v71)
					break;
				v74 = v73 == 0x7FFFFFFF;
				if (v73 == 0x7FFFFFFF)
					goto LABEL_111;
				++v72;
				++v71;
				++v73;
			} while (*v72);
			v74 = v73 == 0x7FFFFFFF;
		LABEL_111:
			if (v74)
				break;
			if (!*v72)
			{
			LABEL_113:
				if (!*v71)
					break;
			}
			v70 = *(_QWORD*)(v70 + 56);
			if (!v70)
				goto LABEL_121;
		}
		v75 = (_WORD*)sub_1401A4F40(v70 + 32);
		if ((unsigned int)sub_1407DF428(v75, (__int64)L"%d", &v116) == 1)
		{
			v76 = v116;
			v77 = 0i64;
			if (*(_WORD*)v66)
			{
				do
					++v77;
				while (*((_WORD*)v66 + v77));
			}
			sub_14001C480(v35 + 1464, v66, (int*)((char*)v66 + 2 * v77));
			*(_DWORD*)(v35 + 1496) = v76;
		}
	}
LABEL_121:
	v78 = *(_QWORD*)(v36 + 96);
	if (v78)
	{
		while (1)
		{
			v79 = L"BuzzerFrequency";
			v80 = (wchar_t*)sub_1401A4F40(v78 + 8);
			if (v80 == L"BuzzerFrequency")
				break;
			v81 = 0;
			if (!*v80)
				goto LABEL_131;
			do
			{
				if (!*v79 || *v80 != *v79)
					break;
				v82 = v81 == 0x7FFFFFFF;
				if (v81 == 0x7FFFFFFF)
					goto LABEL_129;
				++v80;
				++v79;
				++v81;
			} while (*v80);
			v82 = v81 == 0x7FFFFFFF;
		LABEL_129:
			if (v82)
				break;
			if (!*v80)
			{
			LABEL_131:
				if (!*v79)
					break;
			}
			v78 = *(_QWORD*)(v78 + 56);
			if (!v78)
				goto LABEL_136;
		}
		v83 = (WCHAR*)sub_1401A4F40(v78 + 32);
		if (v83)
		{
			v84 = *(double*)sub_1407DFE80(v83, 0i64).m128_u64;
			*(float*)(v35 + 1424) = 1.0 / fminf(fmaxf(0.25, v84), 60.0);
		}
	}
LABEL_136:
	v85 = off_140A20FB0;
	v86 = (unsigned int*)(v35 + 1536);
	do
	{
		v87 = sub_1400F66F0(&v114, v36, *v85, *(unsigned int*)((char*)v86 + (_QWORD)&unk_140C2C8E8 - v35 - 1536));
		if (v86 == v87)
		{
			v89 = qword_140C63678;
		}
		else
		{
			sub_1401429A0(qword_140C63678, *v86);
			v88 = *v87;
			v89 = qword_140C63678;
			*v86 = v88;
			if (v88 < *(_QWORD*)(v89 + 48))
			{
				v90 = *(_QWORD*)(v89 + 40);
				v91 = 32i64 * (unsigned int)v88;
				v92 = *(_DWORD*)(v90 + v91 + 16);
				if ((unsigned int)(v92 - 1) <= 0xFFFFFFFD)
					*(_DWORD*)(v90 + v91 + 16) = v92 + 1;
			}
		}
		sub_1401429A0(v89, v114);
		++v85;
		++v86;
	} while ((__int64)v85 < (__int64)L"Picture");
	sub_1400F66F0(&v114, v36, &word_140A31AB8, 0xFFFFFFFF);
	v93 = (unsigned int)v114;
	v94 = v118;
	v95 = (unsigned int*)(v35 + 708);
	if ((__int64*)(v35 + 708) != &v114)
	{
		sub_1401429A0(qword_140C63678, *v95);
		v96 = qword_140C63678;
		*v95 = v93;
		if (v93 < *(_QWORD*)(v96 + 48))
		{
			v97 = *(_QWORD*)(v96 + 40);
			v98 = 32i64 * (unsigned int)v93;
			v99 = *(_DWORD*)(v98 + v97 + 16);
			if ((unsigned int)(v99 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v98 + v97 + 16) = v99 + 1;
		}
	}
	v100 = *(_QWORD*)(v36 + 96);
	v115 = 5i64;
	if (v100)
	{
		while (1)
		{
			v101 = L"ButtonTextXMargin";
			v102 = (wchar_t*)sub_1401A4F40(v100 + 8);
			if (v102 == L"ButtonTextXMargin")
				break;
			v103 = 0;
			if (*v102)
			{
				do
				{
					if (!*v101 || *v102 != *v101)
						break;
					v104 = v103 == 0x7FFFFFFF;
					if (v103 == 0x7FFFFFFF)
						goto LABEL_155;
					++v102;
					++v101;
					++v103;
				} while (*v102);
				v104 = v103 == 0x7FFFFFFF;
			LABEL_155:
				if (v104)
					break;
			}
			if (!*v102 && !*v101)
				break;
			v100 = *(_QWORD*)(v100 + 56);
			if (!v100)
				goto LABEL_161;
		}
		v105 = (_WORD*)sub_1401A4F40(v100 + 32);
		sub_1407DF428(v105, (__int64)L"%d", &v115);
	}
LABEL_161:
	v106 = *(_QWORD*)(v36 + 96);
	if (v106)
	{
		while (1)
		{
			v107 = L"ButtonTextYMargin";
			v108 = (wchar_t*)sub_1401A4F40(v106 + 8);
			if (v108 == L"ButtonTextYMargin")
				break;
			v109 = 0;
			if (*v108)
			{
				do
				{
					if (!*v107 || *v108 != *v107)
						break;
					v110 = v109 == 0x7FFFFFFF;
					if (v109 == 0x7FFFFFFF)
						goto LABEL_169;
					++v108;
					++v107;
					++v109;
				} while (*v108);
				v110 = v109 == 0x7FFFFFFF;
			LABEL_169:
				if (v110)
					break;
			}
			if (!*v108 && !*v107)
				break;
			v106 = *(_QWORD*)(v106 + 56);
			if (!v106)
				goto LABEL_175;
		}
		v111 = (_WORD*)sub_1401A4F40(v106 + 32);
		sub_1407DF428(v111, (__int64)L"%d", (char*)&v115 + 4);
	}
LABEL_175:
	*(_QWORD*)(v35 + 1408) = v115;
	sub_1400C3AD0(v35 + 1024, (_DWORD*)(v35 + 1360));
	sub_1401429A0(qword_140C63678, v93);
	if (v94)
		sub_14018B900((__int64)v94, 0);
	if (v117)
		sub_14018B900(v117, 0);
	if (v121)
		sub_14018B900((__int64)v121, 0);
	if (v119)
		sub_14018B900((__int64)v119, 0);
	return v35;
}
// 1401323F3: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 14013241C: conditional instruction was optimized away because rdi.8!=0
// 1401325C7: conditional instruction was optimized away because rdi.8!=0
// 1401325DE: conditional instruction was optimized away because rdi.8!=0
// 1401326BA: conditional instruction was optimized away because rdi.8!=0
// 1401328F7: conditional instruction was optimized away because rsi.8!=0
// 140132997: conditional instruction was optimized away because rsi.8!=0
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A20F60: using guessed type wchar_t *off_140A20F60[16];
// 140A20FB0: using guessed type wchar_t *off_140A20FB0[6];
// 140A20FE0: using guessed type wchar_t aPicture_0[8];
// 140A31678: using guessed type wchar_t *off_140A31678[21];
// 140A31928: using guessed type wchar_t aBase[5];
// 140A31938: using guessed type wchar_t aContentid[10];
// 140A31950: using guessed type wchar_t aContenttype[12];
// 140A319E0: using guessed type wchar_t aHotkey[7];
// 140A31A28: using guessed type wchar_t aMetakey[8];
// 140A31AB8: using guessed type __int16 word_140A31AB8;
// 140A31BA0: using guessed type wchar_t aButtontextymar[18];
// 140A31BC8: using guessed type wchar_t aButtontextxmar[18];
// 140A32748: using guessed type wchar_t aBuzzerfrequenc[16];
// 140A32768: using guessed type wchar_t aGlobalradiogro[17];
// 140A327F8: using guessed type wchar_t aRadiogroup[11];
// 140C63678: using guessed type __int64 qword_140C63678;
// 140131F30: using guessed type _OWORD var_F0[6];

