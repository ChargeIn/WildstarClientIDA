//----- (000000014054F9E0) ----------------------------------------------------
int* __fastcall sub_14054F9E0(int* a1, int a2, __int64 a3, __int64 a4, int* a5, __int64 a6)
{
	__int64 v7; // rsi
	int* v8; // rax
	int* v9; // rax
	int* v10; // rax
	_QWORD* v11; // r12
	__int64 v12; // rax
	int* v13; // r14
	__int64 v14; // r15
	int* v15; // rax
	int* v16; // rax
	_QWORD* v17; // r12
	__int64 v18; // rax
	int* v19; // r14
	int* v20; // r13
	int* v21; // rax
	_QWORD* v22; // r12
	__int64 v23; // rax
	int* v24; // r14
	__int64 v25; // r15
	int* v26; // rax
	int* v27; // rax
	__int64 v28; // r15
	int* v29; // rax
	__int64 v30; // rcx
	_QWORD* v31; // rax
	int* v32; // rax
	_QWORD* v33; // rax
	__int64 v34; // r12
	int* v35; // rax
	_QWORD* v36; // r15
	__int64 v37; // rax
	int* v38; // rdi
	__int64 v39; // r14
	int* v40; // rax
	int* v41; // rax
	_QWORD* v42; // r15
	__int64 v43; // rax
	int* v44; // rdi
	__int64 v45; // r14
	int* v46; // rax
	__int64 v47; // r13
	__int64* v48; // rax
	__int64* v49; // r15
	int* v50; // rdi
	__int64 v51; // rax
	bool v52; // zf
	__int64 v53; // r14
	int* v54; // rax
	__int64* v55; // rax
	__int64* v56; // r15
	int* v57; // rdi
	__int64 v58; // rax
	__int64 v59; // r14
	int* v60; // rax
	unsigned __int64 v61; // r15
	unsigned int v62; // r14d
	__int64 v63; // r12
	__int64 v64; // rax
	_QWORD* v65; // rdi
	_QWORD* v66; // rbx
	unsigned int v67; // r12d
	_WORD* v68; // r14
	unsigned int v69; // r13d
	int* v70; // rdi
	__int64 v71; // rax
	__int64 v72; // r15
	_QWORD* v73; // rax
	__int64 v74; // rcx
	__int64 v75; // rbx
	__int64 v76; // r8
	_QWORD* v77; // rax
	__int16* v78; // rax
	int* v79; // r14
	int* v80; // rbx
	int* v81; // rax
	__int64 v82; // rax
	int* v83; // rdx
	__int64 v84; // rbx
	__int64 v85; // rdi
	__int64 v87; // [rsp+28h] [rbp-E0h] BYREF
	int* v88; // [rsp+30h] [rbp-D8h]
	int* v89; // [rsp+38h] [rbp-D0h]
	__int64 v90; // [rsp+40h] [rbp-C8h]
	__int64 v91; // [rsp+48h] [rbp-C0h] BYREF
	unsigned __int64 v92; // [rsp+50h] [rbp-B8h]
	__int64(__fastcall * *v93)(); // [rsp+68h] [rbp-A0h] BYREF
	__int64 v94[10]; // [rsp+70h] [rbp-98h] BYREF
	char v95[8]; // [rsp+C0h] [rbp-48h] BYREF
	int* v96; // [rsp+C8h] [rbp-40h]
	int* v97; // [rsp+D0h] [rbp-38h]
	__int128 v98; // [rsp+128h] [rbp+20h]
	int* v99; // [rsp+138h] [rbp+30h]
	__int64 v100[5]; // [rsp+148h] [rbp+40h] BYREF
	_QWORD v101[2]; // [rsp+170h] [rbp+68h] BYREF
	int* v102; // [rsp+180h] [rbp+78h]
	int* v103; // [rsp+188h] [rbp+80h]
	__int64 v104; // [rsp+190h] [rbp+88h]
	unsigned int v105; // [rsp+198h] [rbp+90h]
	_WORD* v106; // [rsp+1A8h] [rbp+A0h]
	_WORD* v107; // [rsp+1B0h] [rbp+A8h]
	int* v108; // [rsp+208h] [rbp+100h]
	int* v109; // [rsp+210h] [rbp+108h]
	int* v110; // [rsp+218h] [rbp+110h]
	__int64 v111; // [rsp+228h] [rbp+120h] BYREF
	__int64 v112; // [rsp+230h] [rbp+128h]
	__int64 v113; // [rsp+248h] [rbp+140h] BYREF
	__int64 v114; // [rsp+250h] [rbp+148h]
	int* v115; // [rsp+2A8h] [rbp+1A0h] BYREF
	int v116; // [rsp+2B0h] [rbp+1A8h]
	_QWORD* v117; // [rsp+2C0h] [rbp+1B8h]

	v116 = a2;
	v115 = a1;
	sub_1400B6F30((__int64)&v93);
	v7 = 0i64;
	v99 = 0i64;
	v98 = 0i64;
	v93 = off_140B69230;
	v8 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v98 = v8;
	*((_QWORD*)&v98 + 1) = v8;
	v99 = v8 + 4;
	if (v8)
		*(_WORD*)v8 = 0;
	sub_1400B6F30((__int64)v100);
	v100[0] = (__int64)off_140B69230;
	v9 = sub_14018B280(16i64, 0);
	v108 = v9;
	v109 = v9;
	v110 = v9 + 4;
	if (v9)
		*(_WORD*)v9 = 0;
	if (a4)
	{
		v10 = sub_14018B280(96i64, 0);
		if (v10)
			v11 = (_QWORD*)sub_1404DB7E0((__int64)v10, a4);
		else
			v11 = 0i64;
		v12 = 0i64;
		v13 = 0i64;
		v88 = 0i64;
		v89 = 0i64;
		v90 = 0i64;
		do
			++v12;
		while (word_140B0A7C8[v12]);
		v14 = (2 * v12) >> 1;
		if ((unsigned __int64)(v14 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v13 = sub_14018B280(2 * (v14 + 1), 0);
			v88 = v13;
			v89 = v13;
			v90 = (__int64)v13 + 2 * v14 + 2;
		}
		sub_1407DB590(v13, (int*)word_140B0A7C8, 2 * v14);
		v15 = (int*)((char*)v13 + 2 * v14);
		v89 = v15;
		if (v15)
			*(_WORD*)v15 = 0;
		sub_1400B7480((__int64)&v93, v11);
		(*(void(__fastcall**)(_QWORD*, __int64*))(*v11 + 72i64))(v11, &v87);
		if (v88)
			sub_14018B900((__int64)v88, 0);
		v16 = sub_14018B280(96i64, 0);
		if (v16)
			v17 = (_QWORD*)sub_1404DB7E0((__int64)v16, a4);
		else
			v17 = 0i64;
		v18 = 0i64;
		v19 = 0i64;
		v88 = 0i64;
		v89 = 0i64;
		v90 = 0i64;
		do
			++v18;
		while (word_140B0A7C8[v18]);
	}
	else
	{
		v20 = a5;
		v21 = sub_14018B280(88i64, 0);
		if (!v20)
		{
			if (v21)
				v31 = sub_1400B6390(v21);
			else
				v31 = 0i64;
			sub_1400B7480((__int64)&v93, v31);
			v32 = sub_14018B280(88i64, 0);
			if (v32)
				v33 = sub_1400B6390(v32);
			else
				v33 = 0i64;
			sub_1400B7480((__int64)v100, v33);
			goto LABEL_53;
		}
		if (v21)
			v22 = (_QWORD*)sub_1404DC400((__int64)v21, *v20);
		else
			v22 = 0i64;
		v23 = 0i64;
		v24 = 0i64;
		v88 = 0i64;
		v89 = 0i64;
		v90 = 0i64;
		do
			++v23;
		while (word_140B0A7C8[v23]);
		v25 = (2 * v23) >> 1;
		if ((unsigned __int64)(v25 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v24 = sub_14018B280(2 * (v25 + 1), 0);
			v88 = v24;
			v89 = v24;
			v90 = (__int64)v24 + 2 * v25 + 2;
		}
		sub_1407DB590(v24, (int*)word_140B0A7C8, 2 * v25);
		v26 = (int*)((char*)v24 + 2 * v25);
		v89 = v26;
		if (v26)
			*(_WORD*)v26 = 0;
		sub_1400B7480((__int64)&v93, v22);
		(*(void(__fastcall**)(_QWORD*, __int64*))(*v22 + 72i64))(v22, &v87);
		if (v88)
			sub_14018B900((__int64)v88, 0);
		v27 = sub_14018B280(88i64, 0);
		if (v27)
			v17 = (_QWORD*)sub_1404DC400((__int64)v27, *v20);
		else
			v17 = 0i64;
		v18 = 0i64;
		v19 = 0i64;
		v88 = 0i64;
		v89 = 0i64;
		v90 = 0i64;
		do
			++v18;
		while (word_140B0A7C8[v18]);
	}
	v28 = (2 * v18) >> 1;
	if ((unsigned __int64)(v28 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v19 = sub_14018B280(2 * (v28 + 1), 0);
		v89 = v19;
		v88 = v19;
		v90 = (__int64)v19 + 2 * v28 + 2;
	}
	sub_1407DB590(v19, (int*)word_140B0A7C8, 2 * v28);
	v29 = (int*)((char*)v19 + 2 * v28);
	v89 = v29;
	if (v29)
		*(_WORD*)v29 = 0;
	sub_1400B7480((__int64)v100, v17);
	(*(void(__fastcall**)(_QWORD*, __int64*))(*v17 + 72i64))(v17, &v87);
	v30 = (__int64)v88;
	if (v88)
		sub_14018B900((__int64)v88, 0);
LABEL_53:
	v34 = *(_QWORD*)(qword_140C65898 + 120);
	if (v34)
	{
		v35 = sub_14018B280(96i64, 0);
		if (v35)
			v36 = (_QWORD*)sub_1404DB7E0((__int64)v35, v34);
		else
			v36 = 0i64;
		v37 = 0i64;
		v38 = 0i64;
		v88 = 0i64;
		v89 = 0i64;
		v90 = 0i64;
		do
			++v37;
		while (word_140B0A7D8[v37]);
		v39 = (2 * v37) >> 1;
		if ((unsigned __int64)(v39 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v38 = sub_14018B280(2 * (v39 + 1), 0);
			v88 = v38;
			v89 = v38;
			v90 = (__int64)v38 + 2 * v39 + 2;
		}
		sub_1407DB590(v38, (int*)word_140B0A7D8, 2 * v39);
		v40 = (int*)((char*)v38 + 2 * v39);
		v89 = v40;
		if (v40)
			*(_WORD*)v40 = 0;
		sub_1400B7480((__int64)&v93, v36);
		(*(void(__fastcall**)(_QWORD*, __int64*))(*v36 + 72i64))(v36, &v87);
		if (v88)
			sub_14018B900((__int64)v88, 0);
		v41 = sub_14018B280(96i64, 0);
		if (v41)
			v42 = (_QWORD*)sub_1404DB7E0((__int64)v41, v34);
		else
			v42 = 0i64;
		v43 = 0i64;
		v44 = 0i64;
		v88 = 0i64;
		v89 = 0i64;
		v90 = 0i64;
		do
			++v43;
		while (word_140B0A7D8[v43]);
		v45 = (2 * v43) >> 1;
		if ((unsigned __int64)(v45 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v44 = sub_14018B280(2 * (v45 + 1), 0);
			v88 = v44;
			v89 = v44;
			v90 = (__int64)v44 + 2 * v45 + 2;
		}
		sub_1407DB590(v44, (int*)word_140B0A7D8, 2 * v45);
		v46 = (int*)((char*)v44 + 2 * v45);
		v89 = v46;
		if (v46)
			*(_WORD*)v46 = 0;
		sub_1400B7480((__int64)v100, v42);
		(*(void(__fastcall**)(_QWORD*, __int64*))(*v42 + 72i64))(v42, &v87);
		v30 = (__int64)v88;
		if (v88)
			sub_14018B900((__int64)v88, 0);
	}
	v47 = a6;
	if (a6)
	{
		v48 = (__int64*)sub_14018B280(88i64, 0);
		if (v48)
			v49 = sub_1404DD130(v48, **(_DWORD**)(v47 + 8));
		else
			v49 = 0i64;
		v50 = 0i64;
		v88 = 0i64;
		v89 = 0i64;
		v90 = 0i64;
		v51 = 0i64;
		do
			v52 = aQuest_2[++v51] == 0;
		while (!v52);
		v53 = (2 * v51) >> 1;
		if ((unsigned __int64)(v53 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v50 = sub_14018B280(2 * (v53 + 1), 0);
			v88 = v50;
			v89 = v50;
			v90 = (__int64)v50 + 2 * v53 + 2;
		}
		sub_1407DB590(v50, (int*)L"quest", 2 * v53);
		v54 = (int*)((char*)v50 + 2 * v53);
		v89 = v54;
		if (v54)
			*(_WORD*)v54 = 0;
		sub_1400B7480((__int64)&v93, v49);
		(*(void(__fastcall**)(__int64*, __int64*))(*v49 + 72))(v49, &v87);
		if (v88)
			sub_14018B900((__int64)v88, 0);
		v55 = (__int64*)sub_14018B280(88i64, 0);
		if (v55)
			v56 = sub_1404DD130(v55, **(_DWORD**)(v47 + 8));
		else
			v56 = 0i64;
		v57 = 0i64;
		v88 = 0i64;
		v89 = 0i64;
		v90 = 0i64;
		v58 = 0i64;
		do
			v52 = aQuest_3[++v58] == 0;
		while (!v52);
		v59 = (2 * v58) >> 1;
		if ((unsigned __int64)(v59 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v57 = sub_14018B280(2 * (v59 + 1), 0);
			v88 = v57;
			v89 = v57;
			v90 = (__int64)v57 + 2 * v59 + 2;
		}
		sub_1407DB590(v57, (int*)L"quest", 2 * v59);
		v60 = (int*)((char*)v57 + 2 * v59);
		v89 = v60;
		if (v60)
			*(_WORD*)v60 = 0;
		sub_1400B7480((__int64)v100, v56);
		(*(void(__fastcall**)(__int64*, __int64*))(*v56 + 72))(v56, &v87);
		if (v88)
			sub_14018B900((__int64)v88, 0);
		sub_1405518E0(v47, &v87);
		v61 = (unsigned __int64)v88;
		v62 = 0;
		if (v88)
		{
			v63 = v87;
			v64 = 0i64;
			do
			{
				v65 = *(_QWORD**)(v63 + 8 * v64);
				v66 = sub_14018EFA0(&v91, (__int64)L"objective%d", v62);
				sub_1400B7480((__int64)&v93, v65);
				(*(void(__fastcall**)(_QWORD*, _QWORD*))(*v65 + 72i64))(v65, v66);
				if (v92)
					sub_14018B900(v92, 0);
				v64 = ++v62;
			} while (v62 < v61);
		}
		sub_1405518E0(v47, &v91);
		v67 = 0;
		if (v92)
		{
			v68 = v106;
			v69 = v105;
			v70 = v102;
			v71 = 0i64;
			do
			{
				v72 = *(_QWORD*)(v91 + 8 * v71);
				v73 = sub_14018EFA0(&v113, (__int64)L"objective%d", v67);
				v74 = v104;
				v75 = *(_QWORD*)v72;
				if ((int*)v101[1] == v70)
					v74 = v72;
				v76 = v69;
				v104 = v74;
				++v69;
				v117 = v73;
				a6 = v72;
				v105 = v69;
				v77 = sub_14018EFA0(&v111, (__int64)L"%d", v76);
				(*(void(__fastcall**)(__int64, _QWORD*))(v75 + 72))(v72, v77);
				if (v112)
					sub_14018B900(v112, 0);
				if (v70 == v103)
				{
					sub_1400B9430(v101, v70, &a6);
					v68 = v106;
					v69 = v105;
					v70 = v102;
				}
				else
				{
					if (v70)
						*(_QWORD*)v70 = v72;
					v70 += 2;
					v102 = v70;
				}
				if (v68 != v107)
				{
					*v68 = 0;
					v107 = v68;
				}
				(*(void(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)v72 + 72i64))(v72, v117);
				v30 = v114;
				if (v114)
					sub_14018B900(v114, 0);
				v71 = ++v67;
			} while (v67 < v92);
		}
		if (v91)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v91 - 16) + 8i64))(v91 - 16);
		if (v87)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v87 - 16) + 8i64))(v87 - 16);
	}
	v78 = sub_14034BDD0(v30, v116);
	v79 = v115;
	v80 = (int*)v78;
	*((_QWORD*)v115 + 1) = 0i64;
	*((_QWORD*)v79 + 2) = 0i64;
	*((_QWORD*)v79 + 3) = 0i64;
	v81 = sub_14018B280(16i64, 0);
	*((_QWORD*)v79 + 1) = v81;
	*((_QWORD*)v79 + 2) = v81;
	*((_QWORD*)v79 + 3) = v81 + 4;
	if (v81)
		*(_WORD*)v81 = 0;
	if (v80)
	{
		v82 = 0i64;
		if (*(_WORD*)v80)
		{
			do
				++v82;
			while (*((_WORD*)v80 + v82));
		}
		sub_14001C480((__int64)v94, v80, (int*)((char*)v80 + 2 * v82));
		v83 = v96;
		if (v96 != v97 || !qword_140C63648)
			goto LABEL_139;
		v115 = 0i64;
		(**(void(__fastcall***)(__int64, __int64, __int64(__fastcall***)(), int**))qword_140C63648)(
			qword_140C63648,
			v94[1],
			&v93,
			&v115);
		if (v115)
		{
			if (*(_WORD*)v115)
			{
				do
					++v7;
				while (*((_WORD*)v115 + v7));
			}
			sub_14001C480((__int64)v95, v115, (int*)((char*)v115 + 2 * v7));
			v83 = v96;
		}
		else
		{
			v83 = v96;
			if (v96 == v97)
			{
			LABEL_139:
				if (v95 != (char*)v79)
					sub_14001C480((__int64)v79, v83, v97);
				goto LABEL_143;
			}
			*(_WORD*)v96 = 0;
			v83 = v96;
			v97 = v96;
		}
		if (v115)
		{
			(*(void(__fastcall**)(int*, int*))(*((_QWORD*)v115 - 2) + 8i64))(v115 - 4, v83);
			v83 = v96;
		}
		goto LABEL_139;
	}
	v84 = *((_QWORD*)v79 + 2);
	v85 = *((_QWORD*)v79 + 1);
	if (v85 != v84)
	{
		sub_1407DB590(*((int**)v79 + 1), *((int**)v79 + 2), 2ui64);
		*((_QWORD*)v79 + 2) += -2 * ((v84 - v85) >> 1);
	}
LABEL_143:
	if (v108)
		sub_14018B900((__int64)v108, 0);
	sub_1400B7390(v100);
	if ((_QWORD)v98)
		sub_14018B900(v98, 0);
	sub_1400B7390(&v93);
	return v79;
}
// 14055037B: variable 'v30' is possibly undefined
// 1409D2FA4: using guessed type wchar_t aD_5[3];
// 140B0A7C8: using guessed type __int16 word_140B0A7C8[];
// 140B0A7D8: using guessed type __int16 word_140B0A7D8[];
// 140B1E208: using guessed type wchar_t aObjectiveD_0[12];
// 140B1E220: using guessed type wchar_t aQuest_3[6];
// 140B1E230: using guessed type wchar_t aObjectiveD_1[12];
// 140B1E248: using guessed type wchar_t aQuest_2[6];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C63648: using guessed type __int64 qword_140C63648;
// 140C65898: using guessed type __int64 qword_140C65898;
// 14054F9E0: using guessed type __int64 var_228[10];
// 14054F9E0: using guessed type char var_1D8[8];

