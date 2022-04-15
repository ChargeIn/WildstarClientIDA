//----- (0000000140426BC0) ----------------------------------------------------
void __fastcall sub_140426BC0(__int64 a1, int a2, __int64 a3, __int64 a4, _DWORD* a5, __int64 a6, unsigned int a7)
{
	__int64 v7; // rdi
	__int64 v8; // r10
	unsigned __int64 v9; // rax
	__int64 v12; // rbx
	__int64 v13; // rax
	unsigned int v14; // ebx
	_DWORD* v15; // r11
	__int64 v16; // r13
	unsigned int* v17; // r14
	_QWORD* v18; // rdx
	unsigned __int64 v19; // r8
	unsigned __int64 v20; // rsi
	unsigned __int64 v21; // rcx
	__int64 v22; // rcx
	__int64 v23; // rcx
	unsigned __int64 v24; // rax
	__int64 v25; // rbx
	__int64 v26; // rax
	int v27; // r12d
	__int64 v28; // rcx
	_QWORD* v29; // rax
	__int64 v30; // rdx
	unsigned __int64* v31; // r15
	unsigned __int64 v32; // r14
	__int64 v33; // rbx
	__int64 v34; // rax
	__int64 v35; // rcx
	__int64 v36; // rcx
	__int64* v37; // rax
	_QWORD* v38; // rax
	__int64 v39; // r10
	unsigned __int64* v40; // r14
	unsigned __int64 v41; // rsi
	__int64 v42; // rbx
	__int64 v43; // rax
	__int64 v44; // rcx
	__int64 v45; // rax
	__int64* v46; // rax
	_DWORD* v47; // rsi
	int v48; // r15d
	_QWORD* v49; // rax
	__int64 v50; // r10
	unsigned __int64* v51; // r14
	unsigned __int64 v52; // rsi
	__int64 v53; // rbx
	__int64 v54; // rax
	__int64 v55; // rcx
	_DWORD* v56; // rcx
	__int64* v57; // rax
	int v58; // r15d
	_QWORD* v59; // rax
	__int64 v60; // r10
	unsigned __int64* v61; // r14
	unsigned __int64 v62; // rsi
	__int64 v63; // rbx
	__int64 v64; // rax
	__int64 v65; // rcx
	_DWORD* v66; // rcx
	__int64* v67; // rax
	int v68; // r15d
	_QWORD* v69; // rax
	__int64 v70; // r10
	unsigned __int64* v71; // r14
	unsigned __int64 v72; // rsi
	__int64 v73; // rbx
	__int64 v74; // rax
	__int64 v75; // rcx
	_DWORD* v76; // rcx
	__int64* v77; // rax
	__int64 v78; // rcx
	int v79; // eax
	__int64 v80; // rcx
	__int64 v81; // rax
	__int64 v82; // rcx
	__int64 v83; // rbx
	unsigned int v84; // r8d
	__int64 v85; // rdx
	__int64 v86; // rcx
	unsigned int v87; // r8d
	__int64 v88; // rsi
	__int64 v89; // rdx
	unsigned __int64 v90; // rcx
	__int64 v91; // rbx
	__int64 v92; // rax
	int v93; // ebx
	int v94; // eax
	__int64 v95; // rdx
	int v96; // r8d
	int v97; // esi
	__int64 v98; // rdx
	unsigned int v99; // [rsp+48h] [rbp-C0h]
	unsigned int* v100; // [rsp+50h] [rbp-B8h]
	__int64 v101; // [rsp+58h] [rbp-B0h] BYREF
	__int64 v102; // [rsp+60h] [rbp-A8h] BYREF
	__int64 v103; // [rsp+68h] [rbp-A0h]
	__int64(__fastcall * *v104)(); // [rsp+80h] [rbp-88h] BYREF
	unsigned int v105; // [rsp+88h] [rbp-80h]
	__int64 v106; // [rsp+90h] [rbp-78h]
	int v107; // [rsp+98h] [rbp-70h]
	__int64(__fastcall * *v108)(); // [rsp+A0h] [rbp-68h] BYREF
	int v109; // [rsp+A8h] [rbp-60h]
	__int64 v110; // [rsp+B0h] [rbp-58h]
	int v111; // [rsp+B8h] [rbp-50h]
	__int64(__fastcall * *v112)(); // [rsp+C0h] [rbp-48h] BYREF
	int v113; // [rsp+C8h] [rbp-40h]
	__int64 v114; // [rsp+D0h] [rbp-38h]
	int v115; // [rsp+D8h] [rbp-30h]
	__m128 v116; // [rsp+E8h] [rbp-20h] BYREF
	__m128 v117; // [rsp+F8h] [rbp-10h] BYREF
	char v118[8]; // [rsp+108h] [rbp+0h] BYREF
	int v119; // [rsp+110h] [rbp+8h]
	__int64 v120; // [rsp+118h] [rbp+10h]
	__int64 v124; // [rsp+190h] [rbp+88h]

	v7 = *(_QWORD*)(a1 + 400);
	v8 = *(_QWORD*)(v7 + 32);
	v9 = *(_QWORD*)(v8 + 112);
	v104 = off_140B569F0;
	v106 = v7;
	v107 = 1;
	if (*(_QWORD*)(v8 + 120) >= v9)
		sub_14005E2C0(v7);
	v12 = *(_QWORD*)(v7 + 16);
	v13 = sub_14005C1B0(v7, 0, 0);
	*(_DWORD*)(v12 + 8) = 5;
	*(_QWORD*)v12 = v13;
	*(_QWORD*)(v7 + 16) += 16i64;
	v14 = sub_1400578C0(v7);
	v105 = v14;
	v99 = 0;
	if (a7)
	{
		v15 = a5;
		v16 = a3;
		v124 = a6 - (_QWORD)a5;
		v17 = (unsigned int*)(a4 + 8);
		v100 = (unsigned int*)(a4 + 8);
		do
		{
			v18 = *(_QWORD**)(qword_140C65898 + 27728);
			if (v18 && (v19 = v18[12], v20 = 0i64, v19))
			{
				while (1)
				{
					v21 = v20;
					if (v20 >= v19)
					{
						v22 = 0i64;
					}
					else if (v20)
					{
						if (v20 <= v18[13])
							v21 = v20 - 1;
						v22 = *(_QWORD*)(v18[11] + 8 * v21);
					}
					else
					{
						v22 = *(_QWORD*)(v18[11] + 8i64 * v18[13]);
					}
					if (*(_DWORD*)(v22 + 16) == *(_DWORD*)v16 && *(_QWORD*)(v22 + 24) == *(_QWORD*)(v16 + 8))
						break;
					if (++v20 >= v19)
						goto LABEL_17;
				}
			}
			else
			{
			LABEL_17:
				v20 = -1i64;
			}
			if (v18 && v20 < v18[12])
			{
				v23 = *(_QWORD*)(v7 + 32);
				v108 = off_140B569F0;
				v110 = v7;
				v24 = *(_QWORD*)(v23 + 112);
				v111 = 1;
				if (*(_QWORD*)(v23 + 120) >= v24)
					sub_14005E2C0(v7);
				v25 = *(_QWORD*)(v7 + 16);
				v26 = sub_14005C1B0(v7, 0, 0);
				*(_DWORD*)(v25 + 8) = 5;
				*(_QWORD*)v25 = v26;
				*(_QWORD*)(v7 + 16) += 16i64;
				v27 = sub_1400578C0(v7);
				v28 = *(_QWORD*)(*(_QWORD*)(v7 + 32) + 160i64);
				v109 = v27;
				v29 = sub_14005C3C0(v28, v27);
				v30 = *(_QWORD*)(v7 + 16);
				*(_QWORD*)v30 = *v29;
				*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
				*(_QWORD*)(v7 + 16) += 16i64;
				v31 = (unsigned __int64*)sub_14018F0E0(&v102, L"nIndex")[1];
				if (v31)
				{
					v32 = -1i64;
					do
						++v32;
					while (*((_BYTE*)v31 + v32));
					if (*(_QWORD*)(*(_QWORD*)(v7 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v7 + 32) + 112i64))
						sub_14005E2C0(v7);
					v33 = *(_QWORD*)(v7 + 16);
					v34 = sub_140062650(v7, v31, v32);
					*(_DWORD*)(v33 + 8) = 4;
					*(_QWORD*)v33 = v34;
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v7 + 16) + 8i64) = 0;
				}
				v35 = v103;
				*(_QWORD*)(v7 + 16) += 16i64;
				if (v35)
					sub_14018B900(v35, 0);
				v36 = *(_QWORD*)(v7 + 16);
				*(_DWORD*)(v36 + 8) = 3;
				*(double*)v36 = (double)((int)v20 + 1);
				*(_QWORD*)(v7 + 16) += 16i64;
				v37 = (__int64*)sub_1400580E0(v7, -3);
				sub_14005EA50(v7, v37, (int*)(*(_QWORD*)(v7 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v7 + 16) - 16i64));
				*(_QWORD*)(v7 + 16) -= 48i64;
				v38 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v7 + 32) + 160i64), v27);
				*(_QWORD*)v39 = *v38;
				*(_DWORD*)(v39 + 8) = *((_DWORD*)v38 + 2);
				*(_QWORD*)(v7 + 16) += 16i64;
				v40 = (unsigned __int64*)sub_14018F0E0(&v102, L"idWorld")[1];
				if (v40)
				{
					v41 = -1i64;
					do
						++v41;
					while (*((_BYTE*)v40 + v41));
					if (*(_QWORD*)(*(_QWORD*)(v7 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v7 + 32) + 112i64))
						sub_14005E2C0(v7);
					v42 = *(_QWORD*)(v7 + 16);
					v43 = sub_140062650(v7, v40, v41);
					*(_DWORD*)(v42 + 8) = 4;
					*(_QWORD*)v42 = v43;
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v7 + 16) + 8i64) = 0;
				}
				v44 = v103;
				*(_QWORD*)(v7 + 16) += 16i64;
				if (v44)
					sub_14018B900(v44, 0);
				v45 = *(_QWORD*)(v7 + 16);
				*(_DWORD*)(v45 + 8) = 3;
				*(double*)v45 = (double)a2;
				*(_QWORD*)(v7 + 16) += 16i64;
				v46 = (__int64*)sub_1400580E0(v7, -3);
				sub_14005EA50(v7, v46, (int*)(*(_QWORD*)(v7 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v7 + 16) - 16i64));
				*(_QWORD*)(v7 + 16) -= 48i64;
				v47 = a5;
				v48 = *a5 & 1;
				v49 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v7 + 32) + 160i64), v27);
				*(_QWORD*)v50 = *v49;
				*(_DWORD*)(v50 + 8) = *((_DWORD*)v49 + 2);
				*(_QWORD*)(v7 + 16) += 16i64;
				v51 = (unsigned __int64*)sub_14018F0E0(&v102, L"bInCombatPvp")[1];
				if (v51)
				{
					v52 = -1i64;
					do
						++v52;
					while (*((_BYTE*)v51 + v52));
					if (*(_QWORD*)(*(_QWORD*)(v7 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v7 + 32) + 112i64))
						sub_14005E2C0(v7);
					v53 = *(_QWORD*)(v7 + 16);
					v54 = sub_140062650(v7, v51, v52);
					v47 = a5;
					*(_DWORD*)(v53 + 8) = 4;
					*(_QWORD*)v53 = v54;
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v7 + 16) + 8i64) = 0;
				}
				v55 = v103;
				*(_QWORD*)(v7 + 16) += 16i64;
				if (v55)
					sub_14018B900(v55, 0);
				v56 = *(_DWORD**)(v7 + 16);
				v56[2] = 1;
				*v56 = v48 != 0;
				*(_QWORD*)(v7 + 16) += 16i64;
				v57 = (__int64*)sub_1400580E0(v7, -3);
				sub_14005EA50(v7, v57, (int*)(*(_QWORD*)(v7 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v7 + 16) - 16i64));
				*(_QWORD*)(v7 + 16) -= 48i64;
				v58 = *v47 & 2;
				v59 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v7 + 32) + 160i64), v27);
				*(_QWORD*)v60 = *v59;
				*(_DWORD*)(v60 + 8) = *((_DWORD*)v59 + 2);
				*(_QWORD*)(v7 + 16) += 16i64;
				v61 = (unsigned __int64*)sub_14018F0E0(&v102, L"bInCombatPve")[1];
				if (v61)
				{
					v62 = -1i64;
					do
						++v62;
					while (*((_BYTE*)v61 + v62));
					if (*(_QWORD*)(*(_QWORD*)(v7 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v7 + 32) + 112i64))
						sub_14005E2C0(v7);
					v63 = *(_QWORD*)(v7 + 16);
					v64 = sub_140062650(v7, v61, v62);
					v47 = a5;
					*(_DWORD*)(v63 + 8) = 4;
					*(_QWORD*)v63 = v64;
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v7 + 16) + 8i64) = 0;
				}
				v65 = v103;
				*(_QWORD*)(v7 + 16) += 16i64;
				if (v65)
					sub_14018B900(v65, 0);
				v66 = *(_DWORD**)(v7 + 16);
				v66[2] = 1;
				*v66 = v58 != 0;
				*(_QWORD*)(v7 + 16) += 16i64;
				v67 = (__int64*)sub_1400580E0(v7, -3);
				sub_14005EA50(v7, v67, (int*)(*(_QWORD*)(v7 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v7 + 16) - 16i64));
				*(_QWORD*)(v7 + 16) -= 48i64;
				v68 = *v47 & 3;
				v69 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v7 + 32) + 160i64), v27);
				*(_QWORD*)v70 = *v69;
				*(_DWORD*)(v70 + 8) = *((_DWORD*)v69 + 2);
				*(_QWORD*)(v7 + 16) += 16i64;
				v71 = (unsigned __int64*)sub_14018F0E0(&v102, L"bInCombat")[1];
				if (v71)
				{
					v72 = -1i64;
					do
						++v72;
					while (*((_BYTE*)v71 + v72));
					if (*(_QWORD*)(*(_QWORD*)(v7 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v7 + 32) + 112i64))
						sub_14005E2C0(v7);
					v73 = *(_QWORD*)(v7 + 16);
					v74 = sub_140062650(v7, v71, v72);
					v47 = a5;
					*(_DWORD*)(v73 + 8) = 4;
					*(_QWORD*)v73 = v74;
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v7 + 16) + 8i64) = 0;
				}
				v75 = v103;
				*(_QWORD*)(v7 + 16) += 16i64;
				if (v75)
					sub_14018B900(v75, 0);
				v76 = *(_DWORD**)(v7 + 16);
				v76[2] = 1;
				*v76 = v68 != 0;
				*(_QWORD*)(v7 + 16) += 16i64;
				v77 = (__int64*)sub_1400580E0(v7, -3);
				sub_14005EA50(v7, v77, (int*)(*(_QWORD*)(v7 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v7 + 16) - 16i64));
				v78 = qword_140C65898;
				*(_QWORD*)(v7 + 16) -= 48i64;
				v79 = sub_1403D9500(v78, (int*)(a3 + 16i64 * v99));
				v81 = sub_1403D90D0(v80, v79);
				v83 = v81;
				if (v81)
					v84 = *(_DWORD*)(v81 + 6120);
				else
					v84 = *(_DWORD*)((char*)v47 + v124);
				if ((unsigned int)sub_14043EDC0(v82, *(_DWORD*)(qword_140C65898 + 29008), v84))
				{
					v17 = v100;
					v117 = _mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128) * (v100 - 2), (__m128) * v100),
						_mm_unpacklo_ps((__m128) * (v100 - 1), (__m128)0i64));
					if (v83)
						v87 = *(_DWORD*)(v83 + 6120);
					else
						v87 = *(_DWORD*)((char*)v47 + v124);
					if (qword_140C658F8)
					{
						v101 = qword_140C77760;
						v88 = sub_140448BE0(v86, (unsigned int)a2, v87, v117.m128_f32, 0i64, 1, &v101);
						if (v88)
						{
							v89 = *(_QWORD*)(v7 + 32);
							v114 = v7;
							v90 = *(_QWORD*)(v89 + 112);
							v112 = off_140B569F0;
							v115 = 1;
							if (*(_QWORD*)(v89 + 120) >= v90)
								sub_14005E2C0(v7);
							v91 = *(_QWORD*)(v7 + 16);
							v92 = sub_14005C1B0(v7, 0, 0);
							*(_DWORD*)(v91 + 8) = 5;
							*(_QWORD*)v91 = v92;
							*(_QWORD*)(v7 + 16) += 16i64;
							v93 = sub_1400578C0(v7);
							v113 = v93;
							v94 = sub_14052ED60(v88, (__int64)&v112);
							v96 = v93;
							if (v94 >= 0)
							{
								sub_1400FB2A0((__int64)&v108, (__int64)L"tZoneMap", v93);
								v116 = _mm_unpacklo_ps(
									_mm_unpacklo_ps((__m128) * (v100 - 2), (__m128) * v100),
									_mm_unpacklo_ps((__m128) * (v100 - 1), (__m128)0i64));
								sub_1400FA3C0((__int64)v118, v7, v116.m128_f32);
								v97 = v119;
								sub_1400FB2A0((__int64)&v108, (__int64)L"tWorldLoc", v119);
								sub_1400FB1D0((__int64)&v104);
								if (v120)
									sub_1400579E0(v120, v95, v97);
								v96 = v93;
							}
							sub_1400579E0(v7, v95, v96);
						}
					}
					sub_1400579E0(v7, v85, v27);
				}
				else
				{
					sub_1400579E0(v7, v85, v27);
					v17 = v100;
				}
				v15 = a5;
			}
			++v15;
			v17 += 3;
			v16 += 16i64;
			a5 = v15;
			++v99;
			v100 = v17;
		} while (v99 < a7);
		v7 = v106;
		v14 = v105;
	}
	sub_1400EA3E0(a1, "Group_UpdatePosition", byte_1409EA2EC, v14);
	if (v7)
		sub_1400579E0(v7, v98, v14);
}
// 140426E6F: variable 'v39' is possibly undefined
// 140426F67: variable 'v50' is possibly undefined
// 140427064: variable 'v60' is possibly undefined
// 140427158: variable 'v70' is possibly undefined
// 140427246: variable 'v80' is possibly undefined
// 140427274: variable 'v82' is possibly undefined
// 140427283: variable 'v85' is possibly undefined
// 14042730E: variable 'v86' is possibly undefined
// 1404273FB: variable 'v95' is possibly undefined
// 1404274A6: variable 'v98' is possibly undefined
// 1409EA2EC: using guessed type _BYTE byte_1409EA2EC[40];
// 140B008F8: using guessed type wchar_t aTworldloc[10];
// 140B00910: using guessed type wchar_t aTzonemap[9];
// 140B00928: using guessed type wchar_t aBincombat[10];
// 140B00940: using guessed type wchar_t aBincombatpve[13];
// 140B00960: using guessed type wchar_t aBincombatpvp[13];
// 140B00980: using guessed type wchar_t aIdworld_0[8];
// 140B00990: using guessed type wchar_t aNindex_0[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C77760: using guessed type __int64 qword_140C77760;
// 140426BC0: using guessed type char var_50[8];

