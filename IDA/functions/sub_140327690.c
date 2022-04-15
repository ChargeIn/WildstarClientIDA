//----- (0000000140327690) ----------------------------------------------------
__int64 __fastcall sub_140327690(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	unsigned __int64 v4; // rsi
	unsigned __int64 v5; // rbp
	__int64 v6; // r14
	__int64 v7; // rdi
	__int16 v8; // cx
	__int64 v9; // r15
	__int64 v10; // r13
	__int16 v11; // ax
	__int64 result; // rax
	unsigned int v13; // eax
	unsigned int v14; // ecx
	int v15; // ebx
	int v16; // ebx
	unsigned int v17; // r11d
	_QWORD* v18; // r8
	__int64 v19; // r9
	int v20; // ecx
	int v21; // edx
	__int64 v22; // r10
	int v23; // eax
	__int64 v24; // rdx
	bool v25; // zf
	unsigned int v26; // r12d
	__int64 v27; // r12
	unsigned int v28; // ebp
	unsigned __int16* v29; // rbx
	__int64 v30; // r14
	__int64 v31; // rax
	unsigned __int64 v32; // rsi
	__int64 v33; // rcx
	__int64 v34; // rax
	__int64 v35; // rcx
	unsigned __int64 v36; // rax
	__int64 v37; // rcx
	unsigned int v38; // eax
	unsigned int v39; // ecx
	__int64 v40; // rax
	int v41; // ecx
	__int64 v42; // rax
	int v43; // eax
	unsigned int v44; // eax
	unsigned int v45; // ecx
	unsigned int v46; // eax
	unsigned int v47; // ecx
	int v48; // eax
	int v49; // ecx
	int v50; // eax
	int v51; // ecx
	unsigned int v52; // eax
	unsigned int v53; // ecx
	unsigned int v54; // r9d
	_DWORD* v55; // rax
	_DWORD* v56; // rcx
	int v57; // edx
	int v58; // r8d
	int v59; // edx
	int v60; // r8d
	int v61; // edx
	int v62; // r8d
	int v63; // edx
	int v64; // r8d
	unsigned __int64 v65; // rdx
	unsigned __int64 v66; // r8
	_QWORD* v67; // rsi
	__int64 v68; // rbp
	unsigned __int8* v69; // rcx
	unsigned __int8 v70; // dl
	__int64 v71; // r8
	float* v72; // rax
	float* v73; // rdx
	_DWORD* v74; // rcx
	__int64 v75; // r8
	float v76; // xmm0_4
	float v77; // xmm0_4
	float v78; // xmm1_4
	float v79; // xmm1_4
	float v80; // xmm0_4
	float v81; // xmm1_4
	float v82; // xmm0_4
	float v83; // xmm1_4
	float v84; // xmm0_4
	float v85; // xmm1_4
	float v86; // xmm0_4
	float v87; // xmm1_4
	float v88; // xmm0_4
	float v89; // xmm1_4
	float v90; // xmm0_4
	float v91; // xmm1_4
	float v92; // xmm0_4
	float v93; // xmm1_4
	float v94; // xmm0_4
	float v95; // xmm1_4
	float v96; // xmm0_4
	float v97; // xmm1_4
	unsigned __int64 v98; // rax
	unsigned __int64 v99; // rcx
	unsigned __int64 v100; // rax
	unsigned __int64 v101; // rcx
	unsigned __int16 v102; // ax
	unsigned __int16 v103; // cx
	unsigned __int16 v104; // ax
	unsigned __int16 v105; // cx
	unsigned int v106; // eax
	unsigned int v107; // ecx
	unsigned __int64* v108; // rcx
	__int64 v109; // rdx
	int v110; // [rsp+20h] [rbp-78h]
	unsigned int v111; // [rsp+24h] [rbp-74h]
	_QWORD* v112; // [rsp+30h] [rbp-68h]
	__int64 v113; // [rsp+38h] [rbp-60h]
	__int64 v114; // [rsp+40h] [rbp-58h]
	unsigned __int64 v115; // [rsp+48h] [rbp-50h]
	unsigned __int64 v116; // [rsp+50h] [rbp-48h]

	v4 = *(_QWORD*)(a3 + 64);
	v5 = *(_QWORD*)(a4 + 64);
	v6 = *(_QWORD*)(a3 + 48);
	v7 = *(_QWORD*)(a4 + 48);
	v8 = *(_WORD*)(v5 + 32);
	v9 = *(_QWORD*)(v6 + 64);
	v10 = *(_QWORD*)(v7 + 64);
	v11 = *(_WORD*)(v4 + 32);
	v112 = (_QWORD*)v6;
	v115 = v4;
	v116 = v5;
	if (v11 < v8)
		return -1i64;
	if (v11 > v8)
		return 1i64;
	v13 = *(_DWORD*)(v6 + 1824);
	v14 = *(_DWORD*)(v7 + 1824);
	if (v13 < v14)
		return -1i64;
	if (v13 > v14)
		return 1i64;
	v15 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 280i64))(v6);
	if (v15 < (*(int(__fastcall**)(__int64))(*(_QWORD*)v7 + 280i64))(v7))
		return -1i64;
	v16 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 280i64))(v6);
	if (v16 > (*(int(__fastcall**)(__int64))(*(_QWORD*)v7 + 280i64))(v7))
		return 1i64;
	v17 = 0;
	v18 = (_QWORD*)v6;
	v19 = v7;
	v20 = (__PAIR64__(*(float*)(v6 + 1684) > 0.0, *(_DWORD*)(v6 + 1684)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
	v21 = (__PAIR64__(*(float*)(v7 + 1684) > 0.0, *(_DWORD*)(v7 + 1684)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
	if (v20 < v21)
		return -1i64;
	if (v20 > v21)
		return 1i64;
	v22 = 48i64 * *(unsigned __int16*)(v4 + 22) + *(_QWORD*)(v9 + 504) + 8i64;
	v23 = *(_DWORD*)(v22 + 4);
	v114 = v22;
	v24 = 48i64 * *(unsigned __int16*)(v5 + 22) + *(_QWORD*)(v10 + 504) + 8i64;
	v113 = v24;
	if (((*(_BYTE*)(v24 + 4) ^ (unsigned __int8)v23) & 2) != 0)
	{
		v25 = (v23 & 2) == 0;
		result = -1i64;
		if (!v25)
			return 1i64;
		return result;
	}
	if (((*(_BYTE*)(v24 + 4) ^ (unsigned __int8)v23) & 1) != 0)
	{
		v25 = (v23 & 1) == 0;
		result = -1i64;
		if (!v25)
			return 1i64;
		return result;
	}
	if (*(_DWORD*)v22 < *(_DWORD*)v24)
		return -1i64;
	if (*(_DWORD*)v22 > *(_DWORD*)v24)
		return 1i64;
	v26 = *(_DWORD*)(v22 + 24);
	v110 = 0;
	if (*(_DWORD*)(v24 + 24) < v26)
		v26 = *(_DWORD*)(v24 + 24);
	v111 = v26;
	if (v26)
	{
		v27 = 0i64;
	LABEL_26:
		v28 = 0;
		v29 = (unsigned __int16*)(v27 + *(_QWORD*)(v24 + 32));
		v30 = *(_QWORD*)(v22 + 32) - *(_QWORD*)(v24 + 32);
		while (1)
		{
			v31 = *(unsigned __int16*)((char*)v29 + v30);
			v32 = -1i64;
			if ((unsigned int)v31 < *(_DWORD*)(v9 + 448))
			{
				v33 = *(_QWORD*)(v18[132] + 24 * v31 + 16);
				if (v33)
				{
					v34 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD*, __int64))(*(_QWORD*)v33 + 64i64))(
						v33,
						v24,
						v18,
						v19);
					v19 = v7;
					v32 = v34;
				}
			}
			v35 = *v29;
			v36 = -1i64;
			if ((unsigned int)v35 < *(_DWORD*)(v10 + 448))
			{
				v24 = 3 * v35;
				v37 = *(_QWORD*)(*(_QWORD*)(v19 + 1056) + 24 * v35 + 16);
				if (v37)
					v36 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v37 + 64i64))(v37);
			}
			if (v32 < v36)
				return 0xFFFFFFFFi64;
			if (v32 > v36)
				return 1i64;
			v18 = v112;
			v19 = v7;
			++v28;
			++v29;
			if (v28 >= 2)
			{
				v24 = v113;
				v22 = v114;
				v27 += 296i64;
				v17 = 0;
				if (++v110 < v111)
					goto LABEL_26;
				v26 = v111;
				break;
			}
		}
	}
	v38 = *(_DWORD*)(v22 + 24);
	v39 = *(_DWORD*)(v24 + 24);
	if (v38 < v39)
		return 0xFFFFFFFFi64;
	if (v38 > v39)
		return 1i64;
	v40 = *(_QWORD*)(a3 + 72);
	if (!v40 || (v41 = 1, *(_WORD*)(*(_QWORD*)v40 + 6i64) != 2))
		v41 = 0;
	v42 = *(_QWORD*)(a4 + 72);
	if (!v42 || (v25 = *(_WORD*)(*(_QWORD*)v42 + 6i64) == 2, v43 = 1, !v25))
		v43 = 0;
	if (v41)
	{
		if (!v43)
			return 1i64;
	}
	else if (v43)
	{
		return 0xFFFFFFFFi64;
	}
	v44 = *(_DWORD*)(a3 + 84);
	v45 = *(_DWORD*)(a4 + 84);
	if (v44 < v45)
		return 0xFFFFFFFFi64;
	if (v44 > v45)
		return 1i64;
	v46 = *(_DWORD*)(a3 + 88);
	v47 = *(_DWORD*)(a4 + 88);
	if (v46 < v47)
		return 0xFFFFFFFFi64;
	if (v46 > v47)
		return 1i64;
	if (v22 == v24)
		goto LABEL_75;
	v48 = *(_DWORD*)(v22 + 8);
	v49 = *(_DWORD*)(v24 + 8);
	if (v48 < v49)
		return 0xFFFFFFFFi64;
	if (v48 > v49)
		return 1i64;
	v50 = *(_DWORD*)(v22 + 12);
	v51 = *(_DWORD*)(v24 + 12);
	if (v50 < v51)
		return 0xFFFFFFFFi64;
	if (v50 > v51)
		return 1i64;
	v52 = *(_DWORD*)(v22 + 4);
	v53 = *(_DWORD*)(v24 + 4);
	if (v52 < v53)
		return 0xFFFFFFFFi64;
	if (v52 > v53)
		return 1i64;
	v54 = 0;
	if (v26)
	{
		v55 = (_DWORD*)(*(_QWORD*)(v22 + 32) + 8i64);
		v56 = (_DWORD*)(*(_QWORD*)(v24 + 32) + 8i64);
		do
		{
			v57 = *(v55 - 1);
			v58 = *(v56 - 1);
			if (v57 < v58)
				return 0xFFFFFFFFi64;
			if (v57 > v58)
				return 1i64;
			if (*v55 < *v56)
				return 0xFFFFFFFFi64;
			if (*v55 > *v56)
				return 1i64;
			v59 = v55[1];
			v60 = v56[1];
			if (v59 < v60)
				return 0xFFFFFFFFi64;
			if (v59 > v60)
				return 1i64;
			v61 = v55[2];
			v62 = v56[2];
			if (v61 < v62)
				return 0xFFFFFFFFi64;
			if (v61 > v62)
				return 1i64;
			v63 = v55[3];
			v64 = v56[3];
			if (v63 < v64)
				return 0xFFFFFFFFi64;
			if (v63 > v64)
				return 1i64;
			++v54;
			v55 += 74;
			v56 += 74;
		} while (v54 < v26);
	}
LABEL_75:
	v65 = v115;
	v66 = v116;
	v67 = (_QWORD*)(v112[138] + 96i64 * *(unsigned __int16*)(v115 + 22));
	v68 = *(_QWORD*)(v7 + 1104) + 96i64 * *(unsigned __int16*)(v116 + 22);
	if (v67 != (_QWORD*)v68)
	{
		v69 = (unsigned __int8*)(v67 + 11);
		while (1)
		{
			v70 = v69[v68 - (_QWORD)v67];
			if (*v69 < v70)
				return 0xFFFFFFFFi64;
			if (*v69 > v70)
				return 1i64;
			++v69;
			if ((unsigned __int64)&v69[-88i64 - (_QWORD)v67] >= 2)
			{
				if (v26)
				{
					v71 = v67[1];
					v72 = *(float**)(v68 + 8);
					v73 = (float*)(v71 + 40);
					v74 = (_DWORD*)(*(_QWORD*)(v22 + 32) + 144i64);
					v75 = v71 - (_QWORD)v72;
					do
					{
						if (!*(v74 - 35) || *v74)
						{
							v76 = *(float*)((char*)v72 + v75);
							if (v76 < *v72)
								return 0xFFFFFFFFi64;
							if (v76 > *v72)
								return 1i64;
						}
						if (!*(v74 - 34) || v74[1])
						{
							v77 = *(v73 - 5);
							v78 = v72[5];
							if (v77 < v78)
								return 0xFFFFFFFFi64;
							if (v77 > v78)
								return 1i64;
						}
						if (!*(v74 - 33) || v74[2])
						{
							v79 = v72[10];
							if (*v73 < v79)
								return 0xFFFFFFFFi64;
							if (*v73 > v79)
								return 1i64;
						}
						if (!*(v74 - 32) || v74[3])
						{
							v80 = v73[5];
							v81 = v72[15];
							if (v80 < v81)
								return 0xFFFFFFFFi64;
							if (v80 > v81)
								return 1i64;
						}
						if (!*(v74 - 31) || v74[4])
						{
							v82 = v73[10];
							v83 = v72[20];
							if (v82 < v83)
								return 0xFFFFFFFFi64;
							if (v82 > v83)
								return 1i64;
						}
						v84 = v73[15];
						v85 = v72[25];
						if (v84 < v85)
							return 0xFFFFFFFFi64;
						if (v84 > v85)
							return 1i64;
						v86 = v73[20];
						v87 = v72[30];
						if (v86 < v87)
							return 0xFFFFFFFFi64;
						if (v86 > v87)
							return 1i64;
						v88 = v73[25];
						v89 = v72[35];
						if (v88 < v89)
							return 0xFFFFFFFFi64;
						if (v88 > v89)
							return 1i64;
						v90 = v73[30];
						v91 = v72[40];
						if (v90 < v91)
							return 0xFFFFFFFFi64;
						if (v90 > v91)
							return 1i64;
						v92 = v73[38];
						v93 = v72[48];
						if (v92 < v93)
							return 0xFFFFFFFFi64;
						if (v92 > v93)
							return 1i64;
						v94 = v73[39];
						v95 = v72[49];
						if (v94 < v95)
							return 0xFFFFFFFFi64;
						if (v94 > v95)
							return 1i64;
						v96 = v73[40];
						v97 = v72[50];
						if (v96 < v97)
							return 0xFFFFFFFFi64;
						if (v96 > v97)
							return 1i64;
						++v17;
						v74 += 74;
						v73 += 56;
						v72 += 56;
					} while (v17 < v26);
				}
				result = sub_1407E6AF0(v67 + 2, v68 + 16, 0x20ui64);
				if (!(_DWORD)result)
				{
					result = sub_1407E6AF0(v67 + 6, v68 + 48, 0x20ui64);
					if (!(_DWORD)result)
					{
						v65 = v115;
						v66 = v116;
						break;
					}
				}
				return result;
			}
		}
	}
	v98 = v112[7];
	v99 = *(_QWORD*)(v7 + 56);
	if (v98 < v99)
		return 0xFFFFFFFFi64;
	if (v98 > v99)
		return 1i64;
	v100 = v112[142];
	v101 = *(_QWORD*)(v7 + 1136);
	if (v100 < v101)
		return 0xFFFFFFFFi64;
	if (v100 > v101)
		return 1i64;
	v102 = *(_WORD*)(v65 + 16);
	v103 = *(_WORD*)(v66 + 16);
	if (v102 < v103)
		return 0xFFFFFFFFi64;
	if (v102 > v103)
		return 1i64;
	v104 = *(_WORD*)(v65 + 18);
	v105 = *(_WORD*)(v66 + 18);
	if (v104 > v105)
		return 0xFFFFFFFFi64;
	if (v104 < v105)
		return 1i64;
	v106 = *(_DWORD*)(v65 + 4);
	v107 = *(_DWORD*)(v66 + 4);
	if (v106 < v107)
		return 0xFFFFFFFFi64;
	if (v106 > v107)
		return 1i64;
	if (*(_DWORD*)v65 < *(_DWORD*)v66)
		return 0xFFFFFFFFi64;
	if (*(_DWORD*)v65 > *(_DWORD*)v66)
		return 1i64;
	if (v65 < v66)
		return 0xFFFFFFFFi64;
	if (v65 > v66)
		return 1i64;
	v108 = *(unsigned __int64**)(a3 + 56);
	v109 = *(_QWORD*)(a4 + 56);
	if (v108 == (unsigned __int64*)v109)
		return 0i64;
	result = sub_1407E6AF0(v108, v109, 0x60ui64);
	if (!(_DWORD)result)
		return 0i64;
	return result;
}
// 1403278C9: variable 'v24' is possibly undefined

