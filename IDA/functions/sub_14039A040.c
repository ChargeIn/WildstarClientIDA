#include "../winhttp.h"

//----- (000000014039A040) ----------------------------------------------------
__int64 __fastcall sub_14039A040(__int64 a1, unsigned int a2, __int64 a3, int a4, int a5, __int64* a6)
{
	unsigned __int64 v7; // rdi
	int v8; // r12d
	__int64 v11; // r13
	int v12; // ecx
	__int64 v13; // r15
	unsigned int v14; // edx
	unsigned int v15; // ecx
	_DWORD* v16; // rax
	unsigned int v17; // r12d
	__int64 v18; // rbx
	int v19; // ebx
	__int64 v20; // rax
	_DWORD* v21; // rax
	__int64 v22; // rax
	float v23; // xmm0_4
	__int64 v24; // rcx
	int v25; // ebx
	__int64 v26; // rax
	int v27; // edx
	int v28; // eax
	int v29; // edx
	__int64 v30; // rax
	unsigned int v31; // ebx
	unsigned __int64 v32; // rdx
	int* v33; // rax
	unsigned int v34; // ebx
	unsigned __int64 v35; // rdx
	int* v36; // rcx
	int v37; // r12d
	__int64 v38; // rax
	__int64 v39; // rcx
	__int64 v40; // r13
	__int64 v41; // rdx
	int v42; // eax
	unsigned int v43; // eax
	unsigned __int64 v44; // rdx
	int* v45; // rax
	int v46; // edx
	__int64 v47; // rax
	BOOL v48; // r9d
	__int64 v49; // rcx
	__int64 v50; // rsi
	unsigned int v51; // eax
	__int64 v52; // r14
	__int64 v53; // r15
	__int64 v54; // rax
	__int64 v55; // rsi
	__int64 v56; // rax
	__int64 v57; // r8
	int v58; // ecx
	__int64 v59; // r8
	int v60; // ecx
	unsigned int v61; // eax
	__int64* v62; // rax
	__int64 v63; // rcx
	unsigned int v64; // eax
	__int64 v65; // rax
	__int64 v66; // rcx
	int v67; // eax
	unsigned int v68; // r13d
	unsigned __int64 v69; // rdx
	int* v70; // rax
	unsigned int v71; // eax
	int v72; // ebx
	__int64 v73; // rax
	__int64 i; // rbx
	int v75; // edi
	__int64 v76; // rbx
	__int64 j; // rbx
	int v78; // eax
	unsigned int v79; // r14d
	__int64* v80; // rax
	__int64 v81; // rbx
	unsigned int v82; // edx
	int v83; // eax
	__int64 v84; // [rsp+40h] [rbp-C0h] BYREF
	unsigned __int64 v85; // [rsp+48h] [rbp-B8h]
	__int128 v86; // [rsp+50h] [rbp-B0h]
	int v87; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v88; // [rsp+68h] [rbp-98h] BYREF
	int v89; // [rsp+70h] [rbp-90h]
	int v90[7]; // [rsp+80h] [rbp-80h] BYREF
	int v91; // [rsp+9Ch] [rbp-64h]
	int v92; // [rsp+A4h] [rbp-5Ch]
	_DWORD v93[9]; // [rsp+A8h] [rbp-58h] BYREF
	int v94; // [rsp+CCh] [rbp-34h]
	int v95; // [rsp+D8h] [rbp-28h]
	int v96; // [rsp+190h] [rbp+90h] BYREF
	unsigned int v97; // [rsp+198h] [rbp+98h]
	int v98; // [rsp+1A8h] [rbp+A8h]

	v98 = a4;
	v97 = a2;
	v7 = 0i64;
	v8 = a4;
	if (a6)
		*a6 = 0i64;
	if (!*(_QWORD*)(a1 + 120))
		return 30i64;
	if ((unsigned __int64)a2 >= *(_QWORD*)(a1 + 2712))
		return 4i64;
	v11 = *(_QWORD*)(*(_QWORD*)(a1 + 2704) + 8i64 * a2);
	if (!v11)
		return 22i64;
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v11 + 112i64))(v11) == 28)
		return 285i64;
	v96 = 0;
	sub_1407E4830(v90, 0i64, 0xC8ui64);
	v12 = *(_DWORD*)(*(_QWORD*)(a1 + 120) + 8i64);
	v95 = 1;
	v91 = v12;
	v13 = sub_1405A4B80(v11, 1);
	if (!v13)
		return 4i64;
	if ((*(_DWORD*)(*(_QWORD*)(a1 + 25744) + 4208i64) & 0x200) != 0 && !sub_14039E0A0(a1))
	{
		v14 = *(_DWORD*)(v13 + 40);
		v15 = 0;
		if (v14)
		{
			v16 = (_DWORD*)(*(_QWORD*)(v13 + 48) + 16i64);
			while (*v16 != 36)
			{
				++v15;
				v16 += 42;
				if (v15 >= v14)
					goto LABEL_19;
			}
			if ((dword_140DC21A4 & 1) != 0)
			{
				v23 = *(float*)&dword_140DC21A8;
			}
			else
			{
				dword_140DC21A4 |= 1u;
				v22 = sub_140200220(0x495u);
				if (v22)
				{
					v23 = *(float*)(v22 + 24);
					dword_140DC21A8 = LODWORD(v23);
				}
				else
				{
					v23 = 1.0;
					dword_140DC21A8 = 1065353216;
				}
			}
			if ((float)(v23 + *(float*)(*(_QWORD*)(a1 + 25744) + 4580i64)) < *(float*)(*(_QWORD*)(a1 + 25744) + 6096i64))
			{
				if (a3)
					sub_1403B51F0(a3, 0x117u);
				return 279i64;
			}
		}
	}
LABEL_19:
	if (!v8 && sub_14039E0A0(a1))
	{
		v17 = 0;
		if (*(_DWORD*)(v13 + 40))
		{
			do
			{
				v18 = 168i64 * v17;
				if (*(_DWORD*)(v18 + *(_QWORD*)(v13 + 48) + 16) == 36)
				{
					sub_14039E400(a1);
					v19 = *(_DWORD*)(v18 + *(_QWORD*)(v13 + 48) + 64);
					v20 = sub_14039DE90(a1);
					v21 = v20 ? *(_DWORD**)(v20 + 24) : 0i64;
					if (v21 && *v21 == v19)
						return 0i64;
				}
			} while (++v17 < *(_DWORD*)(v13 + 40));
		}
		v8 = v98;
	}
	v24 = *(_QWORD*)(a1 + 28048);
	if (v24)
	{
		v25 = **(_DWORD**)(v13 + 112);
		v26 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)v24 + 24i64))(
			v24,
			v13,
			*(_QWORD*)(a1 + 120),
			0i64);
		v27 = v94;
		v13 = v26;
		if (**(_DWORD**)(v26 + 112) != v25)
			v27 = v25;
		v94 = v27;
	}
	v90[0] = **(_DWORD**)(v13 + 112);
	v90[1] = v90[0];
	v28 = sub_1405A4CE0(v11, v93);
	v29 = *(_DWORD*)(*(_QWORD*)(v13 + 112) + 24i64);
	v89 = v28;
	if (((v29 - 2) & 0xFFFFFFFA) == 0 && v29 != 3)
	{
		v30 = sub_1403BFD60(a1, (unsigned int*)v90, &v96, v8);
		v31 = v96;
		v13 = v30;
		if (!v30 || v96 && v96 != 317)
		{
			if (a3)
			{
				LODWORD(a6) = v96;
				*(_DWORD*)(a3 + 16) = v96;
				if (v31)
				{
					if (v31 != 317)
					{
						v32 = *(_QWORD*)(a3 + 8);
						*(_DWORD*)(a3 + 24) = 1;
						if (v32)
						{
							v33 = *(int**)a3;
							while (*v33 != v31)
							{
								if (*v33 <= (int)v31)
								{
									++v7;
									++v33;
									if (v7 < v32)
										continue;
								}
								goto LABEL_79;
							}
							return v31;
						}
					LABEL_79:
						sub_1401C2E70((__int64*)a3, v7, (int*)&a6);
						return v31;
					}
				}
			}
			return v31;
		}
	}
	v34 = *(_DWORD*)(*(_QWORD*)(v13 + 112) + 4i64);
	if (!sub_1405A7020(a1, v34) || (unsigned int)sub_1405A6C30(a1, v34))
	{
		v37 = a5;
		v38 = sub_14055BDC0(a1, *(_QWORD*)(a1 + 120), v13, v98, a5);
		v40 = v38;
		if (v38)
			v37 = *(_DWORD*)(v38 + 8);
		v96 = v37;
		if (v38)
		{
			v41 = *(_QWORD*)(a1 + 120);
			if (v41 != v38)
			{
				v42 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65B70 + 72i64))(
					qword_140C65B70,
					*(unsigned int*)(v41 + 8),
					*(unsigned int*)(v38 + 8));
				v43 = sub_1403AD540(v13, *(_QWORD*)(a1 + 120), v40, v42);
				v31 = v43;
				if (v43)
				{
					if (v43 != 317)
					{
						if (a3)
						{
							v44 = *(_QWORD*)(a3 + 8);
							LODWORD(a6) = v43;
							*(_DWORD*)(a3 + 16) = v43;
							*(_DWORD*)(a3 + 24) = 1;
							if (v44)
							{
								v45 = *(int**)a3;
								while (*v45 != v31)
								{
									if (*v45 <= (int)v31)
									{
										++v7;
										++v45;
										if (v7 < v44)
											continue;
									}
									goto LABEL_79;
								}
								return v31;
							}
							goto LABEL_79;
						}
						return v31;
					}
				}
			}
		}
		if (v98)
		{
			if (a3)
				return sub_140398800(
					v39,
					(unsigned int*)v90,
					*(_QWORD*)(a1 + 120),
					v40,
					(unsigned int*)(a1 + 27920),
					0i64,
					a3,
					1);
			v46 = v90[0];
			v47 = *(_QWORD*)(a1 + 120);
			v84 = 0i64;
			*(_QWORD*)((char*)&v86 + 4) = 0i64;
			LODWORD(v86) = 0;
			HIDWORD(v86) = 96;
			v85 = 0i64;
			if (v90[0])
			{
				if (v47)
				{
					v48 = *(_QWORD*)(qword_140C65898 + 120) == v47 || *(_QWORD*)(qword_140C65898 + 25744) == v47;
					v49 = 0i64;
					if (v48)
						v49 = qword_140C65898;
					if (v49 && sub_1405A5B90(v49, v90[0]))
						goto LABEL_93;
				}
				if (sub_1407A0FD0(qword_140C65B70, v46))
				{
				LABEL_93:
					if (v40)
						v92 = *(_DWORD*)(v40 + 8);
					if (a1 != -27920)
					{
						v93[3] = *(_DWORD*)(a1 + 27920);
						v93[4] = *(_DWORD*)(a1 + 27924);
						v93[5] = *(_DWORD*)(a1 + 27928);
					}
					v50 = qword_140C65B70;
					v51 = sub_1403AE8C0(qword_140C65B70, (__int64)v90, 0i64, (__int64)&v84, qword_140C659A0, 1);
					v31 = v51;
					if (v51)
					{
						if (v51 != 317)
							goto LABEL_124;
						if (!DWORD1(v86))
						{
							v31 = 317;
							goto LABEL_124;
						}
					}
					v52 = sub_1403D90D0(qword_140C65898, v91);
					v53 = sub_1403D90D0(qword_140C65898, v92);
					if (!v52)
					{
						v31 = 30;
						goto LABEL_124;
					}
					v54 = sub_1403ACD90(v50, v90[0], v52);
					v55 = v54;
					if (v54)
					{
						v56 = *(_QWORD*)(v54 + 112);
						v57 = *(unsigned int*)(v56 + 360);
						if (!(_DWORD)v57
							|| *(_QWORD*)(v55 + 64) && (*(_BYTE*)(v56 + 264) & 2) != 0
							|| (*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0 + 24i64))(
								qword_140C659A0,
								v52,
								v57,
								v53,
								0i64,
								0))
						{
							v59 = *(unsigned int*)(*(_QWORD*)(v55 + 112) + 364i64);
							if (!(_DWORD)v59
								|| !v53
								|| (*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0 + 24i64))(
									qword_140C659A0,
									v53,
									v59,
									v52,
									0i64,
									0))
							{
							LABEL_124:
								if (v84)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)(v84 - 16) + 8i64))(v84 - 16);
								return v31;
							}
							v31 = 281;
							DWORD2(v86) = 1;
							LODWORD(a6) = 281;
							LODWORD(v86) = 281;
							if (v85)
							{
								while (1)
								{
									v60 = *(_DWORD*)(v84 + 4 * v7);
									if (v60 == 281)
										goto LABEL_124;
									if (v60 <= 281 && ++v7 < v85)
										continue;
									break;
								}
							}
						}
						else
						{
							v31 = 151;
							DWORD2(v86) = 1;
							LODWORD(a6) = 151;
							LODWORD(v86) = 151;
							if (v85)
							{
								while (1)
								{
									v58 = *(_DWORD*)(v84 + 4 * v7);
									if (v58 == 151)
										goto LABEL_124;
									if (v58 <= 151 && ++v7 < v85)
										continue;
									break;
								}
							}
						}
						sub_1401C2E70(&v84, v7, (int*)&a6);
						goto LABEL_124;
					}
				}
			}
			v31 = 4;
			goto LABEL_124;
		}
		if (!*(_QWORD*)(a1 + 27880) && *(_DWORD*)(*(_QWORD*)(v13 + 112) + 124i64) == 4)
		{
			v61 = v97;
			*(_QWORD*)(a1 + 27880) = v13;
			HIDWORD(a6) = v61;
			LODWORD(a6) = 4;
			v62 = a6;
			DWORD2(v86) = 9;
			v85 = 0i64;
			*(_QWORD*)(a1 + 27888) = 0i64;
			*(_QWORD*)(a1 + 27896) = v62;
			*(_QWORD*)(a1 + 27904) = *((_QWORD*)&v86 + 1);
			return 0i64;
		}
		if (sub_1403A1600(a1))
			sub_1403A1510(v63);
		if (*(_DWORD*)(*(_QWORD*)(a1 + 25744) + 460i64))
		{
			sub_1403A2550(a1);
			v64 = v97;
			*(_DWORD*)(a1 + 26188) = v37;
			*(_DWORD*)(a1 + 26272) = v64;
			LODWORD(v84) = 0;
			*(_DWORD*)(a1 + 26184) = 4;
			v65 = sub_14001C280(a1);
			v66 = *(_QWORD*)(a1 + 25744);
			*((_QWORD*)&v86 + 1) = 0i64;
			v85 = v65;
			*(_QWORD*)&v86 = sub_14039EA90;
			v67 = sub_1404720D0(v66);
			sub_140195960(a1 + 26200, v67, (__int64)&v84, 4);
			v68 = 2;
			if (a3)
			{
				v69 = *(_QWORD*)(a3 + 8);
				LODWORD(a6) = 2;
				*(_DWORD*)(a3 + 16) = 2;
				*(_DWORD*)(a3 + 24) = 1;
				if (v69)
				{
					v70 = *(int**)a3;
					while (*v70 != 2)
					{
						if (*v70 <= 2)
						{
							++v7;
							++v70;
							if (v7 < v69)
								continue;
						}
						goto LABEL_140;
					}
				}
				else
				{
				LABEL_140:
					sub_1401C2E70((__int64*)a3, v7, (int*)&a6);
				}
			}
			return v68;
		}
		v87 = 0;
		v88 = 0i64;
		v71 = sub_1403988D0(a1, (unsigned int)v90, v13, 0, (__int64)&v96, (__int64)&v88, (__int64)&v87);
		v68 = v71;
		if (!v71 || v71 == 317)
		{
			v81 = v88;
			if (*(_DWORD*)(*(_QWORD*)(v13 + 112) + 124i64) == 4)
			{
				v82 = 155;
				v84 = 0i64;
				v85 = 0i64;
				LODWORD(v86) = 0;
				LODWORD(v84) = *(_DWORD*)(v88 + 96);
				v85 = *(_QWORD*)(a1 + 27920);
				LODWORD(v86) = *(_DWORD*)(a1 + 27928);
				WORD2(v84) = v97;
			}
			else
			{
				v84 = 0i64;
				v85 = 0i64;
				LODWORD(v84) = *(_DWORD*)(v88 + 96);
				WORD2(v84) = v97;
				LODWORD(v85) = *(_DWORD*)(v88 + 344);
				v83 = dword_140C45E80;
				if (*(_DWORD*)qword_140C63750 < dword_140C45E80)
					v83 = *(_DWORD*)qword_140C63750;
				if (!*((_BYTE*)&dword_140C45E90 + v83) || (HIDWORD(v85) = 0, *(_DWORD*)(a1 + 25444)))
					HIDWORD(v85) = 1;
				v82 = 154;
			}
			sub_1403F4900(a1, v82, (__int64)&v84);
			if (a6)
				*a6 = v81;
			return v68;
		}
		v72 = 0;
		if (sub_1404695E0(*(_QWORD*)(a1 + 120)))
			v72 = *(_DWORD*)(sub_1404695E0(*(_QWORD*)(a1 + 120)) + 80);
		if (v68 == 105 && !v89)
		{
			v73 = sub_1403D90D0(a1, v96);
			if ((int)sub_140559500(a1 + 28848, v73, v97) >= 0)
				v68 = 2;
			goto LABEL_178;
		}
		if (!v72 && v68 - 14 <= 2)
		{
			for (i = *(_QWORD*)(*(_QWORD*)(a1 + 120) + 5640i64); i; i = *(_QWORD*)(i + 136))
			{
				if (!*(_DWORD*)(i + 4) && *(_QWORD*)(i + 32) && (unsigned int)sub_140195F70(i + 16))
					break;
			}
			v75 = v90[0];
			v76 = *(_QWORD*)(*(_QWORD*)(a1 + 120) + 5640i64);
			if (v76)
			{
				do
				{
					if (*(_DWORD*)(v76 + 4) == 1
						&& v75 == *(_DWORD*)(v76 + 12)
						&& *(_QWORD*)(v76 + 32)
						&& (unsigned int)sub_140195F70(v76 + 16))
					{
						break;
					}
					v76 = *(_QWORD*)(v76 + 136);
				} while (v76);
				v75 = v90[0];
			}
			for (j = *(_QWORD*)(*(_QWORD*)(a1 + 120) + 5640i64); j; j = *(_QWORD*)(j + 136))
			{
				if (*(_DWORD*)(j + 4) == 2
					&& v75 == *(_DWORD*)(j + 12)
					&& *(_QWORD*)(j + 32)
					&& (unsigned int)sub_140195F70(j + 16))
				{
					break;
				}
			}
			goto LABEL_178;
		}
		if ((*(_DWORD*)(*(_QWORD*)(v13 + 112) + 268i64) & 0x4000000) == 0 || ((v68 - 91) & 0xFFFFFFF7) != 0)
		{
			if (!v87)
				goto LABEL_178;
			v78 = v96;
			v79 = v97;
			*(_DWORD*)(a1 + 26184) = 4;
			*(_DWORD*)(a1 + 26272) = v79;
			*(_DWORD*)(a1 + 26188) = v78;
			sub_14039E400(a1);
			if (*(_QWORD*)(a1 + 27880) || *(_DWORD*)(*(_QWORD*)(v13 + 112) + 124i64) != 4)
				goto LABEL_178;
			HIDWORD(a6) = v79;
		}
		else
		{
			HIDWORD(a6) = v97;
			v68 = 3;
		}
		*(_QWORD*)(a1 + 27880) = v13;
		LODWORD(a6) = 4;
		v80 = a6;
		DWORD2(v86) = 9;
		v85 = 0i64;
		*(_QWORD*)(a1 + 27888) = 0i64;
		*(_QWORD*)(a1 + 27896) = v80;
		*(_QWORD*)(a1 + 27904) = *((_QWORD*)&v86 + 1);
	LABEL_178:
		sub_1403B5250(v68);
		sub_1400035B0();
		return v68;
	}
	if (a3)
	{
		v35 = *(_QWORD*)(a3 + 8);
		LODWORD(a6) = 182;
		*(_DWORD*)(a3 + 16) = 182;
		*(_DWORD*)(a3 + 24) = 1;
		if (v35)
		{
			v36 = *(int**)a3;
			while (*v36 != 182)
			{
				if (*v36 <= 182)
				{
					++v7;
					++v36;
					if (v7 < v35)
						continue;
				}
				goto LABEL_65;
			}
		}
		else
		{
		LABEL_65:
			sub_1401C2E70((__int64*)a3, v7, (int*)&a6);
		}
	}
	return 182i64;
}
// 14039A52B: variable 'v39' is possibly undefined
// 14039A5B0: variable 'v46' is possibly undefined
// 14039A835: variable 'v63' is possibly undefined
// 1403988D0: using guessed type __int64 __fastcall sub_1403988D0(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, __int64);
// 14039EA90: using guessed type __int64 __fastcall sub_14039EA90();
// 14055BDC0: using guessed type __int64 __fastcall sub_14055BDC0(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 140C45E80: using guessed type int dword_140C45E80;
// 140C45E90: using guessed type int dword_140C45E90;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140DC21A4: using guessed type int dword_140DC21A4;
// 140DC21A8: using guessed type int dword_140DC21A8;

