//----- (0000000140532E50) ----------------------------------------------------
__int64 __fastcall sub_140532E50(_QWORD* a1)
{
	__int64 result; // rax
	_QWORD* v3; // r13
	__m128* v4; // rdi
	__m128* v5; // rcx
	__int32 v6; // eax
	int v7; // r14d
	unsigned __int64 v8; // rax
	_DWORD* v9; // rbx
	bool v10; // cf
	__int64 v11; // rax
	__int64 v12; // r9
	double v13; // xmm6_8
	__int64 v14; // rcx
	int v15; // eax
	__int64 v16; // rax
	int v17; // ecx
	__m128* v18; // rax
	double v19; // xmm0_8
	float v20; // xmm0_4
	__int64 v21; // rax
	_DWORD* v22; // rax
	_DWORD* v23; // rbx
	__int64 v24; // rax
	__int64 v25; // r9
	__int64 v26; // rcx
	int v27; // eax
	__int64 v28; // rax
	int v29; // ecx
	__m128* v30; // rax
	double v31; // xmm0_8
	float v32; // xmm0_4
	__int64 v33; // rax
	_DWORD* v34; // rax
	_DWORD* v35; // rbx
	__int64 v36; // rax
	__int64 v37; // r9
	__int64 v38; // rcx
	int v39; // eax
	__int64 v40; // rax
	int v41; // ecx
	__m128* v42; // rax
	char* v43; // rax
	int v44; // eax
	_DWORD* v45; // rdx
	unsigned __int64 v46; // rcx
	int v47; // ecx
	BOOL v48; // r12d
	__int64 v49; // r8
	_DWORD* v50; // rcx
	unsigned __int64 v51; // rdx
	__int64(__fastcall * **v52)(_QWORD); // rcx
	__int32 v53; // eax
	int v54; // edx
	unsigned int v55; // ebx
	unsigned int v56; // edi
	unsigned int v57; // r14d
	unsigned int v58; // eax
	__int64(__fastcall * **v59)(_QWORD); // rax
	__int64 v60; // rbx
	int* v61; // rdi
	int* v62; // rax
	__int64 v63; // r15
	__int64 v64; // r14
	__int64 v65; // rax
	__int64 v66; // rbx
	unsigned int* v67; // rax
	unsigned int v68; // ecx
	__int64 v69; // rax
	__int64 v70; // rcx
	unsigned int v71; // r8d
	__int64 v72; // rdx
	__int64(__fastcall * **v73)(_QWORD); // rax
	__int64 v74; // rax
	unsigned int* v75; // rax
	__int64 v76; // rax
	unsigned int* v77; // rax
	int* v78; // rax
	__int64 v79; // rbx
	int* v80; // r12
	int* v81; // rax
	int* v82; // rdi
	__int64 v83; // rdx
	bool v84; // zf
	__m128* v85; // rax
	__m128i v86; // xmm0
	__int64 v87; // rax
	__int64 v88; // rcx
	__m128 v89; // [rsp+50h] [rbp-B0h] BYREF
	__m128 v90; // [rsp+60h] [rbp-A0h] BYREF
	__int64(__fastcall * *v91)(); // [rsp+70h] [rbp-90h] BYREF
	int v92; // [rsp+78h] [rbp-88h]
	_QWORD* v93; // [rsp+80h] [rbp-80h]
	int v94; // [rsp+88h] [rbp-78h] BYREF
	__m128 v95; // [rsp+8Ch] [rbp-74h]
	int v96; // [rsp+9Ch] [rbp-64h]
	int v97; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v98[3]; // [rsp+B8h] [rbp-48h] BYREF
	_QWORD v99[30]; // [rsp+D0h] [rbp-30h] BYREF
	unsigned __int64 v100; // [rsp+218h] [rbp+118h] BYREF
	int v101; // [rsp+220h] [rbp+120h]
	int v102; // [rsp+228h] [rbp+128h]

	result = sub_14052E9B0(a1);
	v3 = (_QWORD*)result;
	if (!result)
		return result;
	v4 = (__m128*)dword_140A12138;
	v5 = (__m128*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v5 = (__m128*)(a1[3] + 16i64);
	v6 = v5->m128_i32[2];
	if (v6 == 3)
		goto LABEL_8;
	if (v6 == 4 && sub_14005AC80((char*)(v5->m128_u64[0] + 32), &v100))
	{
		v90.m128_i32[2] = 3;
		v5 = &v90;
		v90.m128_u64[0] = v100;
	LABEL_8:
		v7 = (int)*(double*)v5->m128_u64;
		goto LABEL_9;
	}
	v7 = 0;
LABEL_9:
	v8 = a1[3] + 32i64;
	v9 = dword_140A12138;
	v90 = 0i64;
	v10 = v8 < a1[2];
	v101 = v7;
	if (v10)
		v9 = (_DWORD*)v8;
	v11 = sub_140062650((__int64)a1, (unsigned __int64*)L"x", 1ui64);
	v12 = a1[2];
	v89.m128_u64[0] = v11;
	v89.m128_i32[2] = 4;
	sub_14005E8E0((__int64)a1, (__int64)v9, (int*)&v89, v12);
	v13 = 0.0;
	a1[2] += 16i64;
	v14 = a1[2];
	v15 = *(_DWORD*)(v14 - 8);
	if (v15 == 3 || v15 == 4 && sub_14005AC80((char*)(*(_QWORD*)(v14 - 16) + 32i64), &v100))
	{
		v16 = a1[2];
		v17 = *(_DWORD*)(v16 - 8);
		v18 = (__m128*)(v16 - 16);
		if (v17 != 3)
		{
			if (v17 != 4 || !sub_14005AC80((char*)(v18->m128_u64[0] + 32), &v100))
			{
				v19 = 0.0;
				goto LABEL_19;
			}
			v89.m128_i32[2] = 3;
			v18 = &v89;
			v89.m128_u64[0] = v100;
		}
		v19 = *(double*)v18->m128_u64;
	LABEL_19:
		v20 = v19;
		v90.m128_f32[0] = v20;
	}
	v21 = a1[3];
	a1[2] -= 16i64;
	v22 = (_DWORD*)(v21 + 32);
	v23 = dword_140A12138;
	if ((unsigned __int64)v22 < a1[2])
		v23 = v22;
	v24 = sub_140062650((__int64)a1, (unsigned __int64*)"y", 1ui64);
	v25 = a1[2];
	v89.m128_u64[0] = v24;
	v89.m128_i32[2] = 4;
	sub_14005E8E0((__int64)a1, (__int64)v23, (int*)&v89, v25);
	a1[2] += 16i64;
	v26 = a1[2];
	v27 = *(_DWORD*)(v26 - 8);
	if (v27 == 3 || v27 == 4 && sub_14005AC80((char*)(*(_QWORD*)(v26 - 16) + 32i64), &v100))
	{
		v28 = a1[2];
		v29 = *(_DWORD*)(v28 - 8);
		v30 = (__m128*)(v28 - 16);
		if (v29 != 3)
		{
			if (v29 != 4 || !sub_14005AC80((char*)(v30->m128_u64[0] + 32), &v100))
			{
				v31 = 0.0;
				goto LABEL_30;
			}
			v89.m128_i32[2] = 3;
			v30 = &v89;
			v89.m128_u64[0] = v100;
		}
		v31 = *(double*)v30->m128_u64;
	LABEL_30:
		v32 = v31;
		v90.m128_f32[1] = v32;
	}
	v33 = a1[3];
	a1[2] -= 16i64;
	v34 = (_DWORD*)(v33 + 32);
	v35 = dword_140A12138;
	if ((unsigned __int64)v34 < a1[2])
		v35 = v34;
	v36 = sub_140062650((__int64)a1, qword_1409F1D7C, 1ui64);
	v37 = a1[2];
	v89.m128_u64[0] = v36;
	v89.m128_i32[2] = 4;
	sub_14005E8E0((__int64)a1, (__int64)v35, (int*)&v89, v37);
	a1[2] += 16i64;
	v38 = a1[2];
	v39 = *(_DWORD*)(v38 - 8);
	if (v39 == 3 || v39 == 4 && sub_14005AC80((char*)(*(_QWORD*)(v38 - 16) + 32i64), &v100))
	{
		v40 = a1[2];
		v41 = *(_DWORD*)(v40 - 8);
		v42 = (__m128*)(v40 - 16);
		if (v41 != 3)
		{
			if (v41 != 4 || !sub_14005AC80((char*)(v42->m128_u64[0] + 32), &v100))
				goto LABEL_41;
			v89.m128_i32[2] = 3;
			v42 = &v89;
			v89.m128_u64[0] = v100;
		}
		v13 = *(double*)v42->m128_u64;
	LABEL_41:
		v90.m128_f32[2] = v13;
	}
	a1[2] -= 16i64;
	v43 = (char*)sub_140056BB0(a1, 4u, 0i64);
	sub_14018F2D0(&v94, v43);
	sub_140770490((__int64)v99);
	sub_140770630((__int64)v99, a1, 5);
	v44 = sub_140121AC0(a1, 6u, (__int64)off_140B13F68, 7ui64);
	v45 = dword_140A12138;
	v46 = a1[3] + 96i64;
	v102 = v44;
	if (v46 < a1[2])
		v45 = (_DWORD*)v46;
	v47 = v45[2];
	v48 = v47 && (v47 != 1 || *v45);
	v93 = a1;
	v92 = -2;
	v91 = off_140B56A08;
	sub_1400579E0((__int64)a1, (__int64)v45, -2);
	v49 = (__int64)v93;
	v50 = dword_140A12138;
	v51 = v93[2];
	if (v93[3] + 112i64 < v51)
		v50 = (_DWORD*)(v93[3] + 112i64);
	*(_QWORD*)v51 = *(_QWORD*)v50;
	*(_DWORD*)(v51 + 8) = v50[2];
	*(_QWORD*)(v49 + 16) += 16i64;
	v92 = sub_1400578C0((__int64)v93);
	v52 = (__int64(__fastcall***)(_QWORD))v3[144];
	if (v52)
		LODWORD(v100) = (**v52)(v52);
	else
		LODWORD(v100) = 0;
	if (v7 != 4)
	{
		v65 = sub_1405278C0((__int64)a1, 8);
		v66 = v65;
		if (v65)
		{
			v67 = (unsigned int*)sub_14024B980(*(_DWORD*)(**(_QWORD**)(v65 + 8) + 36i64));
			if (v67)
			{
				v68 = *(_DWORD*)(**(_QWORD**)(v66 + 8) + 32i64);
				v89 = _mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)v67[3], (__m128)v67[5]),
					_mm_unpacklo_ps((__m128)v67[4], (__m128)0i64));
				v69 = sub_14021C940(v68);
				if (v69
					&& (v70 = v3[144], v71 = *(_DWORD*)(v69 + 16), v72 = *(unsigned int*)(v69 + 12), qword_140C658F8)
					&& (v100 = qword_140C77760,
						(v73 = (__int64(__fastcall***)(_QWORD))sub_140448BE0(
							v70,
							v72,
							v71,
							v89.m128_f32,
							v70,
							1,
							(__int64*)&v100)) != 0i64))
				{
					LODWORD(v100) = (**v73)(v73);
				}
				else
				{
					LODWORD(v100) = 0;
				}
			}
		}
		else
		{
			v74 = sub_140527A10((__int64)a1, 8);
			if (v74)
			{
				v75 = (unsigned int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v74 + 8) + 24i64))(*(_QWORD*)(v74 + 8));
				LODWORD(v100) = sub_14052B980((__int64)v3, v75);
			}
			else
			{
				v76 = sub_140527B60((__int64)a1, 8);
				if (v76)
				{
					v77 = (unsigned int*)sub_140226F00(*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v76 + 8) + 8i64) + 4i64));
					LODWORD(v100) = sub_14052B980((__int64)v3, v77);
				}
			}
		}
		goto LABEL_70;
	}
	if ((unsigned __int64)(a1[3] + 112i64) < a1[2])
		v4 = (__m128*)(a1[3] + 112i64);
	v53 = v4->m128_i32[2];
	if (v53 == 3)
		goto LABEL_64;
	if (v53 == 4 && sub_14005AC80((char*)(v4->m128_u64[0] + 32), (unsigned __int64*)&v89))
	{
		v89.m128_i32[2] = 3;
		v4 = &v89;
	LABEL_64:
		v54 = (int)*(double*)v4->m128_u64;
		goto LABEL_65;
	}
	v54 = 0;
LABEL_65:
	v55 = sub_1403F4250((__int64)v52, v54);
	if (v55)
	{
		v56 = qword_140C77760;
		v57 = HIDWORD(qword_140C77760);
		v58 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72);
		if (qword_140C658F8)
		{
			v89.m128_u64[0] = __PAIR64__(v57, v56);
			v59 = (__int64(__fastcall***)(_QWORD))sub_140448BE0(
				(__int64)&v89,
				v58,
				v55,
				v90.m128_f32,
				0i64,
				1,
				(__int64*)&v89);
			if (v59)
				LODWORD(v100) = (**v59)(v59);
		}
		v7 = v101;
	}
LABEL_70:
	v60 = *(_QWORD*)(v3[87] + 96i64);
	v61 = sub_140538120((__int64)(v3 + 172), (int*)&v100);
	v62 = sub_14018B280(384i64, 0);
	v63 = *(__int64*)((char*)v95.m128_i64 + 4);
	if (v62)
		v64 = sub_140770B60(
			(__int64)v62,
			v7,
			&v90,
			word_1409F1D34,
			v60,
			*(int**)((char*)v95.m128_u64 + 4),
			(__int64)v99,
			v102,
			(__int64)&v91);
	else
		v64 = 0i64;
	*(_DWORD*)(v64 + 376) = v48;
	v97 = 0;
	v78 = sub_14018DB00(0i64, 1ui64, 8i64);
	v98[1] = 1i64;
	*(_QWORD*)v78 = v64;
	v79 = *((_QWORD*)v61 + 7);
	v80 = v78;
	v98[0] = (__int64)v78;
	v81 = sub_14018B280(40i64, 0);
	v82 = v81;
	if (v81 != (int*)-16i64)
	{
		v81[4] = 0;
		sub_1403FE910((__int64*)v81 + 3, (__int64)v98);
	}
	*(_QWORD*)v82 = v79;
	*((_QWORD*)v82 + 1) = *(_QWORD*)(v79 + 8);
	**(_QWORD**)(v79 + 8) = v82;
	*(_QWORD*)(v79 + 8) = v82;
	(*(void(__fastcall**)(int*))(*((_QWORD*)v80 - 2) + 8i64))(v80 - 4);
	v84 = v3[149] == 0i64;
	LODWORD(v100) = 1065353216;
	if (!v84 && (unsigned int)sub_14052B1A0((__int64)v3, (int*)&v90, &v89, (float*)&v100))
	{
		v94 = 0;
		v96 = 0;
		v95 = v90;
		*(_OWORD*)(v64 + 16) = *(_OWORD*)(*(__int64(__fastcall**)(__int64, __m128*))(*(_QWORD*)v64 + 16i64))(
			v64,
			&v90);
		v85 = (__m128*)(*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)v64 + 16i64))(v64, &v97);
		sub_1407711C0(&v90, v85, &v89, 0.0, v100, (__int64)&v94, (_DWORD*)(v64 + 336), (float*)(v64 + 340));
		*(__m128*)(v64 + 320) = v90;
	}
	v86 = _mm_cvtsi32_si128(*(_DWORD*)(v64 + 8));
	v87 = a1[2];
	*(_DWORD*)(v87 + 8) = 3;
	*(_QWORD*)v87 = *(_OWORD*)&_mm_cvtepi32_pd(v86);
	v88 = (__int64)v93;
	a1[2] += 16i64;
	v91 = off_140B56A08;
	if (v88)
		sub_1400579E0(v88, v83, v92);
	sub_140532D90(v99);
	if (v63)
		sub_14018B900(v63, 0);
	return 1i64;
}
// 140533331: variable 'v52' is possibly undefined
// 140533730: variable 'v83' is possibly undefined
// 1409F1D0C: using guessed type wchar_t asc_1409F1D0C[2];
// 1409F1D34: using guessed type _WORD word_1409F1D34[36];
// 1409F1D7C: using guessed type unsigned __int64 qword_1409F1D7C[4];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B13F68: using guessed type wchar_t *off_140B13F68[7];
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C77760: using guessed type __int64 qword_140C77760;
// 140532E50: using guessed type _QWORD var_130[30];

