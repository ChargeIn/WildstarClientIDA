//----- (00000001402CB820) ----------------------------------------------------
__int64 __fastcall sub_1402CB820(__int64 a1, __int64 a2, int a3)
{
	int v3; // eax
	__int64 v4; // r15
	__int64 v7; // rcx
	__int64 v8; // rsi
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // r13
	_QWORD* v14; // r12
	__int64 v15; // r15
	unsigned int v16; // eax
	unsigned int v17; // esi
	__int64 v18; // r14
	unsigned __int64 v19; // r8
	__int64 v20; // r9
	int v21; // ecx
	unsigned __int16* v22; // rdx
	unsigned __int16 i; // ax
	__int64 v24; // rax
	unsigned __int64* v25; // rax
	unsigned __int64 v26; // rdx
	unsigned __int64 v27; // r8
	unsigned __int64 v28; // rcx
	__int64 v29; // rsi
	__int64 v30; // rax
	_OWORD* v31; // rbx
	_OWORD* v32; // rax
	__int64 v33; // r14
	unsigned __int64 v34; // rbx
	unsigned __int64 v35; // r13
	unsigned __int16* v36; // rdx
	int v37; // eax
	unsigned __int16 j; // cx
	__int64 v39; // rcx
	__int64 v40; // rax
	unsigned __int64 v41; // r8
	unsigned __int64 v42; // rdx
	_DWORD* v43; // rax
	__int64 v44; // rdx
	__int64 v45; // rax
	unsigned __int64* v46; // rax
	unsigned __int64 v47; // rdx
	unsigned __int64 v48; // r8
	unsigned __int64 v49; // rcx
	unsigned int v50; // ebx
	__int64 v51; // r14
	unsigned int v52; // ebx
	__int64 v53; // r14
	__int64 v54; // r8
	__int64 v55; // r9
	unsigned __int64 v56; // rax
	unsigned __int64 v57; // r11
	__int64 v58; // r10
	__int64 v59; // rbx
	__int64 v60; // rax
	unsigned __int64 v61; // rbx
	unsigned __int64 v62; // r14
	__int64 v63; // rbx
	__int64 v64; // rdx
	__int64 v65; // rcx
	__int64 v66; // rax
	bool v67; // zf
	_QWORD* v68; // rax
	_QWORD* v69; // rdx
	__int64 v70; // r8
	_QWORD* v71; // rdx
	unsigned __int64 v72; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v73; // [rsp+48h] [rbp-B8h]
	unsigned __int64 v74; // [rsp+50h] [rbp-B0h] BYREF
	unsigned __int64 v75; // [rsp+58h] [rbp-A8h]
	__int64 v76; // [rsp+60h] [rbp-A0h]
	__int64 v77; // [rsp+68h] [rbp-98h]
	__int64 v78; // [rsp+70h] [rbp-90h]
	char v79[64]; // [rsp+80h] [rbp-80h] BYREF
	__int64(__fastcall * *v80)(); // [rsp+C0h] [rbp-40h] BYREF
	__int64 v81; // [rsp+1F0h] [rbp+F0h]
	_QWORD* v82; // [rsp+270h] [rbp+170h] BYREF
	__int64 v83; // [rsp+278h] [rbp+178h]
	unsigned int v84; // [rsp+288h] [rbp+188h]

	v83 = a2;
	v3 = *(_DWORD*)(a1 + 56);
	v4 = a2;
	if (v3 == 5 || v3 > a3)
		return 1i64;
	if (!v3)
		*(_DWORD*)(a1 + 56) = 2 - (*(_QWORD*)(a1 + 16) != 0i64);
	if (*(_DWORD*)(a1 + 56) == 1 && !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 480i64))(a1))
		return 0i64;
	if (*(_DWORD*)(a1 + 56) == 3)
	{
		v7 = *(_QWORD*)(a1 + 32);
		if (*(_DWORD*)(v7 + 24) != 2 && !(unsigned int)sub_1402D5980(v7))
			return 0i64;
		*(_DWORD*)(a1 + 56) = 2;
	}
	v8 = 0i64;
	if (*(_DWORD*)(a1 + 56) == 2)
	{
		v9 = *(_QWORD*)(a1 + 24);
		if (*(_DWORD*)(v9 + 24) != 3 && !(unsigned int)sub_1402C9AE0(v9, v4, 3))
			return 0i64;
		v10 = *(_QWORD*)a1;
		*(_DWORD*)(a1 + 56) = 4;
		v11 = (*(__int64(__fastcall**)(__int64))(v10 + 24))(a1);
		v12 = *(_QWORD*)(a1 + 24);
		v13 = v11;
		v77 = v11;
		v14 = (_QWORD*)(a1 + 248);
		v15 = sub_1402CA200(v12);
		v78 = v15;
		sub_1402CE5D0((__int64*)(a1 + 248), v15);
		sub_1402CED30((__int64*)(a1 + 344), v15);
		v16 = *(_DWORD*)(v13 + 48);
		v80 = off_140B62800;
		LODWORD(v82) = v16;
		v81 = 0i64;
		sub_1402CE490((__int64*)(a1 + 280), v16, (__int64)&v80);
		if (v81)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v81 + 8i64))(v81);
		v17 = *(_DWORD*)(v13 + 160);
		v18 = v17;
		sub_1402CE3E0(a1 + 312, v17);
		v84 = *(_DWORD*)(v13 + 128);
		sub_1402CE760((__int64*)(a1 + 264), v84);
		sub_1402CED30((__int64*)(a1 + 384), *(unsigned int*)(v13 + 64));
		v19 = 0i64;
		if (*(_DWORD*)(v13 + 64))
		{
			v20 = 0i64;
			do
			{
				v21 = 0;
				v22 = *(unsigned __int16**)(v20 + *(_QWORD*)(v13 + 72) + 16);
				for (i = *v22; *v22; i = *v22)
				{
					++v22;
					v21 = i - 1434480983 * v21;
				}
				++v19;
				v20 += 88i64;
				*(_DWORD*)(*(_QWORD*)(a1 + 384) + 4 * v19 - 4) = v21;
			} while (v19 < *(unsigned int*)(v13 + 64));
		}
		v24 = *(_QWORD*)(a1 + 392);
		v72 = 0i64;
		v73 = v24;
		v25 = sub_1401D3110(&v74, (__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_1402CB720, &v72, a1, 2);
		v26 = *(_QWORD*)(a1 + 400);
		v27 = *(_QWORD*)(a1 + 408);
		*(_QWORD*)(a1 + 400) = *v25;
		*(_QWORD*)(a1 + 408) = v25[1];
		*v25 = v26;
		v25[1] = v27;
		v28 = *(_QWORD*)(a1 + 416);
		*(_QWORD*)(a1 + 416) = v25[2];
		v25[2] = v28;
		if (v74 < v75)
			sub_14018B900(v76 + 8 * v74, 0);
		if (v17)
		{
			v29 = 0i64;
			do
			{
				v30 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1);
				v31 = (_OWORD*)(v29 + *(_QWORD*)(a1 + 320));
				v32 = (_OWORD*)sub_1402CF690((__int64)v79, v29 + *(_QWORD*)(v30 + 168) + 16i64);
				v29 += 64i64;
				*v31 = *v32;
				v31[1] = v32[1];
				v31[2] = v32[2];
				v31[3] = v32[3];
				--v18;
			} while (v18);
		}
		v8 = 0i64;
		v33 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 232i64))(a1, *(unsigned int*)(a1 + 60));
		v34 = 0i64;
		if (v33 == -1)
			v33 = 0i64;
		if (v15)
		{
			v35 = v78;
			do
			{
				sub_1402CF8D0((__int64*)(v8 + *v14), a1, v34, v33, (__int128*)(a1 + 80));
				v36 = *(unsigned __int16**)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v8 + *v14) + 24i64))(v8 + *v14)
					+ 40);
				v37 = 0;
				if (v36)
				{
					for (j = *v36; *v36; j = *v36)
					{
						++v36;
						v37 = j - 1434480983 * v37;
					}
				}
				*(_DWORD*)(*(_QWORD*)(a1 + 344) + 4 * v34) = v37;
				v39 = *(_QWORD*)(a1 + 32);
				if (v39)
				{
					v40 = sub_1402D5890(v39);
					v41 = *(unsigned int*)(v40 + 24);
					if (v41 > v34)
					{
						v42 = 0i64;
						if (*(_DWORD*)(v40 + 24))
						{
							v43 = *(_DWORD**)(v40 + 32);
							while (*v43 != *(_DWORD*)(*(_QWORD*)(a1 + 344) + 4 * v34))
							{
								++v42;
								v43 += 5;
								if (v42 >= v41)
									goto LABEL_40;
							}
							v44 = (unsigned int)v43[1];
						}
						else
						{
						LABEL_40:
							v44 = 0i64;
						}
						(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)(v8 + *v14) + 208i64))(v8 + *v14, v44);
					}
				}
				++v34;
				v8 += 416i64;
			} while (v34 < v35);
			v13 = v77;
			v8 = 0i64;
		}
		v45 = *(_QWORD*)(a1 + 352);
		v72 = 0i64;
		v73 = v45;
		v46 = sub_1401D3110(&v74, (__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_1402CB740, &v72, a1, 2);
		v47 = *(_QWORD*)(a1 + 360);
		v48 = *(_QWORD*)(a1 + 368);
		*(_QWORD*)(a1 + 360) = *v46;
		*(_QWORD*)(a1 + 368) = v46[1];
		*v46 = v47;
		v46[1] = v48;
		v49 = *(_QWORD*)(a1 + 376);
		*(_QWORD*)(a1 + 376) = v46[2];
		v46[2] = v49;
		if (v74 < v75)
			sub_14018B900(v76 + 8 * v74, 0);
		v50 = 0;
		if ((_DWORD)v82)
		{
			v51 = 0i64;
			do
			{
				sub_1402D5F00(
					v51 + *(_QWORD*)(a1 + 288),
					a1,
					a1 + 80,
					v50++,
					v8 + *(_QWORD*)(v13 + 56),
					*v14 + 416i64 * *(unsigned __int16*)(v8 + *(_QWORD*)(v13 + 56) + 4),
					*v14 + 416i64 * *(unsigned __int16*)(v8 + *(_QWORD*)(v13 + 56) + 6));
				v51 += 368i64;
				v8 += 144i64;
			} while (v50 < (unsigned int)v82);
			v8 = 0i64;
		}
		v52 = 0;
		if (v84)
		{
			v53 = 0i64;
			do
			{
				v54 = 0i64;
				v55 = v8 + *(_QWORD*)(v13 + 136);
				v56 = *(unsigned int*)(v55 + 64);
				if (v56 < *(_QWORD*)(a1 + 256))
					v54 = *v14 + 416i64 * (unsigned int)v56;
				v57 = *(unsigned int*)(v55 + 68);
				v58 = 0i64;
				if (v57 < (*(_QWORD*)(a1 + 296) - *(_QWORD*)(a1 + 288)) / 368i64)
					v58 = *(_QWORD*)(a1 + 288) + 368i64 * (unsigned int)v57;
				sub_1402D2550(v53 + *(_QWORD*)(a1 + 264), a1, v52++, v55, a1 + 80, v54, v58);
				v53 += 384i64;
				v8 += 176i64;
			} while (v52 < v84);
			v8 = 0i64;
		}
		v4 = v83;
	}
	if (*(_DWORD*)(a1 + 56) == 4)
	{
		v59 = *(_QWORD*)(a1 + 24);
		LODWORD(v72) = -1;
		if (*(_DWORD*)(v59 + 24) != 3)
			sub_1402C9AE0(v59, (__int64)&v72, 1);
		v60 = *(_QWORD*)(v59 + 64);
		v61 = 0i64;
		v62 = *(unsigned int*)(v60 + 32);
		if (*(_DWORD*)(v60 + 32))
		{
			while ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)(v8 + *(_QWORD*)(a1 + 248)) + 88i64))(
				v8 + *(_QWORD*)(a1 + 248),
				v4))
			{
				++v61;
				v8 += 416i64;
				if (v61 >= v62)
					goto LABEL_65;
			}
			return 0i64;
		}
	LABEL_65:
		v63 = *(_QWORD*)(a1 + 24);
		LODWORD(v72) = -1;
		if (*(_DWORD*)(v63 + 24) != 3)
			sub_1402C9AE0(v63, (__int64)&v72, 3);
		v64 = *(unsigned int*)(*(_QWORD*)(v63 + 64) + 128i64);
		if ((_DWORD)v64)
		{
			v65 = 0i64;
			do
			{
				v66 = *(_QWORD*)(a1 + 264);
				if (!*(_DWORD*)(v65 + v66 + 36))
					*(_DWORD*)(v65 + v66 + 36) = 1;
				v65 += 384i64;
				--v64;
			} while (v64);
		}
		sub_1402CB5A0(a1);
		*(_DWORD*)(a1 + 56) = 5;
	}
	if (*(_DWORD*)(a1 + 56) == 5)
	{
		v67 = *(_QWORD*)(a1 + 496) == 0i64;
		v82 = 0i64;
		if (!v67)
		{
			do
			{
				v68 = *(_QWORD**)(a1 + 496);
				v69 = (_QWORD*)v68[3];
				if (v69)
					*v69 = v68[4];
				v70 = v68[4];
				v71 = v68 + 4;
				if (v70)
					*(_QWORD*)(v70 + 24) = v68[3];
				*v71 = 0i64;
				v68[3] = &v82;
				*v71 = v82;
				v82 = v68;
				if (*v71)
				{
					*(_QWORD*)(*v71 + 24i64) = v71;
					v68 = v82;
				}
			} while (*(_QWORD*)(a1 + 496));
			if (v68)
			{
				do
				{
					(*(void(__fastcall**)(_QWORD*))(*v68 + 8i64))(v68);
					if (!v82)
						break;
					(*(void(__fastcall**)(_QWORD*, __int64)) * v82)(v82, 1i64);
					v68 = v82;
				} while (v82);
			}
		}
	}
	return 1i64;
}
// 140B62800: using guessed type __int64 (__fastcall *off_140B62800[11])();
// 1402CB820: using guessed type char var_1E0[64];

