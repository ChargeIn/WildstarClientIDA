#include "../winhttp.h"

//----- (00000001400D45E0) ----------------------------------------------------
__int64 __fastcall sub_1400D45E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5)
{
	__int64 v5; // r13
	__int64 v7; // rbx
	__int64 v8; // rax
	_WORD* v9; // rax
	__int64 v10; // rax
	_WORD* v11; // rax
	__int64 v12; // rax
	_WORD* v13; // rax
	wchar_t* v14; // rdx
	__int64 v15; // rcx
	int* v16; // rax
	int* v17; // rsi
	unsigned __int64 v18; // rbx
	__int64 i; // rdi
	__int64 v20; // rbx
	int* v21; // r12
	__int64 v22; // rdi
	__int64 v23; // rax
	_WORD* v24; // rax
	__int64 v25; // rbx
	int* v26; // rax
	int* v27; // rsi
	unsigned __int64 v28; // rbx
	__int64 v29; // r13
	__int64 v30; // rbx
	int* v31; // r12
	__int64 v32; // rdi
	__int64 v33; // rax
	_WORD* v34; // rax
	__int64 v35; // rbx
	int* v36; // rax
	int* v37; // rsi
	unsigned __int64 v38; // rbx
	__int64 v39; // r12
	int* v40; // r13
	__int64 v41; // rax
	_WORD* v42; // rax
	__int64 v43; // rbx
	int* v44; // rax
	int* v45; // r12
	unsigned __int64 v46; // rbx
	__int64 v47; // r13
	__int64 j; // rsi
	__int64 v49; // rdi
	__int64 v50; // rax
	__int64 v51; // r8
	_WORD* v52; // rax
	__int64* v53; // r12
	int v54; // r14d
	char v55; // al
	__int64 v56; // rsi
	_WORD* v57; // rdi
	__int64 v58; // rdi
	__int64 v59; // rbx
	int* v60; // rax
	int* v61; // r12
	unsigned __int64 v62; // rbx
	int* v63; // r14
	__int64 v64; // rsi
	__int64 v65; // rdi
	__int64 v66; // rax
	int* v67; // rax
	int* v68; // r10
	unsigned __int64 v69; // r9
	__int64 v70; // rax
	_WORD* v71; // rdx
	__int64 v72; // rdi
	__int64 v73; // rax
	_WORD* v74; // rax
	__int64 v75; // r8
	int v76; // edx
	__int64 v77; // rax
	_QWORD* v78; // rcx
	__int64 v79; // rdi
	__int64 v80; // rbx
	int* v81; // rax
	int* v82; // r12
	unsigned __int64 v83; // rbx
	int* v84; // r14
	__int64 v85; // rsi
	__int64 v86; // rdi
	__int64* v87; // r9
	char v88; // r11
	__int64 v89; // rdx
	__int64 v90; // rdi
	__int64 v91; // rax
	int v92; // xmm1_4
	int v93; // xmm0_4
	__int64 v94; // rax
	int v95; // xmm1_4
	__int64 v96; // rax
	int v97; // xmm0_4
	__int64 v98; // rax
	int v99; // eax
	int v100; // eax
	int v101; // eax
	char v103; // [rsp+20h] [rbp-E0h]
	char v104; // [rsp+21h] [rbp-DFh]
	__int64 v106; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v107; // [rsp+38h] [rbp-C8h]
	__int64 v108; // [rsp+40h] [rbp-C0h] BYREF
	int v109; // [rsp+48h] [rbp-B8h]
	__int64* v110; // [rsp+50h] [rbp-B0h]
	int v111; // [rsp+58h] [rbp-A8h]
	int v112; // [rsp+5Ch] [rbp-A4h]
	int v113; // [rsp+60h] [rbp-A0h]
	int v114; // [rsp+68h] [rbp-98h]
	__int64 v115; // [rsp+70h] [rbp-90h]
	__int64 v116; // [rsp+78h] [rbp-88h]
	__int64 v117; // [rsp+80h] [rbp-80h]
	__int64 v118[5]; // [rsp+88h] [rbp-78h] BYREF
	__int128 v119; // [rsp+B0h] [rbp-50h]
	__int64 v120[4]; // [rsp+C0h] [rbp-40h]
	int v121[4]; // [rsp+E0h] [rbp-20h] BYREF
	int v122[4]; // [rsp+F0h] [rbp-10h]
	int v123; // [rsp+100h] [rbp+0h]
	__int64 v124[2]; // [rsp+110h] [rbp+10h] BYREF
	__int64 v125[2]; // [rsp+120h] [rbp+20h] BYREF

	v5 = 0i64;
	*(_OWORD*)a1 = xmmword_140C67280;
	v117 = a3;
	v116 = a2;
	*(_OWORD*)(a1 + 16) = xmmword_140C67290;
	v115 = a1;
	v106 = 0i64;
	v108 = 0i64;
	*(_OWORD*)(a1 + 32) = xmmword_140C672A0;
	*(_OWORD*)(a1 + 48) = xmmword_140C672B0;
	v7 = 0i64;
	*(_OWORD*)(a1 + 64) = xmmword_140C672C0;
	*(_DWORD*)(a1 + 80) = dword_140C672D0;
	if (a5)
	{
		if (*(_WORD*)a5)
		{
			do
				++v7;
			while (*((_WORD*)a5 + v7));
		}
		v16 = sub_14018B280(2 * v7 + 18, 0);
		if (v16)
		{
			*(_QWORD*)v16 = off_140B55060;
			*((_QWORD*)v16 + 1) = v7;
		}
		else
		{
			v16 = 0i64;
		}
		v17 = v16 + 4;
		v18 = 2 * v7;
		sub_1407DB590(v16 + 4, a5, v18);
		*(_WORD*)((char*)v17 + v18) = 0;
		if (v17)
			v5 = *((_QWORD*)v17 - 1);
		for (i = 0i64; aPosx[i]; ++i)
			;
		v20 = i + v5;
		v21 = (int*)sub_14018D140(v17, i + v5);
		sub_1407DB590((int*)((char*)v21 + 2 * v5), (int*)L"PosX", 2 * i);
		v22 = 0i64;
		*((_WORD*)v21 + v20) = 0;
		if (v17 != v21 && v17)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v17 - 2) + 8i64))(v17 - 4);
		v23 = sub_1401A6B80(a4, v21);
		if (v23)
		{
			v24 = (_WORD*)sub_1401A4F40(v23 + 32);
			sub_1407DF428(v24, (__int64)L"%d", &v106);
		}
		v25 = 0i64;
		if (*(_WORD*)a5)
		{
			do
				++v25;
			while (*((_WORD*)a5 + v25));
		}
		v26 = sub_14018B280(2 * v25 + 18, 0);
		if (v26)
		{
			*((_QWORD*)v26 + 1) = v25;
			*(_QWORD*)v26 = off_140B55060;
		}
		else
		{
			v26 = 0i64;
		}
		v27 = v26 + 4;
		v28 = 2 * v25;
		sub_1407DB590(v26 + 4, a5, v28);
		*(_WORD*)((char*)v27 + v28) = 0;
		if (v21)
			(*(void(__fastcall**)(_WORD*))(*((_QWORD*)v21 - 2) + 8i64))((_WORD*)v21 - 8);
		if (v27)
			v29 = *((_QWORD*)v27 - 1);
		else
			v29 = 0i64;
		if (aPosy[0])
		{
			do
				++v22;
			while (aPosy[v22]);
		}
		v30 = v22 + v29;
		v31 = (int*)sub_14018D140(v27, v22 + v29);
		sub_1407DB590((int*)((char*)v31 + 2 * v29), (int*)L"PosY", 2 * v22);
		v32 = 0i64;
		*((_WORD*)v31 + v30) = 0;
		if (v27 != v31 && v27)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v27 - 2) + 8i64))(v27 - 4);
		v33 = sub_1401A6B80(a4, v31);
		if (v33)
		{
			v34 = (_WORD*)sub_1401A4F40(v33 + 32);
			sub_1407DF428(v34, (__int64)L"%d", (char*)&v106 + 4);
		}
		v35 = 0i64;
		if (*(_WORD*)a5)
		{
			do
				++v35;
			while (*((_WORD*)a5 + v35));
		}
		v36 = sub_14018B280(2 * v35 + 18, 0);
		if (v36)
		{
			*((_QWORD*)v36 + 1) = v35;
			*(_QWORD*)v36 = off_140B55060;
		}
		else
		{
			v36 = 0i64;
		}
		v37 = v36 + 4;
		v38 = 2 * v35;
		sub_1407DB590(v36 + 4, a5, v38);
		*(_WORD*)((char*)v37 + v38) = 0;
		if (v31)
			(*(void(__fastcall**)(_WORD*))(*((_QWORD*)v31 - 2) + 8i64))((_WORD*)v31 - 8);
		if (v37)
			v39 = *((_QWORD*)v37 - 1);
		else
			v39 = 0i64;
		if (aWidth[0])
		{
			do
				++v32;
			while (aWidth[v32]);
		}
		v40 = (int*)sub_14018D140(v37, v32 + v39);
		sub_1407DB590((int*)((char*)v40 + 2 * v39), (int*)L"Width", 2 * v32);
		*((_WORD*)v40 + v32 + v39) = 0;
		if (v37 != v40 && v37)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v37 - 2) + 8i64))(v37 - 4);
		v41 = sub_1401A6B80(a4, v40);
		if (v41)
		{
			v42 = (_WORD*)sub_1401A4F40(v41 + 32);
			sub_1407DF428(v42, (__int64)L"%d", &v108);
		}
		v43 = 0i64;
		if (*(_WORD*)a5)
		{
			do
				++v43;
			while (*((_WORD*)a5 + v43));
		}
		v44 = sub_14018B280(2 * v43 + 18, 0);
		if (v44)
		{
			*((_QWORD*)v44 + 1) = v43;
			*(_QWORD*)v44 = off_140B55060;
		}
		else
		{
			v44 = 0i64;
		}
		v45 = v44 + 4;
		v46 = 2 * v43;
		sub_1407DB590(v44 + 4, a5, v46);
		*(_WORD*)((char*)v45 + v46) = 0;
		if (v40)
			(*(void(__fastcall**)(_WORD*))(*((_QWORD*)v40 - 2) + 8i64))((_WORD*)v40 - 8);
		if (v45)
			v47 = *((_QWORD*)v45 - 1);
		else
			v47 = 0i64;
		for (j = 0i64; aHeight[j]; ++j)
			;
		v49 = j + v47;
		v7 = sub_14018D140(v45, j + v47);
		sub_1407DB590((int*)(v7 + 2 * v47), (int*)L"Height", 2 * j);
		v5 = 0i64;
		*(_WORD*)(v7 + 2 * v49) = 0;
		if (v45 != (int*)v7 && v45)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v45 - 2) + 8i64))(v45 - 4);
		v15 = a4;
		v14 = (wchar_t*)v7;
	}
	else
	{
		v8 = sub_1401A6B80(a4, L"PosX");
		if (v8)
		{
			v9 = (_WORD*)sub_1401A4F40(v8 + 32);
			sub_1407DF428(v9, (__int64)L"%d", &v106);
		}
		v10 = sub_1401A6B80(a4, L"PosY");
		if (v10)
		{
			v11 = (_WORD*)sub_1401A4F40(v10 + 32);
			sub_1407DF428(v11, (__int64)L"%d", (char*)&v106 + 4);
		}
		v12 = sub_1401A6B80(a4, L"Width");
		if (v12)
		{
			v13 = (_WORD*)sub_1401A4F40(v12 + 32);
			sub_1407DF428(v13, (__int64)L"%d", &v108);
		}
		v14 = L"Height";
		v15 = a4;
	}
	v50 = sub_1401A6B80(v15, v14);
	if (v50)
	{
		v52 = (_WORD*)sub_1401A4F40(v50 + 32);
		sub_1407DF428(v52, (__int64)L"%d", (char*)&v108 + 4);
	}
	v53 = v124;
	v124[0] = 0i64;
	v124[1] = 0i64;
	v125[0] = 0i64;
	v112 = v106 + v108;
	v125[1] = 0i64;
	memset(v118, 0, 32);
	v111 = HIDWORD(v106) + HIDWORD(v108);
	v54 = 0;
	v113 = v106 + qword_140C77760;
	v109 = 0;
	v110 = v124;
	v114 = HIDWORD(v106) + HIDWORD(qword_140C77760);
	v55 = 1;
	v104 = 0;
	v56 = 0i64;
	v107 = 0i64;
	v103 = 1;
	do
	{
		if (!v55)
			goto LABEL_150;
		if (a5)
		{
			v58 = v7;
			v59 = 0i64;
			if (*(_WORD*)a5)
			{
				do
					++v59;
				while (*((_WORD*)a5 + v59));
			}
			v60 = sub_14018B280(2 * v59 + 18, 0);
			if (v60)
			{
				*((_QWORD*)v60 + 1) = v59;
				*(_QWORD*)v60 = off_140B55060;
			}
			else
			{
				v60 = 0i64;
			}
			v61 = v60 + 4;
			v62 = 2 * v59;
			sub_1407DB590(v60 + 4, a5, v62);
			*(_WORD*)((char*)v61 + v62) = 0;
			v7 = (__int64)v61;
			if (v58)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v58 - 16) + 8i64))(v58 - 16);
			v63 = *(int**)((char*)off_140A33110 + v56);
			if (v63)
			{
				if (v61)
					v5 = *((_QWORD*)v61 - 1);
				v64 = 0i64;
				if (*(_WORD*)v63)
				{
					do
						++v64;
					while (*((_WORD*)v63 + v64));
				}
				v65 = v64 + v5;
				v7 = sub_14018D140(v61, v64 + v5);
				sub_1407DB590((int*)(v7 + 2 * v5), v63, 2 * v64);
				v5 = 0i64;
				*(_WORD*)(v7 + 2 * v65) = 0;
				if (v61 != (int*)v7 && v61)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v61 - 2) + 8i64))(v61 - 4);
				v56 = v107;
			}
			v54 = v109;
			v53 = v110;
			v57 = (_WORD*)v7;
		}
		else
		{
			v57 = *(wchar_t**)((char*)off_140A33110 + v56);
		}
		v66 = sub_1401A6B80(a4, v57);
		if (!v66 || (v67 = (int*)sub_1401A4F40(v66 + 32), (v68 = v67) == 0i64))
		{
			v55 = 0;
			v103 = 0;
			goto LABEL_133;
		}
		v69 = *(unsigned __int16*)v67;
		if ((unsigned __int16)v69 <= 0x39u)
		{
			v70 = 0x3FF600000000001i64;
			if (_bittest64(&v70, v69))
			{
				v71 = v57;
				v72 = a4;
				v73 = sub_1401A6B80(a4, v71);
				if (v73)
				{
					v74 = (_WORD*)sub_1401A4F40(v73 + 32);
					sub_1407DF428(v74, (__int64)L"%f", (char*)v124 + 4 * v54);
				}
				goto LABEL_113;
			}
		}
		v75 = 0i64;
		if ((_WORD)v69 == 83)
		{
			LOWORD(v76) = 83;
			while ((_WORD)v76)
			{
				v76 = *((unsigned __int16*)v68 + ++v75);
				if (v76 != (unsigned __int16)word_140A15568[v75])
					goto LABEL_106;
			}
			v104 = 1;
			goto LABEL_112;
		}
	LABEL_106:
		v77 = v117;
		*(_DWORD*)v53 = 0;
		if (v77)
		{
			v78 = (_QWORD*)(v77 + 488);
		LABEL_111:
			*(__int64*)((char*)v118 + v56) = sub_14014E670(v78, v68);
			goto LABEL_112;
		}
		if (v116)
		{
			v78 = (_QWORD*)(v116 + 2648);
			goto LABEL_111;
		}
	LABEL_112:
		v72 = a4;
	LABEL_113:
		if (a5)
		{
			v79 = v7;
			v80 = 0i64;
			if (*(_WORD*)a5)
			{
				do
					++v80;
				while (*((_WORD*)a5 + v80));
			}
			v81 = sub_14018B280(2 * v80 + 18, 0);
			if (v81)
			{
				*((_QWORD*)v81 + 1) = v80;
				*(_QWORD*)v81 = off_140B55060;
			}
			else
			{
				v81 = 0i64;
			}
			v82 = v81 + 4;
			v83 = 2 * v80;
			sub_1407DB590(v81 + 4, a5, v83);
			*(_WORD*)((char*)v82 + v83) = 0;
			v7 = (__int64)v82;
			if (v79)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v79 - 16) + 8i64))(v79 - 16);
			v84 = *(int**)((char*)off_140A330C8 + v56);
			if (v84)
			{
				if (v82)
					v5 = *((_QWORD*)v82 - 1);
				v85 = 0i64;
				if (*(_WORD*)v84)
				{
					do
						++v85;
					while (*((_WORD*)v84 + v85));
				}
				v86 = v85 + v5;
				v7 = sub_14018D140(v82, v85 + v5);
				sub_1407DB590((int*)(v7 + 2 * v5), v84, 2 * v85);
				v5 = 0i64;
				*(_WORD*)(v7 + 2 * v86) = 0;
				if (v82 != (int*)v7 && v82)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v82 - 2) + 8i64))(v82 - 4);
				v56 = v107;
			}
			v54 = v109;
			sub_1400E1350(a4, (_WORD*)v7, (__int64)v125 + 4 * v109);
			v53 = v110;
			v55 = v103;
		}
		else
		{
			sub_1400E1350(v72, *(wchar_t**)((char*)off_140A330C8 + v56), (__int64)v125 + 4 * v54);
			v55 = v103;
		}
	LABEL_133:
		++v54;
		v53 = (__int64*)((char*)v53 + 4);
		v56 += 8i64;
		v109 = v54;
		v110 = v53;
		v107 = v56;
	} while (v54 < 4);
	if (!v55)
	{
	LABEL_150:
		v90 = v115;
		v99 = v113;
		*(_DWORD*)(v115 + 80) |= 0x300u;
		*(_DWORD*)(v90 + 64) = v99;
		*(_DWORD*)(v90 + 68) = v114;
		v100 = v112;
		*(_QWORD*)(v90 + 48) = 0i64;
		*(_DWORD*)(v90 + 72) = v100;
		v101 = v111;
		*(_QWORD*)(v90 + 56) = 0i64;
		*(_DWORD*)(v90 + 76) = v101;
		goto LABEL_151;
	}
	v87 = v124;
	if (v104)
		v87 = 0i64;
	if (v87 || v118[0])
	{
		v88 = 0;
		v123 = 0;
	}
	else
	{
		v88 = 1;
		v123 = 1;
	}
	v89 = 0i64;
	v51 = 0i64;
	do
	{
		if (v87)
			v121[v89] = *(int*)((char*)&v121[v89] + (char*)v87 - (char*)v121);
		else
			v121[v89] = 0;
		v122[v89] = *(_DWORD*)((char*)v125 + v89 * 4);
		if (v88)
			v120[v51] = 0i64;
		else
			v120[v51] = v118[v51];
		++v89;
		++v51;
	} while (v89 < 4);
	v90 = v115;
	v91 = v120[0];
	v92 = v121[1];
	*(_OWORD*)v115 = v119;
	v93 = v121[0];
	*(_QWORD*)(v90 + 16) = v91;
	v94 = v120[1];
	*(_DWORD*)(v90 + 52) = v92;
	v95 = v121[3];
	*(_QWORD*)(v90 + 24) = v94;
	v96 = v120[2];
	*(_DWORD*)(v90 + 48) = v93;
	v97 = v121[2];
	*(_DWORD*)(v90 + 60) = v95;
	*(_QWORD*)(v90 + 32) = v96;
	v98 = v120[3];
	*(_DWORD*)(v90 + 56) = v97;
	*(_QWORD*)(v90 + 40) = v98;
	*(_DWORD*)(v90 + 64) = v122[0];
	*(_DWORD*)(v90 + 68) = v122[1];
	*(_DWORD*)(v90 + 72) = v122[2];
	*(_DWORD*)(v90 + 76) = v122[3];
	*(_DWORD*)(v90 + 80) = v123 | 0x300;
LABEL_151:
	*(_OWORD*)v90 = xmmword_140B7A590;
	if (v7)
		(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)(v7 - 16) + 8i64))(
			v7 - 16,
			*(_QWORD*)(v7 - 16),
			v51 * 8);
	return v90;
}
// 1400D508D: variable 'v51' is possibly undefined
// 1409E4114: using guessed type wchar_t aD_16[3];
// 1409E441C: using guessed type wchar_t asc_1409E441C[3];
// 140A15568: using guessed type __int16 word_140A15568[8];
// 140A31868: using guessed type wchar_t aPosy[5];
// 140A31878: using guessed type wchar_t aPosx[5];
// 140A31888: using guessed type wchar_t aHeight[7];
// 140A31898: using guessed type wchar_t aWidth[6];
// 140A330C8: using guessed type wchar_t *off_140A330C8[19];
// 140A33110: using guessed type wchar_t *off_140A33110[10];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B7A590: using guessed type __int128 xmmword_140B7A590;
// 140C67280: using guessed type __int128 xmmword_140C67280;
// 140C67290: using guessed type __int128 xmmword_140C67290;
// 140C672A0: using guessed type __int128 xmmword_140C672A0;
// 140C672B0: using guessed type __int128 xmmword_140C672B0;
// 140C672C0: using guessed type __int128 xmmword_140C672C0;
// 140C672D0: using guessed type int dword_140C672D0;
// 140C77760: using guessed type __int64 qword_140C77760;

