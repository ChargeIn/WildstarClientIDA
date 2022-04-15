#include "../winhttp.h"

//----- (000000014027A1A0) ----------------------------------------------------
__int64 __fastcall sub_14027A1A0(__int64 a1, const __m128i* a2, int* a3)
{
	const __m128i* v6; // rax
	__int64 v7; // rbx
	int v9; // r14d
	__int64 v10; // r12
	__int64* v11; // rcx
	__int64 v12; // rsi
	int v13; // eax
	int v14; // edi
	int v15; // r14d
	int v16; // r14d
	int v17; // r14d
	int v18; // r14d
	__int64* v19; // rax
	__int64 v20; // rax
	int v21; // eax
	__int64 v22; // rcx
	__int64 v23; // r8
	int* v24; // rbx
	__int64 v25; // rax
	int* v26; // rbx
	int v27; // esi
	unsigned int v28; // r12d
	int v29; // r14d
	__int64 v30; // rcx
	__int64 v31; // rax
	__int64 v32; // rcx
	__int64 v33; // rax
	int v34; // eax
	int* v35; // rdi
	unsigned __int64 v36; // rsi
	int* v37; // rax
	_OWORD* v38; // rax
	__int128 v39; // xmm1
	__int128 v40; // xmm0
	__int128 v41; // xmm1
	__int128 v42; // xmm0
	__int128 v43; // xmm1
	__int128 v44; // xmm0
	__int64 v45; // rax
	unsigned int v46; // r11d
	int* v47; // r13
	__int64 v48; // rcx
	_DWORD* v49; // rsi
	_DWORD* v50; // r12
	int v51; // edx
	int v52; // ecx
	unsigned int v53; // edx
	int v54; // ecx
	int v55; // eax
	int v56; // edx
	unsigned int v57; // eax
	int v58; // ecx
	unsigned int v59; // r12d
	unsigned int v60; // eax
	int v61; // edx
	unsigned int v62; // r14d
	int v63; // ecx
	int v64; // eax
	__int64 v65; // rcx
	__int64 v66; // r8
	int* v67; // [rsp+38h] [rbp-D0h] BYREF
	__int64 v68; // [rsp+40h] [rbp-C8h] BYREF
	__int64 v69; // [rsp+48h] [rbp-C0h] BYREF
	__int64 v70; // [rsp+50h] [rbp-B8h]
	unsigned int v71; // [rsp+58h] [rbp-B0h]
	unsigned int v72; // [rsp+5Ch] [rbp-ACh]
	int v73; // [rsp+60h] [rbp-A8h]
	unsigned int v74; // [rsp+64h] [rbp-A4h]
	int* v75; // [rsp+68h] [rbp-A0h] BYREF
	unsigned int v76; // [rsp+70h] [rbp-98h]
	int v77; // [rsp+74h] [rbp-94h] BYREF
	unsigned int v78; // [rsp+78h] [rbp-90h]
	unsigned int v79; // [rsp+80h] [rbp-88h] BYREF
	unsigned int v80; // [rsp+84h] [rbp-84h]
	unsigned int v81; // [rsp+88h] [rbp-80h]
	int v82; // [rsp+8Ch] [rbp-7Ch]
	unsigned int v83[4]; // [rsp+90h] [rbp-78h] BYREF
	_DWORD* v84; // [rsp+A0h] [rbp-68h]
	int* v85; // [rsp+A8h] [rbp-60h] BYREF
	unsigned int v86; // [rsp+B0h] [rbp-58h]
	unsigned int v87; // [rsp+B4h] [rbp-54h]
	const __m128i* v88; // [rsp+B8h] [rbp-50h]
	_DWORD* i; // [rsp+C0h] [rbp-48h]
	__int128 v90; // [rsp+C8h] [rbp-40h] BYREF
	__int128 v91; // [rsp+D8h] [rbp-30h]
	__int128 v92; // [rsp+E8h] [rbp-20h]
	__int128 v93; // [rsp+F8h] [rbp-10h]
	__int128 v94; // [rsp+108h] [rbp+0h]
	__int128 v95; // [rsp+118h] [rbp+10h]
	__int128 v96; // [rsp+128h] [rbp+20h]
	__int64 v97; // [rsp+138h] [rbp+30h] BYREF
	__int64 v98; // [rsp+140h] [rbp+38h]
	__m256i v99; // [rsp+148h] [rbp+40h]
	__int64 v100; // [rsp+168h] [rbp+60h]

	v88 = a2;
	if (!a2 || !a2->m128i_i16[0] || !a3)
		return 2147942487i64;
	v6 = sub_1407DD8D8(a2, 0x2Eu);
	v7 = (__int64)v6;
	if (!v6)
		return 2147500037i64;
	if ((unsigned int)sub_14018E2C0((__int64)v6, L".tex"))
	{
		if ((unsigned int)sub_14018E2C0(v7, L".tga"))
		{
			if ((unsigned int)sub_14018E2C0(v7, L".dds"))
			{
				if ((unsigned int)sub_14018E2C0(v7, L".png"))
				{
					if ((unsigned int)sub_14018E2C0(v7, L".bmp"))
					{
						if ((unsigned int)sub_14018E2C0(v7, L".jpg") && (unsigned int)sub_14018E2C0(v7, L".jpeg"))
							return 2147500037i64;
						v9 = 5;
					}
					else
					{
						v9 = 4;
					}
				}
				else
				{
					v9 = 3;
				}
			}
			else
			{
				v9 = 2;
			}
		}
		else
		{
			v9 = 1;
		}
		v69 = 0i64;
		v10 = 0i64;
		v70 = 0i64;
		sub_14003D8F0((__int64*)&v67, a1 + 6368);
		v11 = *(__int64**)(a1 + 6336);
		v90 = 0ui64;
		v12 = 0i64;
		*((_QWORD*)&v94 + 1) = 0i64;
		*(_QWORD*)&v95 = 0i64;
		if (!v11)
		{
			v14 = -2147024809;
			goto LABEL_53;
		}
		v13 = sub_1402B40B0(v11, *(__int64**)(a1 + 6352), a3, &v90);
		v12 = *((_QWORD*)&v94 + 1);
		v14 = v13;
		if (v13 < 0)
		{
		LABEL_53:
			if (v12)
				sub_14018B900(v12, 0);
			if ((_QWORD)v95)
				sub_14018B900(v95, 0);
			sub_14003D880((__int64*)&v67);
		LABEL_58:
			if (v69)
				sub_14018B900(v69, 0);
			return (unsigned int)v14;
		}
		v15 = v9 - 1;
		if (v15)
		{
			v16 = v15 - 1;
			if (v16)
			{
				v17 = v16 - 1;
				if (v17)
				{
					v18 = v17 - 1;
					if (v18)
					{
						if (v18 != 1)
						{
						LABEL_40:
							if (v12)
								sub_14018B900(v12, 0);
							if ((_QWORD)v95)
								sub_14018B900(v95, 0);
							sub_14003D880((__int64*)&v67);
							v67 = 0i64;
							v21 = sub_1401C5810(v69, v10, &v67);
							v24 = v67;
							v14 = v21;
							if (v21 < 0 || (v14 = sub_1401B6F30(v22, a2, v23, (__int64)v67), v14 < 0))
							{
								if (v24)
									(*(void(__fastcall**)(int*))(*(_QWORD*)v24 + 8i64))(v24);
								goto LABEL_58;
							}
							if (v24)
								(*(void(__fastcall**)(int*))(*(_QWORD*)v24 + 8i64))(v24);
							if (v69)
							{
								sub_14018B900(v69, 0);
								return 0i64;
							}
							return 0i64;
						}
						v19 = sub_1402B2280(1);
						if (!*(_QWORD*)(v12 + 40))
						{
							v14 = -2147467261;
							goto LABEL_53;
						}
					}
					else
					{
						v19 = sub_1402B2280(0);
						if (!*(_QWORD*)(v12 + 40))
						{
							v14 = -2147467261;
							goto LABEL_53;
						}
					}
				}
				else
				{
					v19 = sub_1402B2280(2);
					if (!*(_QWORD*)(v12 + 40))
					{
						v14 = -2147467261;
						goto LABEL_53;
					}
				}
				v14 = sub_1402B7ED0((unsigned int*)v12, v19, &v69);
				if (v14 < 0)
					goto LABEL_53;
			}
			else
			{
				v100 = 0i64;
				v97 = 0i64;
				v98 = 0i64;
				*(_OWORD*)v99.m256i_i8 = 0ui64;
				v99.m256i_i64[3] = 0i64;
				v97 = **((_QWORD**)&v94 + 1);
				v20 = *(_QWORD*)(*((_QWORD*)&v94 + 1) + 8i64);
				v99.m256i_i64[0] = 1i64;
				v98 = v20;
				LODWORD(v20) = *(_DWORD*)(*((_QWORD*)&v94 + 1) + 16i64);
				*(_OWORD*)&v99.m256i_u64[1] = 1ui64;
				v99.m256i_i64[2] = 1i64;
				v100 = (unsigned int)v20 | 0x300000000i64;
				v14 = sub_1402B6EB0(*((__int64*)&v94 + 1), (__int64)&v97, (__int64)&v69);
				if (v14 < 0)
					goto LABEL_53;
			}
		}
		else
		{
			if (!*(_QWORD*)(*((_QWORD*)&v94 + 1) + 40i64))
			{
				v14 = -2147467261;
				goto LABEL_53;
			}
			v14 = sub_1402B5460(*((__int64*)&v94 + 1), (__int64)&v69);
			if (v14 < 0)
				goto LABEL_53;
		}
		v10 = v70;
		goto LABEL_40;
	}
	sub_1407E4830((int*)&v90, 0i64, 0x70ui64);
	v25 = *(_QWORD*)a3;
	v26 = 0i64;
	*(_QWORD*)&v90 = 0x300474658i64;
	LODWORD(v92) = 0;
	(*(void(__fastcall**)(int*, int*))(v25 + 56))(a3, &v77);
	v67 = 0i64;
	if (v77 == 3)
	{
		(*(void(__fastcall**)(int*, __int64*))(*(_QWORD*)a3 + 80i64))(a3, &v97);
		v28 = v98;
		v29 = HIDWORD(v98);
		v72 = v97;
		*((_QWORD*)&v90 + 1) = v97;
		*(_QWORD*)((char*)&v91 + 4) = __PAIR64__(v98, HIDWORD(v98));
		v71 = HIDWORD(v97);
		v73 = v98;
		v74 = 1;
		LODWORD(v91) = 1;
		HIDWORD(v91) = sub_14027A000(v99.m256i_i32[0]);
		if (v99.m256i_i32[3] != 3)
		{
			v32 = *(_QWORD*)(a1 + 6336);
			*(__int64*)((char*)&v99.m256i_i64[1] + 4) = 3i64;
			*(__int64*)((char*)&v99.m256i_i64[2] + 4) = 0x20000i64;
			v27 = (*(__int64(__fastcall**)(__int64, __int64*, _QWORD, int**))(*(_QWORD*)v32 + 40i64))(
				v32,
				&v97,
				0i64,
				&v67);
			if (v27 < 0)
			{
				v31 = 0x141DE2CB0i64;
				goto LABEL_70;
			}
			goto LABEL_71;
		}
	LABEL_73:
		if (v67 != a3)
		{
			(*(void(__fastcall**)(int*))(*(_QWORD*)a3 + 8i64))(a3);
			v67 = a3;
		}
		goto LABEL_75;
	}
	if (v77 == 4)
	{
		(*(void(__fastcall**)(int*, __int64*))(*(_QWORD*)a3 + 80i64))(a3, &v97);
		v28 = HIDWORD(v98);
		v72 = v97;
		*((_QWORD*)&v90 + 1) = v97;
		v29 = 1;
		v73 = HIDWORD(v98);
		v71 = HIDWORD(v97);
		DWORD2(v91) = HIDWORD(v98);
		v74 = v98;
		*(_QWORD*)&v91 = (unsigned int)v98 | 0x100000000i64;
		HIDWORD(v91) = sub_14027A000(v99.m256i_i32[0]);
		if (v99.m256i_i32[1] != 3)
		{
			v30 = *(_QWORD*)(a1 + 6336);
			*(__int64*)((char*)v99.m256i_i64 + 4) = 3i64;
			*(__int64*)((char*)&v99.m256i_i64[1] + 4) = 0x20000i64;
			v27 = (*(__int64(__fastcall**)(__int64, __int64*, _QWORD, int**))(*(_QWORD*)v30 + 48i64))(
				v30,
				&v97,
				0i64,
				&v67);
			if (v27 < 0)
			{
				v31 = 0x141DE2C18i64;
			LABEL_70:
				v68 = v31;
				sub_1401A3130(14, 2, &v68, (unsigned int)v27);
			LABEL_89:
				v26 = v67;
				goto LABEL_90;
			}
		LABEL_71:
			if (v67 != a3)
			{
				sub_14003D8F0(&v68, a1 + 6368);
				(*(void(__fastcall**)(_QWORD, int*, int*))(**(_QWORD**)(a1 + 6352) + 376i64))(
					*(_QWORD*)(a1 + 6352),
					v67,
					a3);
				sub_14003D880(&v68);
			}
		LABEL_75:
			v33 = sub_14029BDC0(&v90);
			v75 = 0i64;
			v34 = sub_1401C5690(v33, &v75, 0);
			v35 = v75;
			v27 = v34;
			if (v34 >= 0)
			{
				v36 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v75 + 16i64))(v75);
				v37 = (int*)(*(__int64(__fastcall**)(int*))(*(_QWORD*)v35 + 32i64))(v35);
				sub_1407E4830(v37, 0i64, v36);
				v38 = (_OWORD*)(*(__int64(__fastcall**)(int*))(*(_QWORD*)v35 + 32i64))(v35);
				v39 = v91;
				*v38 = v90;
				v40 = v92;
				v38[1] = v39;
				v41 = v93;
				v38[2] = v40;
				v42 = v94;
				v38[3] = v41;
				v43 = v95;
				v38[4] = v42;
				v44 = v96;
				v38[5] = v43;
				v38[6] = v44;
				sub_14003D8F0(&v68, a1 + 6368);
				v45 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v35 + 32i64))(v35);
				v46 = v28;
				v47 = (int*)(v45 + 112);
				if (v28)
				{
					v82 = HIDWORD(v91);
					v48 = 44i64 * SHIDWORD(v91);
					v49 = (_DWORD*)((char*)&unk_140AE5200 + v48);
					v50 = (_DWORD*)((char*)&unk_140AE5200 + v48 + 36);
					v84 = (_DWORD*)((char*)&unk_140AE5200 + v48);
					for (i = v50; ; v50 = i)
					{
						v51 = v49[1];
						LODWORD(v75) = --v46;
						v52 = v49[2];
						v79 = (v72 >> v46 == 0) + (v72 >> v46);
						v53 = (v79 + v51) >> v52;
						v54 = v49[5];
						v55 = v49[4];
						v80 = (v71 >> v46 == 0) + (v71 >> v46);
						v78 = (v74 >> v46 == 0) + (v74 >> v46);
						v56 = *v50 * v53 + 3;
						v81 = v78;
						v57 = (v80 + v55) >> v54;
						v58 = v49[8];
						LODWORD(v69) = v56 & 0xFFFFFFFC;
						v59 = 0;
						v60 = (v56 & 0xFFFFFFFC) * v57;
						v61 = v49[7];
						HIDWORD(v69) = v60;
						v76 = v60 * ((v78 + v61) >> v58);
						LODWORD(v70) = v76;
						if (v29)
							break;
					LABEL_83:
						if (!v46)
							goto LABEL_86;
					}
					v62 = v46;
					while (1)
					{
						v27 = (*(__int64(__fastcall**)(_QWORD, int*, _QWORD, __int64, _DWORD, int**))(**(_QWORD**)(a1 + 6352)
							+ 112i64))(
								*(_QWORD*)(a1 + 6352),
								v67,
								v62,
								1i64,
								0,
								&v85);
						if (v27 < 0)
							break;
						v49 = v84;
						v63 = v84[8];
						v83[0] = v86;
						v64 = v84[7];
						v83[1] = v87;
						v83[2] = v87 * ((v78 + v64) >> v63);
						sub_1402645D0(v47, (int*)&v79, (unsigned int*)&v69, v85, &v79, v83);
						(*(void(__fastcall**)(_QWORD, int*, _QWORD))(**(_QWORD**)(a1 + 6352) + 120i64))(
							*(_QWORD*)(a1 + 6352),
							v67,
							v62);
						v62 += v73;
						++v59;
						v47 = (int*)((char*)v47 + v76);
						if (v59 >= DWORD1(v91))
						{
							v29 = DWORD1(v91);
							v46 = (unsigned int)v75;
							goto LABEL_83;
						}
					}
					sub_14003D880(&v68);
				}
				else
				{
				LABEL_86:
					sub_14003D880(&v68);
					v27 = sub_1401B6F30(v65, v88, v66, (__int64)v35);
					if (v27 >= 0)
					{
						(*(void(__fastcall**)(int*))(*(_QWORD*)v35 + 8i64))(v35);
						if (v67)
							(*(void(__fastcall**)(int*))(*(_QWORD*)v67 + 16i64))(v67);
						return 0i64;
					}
				}
			}
			if (v35)
				(*(void(__fastcall**)(int*))(*(_QWORD*)v35 + 8i64))(v35);
			goto LABEL_89;
		}
		goto LABEL_73;
	}
	v27 = -2147467259;
LABEL_90:
	if (v26)
		(*(void(__fastcall**)(int*))(*(_QWORD*)v26 + 16i64))(v26);
	return (unsigned int)v27;
}
// 14027A766: conditional instruction was optimized away because %var_170.8==0
// 14027A4EB: variable 'v22' is possibly undefined
// 14027A4EB: variable 'v23' is possibly undefined
// 14027A9EF: variable 'v65' is possibly undefined
// 14027A9EF: variable 'v66' is possibly undefined
// 140AE84C0: using guessed type wchar_t aDds_0[5];
// 140AE84D0: using guessed type wchar_t aTga_1[5];
// 140AE84E0: using guessed type wchar_t aTex_4[5];
// 140AE8688: using guessed type wchar_t aJpeg[6];
// 140AE8698: using guessed type wchar_t aJpg_0[5];
// 140AE86A8: using guessed type wchar_t aBmp_1[5];
// 140AE86B8: using guessed type wchar_t aPng_1[5];

