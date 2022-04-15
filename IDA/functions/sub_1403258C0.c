//----- (00000001403258C0) ----------------------------------------------------
__int64 __fastcall sub_1403258C0(__int64 a1, __int64 a2, unsigned int a3, int* a4)
{
	__int64 v4; // r14
	__int64 v5; // rsi
	__int64 v8; // rax
	int* v9; // rax
	unsigned __int64 v10; // r8
	__int64 v11; // rax
	int* v12; // rax
	unsigned __int64 v13; // r8
	unsigned int v14; // ecx
	__int64 v15; // rdx
	int v16; // r11d
	__int64 v17; // r8
	__int64 v18; // rax
	__int64 v19; // r9
	__int64 v20; // r9
	__int16 v21; // r10
	__int16 v22; // bp
	__int16 v23; // r14
	__int16 v24; // r15
	__int16 v25; // r12
	__int64 v26; // rdx
	unsigned __int16 v27; // r13
	unsigned int v28; // r8d
	_WORD* v29; // rax
	__int64 v30; // rax
	int* v31; // rax
	unsigned __int64 v32; // rcx
	__int64 v33; // rax
	unsigned int v34; // r12d
	__int64 v35; // rbp
	__int64 v36; // r10
	__int64 v37; // rbx
	_DWORD* v38; // r13
	__int64 v39; // r10
	int v40; // eax
	__int64 v41; // r13
	__int64 v42; // r8
	unsigned __int16 v43; // r11
	unsigned int v44; // edx
	_WORD* v45; // rcx
	__int64 v46; // r9
	unsigned int v47; // ecx
	unsigned int v48; // eax
	int v49; // r9d
	int v50; // r11d
	int v51; // r14d
	unsigned __int16 v52; // ax
	int v53; // eax
	unsigned int v54; // eax
	__int64 v55; // rax
	unsigned __int64 v56; // kr10_8
	int* v57; // rax
	unsigned int i; // r10d
	unsigned int v59; // r8d
	__int64 v60; // r9
	unsigned __int16* v61; // rdx
	unsigned int j; // r8d
	__int64 v63; // rdx
	unsigned int k; // r10d
	unsigned __int16* v65; // rdx
	unsigned __int16 v66; // ax
	unsigned int v67; // r8d
	__int64 v68; // r9
	unsigned __int16* v69; // rdx
	unsigned __int64 v70; // r9
	__int64 v71; // r8
	__int64 v72; // rdx
	int v73; // ecx
	__int64 v74; // rcx
	__int64 v75; // rcx
	__int64 v76; // rcx
	__int64 v77; // rcx
	__int64 v78; // rcx
	__int64 v79; // rcx
	__int64 v80; // rcx
	__int64 v81; // rcx
	unsigned __int64 v82; // rbp
	__int64 v83; // rax
	int* v84; // rsi
	unsigned int v85; // eax
	__int64 v86; // r9
	__int64 v87; // r10
	__int64 v88; // rcx
	__int64 v89; // rdx
	__int64 v90; // r8
	__int64 v91; // rcx
	_QWORD* v92; // rcx
	__int64 v93; // rax
	__int64 v94; // rbx
	__int64 v95; // rbx
	unsigned __int64 v96; // rbp
	int** v97; // rsi
	int* v98; // rax
	int* v99; // rcx
	__int64 v100; // rcx
	char v102[8]; // [rsp+8h] [rbp-80h] BYREF
	char v103[16]; // [rsp+10h] [rbp-78h] BYREF
	int v104; // [rsp+20h] [rbp-68h]
	__int64 v105; // [rsp+28h] [rbp-60h]
	_DWORD* v106; // [rsp+30h] [rbp-58h]
	__int64 v107; // [rsp+38h] [rbp-50h] BYREF
	__int64 v108; // [rsp+40h] [rbp-48h]

	*(_QWORD*)(a1 + 8) = a2;
	v4 = *(_QWORD*)(a2 + 64);
	v5 = *(_QWORD*)(a2 + 56);
	*(_DWORD*)(a1 + 20) = a3;
	v8 = 4i64 * a3;
	if (!is_mul_ok(a3, 4ui64))
		v8 = -1i64;
	v105 = v4;
	v9 = sub_14018B280(v8, 0);
	v10 = 4i64 * *(unsigned int*)(a1 + 20);
	*(_QWORD*)(a1 + 24) = v9;
	sub_1407DB590(v9, a4, v10);
	v11 = 4i64 * *(unsigned int*)(a1 + 20);
	if (!is_mul_ok(*(unsigned int*)(a1 + 20), 4ui64))
		v11 = -1i64;
	v12 = sub_14018B280(v11, 0);
	v13 = 4i64 * *(unsigned int*)(a1 + 20);
	*(_QWORD*)(a1 + 32) = v12;
	sub_1407DB590(v12, a4, v13);
	sub_1401C3280(
		(__int64(__fastcall*)(_QWORD, _QWORD, __int64))sub_1403264C0,
		*(unsigned int**)(a1 + 32),
		*(unsigned int*)(a1 + 20),
		*(_QWORD*)(v4 + 136));
	v14 = *(_DWORD*)(a1 + 20);
	*(_DWORD*)(a1 + 48) = 0;
	LODWORD(a4) = 0;
	if (v14)
	{
		v15 = *(_QWORD*)(a1 + 32);
		v16 = 0;
		v104 = 0;
		do
		{
			v17 = *(_QWORD*)(v4 + 136);
			v18 = (unsigned int)a4;
			a4 = (int*)(unsigned int)((_DWORD)a4 + 1);
			v19 = *(unsigned int*)(v15 + 4 * v18);
			v106 = (_DWORD*)v17;
			v20 = v17 + 112 * v19;
			v107 = *(_QWORD*)(v20 + 40);
			v108 = *(_QWORD*)(v20 + 48);
			if ((unsigned int)a4 < v14)
			{
				v21 = *(_WORD*)(v20 + 16);
				v22 = HIWORD(v107);
				v23 = WORD2(v107);
				v24 = WORD1(v107);
				v25 = v107;
				while (2)
				{
					v26 = v17 + 112i64 * *(unsigned int*)(v15 + 4i64 * (_QWORD)a4);
					if (v21 == *(_WORD*)(v26 + 16)
						&& *(_WORD*)(v20 + 18) == *(_WORD*)(v26 + 18)
						&& *(_WORD*)(v20 + 22) == *(_WORD*)(v26 + 22))
					{
						v27 = *(_WORD*)(v20 + 24);
						if (v27 == *(_WORD*)(v26 + 24)
							&& *(_WORD*)(v20 + 28) == *(_WORD*)(v26 + 28)
							&& *(_WORD*)(v20 + 26) == *(_WORD*)(v26 + 26)
							&& *(_BYTE*)(v20 + 56) == *(_BYTE*)(v26 + 56))
						{
							v28 = 0;
							v29 = (_WORD*)(v26 + 48);
							do
							{
								if ((*(_WORD*)&v102[(_QWORD)v29 - v26] & *(v29 - 4)) == 0
									|| *(_WORD*)&v103[(_QWORD)v29 - v26] != *v29)
								{
									goto LABEL_26;
								}
								++v28;
								++v29;
							} while (v28 < 4);
							if (v20 != v26 && (*(_BYTE*)(184i64 * v27 + *(_QWORD*)(v5 + 248)) & 1) != 0)
							{
							LABEL_26:
								v14 = *(_DWORD*)(a1 + 20);
								break;
							}
							v25 &= *(_WORD*)(v26 + 40);
							v24 &= *(_WORD*)(v26 + 42);
							v23 &= *(_WORD*)(v26 + 44);
							v22 &= *(_WORD*)(v26 + 46);
							v14 = *(_DWORD*)(a1 + 20);
							v17 = (__int64)v106;
							v15 = *(_QWORD*)(a1 + 32);
							v21 = *(_WORD*)(v20 + 16);
							a4 = (int*)(unsigned int)((_DWORD)a4 + 1);
							LOWORD(v107) = v25;
							WORD1(v107) = v24;
							WORD2(v107) = v23;
							HIWORD(v107) = v22;
							if ((unsigned int)a4 < v14)
								continue;
						}
					}
					break;
				}
				v15 = *(_QWORD*)(a1 + 32);
				v16 = v104;
				v4 = v105;
			}
			v104 = ++v16;
			*(_DWORD*)(a1 + 48) = v16;
		} while ((unsigned int)a4 < v14);
	}
	v30 = 112i64 * *(unsigned int*)(a1 + 48);
	if (!is_mul_ok(*(unsigned int*)(a1 + 48), 0x70ui64))
		v30 = -1i64;
	v31 = sub_14018B280(v30, 0);
	v32 = *(unsigned int*)(a1 + 48);
	*(_QWORD*)(a1 + 64) = v31;
	v33 = 8 * v32;
	if (!is_mul_ok(v32, 8ui64))
		v33 = -1i64;
	*(_QWORD*)(a1 + 72) = sub_14018B280(v33, 0);
	v34 = 0;
	v104 = 0;
	*(_DWORD*)(a1 + 44) = 0;
	LODWORD(v35) = 0;
	if (*(_DWORD*)(a1 + 20))
	{
		do
		{
			v36 = *(unsigned int*)(*(_QWORD*)(a1 + 32) + 4i64 * (unsigned int)v35);
			v37 = *(_QWORD*)(a1 + 64) + 112i64 * v34;
			v38 = (_DWORD*)(*(_QWORD*)(a1 + 72) + 8i64 * v34);
			v35 = (unsigned int)(v35 + 1);
			v39 = *(_QWORD*)(v4 + 136) + 112 * v36;
			v106 = v38;
			*(_DWORD*)v37 = *(_DWORD*)v39;
			*(_DWORD*)(v37 + 4) = *(_DWORD*)(v39 + 4);
			*(_DWORD*)(v37 + 8) = *(_DWORD*)(v39 + 8);
			*(_DWORD*)(v37 + 12) = *(_DWORD*)(v39 + 12);
			*(_WORD*)(v37 + 16) = *(_WORD*)(v39 + 16);
			*(_WORD*)(v37 + 18) = *(_WORD*)(v39 + 18);
			*(_WORD*)(v37 + 20) = *(_WORD*)(v39 + 20);
			*(_WORD*)(v37 + 22) = *(_WORD*)(v39 + 22);
			*(_WORD*)(v37 + 24) = *(_WORD*)(v39 + 24);
			*(_WORD*)(v37 + 26) = *(_WORD*)(v39 + 26);
			*(_WORD*)(v37 + 28) = *(_WORD*)(v39 + 28);
			*(_WORD*)(v37 + 30) = *(_WORD*)(v39 + 30);
			*(_WORD*)(v37 + 32) = *(_WORD*)(v39 + 32);
			*(_WORD*)(v37 + 34) = *(_WORD*)(v39 + 34);
			*(_WORD*)(v37 + 36) = *(_WORD*)(v39 + 36);
			*(_WORD*)(v37 + 38) = *(_WORD*)(v39 + 38);
			*(_QWORD*)(v37 + 40) = *(_QWORD*)(v39 + 40);
			*(_QWORD*)(v37 + 48) = *(_QWORD*)(v39 + 48);
			*(_BYTE*)(v37 + 56) = *(_BYTE*)(v39 + 56);
			*(_BYTE*)(v37 + 57) = *(_BYTE*)(v39 + 57);
			*(_BYTE*)(v37 + 58) = *(_BYTE*)(v39 + 58);
			*(_OWORD*)(v37 + 64) = *(_OWORD*)(v39 + 64);
			*(_OWORD*)(v37 + 80) = *(_OWORD*)(v39 + 80);
			*(_DWORD*)(v37 + 96) = *(_DWORD*)(v39 + 96);
			*(_DWORD*)(v37 + 100) = *(_DWORD*)(v39 + 100);
			*(_DWORD*)(v37 + 104) = *(_DWORD*)(v39 + 104);
			v40 = *(_DWORD*)(a1 + 44);
			*(_WORD*)(v37 + 30) = -1;
			*(_DWORD*)(v37 + 34) = 0;
			*(_WORD*)(v37 + 38) = 0;
			*(_DWORD*)v37 = v40;
			if ((unsigned int)v35 < *(_DWORD*)(a1 + 20))
			{
				v41 = v105;
			LABEL_36:
				v42 = *(_QWORD*)(v41 + 136) + 112i64 * *(unsigned int*)(*(_QWORD*)(a1 + 32) + 4 * v35);
				if (*(_WORD*)(v39 + 16) == *(_WORD*)(v42 + 16)
					&& *(_WORD*)(v39 + 18) == *(_WORD*)(v42 + 18)
					&& *(_WORD*)(v39 + 22) == *(_WORD*)(v42 + 22))
				{
					v43 = *(_WORD*)(v39 + 24);
					if (v43 == *(_WORD*)(v42 + 24)
						&& *(_WORD*)(v39 + 28) == *(_WORD*)(v42 + 28)
						&& *(_WORD*)(v39 + 26) == *(_WORD*)(v42 + 26)
						&& *(_BYTE*)(v39 + 56) == *(_BYTE*)(v42 + 56))
					{
						v44 = 0;
						v45 = (_WORD*)(v37 + 40);
						v46 = v42 - v37;
						while ((*(_WORD*)((char*)v45 + v46) & *v45) != 0 && v45[4] == *(_WORD*)((char*)v45 + v46 + 8))
						{
							++v44;
							++v45;
							if (v44 >= 4)
							{
								if (v39 == v42 || (*(_BYTE*)(184i64 * v43 + *(_QWORD*)(v5 + 248)) & 1) == 0)
								{
									*(_DWORD*)(v37 + 8) += *(_DWORD*)(v42 + 8);
									v47 = *(_DWORD*)(v42 + 4);
									v48 = *(_DWORD*)(v37 + 4);
									if (v48 > v47)
									{
										*(_DWORD*)(v37 + 12) += v48 - v47;
										*(_DWORD*)(v37 + 4) = *(_DWORD*)(v42 + 4);
									}
									v49 = *(_DWORD*)(v42 + 12);
									v50 = *(_DWORD*)(v42 + 4);
									v51 = *(_DWORD*)(v37 + 4);
									if (v51 + *(_DWORD*)(v37 + 12) < (unsigned int)(v49 + v50))
										*(_DWORD*)(v37 + 12) = v50 + v49 - v51;
									v52 = *(_WORD*)(v42 + 20);
									if (*(_WORD*)(v37 + 20) < v52)
										*(_WORD*)(v37 + 20) = v52;
									v35 = (unsigned int)(v35 + 1);
									*(_WORD*)(v37 + 40) &= *(_WORD*)(v42 + 40);
									*(_WORD*)(v37 + 42) &= *(_WORD*)(v42 + 42);
									*(_WORD*)(v37 + 44) &= *(_WORD*)(v42 + 44);
									*(_WORD*)(v37 + 46) &= *(_WORD*)(v42 + 46);
									if ((unsigned int)v35 < *(_DWORD*)(a1 + 20))
										goto LABEL_36;
								}
								break;
							}
						}
					}
				}
				v34 = v104;
				v38 = v106;
				v4 = v105;
			}
			*v38 = sub_14030E510(*(_QWORD*)(a1 + 8), (unsigned __int16*)v37);
			++v34;
			v38[1] = sub_14030E690(*(_QWORD*)(a1 + 8), v37);
			v53 = *(_DWORD*)(v37 + 8);
			v104 = v34;
			*(_DWORD*)(a1 + 44) += v53;
		} while ((unsigned int)v35 < *(_DWORD*)(a1 + 20));
	}
	*(_DWORD*)(a1 + 40) = *(_DWORD*)(v4 + 24);
	v54 = *(_DWORD*)(v5 + 448);
	if (v54)
	{
		v56 = v54;
		v55 = 4i64 * v54;
		if (!is_mul_ok(v56, 4ui64))
			v55 = -1i64;
		v57 = sub_14018B280(v55, 0);
		*(_QWORD*)(a1 + 80) = v57;
		sub_1407E4830(v57, 0i64, 4i64 * *(unsigned int*)(v5 + 448));
		for (i = 0; i < *(_DWORD*)(a1 + 48); ++i)
		{
			v59 = 0;
			v60 = *(_QWORD*)(v5 + 504) + 48i64 * *(unsigned __int16*)(112i64 * i + *(_QWORD*)(a1 + 64) + 22);
			if (*(_DWORD*)(v60 + 32))
			{
				do
				{
					v61 = (unsigned __int16*)(*(_QWORD*)(v60 + 40) + 296i64 * v59);
					if ((unsigned int)*v61 < *(_DWORD*)(v5 + 448))
						*(_DWORD*)(*(_QWORD*)(a1 + 80) + 4i64 * *v61) = 1;
					if ((unsigned int)v61[1] < *(_DWORD*)(v5 + 448))
						*(_DWORD*)(*(_QWORD*)(a1 + 80) + 4i64 * v61[1]) = 1;
					++v59;
				} while (v59 < *(_DWORD*)(v60 + 32));
			}
		}
		for (j = 0; j < *(_DWORD*)(v5 + 792); ++j)
		{
			v63 = *(_QWORD*)(v5 + 800) + 400i64 * j;
			if ((unsigned int)*(unsigned __int16*)(v63 + 6) < *(_DWORD*)(v5 + 448))
				*(_DWORD*)(*(_QWORD*)(a1 + 80) + 4i64 * *(unsigned __int16*)(v63 + 6)) = 1;
			if ((unsigned int)*(unsigned __int16*)(v63 + 8) < *(_DWORD*)(v5 + 448))
				*(_DWORD*)(*(_QWORD*)(a1 + 80) + 4i64 * *(unsigned __int16*)(v63 + 8)) = 1;
		}
		for (k = 0; k < *(_DWORD*)(v5 + 1376); ++k)
		{
			v65 = (unsigned __int16*)(*(_QWORD*)(v5 + 1384) + 160i64 * k);
			if ((unsigned int)v65[5] < *(_DWORD*)(v5 + 448))
				*(_DWORD*)(*(_QWORD*)(a1 + 80) + 4i64 * v65[5]) = 1;
			if ((unsigned int)v65[2] < *(_DWORD*)(v5 + 448))
				*(_DWORD*)(*(_QWORD*)(a1 + 80) + 4i64 * v65[2]) = 1;
			v66 = v65[7];
			if (v66 != 0xFFFF)
			{
				v67 = 0;
				v68 = *(_QWORD*)(v5 + 504) + 48i64 * v66;
				if (*(_DWORD*)(v68 + 32))
				{
					do
					{
						v69 = (unsigned __int16*)(*(_QWORD*)(v68 + 40) + 296i64 * v67);
						if ((unsigned int)*v69 < *(_DWORD*)(v5 + 448))
							*(_DWORD*)(*(_QWORD*)(a1 + 80) + 4i64 * *v69) = 1;
						if ((unsigned int)v69[1] < *(_DWORD*)(v5 + 448))
							*(_DWORD*)(*(_QWORD*)(a1 + 80) + 4i64 * v69[1]) = 1;
						++v67;
					} while (v67 < *(_DWORD*)(v68 + 32));
				}
			}
		}
		v70 = 0i64;
		if (*(_DWORD*)(v5 + 760))
		{
			v71 = 0i64;
			while (1)
			{
				v72 = v71 + *(_QWORD*)(v5 + 768);
				v73 = *(_DWORD*)(v72 + 4);
				if (!v73)
					break;
				if (v73 == 1)
				{
					v74 = *(unsigned __int16*)(*(_QWORD*)(v72 + 152) + 964i64);
					if ((unsigned int)v74 < *(_DWORD*)(v5 + 448))
						*(_DWORD*)(*(_QWORD*)(a1 + 80) + 4 * v74) = 1;
					v75 = *(unsigned __int16*)(*(_QWORD*)(v72 + 152) + 988i64);
					if ((unsigned int)v75 < *(_DWORD*)(v5 + 448))
						*(_DWORD*)(*(_QWORD*)(a1 + 80) + 4 * v75) = 1;
					v76 = *(unsigned __int16*)(*(_QWORD*)(v72 + 152) + 990i64);
					if ((unsigned int)v76 < *(_DWORD*)(v5 + 448))
						*(_DWORD*)(*(_QWORD*)(a1 + 80) + 4 * v76) = 1;
					v77 = *(unsigned __int16*)(*(_QWORD*)(v72 + 152) + 1030i64);
				LABEL_108:
					if ((unsigned int)v77 < *(_DWORD*)(v5 + 448))
						*(_DWORD*)(*(_QWORD*)(a1 + 80) + 4 * v77) = 1;
				}
				++v70;
				v71 += 160i64;
				if (v70 >= *(unsigned int*)(v5 + 760))
					goto LABEL_111;
			}
			v78 = *(unsigned __int16*)(*(_QWORD*)(v72 + 144) + 2424i64);
			if ((unsigned int)v78 < *(_DWORD*)(v5 + 448))
				*(_DWORD*)(*(_QWORD*)(a1 + 80) + 4 * v78) = 1;
			v79 = *(unsigned __int16*)(*(_QWORD*)(v72 + 144) + 2452i64);
			if ((unsigned int)v79 < *(_DWORD*)(v5 + 448))
				*(_DWORD*)(*(_QWORD*)(a1 + 80) + 4 * v79) = 1;
			v80 = *(unsigned __int16*)(*(_QWORD*)(v72 + 144) + 2454i64);
			if ((unsigned int)v80 < *(_DWORD*)(v5 + 448))
				*(_DWORD*)(*(_QWORD*)(a1 + 80) + 4 * v80) = 1;
			v77 = *(unsigned __int16*)(*(_QWORD*)(v72 + 144) + 2458i64);
			goto LABEL_108;
		}
	}
LABEL_111:
	v81 = *(_QWORD*)(a1 + 8);
	*(_DWORD*)(a1 + 88) = 0;
	v82 = *(unsigned int*)(*(_QWORD*)(v81 + 56) + 384i64);
	v83 = 4 * v82;
	if (!is_mul_ok(v82, 4ui64))
		v83 = -1i64;
	v84 = sub_14018B280(v83, 8u);
	sub_1407E4830(v84, 0i64, 4 * v82);
	v85 = *(_DWORD*)(a1 + 48);
	if (v85)
	{
		v86 = 0i64;
		v87 = v85;
		do
		{
			v88 = *(_QWORD*)(a1 + 64);
			if (*(unsigned __int16*)(v86 + v88 + 16) < *(unsigned __int16*)(v86 + v88 + 16)
				+ (unsigned int)*(unsigned __int16*)(v86 + v88 + 18))
			{
				v89 = 2i64 * *(unsigned __int16*)(v86 + v88 + 16);
				v90 = *(unsigned __int16*)(v86 + v88 + 18);
				do
				{
					v91 = *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 56i64) + 440i64) + v89);
					if ((unsigned int)v91 < (unsigned int)v82 && !v84[v91])
					{
						v84[v91] = 1;
						++* (_DWORD*)(a1 + 88);
					}
					v89 += 2i64;
					--v90;
				} while (v90);
			}
			v86 += 112i64;
			--v87;
		} while (v87);
	}
	sub_14018B900((__int64)v84, 0);
	v92 = (_QWORD*)(*(_QWORD*)(a1 + 8) + 472i64);
	if (!*(_QWORD*)(a1 + 96))
	{
		*(_QWORD*)(a1 + 96) = v92;
		*(_QWORD*)(a1 + 104) = *v92;
		*v92 = a1;
		v93 = *(_QWORD*)(a1 + 104);
		if (v93)
			*(_QWORD*)(v93 + 96) = a1 + 104;
	}
	v94 = *(_QWORD*)(a1 + 8);
	LODWORD(v107) = *(_DWORD*)(a1 + 20);
	v95 = v94 + 480;
	v108 = *(_QWORD*)(a1 + 24);
	if (*(_QWORD*)v95 == *(_QWORD*)(v95 + 8))
		sub_1400290D0(v95);
	v96 = (*(__int64(__fastcall**)(__int64*))(v95 + 24))(&v107);
	v97 = (int**)(*(_QWORD*)(v95 + 16) + 8 * (v96 % *(_QWORD*)(v95 + 8)));
	v98 = sub_14018B280(40i64, 0);
	if (v98)
	{
		v99 = *v97;
		*(_QWORD*)v98 = v96;
		*((_QWORD*)v98 + 1) = v99;
		*((_QWORD*)v98 + 2) = v107;
		v100 = v108;
		*((_QWORD*)v98 + 4) = a1;
		*((_QWORD*)v98 + 3) = v100;
	}
	else
	{
		v98 = 0i64;
	}
	*v97 = v98;
	++* (_QWORD*)v95;
	return 0i64;
}
// 140325AB8: conditional instruction was optimized away because r8d.4<4u
// 140325D86: conditional instruction was optimized away because edx.4<4u
// 1403258C0: using guessed type char var_80[8];
// 1403258C0: using guessed type char var_78[16];

