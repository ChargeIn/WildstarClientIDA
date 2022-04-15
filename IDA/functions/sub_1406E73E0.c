#include "../winhttp.h"

//----- (00000001406E73E0) ----------------------------------------------------
__int64 __fastcall sub_1406E73E0(__int64 a1, int a2, unsigned int* a3)
{
	__int64 v3; // r12
	int* v5; // r14
	unsigned __int64 v6; // rax
	int v7; // ebx
	__m128i v8; // xmm2
	__m128 v9; // xmm0
	__m128 v10; // xmm2
	unsigned __int64 v11; // rcx
	__int64** v12; // rsi
	int v13; // eax
	__int64 v14; // rax
	__int64 v15; // rdx
	__m128i* v16; // r8
	int v17; // ebx
	__int64* v18; // r9
	__int64 v19; // rax
	int v20; // r8d
	unsigned __int8 v21; // dl
	int v22; // r8d
	int v23; // r9d
	__int64* v24; // r10
	__int64 v25; // rax
	int v26; // r8d
	unsigned __int8 v27; // dl
	int v28; // r8d
	int v29; // edx
	__int64* v30; // rax
	__int64* v31; // rax
	__int64* v32; // rax
	__int64* v33; // rax
	__int64* v34; // rax
	__int64* v35; // rax
	__int64 v36; // r13
	__int64* v37; // r15
	__int64 v38; // r15
	unsigned __int64 v39; // r14
	_QWORD* v40; // rbx
	_QWORD* v41; // rdx
	__int64** v42; // rdx
	__int64 v43; // r9
	int v44; // eax
	int v45; // eax
	char* v46; // r9
	int v47; // eax
	char* v48; // rdx
	int v49; // r15d
	_DWORD* v50; // rcx
	__int64* v51; // rdx
	_DWORD* v52; // rbx
	__int64* v53; // r9
	int v54; // r8d
	__int64 v55; // rax
	unsigned __int8 v56; // dl
	int v57; // r8d
	int v58; // r9d
	__int64* v59; // r10
	__int64 v60; // rax
	int v61; // r8d
	unsigned __int8 v62; // dl
	int v63; // r8d
	__int64 v64; // rbx
	__int64 v65; // r14
	__int64* v66; // rax
	__int64* v67; // rdx
	__int64** v68; // rdx
	__int64 v69; // r9
	int v70; // eax
	unsigned int v71; // eax
	int v72; // ebx
	unsigned int v73; // r13d
	__int64 v74; // rax
	_DWORD*** v75; // r12
	__int64* v76; // r15
	__int64 v77; // r15
	unsigned __int64 v78; // r14
	_QWORD* v79; // rbx
	char* v80; // r9
	__int64 v81; // rax
	int v82; // r8d
	unsigned __int8 v83; // dl
	int v84; // r8d
	__int64 v85; // rbx
	__int64 v86; // r14
	_QWORD* v87; // rdx
	__int64 v88; // r9
	int v89; // eax
	_QWORD* v91; // rbx
	_DWORD* v92; // r8
	int v93; // eax
	int v94; // eax
	__int64 v95; // [rsp+28h] [rbp-E0h]
	__int64 v96; // [rsp+30h] [rbp-D8h]
	__int64 v97; // [rsp+38h] [rbp-D0h]
	__int64 v98[2]; // [rsp+48h] [rbp-C0h] BYREF
	int v99; // [rsp+58h] [rbp-B0h]
	__int64 v100; // [rsp+5Ch] [rbp-ACh]
	int v101; // [rsp+64h] [rbp-A4h]
	__int64 v102[2]; // [rsp+68h] [rbp-A0h] BYREF
	int v103; // [rsp+78h] [rbp-90h]
	__int64 v104; // [rsp+7Ch] [rbp-8Ch]
	int v105; // [rsp+84h] [rbp-84h]
	int v106[2]; // [rsp+88h] [rbp-80h] BYREF
	__int64 v107; // [rsp+90h] [rbp-78h]
	int v108; // [rsp+98h] [rbp-70h]
	__int64 v109; // [rsp+9Ch] [rbp-6Ch]
	int v110; // [rsp+A4h] [rbp-64h]
	__int64 v111; // [rsp+A8h] [rbp-60h]
	__int64 v112; // [rsp+B0h] [rbp-58h] BYREF
	_DWORD* v113; // [rsp+B8h] [rbp-50h] BYREF
	unsigned __int64 v114; // [rsp+C8h] [rbp-40h]
	__int64 v115; // [rsp+D0h] [rbp-38h]
	__int64 v116; // [rsp+D8h] [rbp-30h] BYREF
	char v117; // [rsp+E0h] [rbp-28h]
	__int64 v118; // [rsp+E8h] [rbp-20h]
	__int64 v119; // [rsp+F0h] [rbp-18h]
	__int64 v120; // [rsp+F8h] [rbp-10h]
	__int64 v121; // [rsp+100h] [rbp-8h]
	__int64 v122; // [rsp+108h] [rbp+0h]
	__int64 v123; // [rsp+110h] [rbp+8h]
	__int64 v124; // [rsp+118h] [rbp+10h]
	int v125; // [rsp+178h] [rbp+70h]
	int v126; // [rsp+178h] [rbp+70h]
	unsigned __int64 v129; // [rsp+190h] [rbp+88h]

	v3 = 0i64;
	v5 = (int*)a3;
	v6 = *(_QWORD*)(a1 + 2464);
	*(_DWORD*)(a1 + 1120) = 0;
	v7 = a2;
	v8 = _mm_cvtsi32_si128(0);
	v9 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 1136), (__m128) * (unsigned int*)(a1 + 1136), 0);
	v10 = _mm_sub_ps(
		_mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*a3), v8),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(a3[1]), v8))),
		*(__m128*)(a1 + 1104));
	v11 = 0i64;
	v129 = 0i64;
	v115 = *(unsigned __int128*)&_mm_div_ps(v10, v9) >> 64;
	v114 = v6;
	if (v6)
	{
		while (1)
		{
			v12 = *(__int64***)(*(_QWORD*)(a1 + 2456) + 8 * v11);
			v13 = sub_1400C3E20((__int64)(v12 + 9));
			if (*(_QWORD*)(a1 + 2688) && *(_DWORD*)(a1 + 2700))
			{
			LABEL_115:
				v5 = (int*)a3;
				return sub_1400D2550(a1, v7, v5);
			}
			if (v13 != 2)
			{
				if (v13 != 8)
					goto LABEL_114;
				if (*((_DWORD*)v12 + 16) <= 1u)
				{
					v14 = *(_QWORD*)(a1 + 2640);
					if (v12 == (__int64**)v14)
					{
						v15 = *(_QWORD*)(a1 + 32);
						v16 = *(__m128i**)(a1 + 8 * (*(int*)(v14 + 64) + 4i64 * *(int*)(v14 + 488)) + 1968);
						v116 = 0i64;
						v117 = 0;
						v118 = 0i64;
						v119 = 0i64;
						v120 = 0i64;
						v121 = 0i64;
						v122 = 0i64;
						v123 = 0i64;
						v124 = 0i64;
						sub_14010B330(&v116, v15, v16, L"PrimalMatrixNode");
						sub_1400C3880(*(_QWORD*)(a1 + 2640) + 72i64, (__int64)&v116, 0, 0, 0);
						*(_BYTE*)(*(_QWORD*)(a1 + 2640) + 484i64) |= 1u;
						*(_BYTE*)(*(_QWORD*)(a1 + 2640) + 484i64) &= ~0x40u;
						*(_QWORD*)(a1 + 2656) = 0i64;
						*(_QWORD*)(a1 + 2640) = 0i64;
					}
				}
			}
			if (*((_DWORD*)v12 + 16) == 1)
			{
				if (!v7)
				{
					if (sub_1406E4E00((_DWORD*)a1, v12))
					{
						v72 = 1;
						v73 = 0;
						v74 = -544i64 - (_QWORD)v12;
						v126 = 1;
						v75 = (_DWORD***)(v12 + 68);
						v111 = -544i64 - (_QWORD)v12;
						do
						{
							v76 = *(__int64**)((char*)*v12 + (_QWORD)v75 + v74 + 8);
							if (v76)
							{
								v77 = *v76;
								v78 = (*(__int64(__fastcall**)(__int64))(a1 + 2440))(v77);
								v79 = *(_QWORD**)(*(_QWORD*)(a1 + 2432) + 8 * (v78 % *(_QWORD*)(a1 + 2424)));
								if (!v79)
									goto LABEL_97;
								while (v78 != *v79 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 2448))(v77, v79 + 2))
								{
									v79 = (_QWORD*)v79[1];
									if (!v79)
										goto LABEL_97;
								}
								v91 = v79 + 3;
								if (v91 && (v92 = (_DWORD*)*v91, *(_DWORD*)(*v91 + 64i64) > 1u))
								{
									v72 = 0;
									v93 = dword_140C53D00;
									v126 = 0;
									if (*(_DWORD*)qword_140C63750 < dword_140C53D00)
										v93 = *(_DWORD*)qword_140C63750;
									*((_DWORD*)*v75 + 9) = dword_140C53D10[v93] + dword_140C636A8;
									*((_DWORD*)*v75 + 7) = **v75 != v92;
									sub_140033260((__int64*)(a1 + 2680), &v12[v73 + 68]);
									v94 = dword_140C53D00;
									if (*(_DWORD*)qword_140C63750 < dword_140C53D00)
										v94 = *(_DWORD*)qword_140C63750;
									*(_DWORD*)(a1 + 2700) = dword_140C636A8 + dword_140C53D10[v94];
								}
								else
								{
								LABEL_97:
									v72 = v126;
								}
							}
							v74 = v111;
							++v73;
							++v75;
						} while (v73 < 6);
						v80 = (char*)*v12;
						v49 = *((unsigned __int8*)v12 + 68);
						v81 = **v12;
						v82 = v49 + 1;
						if (*(_DWORD*)(v81 + 20) < v49 + 1)
							v82 = *(_DWORD*)(v81 + 20);
						v83 = v82;
						if (v82 < *((unsigned __int8*)*v12 + 64))
							v83 = *((_BYTE*)*v12 + 64);
						*((_BYTE*)v12 + 68) = v83;
						v84 = v83 - v49;
						*(_DWORD*)(a1 + 2704) += v84 * *(_DWORD*)(*(_QWORD*)v80 + 24i64);
						*(_DWORD*)(a1 + 2708) += v84 * *(_DWORD*)(**v12 + 32);
						*(_DWORD*)(a1 + 2712) += v84 * *(_DWORD*)(**v12 + 28);
						*(_DWORD*)(a1 + 2716) += v84 * *(_DWORD*)(**v12 + 36);
						if (v72)
						{
							sub_1406E4FC0(a1, (__int64)v12);
							v85 = 0i64;
							v86 = 6i64;
							do
							{
								v87 = (_QWORD*)(*v12)[v85 + 1];
								if (v87)
									sub_1406E4F30(a1, v87);
								++v85;
								--v86;
							} while (v86);
						}
						v88 = *(_QWORD*)(a1 + 3800);
						if (v88 && !*(_DWORD*)(a1 + 3824))
						{
							*(_DWORD*)(a1 + 3824) = 1;
							v89 = *(_DWORD*)**v12;
							v98[1] = 1065353216i64;
							v100 = 2i64;
							v98[0] = (unsigned int)dword_140B3FC00[v89 & 3];
							v99 = 0;
							v101 = 0;
							(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v88 + 584i64))(v88, 0i64, v98);
						}
						v46 = "iii";
						v47 = *(_DWORD*)**v12;
						v48 = "NodeAllocationChanged";
					LABEL_112:
						LODWORD(v97) = *((unsigned __int8*)v12 + 68);
						LODWORD(v96) = v49;
					LABEL_113:
						LODWORD(v95) = v47;
						sub_1400D4040(a1, v48, (char*)a1, v46, v95, v96, v97);
						goto LABEL_114;
					}
					LODWORD(v95) = *(_DWORD*)**v12;
					sub_1400D4040(a1, "CantAffordNodeAllocation", (char*)a1, L"i", v95);
				}
			}
			else
			{
				if (*((_DWORD*)v12 + 16) != 2)
				{
					if (*((_DWORD*)v12 + 16) != 3 || !v7)
						goto LABEL_114;
					v17 = *((unsigned __int8*)v12 + 68);
					v18 = *v12;
					v19 = **v12;
					v20 = v17 - 1;
					v125 = v17;
					if (*(_DWORD*)(v19 + 20) < v17 - 1)
						v20 = *(_DWORD*)(v19 + 20);
					v21 = v20;
					if (v20 < *((unsigned __int8*)*v12 + 64))
						v21 = *((_BYTE*)*v12 + 64);
					*((_BYTE*)v12 + 68) = v21;
					v22 = v21 - v17;
					*(_DWORD*)(a1 + 2704) += v22 * *(_DWORD*)(*v18 + 24);
					*(_DWORD*)(a1 + 2708) += v22 * *(_DWORD*)(**v12 + 32);
					*(_DWORD*)(a1 + 2712) += v22 * *(_DWORD*)(**v12 + 28);
					*(_DWORD*)(a1 + 2716) += v22 * *(_DWORD*)(**v12 + 36);
					if (!(unsigned int)sub_1406E6800(a1, (__int64)v12))
					{
						v23 = *((unsigned __int8*)v12 + 68);
						v24 = *v12;
						v25 = **v12;
						v26 = v23 + 1;
						if (*(_DWORD*)(v25 + 20) < v23 + 1)
							v26 = *(_DWORD*)(v25 + 20);
						v27 = v26;
						if (v26 < *((unsigned __int8*)*v12 + 64))
							v27 = *((_BYTE*)*v12 + 64);
						*((_BYTE*)v12 + 68) = v27;
						v28 = v27 - v23;
						*(_DWORD*)(a1 + 2704) += v28 * *(_DWORD*)(*v24 + 24);
						*(_DWORD*)(a1 + 2708) += v28 * *(_DWORD*)(**v12 + 32);
						*(_DWORD*)(a1 + 2712) += v28 * *(_DWORD*)(**v12 + 28);
						*(_DWORD*)(a1 + 2716) += v28 * *(_DWORD*)(**v12 + 36);
						LODWORD(v95) = *(_DWORD*)**v12;
						sub_1400D4040(a1, "NodeDeallocationPrevented", (char*)a1, L"i", v95);
						goto LABEL_114;
					}
					sub_1406E4FC0(a1, (__int64)v12);
					v29 = *((unsigned __int8*)v12 + 68);
					if (v29 != *(_DWORD*)(**v12 + 20))
					{
						if (!(_BYTE)v29)
						{
							v30 = v12[68];
							if (v30)
								*((_DWORD*)v30 + 6) = 0;
							v31 = v12[69];
							if (v31)
								*((_DWORD*)v31 + 6) = 0;
							v32 = v12[70];
							if (v32)
								*((_DWORD*)v32 + 6) = 0;
							v33 = v12[71];
							if (v33)
								*((_DWORD*)v33 + 6) = 0;
							v34 = v12[72];
							if (v34)
								*((_DWORD*)v34 + 6) = 0;
							v35 = v12[73];
							if (v35)
								*((_DWORD*)v35 + 6) = 0;
							v36 = 6i64;
							do
							{
								v37 = (__int64*)(*v12)[v3 + 1];
								if (v37)
								{
									v38 = *v37;
									v39 = (*(__int64(__fastcall**)(__int64))(a1 + 2440))(v38);
									v40 = *(_QWORD**)(*(_QWORD*)(a1 + 2432) + 8 * (v39 % *(_QWORD*)(a1 + 2424)));
									if (v40)
									{
										while (v39 != *v40
											|| !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 2448))(v38, v40 + 2))
										{
											v40 = (_QWORD*)v40[1];
											if (!v40)
												goto LABEL_46;
										}
										if (v40 != (_QWORD*)-24i64)
											sub_1406E4FC0(a1, v40[3]);
									}
								}
							LABEL_46:
								++v3;
								--v36;
							} while (v36);
							v17 = v125;
						}
						v41 = (_QWORD*)(*v12)[7];
						if (v41)
							sub_1406E5110(a1, v41);
					}
					v42 = *(__int64***)(a1 + 2640);
					if (v42)
						sub_1406E66A0(a1, v42);
					v43 = *(_QWORD*)(a1 + 3800);
					if (v43 && !*(_DWORD*)(a1 + 3824))
					{
						*(_DWORD*)(a1 + 3824) = 1;
						v44 = *(_DWORD*)**v12;
						v106[1] = 0;
						v107 = 1065353216i64;
						v108 = 0;
						v109 = 2i64;
						v45 = dword_140B3FC00[v44 & 3];
						v110 = 0;
						v106[0] = v45;
						(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v43 + 584i64))(v43, 0i64, v106);
					}
					v46 = "iii";
					LODWORD(v97) = *((unsigned __int8*)v12 + 68);
					LODWORD(v96) = v17;
					v47 = *(_DWORD*)**v12;
					v48 = "NodeAllocationChanged";
					goto LABEL_113;
				}
				v49 = *((unsigned __int8*)v12 + 68);
				if (v7)
				{
					v53 = *v12;
					v54 = v49 - 1;
					v55 = **v12;
					if (*(_DWORD*)(v55 + 20) < v49 - 1)
						v54 = *(_DWORD*)(v55 + 20);
					v56 = v54;
					if (v54 < *((unsigned __int8*)*v12 + 64))
						v56 = *((_BYTE*)*v12 + 64);
					*((_BYTE*)v12 + 68) = v56;
					v57 = v56 - v49;
					*(_DWORD*)(a1 + 2704) += v57 * *(_DWORD*)(*v53 + 24);
					*(_DWORD*)(a1 + 2708) += v57 * *(_DWORD*)(**v12 + 32);
					*(_DWORD*)(a1 + 2712) += v57 * *(_DWORD*)(**v12 + 28);
					*(_DWORD*)(a1 + 2716) += v57 * *(_DWORD*)(**v12 + 36);
					if (!(unsigned int)sub_1406E6800(a1, (__int64)v12))
					{
						v58 = *((unsigned __int8*)v12 + 68);
						v59 = *v12;
						v60 = **v12;
						v61 = v58 + 1;
						if (*(_DWORD*)(v60 + 20) < v58 + 1)
							v61 = *(_DWORD*)(v60 + 20);
						v62 = v61;
						if (v61 < *((unsigned __int8*)*v12 + 64))
							v62 = *((_BYTE*)*v12 + 64);
						*((_BYTE*)v12 + 68) = v62;
						v63 = v62 - v58;
						*(_DWORD*)(a1 + 2704) += v63 * *(_DWORD*)(*v59 + 24);
						*(_DWORD*)(a1 + 2708) += v63 * *(_DWORD*)(**v12 + 32);
						*(_DWORD*)(a1 + 2712) += v63 * *(_DWORD*)(**v12 + 28);
						*(_DWORD*)(a1 + 2716) += v63 * *(_DWORD*)(**v12 + 36);
						LODWORD(v95) = *(_DWORD*)**v12;
						sub_1400D4040(a1, "NodeDeallocationPrevented", (char*)a1, "i", v95);
						goto LABEL_114;
					}
					sub_1406E4FC0(a1, (__int64)v12);
					if (!*((_BYTE*)v12 + 68))
					{
						v64 = 0i64;
						v65 = 6i64;
						do
						{
							v66 = v12[v64 + 68];
							if (v66)
								*((_DWORD*)v66 + 6) = 0;
							v67 = (__int64*)(*v12)[v64 + 1];
							if (v67 && (unsigned int)sub_1402DD480(a1 + 2416, *v67, &v112))
								sub_1406E4FC0(a1, v112);
							++v64;
							--v65;
						} while (v65);
					}
					goto LABEL_82;
				}
				if (sub_1406E4E00((_DWORD*)a1, v12))
				{
					sub_1406E4E90(v50, (unsigned __int8*)v12, 1);
					sub_1406E4FC0(a1, (__int64)v12);
					v51 = (__int64*)(*v12)[7];
					if (v51)
					{
						if (*((_DWORD*)v12 + 16) == 3)
						{
							if ((unsigned int)sub_1402DD480(a1 + 2512, *v51, &v113))
							{
								v52 = v113;
								sub_1406E51A0(a1, v113);
								if (v52[16] == 2)
									sub_14010B100((unsigned int*)(a1 + 2760));
							}
						}
					}
				LABEL_82:
					v68 = *(__int64***)(a1 + 2640);
					if (v68)
						sub_1406E66A0(a1, v68);
					v69 = *(_QWORD*)(a1 + 3800);
					if (v69 && !*(_DWORD*)(a1 + 3824))
					{
						*(_DWORD*)(a1 + 3824) = 1;
						v70 = *(_DWORD*)**v12;
						v102[1] = 1065353216i64;
						v103 = 0;
						v104 = 2i64;
						v71 = dword_140B3FC00[v70 & 3];
						v105 = 0;
						v102[0] = v71;
						(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v69 + 584i64))(v69, 0i64, v102);
					}
					v46 = "iii";
					v47 = *(_DWORD*)**v12;
					v48 = "NodeAllocationChanged";
					goto LABEL_112;
				}
				LODWORD(v95) = *(_DWORD*)**v12;
				sub_1400D4040(a1, "CantAffordNodeAllocation", (char*)a1, "i", v95);
			}
		LABEL_114:
			v7 = a2;
			v3 = 0i64;
			v11 = v129 + 1;
			v129 = v11;
			if (v11 >= v114)
				goto LABEL_115;
		}
	}
	return sub_1400D2550(a1, v7, v5);
}
// 1406E76BD: variable 'v95' is possibly undefined
// 1406E78D4: variable 'v50' is possibly undefined
// 1406E7DAA: variable 'v96' is possibly undefined
// 1406E7DAA: variable 'v97' is possibly undefined
// 1409F7D74: using guessed type wchar_t aI_21[2];
// 1409F7DBC: using guessed type wchar_t aI_18[2];
// 140B3EA68: using guessed type wchar_t aPrimalmatrixno_4[17];
// 140B3FC00: using guessed type int dword_140B3FC00[4];
// 140C53D00: using guessed type int dword_140C53D00;
// 140C53D10: using guessed type int dword_140C53D10[14];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;

