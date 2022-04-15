//----- (00000001407BF410) ----------------------------------------------------
__int64 __fastcall sub_1407BF410(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 v3; // rax
	unsigned int v4; // esi
	__int64(__fastcall * **v6)(_QWORD, void*, __int64*, __int64); // r13
	unsigned __int64 v7; // rcx
	_QWORD* v8; // r12
	__int64 v9; // rax
	unsigned int v10; // r14d
	unsigned int v11; // edx
	int v12; // r15d
	__int64 v13; // r9
	__int64 v14; // r8
	unsigned int v15; // edi
	int* v16; // rbx
	__int64 v17; // rdx
	__int64 v18; // rax
	int* v19; // rax
	int v20; // eax
	__int64 v21; // r13
	int v22; // ebx
	unsigned int v23; // edi
	unsigned int v24; // eax
	unsigned int v25; // ebx
	__int64 v26; // rax
	int* v27; // rax
	__int64 v28; // r13
	int v29; // r12d
	__int64 v30; // r14
	__int64 v31; // r15
	__int64 v32; // rbx
	int* v33; // rdi
	_QWORD* v34; // rax
	int* v35; // r15
	unsigned __int64 v36; // rdx
	unsigned int v37; // edi
	__int64 v38; // rcx
	__int64 v39; // rdx
	unsigned int v40; // r14d
	int* v41; // rcx
	int* v42; // rbx
	__int16 v43; // ax
	unsigned int v44; // ecx
	__int64 v45; // r8
	_WORD* v46; // rdx
	__int64 v47; // rbx
	void(__fastcall * **v48)(_QWORD, int*, __int64*); // rcx
	int v49; // edi
	int* v50; // rax
	unsigned __int64 v51; // r8
	int* v52; // rcx
	int v53; // ecx
	unsigned __int64 v54; // r8
	int* v55; // rcx
	__int64 v56; // rcx
	__int64 v57; // rcx
	unsigned int v59; // eax
	int* v60; // rax
	unsigned __int64 v61; // r8
	__int64 v62; // r9
	__int64 v63; // rcx
	__int64 v64; // r13
	int v65; // edi
	__int64 v66; // rdx
	int* v67; // rdi
	int* v68; // r15
	__int64 v69; // r12
	__int64 v70; // rax
	unsigned int v71; // r14d
	__int64 v72; // rcx
	__int16 v73; // ax
	__int64 v74; // r9
	__int64 v75; // rax
	int* v76; // r9
	unsigned int v77; // edx
	__int64 v78; // r8
	_WORD* v79; // rcx
	unsigned __int64 v80; // rbx
	_WORD* v81; // rdi
	__int64 v82; // rcx
	__int64 v83; // rbx
	__int64 v84; // r8
	bool v85; // cf
	__int64 v86; // rax
	int* v87; // rax
	unsigned int v88; // edx
	unsigned __int64 v89; // r8
	unsigned int* v90; // rdx
	int* v92; // [rsp+48h] [rbp-B8h]
	unsigned int v93; // [rsp+50h] [rbp-B0h]
	unsigned int v94; // [rsp+54h] [rbp-ACh]
	int v95; // [rsp+54h] [rbp-ACh]
	_QWORD* v96; // [rsp+58h] [rbp-A8h] BYREF
	int* v97; // [rsp+60h] [rbp-A0h] BYREF
	unsigned __int64 v98; // [rsp+68h] [rbp-98h] BYREF
	_QWORD* v99; // [rsp+70h] [rbp-90h] BYREF
	int v100; // [rsp+78h] [rbp-88h]
	int v101; // [rsp+7Ch] [rbp-84h]
	__int64 v102; // [rsp+80h] [rbp-80h]
	_QWORD* v103; // [rsp+88h] [rbp-78h] BYREF
	__int64 v104; // [rsp+90h] [rbp-70h] BYREF
	__int64 v105; // [rsp+98h] [rbp-68h]
	__int64(__fastcall * **v106)(_QWORD, void*, __int64*, __int64); // [rsp+A0h] [rbp-60h]
	__int64 v107; // [rsp+A8h] [rbp-58h] BYREF
	__int64* v108; // [rsp+B0h] [rbp-50h]
	__int64 v109; // [rsp+B8h] [rbp-48h]
	_DWORD* v110; // [rsp+C0h] [rbp-40h]
	unsigned __int64 v111; // [rsp+C8h] [rbp-38h]
	int v112[2048]; // [rsp+D0h] [rbp-30h] BYREF

	v3 = *(_QWORD*)(a1 + 24);
	v4 = 0;
	*(_DWORD*)(a1 + 72) = 0;
	v106 = (__int64(__fastcall***)(_QWORD, void*, __int64*, __int64))a2;
	v6 = (__int64(__fastcall***)(_QWORD, void*, __int64*, __int64))a2;
	v104 = 0i64;
	v97 = 0i64;
	v7 = *(unsigned int*)(v3 + 12);
	v110 = a3;
	v8 = 0i64;
	v9 = 88 * v7;
	v96 = 0i64;
	v99 = 0i64;
	if (!is_mul_ok(v7, 0x58ui64))
		v9 = -1i64;
	v92 = sub_14018B280(v9, 0);
	sub_1407E4830(v92, 0i64, 88i64 * *(unsigned int*)(*(_QWORD*)(a1 + 24) + 12i64));
	v10 = 1;
	v11 = 0;
	v12 = 0;
	v13 = 0i64;
	v93 = 0;
	v14 = a1;
	if (*(_DWORD*)(*(_QWORD*)(a1 + 24) + 12i64))
	{
		do
		{
			v15 = v11 + 1;
			v16 = &v92[22 * v11];
			*(_QWORD*)v16 = v11 + 1;
			*((_QWORD*)v16 + 7) = 1i64;
			v16[16] = 0;
			*((_QWORD*)v16 + 1) = (unsigned int)v13;
			v17 = 40i64 * v11;
			*((_QWORD*)v16 + 9) = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v14 + 24) + 16i64) + v17 + 16);
			*((_WORD*)v16 + 42) = *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v14 + 24) + 16i64) + v17 + 8);
			v16[20] = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v14 + 24) + 16i64) + v17 + 24);
			v18 = *(_QWORD*)(*(_QWORD*)(v14 + 24) + 16i64);
			if (*(_WORD*)(v18 + v17 + 8) != 128 || (*(_BYTE*)(v18 + v17 + 24) & 0x10) != 0)
			{
				v13 = ((*(_DWORD*)(v18 + v17 + 16) + 3) & 0xFFFFFFFC) + (unsigned int)v13;
			}
			else
			{
				*((_WORD*)v16 + 42) = 13;
				*((_QWORD*)v16 + 9) = 8i64;
				v19 = sub_14018B280(20i64, 0);
				v14 = a1;
				*((_QWORD*)v16 + 5) = v19;
				v13 = v93 + 16;
				v19[1] = 208878128;
				v12 = 1;
				v19[2] = 298723868;
				v19[3] = -1442781779;
				v19[4] = 1031226368;
				**((_DWORD**)v16 + 5) = 0;
			}
			v93 = v13;
			v11 = v15;
		} while (v15 < *(_DWORD*)(*(_QWORD*)(v14 + 24) + 12i64));
		v8 = v96;
		v6 = v106;
	}
	v20 = (**v6)(v6, &unk_1409C6E50, &v104, v13);
	v21 = (__int64)v92;
	v22 = v20;
	if (v20 < 0)
		goto LABEL_50;
	v22 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, int*, _QWORD, __int64*, _QWORD))(*(_QWORD*)v104 + 32i64))(
		v104,
		2i64,
		*(unsigned int*)(*(_QWORD*)(a1 + 24) + 12i64),
		v92,
		0i64,
		&v107,
		0i64);
	if (v22 < 0)
		goto LABEL_50;
	v23 = v93;
	v24 = 0xFFFE0 / v93;
	if (!v12)
	{
		if (!v24)
			v24 = 1;
		v10 = v24;
	}
	v25 = v10;
	v108 = (__int64*)&v99;
	v109 = v10;
	v26 = 8i64 * v10;
	if (!is_mul_ok(v10, 8ui64))
		v26 = -1i64;
	v27 = sub_14018B280(v26, 0);
	v111 = 8i64 * v10;
	v97 = v27;
	v28 = 0i64;
	v102 = 0i64;
	v100 = 0;
	v105 = 0i64;
	v29 = 0;
	sub_1407E4830(v27, 0i64, v111);
	v30 = (__int64)v106;
	v31 = a1;
	v22 = ((__int64(__fastcall*)(__int64(__fastcall***)(_QWORD, void*, __int64*, __int64), _QWORD, _QWORD, _QWORD, unsigned __int64*, int**))(*v106)[5])(
		v106,
		0i64,
		0i64,
		v25,
		&v98,
		&v97);
	v101 = v22;
	if (v22 < 0)
	{
		v8 = v96;
		v21 = (__int64)v92;
		goto LABEL_51;
	}
	while (2)
	{
		if (!v98)
		{
			v59 = v28 + v105 + *(_DWORD*)(v31 + 72) * *(_DWORD*)(*(_QWORD*)(v31 + 24) + 8i64);
			*(_DWORD*)(v31 + 48) = v59;
			v60 = sub_14018B280(v59, 0);
			v61 = *(unsigned int*)(v31 + 48);
			*(_QWORD*)(v31 + 56) = v60;
			sub_1407E4830(v60, 0i64, v61);
			v62 = a1;
			v8 = v99;
			v63 = *(_QWORD*)(a1 + 24);
			v64 = *(_QWORD*)(a1 + 56);
			v65 = *(_DWORD*)(v63 + 8);
			v66 = (__int64)v99;
			v96 = v99;
			v103 = v99;
			v67 = (int*)(v64 + (unsigned int)(*(_DWORD*)(a1 + 72) * v65));
			v68 = (int*)((char*)v67 + v102);
			if (v99)
			{
				do
				{
					v69 = v66 + 16;
					v95 = 0;
					if (*(_DWORD*)(v66 + 8))
					{
						v70 = v93;
						v102 = v93;
						do
						{
							v71 = 0;
							if (*(_DWORD*)(v63 + 12))
							{
								do
								{
									v72 = *(_QWORD*)(*(_QWORD*)(v62 + 24) + 16i64);
									v73 = *(_WORD*)(v72 + 40i64 * v71 + 8);
									v74 = v72 + 40i64 * v71;
									if (v73 != 130 || (*(_BYTE*)(v74 + 24) & 0x10) != 0)
									{
										if (v73 != 128 || (*(_BYTE*)(v74 + 24) & 0x10) != 0)
										{
											sub_1407DB590(
												(int*)(v64 + *(unsigned int*)(v74 + 12)),
												(int*)(v69 + *(_QWORD*)&v92[22 * v71 + 2]),
												*(_QWORD*)(v74 + 16));
										}
										else
										{
											v82 = v64 + *(unsigned int*)(v74 + 12);
											v83 = v69 + *(_QWORD*)&v92[22 * v71 + 2];
											if (*(_QWORD*)v83)
											{
												v84 = *(unsigned int*)(v83 + 8);
												if (v68 && (_DWORD)v84 && (unsigned __int64)v68 + v84 - qword_140C3FE68 <= qword_140C3FE70)
												{
													*(_QWORD*)v82 = (char*)v68 - qword_140C3FE68;
													*(_DWORD*)(v82 + 8) = v84;
												}
												else
												{
													*(_DWORD*)(v82 + 8) = 0;
													*(_QWORD*)v82 = 0i64;
												}
												sub_1407DB590(v68, *(int**)v83, *(_QWORD*)(v83 + 8));
												v68 = (int*)((char*)v68 + *(_QWORD*)(v83 + 8));
												sub_14018B900(*(_QWORD*)v83, 0);
											}
											else
											{
												*(_QWORD*)v82 = 0i64;
												*(_DWORD*)(v82 + 8) = 0;
											}
										}
									}
									else
									{
										v75 = *(unsigned int*)(v74 + 12);
										v76 = &v92[22 * v71];
										*(_QWORD*)(v75 + v64) = v67;
										v77 = 0;
										v78 = *((_QWORD*)v76 + 9) >> 1;
										if ((_DWORD)v78)
										{
											v79 = (_WORD*)(v69 + *((_QWORD*)v76 + 1));
											do
											{
												if (!*v79)
													break;
												++v77;
												++v79;
											} while (v77 < (unsigned int)v78);
										}
										v80 = 2i64 * v77;
										sub_1407DB590(v67, (int*)(v69 + *((_QWORD*)v76 + 1)), v80);
										v81 = (_WORD*)((char*)v67 + v80);
										*v81 = 0;
										v67 = (int*)(v81 + 1);
									}
									v62 = a1;
									++v71;
								} while (v71 < *(_DWORD*)(*(_QWORD*)(a1 + 24) + 12i64));
								v66 = (__int64)v103;
								v70 = v102;
							}
							v63 = *(_QWORD*)(v62 + 24);
							v69 += v70;
							v64 += *(unsigned int*)(v63 + 8);
							v85 = (unsigned int)++v95 < *(_DWORD*)(v66 + 8);
							v70 = v102;
						} while (v85);
					}
					v66 = *(_QWORD*)v66;
					v103 = (_QWORD*)v66;
				} while (v66);
				v22 = v101;
				v8 = v96;
			}
			v86 = 4i64 * *(unsigned int*)(v62 + 72);
			if (!is_mul_ok(*(unsigned int*)(v62 + 72), 4ui64))
				v86 = -1i64;
			v87 = sub_14018B280(v86, 0);
			v31 = a1;
			v88 = 0;
			for (*(_QWORD*)(a1 + 64) = v87; v88 < *(_DWORD*)(a1 + 72); ++v88)
				*(_DWORD*)(*(_QWORD*)(a1 + 64) + 4i64 * v88) = v88;
			v89 = *(unsigned int*)(a1 + 72);
			v90 = *(unsigned int**)(a1 + 64);
			if (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 16i64) + 8i64) == 3)
				sub_1401C3280((__int64(__fastcall*)(_QWORD, _QWORD, __int64))sub_1407BFD90, v90, v89, a1);
			else
				sub_1401C3280((__int64(__fastcall*)(_QWORD, _QWORD, __int64))sub_1407BFDC0, v90, v89, a1);
			v21 = (__int64)v92;
			goto LABEL_51;
		}
		v32 = v23 * (unsigned int)v98 + 16;
		v33 = sub_14018B280(v32, 0);
		sub_1407E4830(v33, 0i64, (unsigned int)v32);
		v34 = v108;
		*(_QWORD*)v33 = 0i64;
		v108 = (__int64*)v33;
		v35 = v33 + 4;
		v33[2] = v98;
		*v34 = v33;
		v36 = v98;
		v37 = 0;
		v94 = 0;
		if (!v98)
			goto LABEL_46;
		v38 = 0i64;
		do
		{
			v22 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64, int*))(*(_QWORD*)v30 + 32i64))(
				v30,
				*(_QWORD*)&v97[2 * v38],
				v107,
				v35);
			if (v22 < 0)
			{
				(*(void(__fastcall**)(__int64, unsigned __int64, int*, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v30 + 48i64))(
					v30,
					v98,
					v97,
					0i64,
					0i64,
					0i64);
				v8 = v99;
				v21 = (__int64)v92;
			LABEL_50:
				v31 = a1;
				goto LABEL_51;
			}
			v39 = a1;
			v40 = 0;
			if (!*(_DWORD*)(*(_QWORD*)(a1 + 24) + 12i64))
				goto LABEL_45;
			v41 = v92;
			do
			{
				v42 = &v41[22 * v40];
				v43 = *((_WORD*)v42 + 42);
				if (v43 != 130 || (v42[20] & 0x10) != 0)
				{
					if (v43 != 13)
						goto LABEL_43;
					v47 = *((_QWORD*)v42 + 1);
					v48 = *(void(__fastcall****)(_QWORD, int*, __int64*))((char*)v35 + v47);
					if (v48)
					{
						(**v48)(v48, &dword_1409D0100, (__int64*)&v103);
						(*(void(__fastcall**)(_QWORD))(**(_QWORD**)((char*)v35 + v47) + 16i64))(*(_QWORD*)((char*)v35 + v47));
						*(_QWORD*)((char*)v35 + v47) = 0i64;
						*(_QWORD*)((char*)v35 + v47 + 8) = 0i64;
						LODWORD(v96) = 0;
						do
						{
							v49 = (*(__int64(__fastcall**)(_QWORD*, int*, __int64, _QWORD**))(*v103 + 24i64))(
								v103,
								v112,
								0x2000i64,
								&v96);
							if (v49 < 0)
								break;
							v50 = sub_14018C320(
								*(_QWORD*)((char*)v35 + v47),
								*(_QWORD*)((char*)v35 + v47 + 8) + (unsigned int)v96,
								0);
							v51 = (unsigned int)v96;
							v52 = (int*)((char*)v50 + *(_QWORD*)((char*)v35 + v47 + 8));
							*(_QWORD*)((char*)v35 + v47) = v50;
							sub_1407DB590(v52, v112, v51);
							v53 = (int)v96;
							*(_QWORD*)((char*)v35 + v47 + 8) += (unsigned int)v96;
							if (v49 == 1)
								break;
						} while (v53 == 0x2000);
						v105 += *(_QWORD*)((char*)v35 + v47 + 8);
						(*(void(__fastcall**)(_QWORD*))(*v103 + 16i64))(v103);
						v39 = a1;
					}
					else
					{
						*(_QWORD*)((char*)v35 + v47) = 0i64;
						*(_QWORD*)((char*)v35 + v47 + 8) = 0i64;
					}
					++v29;
				}
				else
				{
					v44 = 0;
					v45 = *((_QWORD*)v42 + 9) >> 1;
					if ((_DWORD)v45)
					{
						v46 = (_WORD*)((char*)v35 + *((_QWORD*)v42 + 1));
						do
						{
							if (!*v46)
								break;
							++v44;
							++v46;
						} while (v44 < (unsigned int)v45);
						v39 = a1;
					}
					++v100;
					v28 += 2i64 * (v44 + 1);
				}
				v41 = v92;
			LABEL_43:
				++v40;
			} while (v40 < *(_DWORD*)(*(_QWORD*)(v39 + 24) + 12i64));
			v37 = v94;
			v102 = v28;
		LABEL_45:
			v36 = v98;
			v30 = (__int64)v106;
			++v37;
			v35 = (int*)((char*)v35 + v93);
			v38 = v37;
			v94 = v37;
		} while (v37 < v98);
	LABEL_46:
		v31 = a1;
		v22 = (*(__int64(__fastcall**)(__int64, unsigned __int64, int*, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v30 + 48i64))(
			v30,
			v36,
			v97,
			0i64,
			0i64,
			0i64);
		if (v22 >= 0)
		{
			v54 = v111;
			v55 = v97;
			*(_DWORD*)(a1 + 72) += v98;
			sub_1407E4830(v55, 0i64, v54);
			v22 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, unsigned __int64*, int**))(*(_QWORD*)v30 + 40i64))(
				v30,
				0i64,
				0i64,
				v109,
				&v98,
				&v97);
			v101 = v22;
			if (v22 >= 0)
			{
				v23 = v93;
				continue;
			}
		}
		break;
	}
	v8 = v99;
	v21 = (__int64)v92;
LABEL_51:
	if (v110)
		*v110 = *(_DWORD*)(v31 + 72);
	if (v104)
	{
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v104 + 48i64))(v104, v107, 0i64);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v104 + 16i64))(v104);
	}
	if (v21)
	{
		if (*(_DWORD*)(*(_QWORD*)(v31 + 24) + 12i64))
		{
			do
			{
				v56 = *(_QWORD*)(88i64 * v4 + v21 + 40);
				if (v56)
					sub_14018B900(v56, 0);
				++v4;
			} while (v4 < *(_DWORD*)(*(_QWORD*)(v31 + 24) + 12i64));
		}
		sub_14018B900(v21, 0);
	}
	while (v8)
	{
		v57 = (__int64)v8;
		v8 = (_QWORD*)*v8;
		sub_14018B900(v57, 0);
	}
	sub_14018B900((__int64)v97, 0);
	return (unsigned int)v22;
}
// 1409D0100: using guessed type int dword_1409D0100;
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 1407BF410: using guessed type int var_2040[2048];

