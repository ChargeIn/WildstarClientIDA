#include "../winhttp.h"

//----- (00000001401D3110) ----------------------------------------------------
unsigned __int64* __fastcall sub_1401D3110(
	unsigned __int64* a1,
	__int64(__fastcall* a2)(unsigned __int64, __int64, __int64),
	unsigned __int64* a3,
	__int64 a4,
	char a5)
{
	unsigned __int64 v7; // rax
	unsigned __int64 v10; // rcx
	__int64 v11; // rax
	int* v12; // rax
	unsigned __int64 v13; // rdx
	char v14; // r13
	unsigned __int64 v15; // rcx
	__int64 v16; // rax
	int* v17; // rax
	unsigned __int64 v18; // rcx
	__int64 i12; // r14
	unsigned __int64 v20; // rbp
	__int64 i13; // r12
	__int64 v22; // r15
	__int64 v23; // rcx
	__int64 v24; // r15
	__int64 v25; // rcx
	unsigned __int64 v26; // rcx
	unsigned __int64 i14; // rax
	unsigned __int64 v28; // rdx
	__int64 v29; // r8
	unsigned __int64 v30; // rbp
	__int64 i15; // r15
	__int64 v32; // r12
	__int64 v33; // rcx
	__int64 v34; // r12
	unsigned __int64 v35; // r15
	__int64 v36; // rcx
	unsigned __int64 v37; // rdx
	__int64 i16; // r8
	__int64 v39; // rcx
	unsigned __int64 i17; // rcx
	unsigned __int64 v41; // rcx
	__int64 v42; // rax
	int* v43; // rax
	unsigned __int64 v44; // rcx
	__int64 i2; // r15
	unsigned __int64 v46; // rbp
	unsigned __int64 v47; // r14
	__int64 v48; // rdx
	unsigned __int64 v49; // rcx
	unsigned __int64 i3; // rax
	unsigned __int64 v51; // rdx
	__int64 v52; // r8
	unsigned __int64 v53; // rcx
	__int64 v54; // rax
	int* v55; // rax
	unsigned __int64 v56; // rcx
	__int64 kk; // r8
	unsigned __int64 i4; // rcx
	__int64 v59; // rdx
	unsigned __int64 v60; // rax
	__int64 i5; // rcx
	unsigned __int64 i6; // rdx
	_QWORD* v63; // rcx
	unsigned __int64 v64; // rcx
	__int64 v65; // rax
	int* v66; // rax
	unsigned __int64 v67; // rcx
	__int64 i8; // r15
	unsigned __int64 v69; // rbp
	unsigned __int64 v70; // r14
	__int64 v71; // rdx
	unsigned __int64 v72; // rcx
	__int64 v73; // rax
	int* v74; // rax
	unsigned __int64 v75; // rcx
	unsigned __int64 i9; // rcx
	__int64 v77; // rdx
	unsigned __int64 v78; // rax
	__int64 i10; // rcx
	unsigned __int64 i11; // rdx
	_QWORD* v81; // rcx
	__int64 i7; // rcx
	unsigned __int64 v83; // r15
	unsigned __int64 jj; // rbp
	unsigned __int64 v85; // rax
	unsigned __int64 v86; // r14
	unsigned __int64 v87; // rbp
	unsigned __int64 v88; // r14
	unsigned __int64 v89; // rbp
	unsigned __int64 v90; // r14
	unsigned __int64 v91; // rcx
	__int64 v92; // rax
	int* v93; // rax
	unsigned __int64 v94; // rcx
	unsigned __int64 mm; // rcx
	__int64 v96; // rdx
	unsigned __int64 v97; // rax
	__int64 nn; // rcx
	unsigned __int64 i1; // rdx
	_QWORD* v100; // rcx
	unsigned __int64 ii; // rdx
	_QWORD* v102; // rcx
	unsigned __int64 v103; // rcx
	__int64 v104; // rax
	int* v105; // r14
	unsigned __int64 v106; // rax
	int* i; // r14
	unsigned __int64 v108; // rbp
	__int64 v109; // r12
	unsigned __int64 v110; // r15
	__int64 v111; // rcx
	unsigned __int64 v112; // r15
	__int64 v113; // rcx
	unsigned __int64 v114; // rcx
	unsigned __int64 j; // rax
	unsigned __int64 v116; // rdx
	__int64 v117; // r8
	unsigned __int64 v118; // rcx
	__int64 v119; // rax
	int* v120; // r15
	unsigned __int64 v121; // rax
	int* k; // r15
	unsigned __int64 v123; // rbp
	__int64 m; // r14
	unsigned __int64 v125; // r12
	__int64 v126; // rcx
	unsigned __int64 v127; // r14
	__int64 v128; // rcx
	__int64 n; // rcx
	unsigned __int64 v130; // rcx

	*a1 = *a3;
	v7 = a3[1];
	a1[1] = v7;
	if (*a1 >= v7)
		return a1;
	v10 = v7 - *a1;
	v11 = 8 * v10;
	if (!is_mul_ok(v10, 8ui64))
		v11 = -1i64;
	v12 = sub_14018B280(v11, 0);
	v13 = *a1;
	v14 = a5;
	a1[2] = (unsigned __int64)&v12[-2 * *a1];
	if ((a5 & 1) == 0)
	{
		if ((a5 & 2) == 0)
		{
			if ((a5 & 8) != 0)
			{
				v103 = a1[1] - v13;
				v104 = 8 * v103;
				if (!is_mul_ok(v103, 8ui64))
					v104 = -1i64;
				v105 = sub_14018B280(v104, 0);
				v106 = *a1;
				for (i = &v105[-2 * *a1]; v106 < a1[1]; ++v106)
					*(_QWORD*)&i[2 * v106] = v106;
				sub_14001FEC0(a2, (__int64*)&i[2 * *a1], a1[1] - *a1, a4);
				v108 = *a1;
				if ((a5 & 0x20) != 0)
				{
					v109 = 0i64;
					if (v108 < a1[1])
					{
						do
						{
							v110 = *(_QWORD*)&i[2 * v108++];
							for (*(_QWORD*)(a1[2] + 8 * v110) = v109; v108 < a1[1]; *(_QWORD*)(a1[2] + 8 * v111) = -1i64)
							{
								if ((unsigned int)a2(v110, *(_QWORD*)&i[2 * v108], a4))
									break;
								v111 = *(_QWORD*)&i[2 * v108++];
							}
							++v109;
						} while (v108 < a1[1]);
						v14 = a5;
					}
				}
				else
				{
					while (v108 < a1[1])
					{
						v112 = *(_QWORD*)&i[2 * v108++];
						*(_QWORD*)(a1[2] + 8 * v112) = v112;
						if (v108 >= a1[1])
							break;
						do
						{
							if ((unsigned int)a2(v112, *(_QWORD*)&i[2 * v108], a4))
								break;
							v113 = *(_QWORD*)&i[2 * v108++];
							*(_QWORD*)(a1[2] + 8 * v113) = -1i64;
						} while (v108 < a1[1]);
					}
				}
				if ((v14 & 0x10) != 0)
				{
					v114 = *a1;
					for (j = *a1; j < a1[1]; ++j)
					{
						v116 = a1[2];
						v117 = *(_QWORD*)(v116 + 8 * j);
						if (v117 != -1)
							*(_QWORD*)(v116 + 8 * v114++) = v117;
					}
					a1[1] = v114;
				}
				sub_14018B900((__int64)&i[2 * *a1], 0);
			}
			else if ((a5 & 4) != 0)
			{
				v118 = a1[1] - v13;
				v119 = 8 * v118;
				if (!is_mul_ok(v118, 8ui64))
					v119 = -1i64;
				v120 = sub_14018B280(v119, 0);
				v121 = *a1;
				for (k = &v120[-2 * *a1]; v121 < a1[1]; ++v121)
					*(_QWORD*)&k[2 * v121] = v121;
				sub_14001FEC0(a2, (__int64*)&k[2 * *a1], a1[1] - *a1, a4);
				v123 = *a1;
				if ((a5 & 0x20) != 0)
				{
					for (m = 0i64; v123 < a1[1]; ++m)
					{
						v125 = *(_QWORD*)&k[2 * v123++];
						for (*(_QWORD*)(a1[2] + 8 * v125) = m; v123 < a1[1]; *(_QWORD*)(a1[2] + 8 * v126) = m)
						{
							if ((unsigned int)a2(v125, *(_QWORD*)&k[2 * v123], a4))
								break;
							v126 = *(_QWORD*)&k[2 * v123++];
						}
					}
				}
				else
				{
					while (v123 < a1[1])
					{
						v127 = *(_QWORD*)&k[2 * v123++];
						*(_QWORD*)(a1[2] + 8 * v127) = v127;
						if (v123 >= a1[1])
							break;
						do
						{
							if ((unsigned int)a2(v127, *(_QWORD*)&k[2 * v123], a4))
								break;
							v128 = *(_QWORD*)&k[2 * v123++];
							*(_QWORD*)(a1[2] + 8 * v128) = v127;
						} while (v123 < a1[1]);
					}
				}
				sub_14018B900((__int64)&k[2 * *a1], 0);
			}
			else if ((a5 & 0x20) != 0)
			{
				for (n = 0i64; v13 < a1[1]; ++n)
				{
					++v13;
					*(_QWORD*)(a1[2] + 8 * v13 - 8) = n;
				}
			}
			else
			{
				for (; v13 < a1[1]; ++v13)
					*(_QWORD*)(a1[2] + 8 * v13) = v13;
			}
			goto LABEL_213;
		}
		for (; v13 < a1[1]; ++v13)
			*(_QWORD*)(a1[2] + 8 * v13) = v13;
		sub_14001FEC0(a2, (__int64*)(a1[2] + 8 * *a1), a1[1] - *a1, a4);
		if ((a5 & 0xC) == 0)
		{
			if ((a5 & 0x20) != 0)
			{
				for (ii = *a1; ii < a1[1]; *v102 -= *a1)
					v102 = (_QWORD*)(a1[2] + 8 * ii++);
			}
			goto LABEL_213;
		}
		if ((a5 & 8) != 0)
		{
			if ((a5 & 0x10) != 0)
			{
				v83 = *a1;
				for (jj = *a1; jj < a1[1]; ++v83)
				{
					v85 = a1[2];
					++jj;
					v86 = *(_QWORD*)(v85 + 8 * jj - 8);
					for (*(_QWORD*)(v85 + 8 * v83) = v86; jj < a1[1]; ++jj)
					{
						if ((unsigned int)a2(v86, *(_QWORD*)(a1[2] + 8 * jj), a4))
							break;
					}
				}
				a1[1] = v83;
			}
			else
			{
				v87 = *a1;
				if (*a1 < a1[1])
				{
					do
					{
						++v87;
						v88 = *(_QWORD*)(a1[2] + 8 * v87 - 8);
						if (v87 >= a1[1])
							break;
						do
						{
							if ((unsigned int)a2(v88, *(_QWORD*)(a1[2] + 8 * v87), a4))
								break;
							++v87;
							*(_QWORD*)(a1[2] + 8 * v87 - 8) = -1i64;
						} while (v87 < a1[1]);
					} while (v87 < a1[1]);
					v14 = a5;
				}
			}
		}
		else
		{
			v89 = *a1;
			while (v89 < a1[1])
			{
				++v89;
				v90 = *(_QWORD*)(a1[2] + 8 * v89 - 8);
				if (v89 >= a1[1])
					break;
				do
				{
					if ((unsigned int)a2(v90, *(_QWORD*)(a1[2] + 8 * v89), a4))
						break;
					++v89;
					*(_QWORD*)(a1[2] + 8 * v89 - 8) = v90;
				} while (v89 < a1[1]);
			}
		}
		if ((v14 & 0x20) == 0)
			goto LABEL_213;
		v91 = a3[1] - *a3;
		v92 = 8 * v91;
		if (!is_mul_ok(v91, 8ui64))
			v92 = -1i64;
		v93 = sub_14018B280(v92, 0);
		v94 = *a3;
		for (kk = (__int64)&v93[-2 * *a3]; v94 < a3[1]; ++v94)
			*(_QWORD*)(kk + 8 * v94) = -1i64;
		for (mm = *a1; mm < a1[1]; ++mm)
		{
			v96 = *(_QWORD*)(a1[2] + 8 * mm);
			if (v96 != -1)
				*(_QWORD*)(kk + 8 * v96) = 0i64;
		}
		v97 = *a3;
		for (nn = 0i64; v97 < a3[1]; ++v97)
		{
			if (*(_QWORD*)(kk + 8 * v97) != -1i64)
				*(_QWORD*)(kk + 8 * v97) = nn++;
		}
		for (i1 = *a1; i1 < a1[1]; ++i1)
		{
			v100 = (_QWORD*)(a1[2] + 8 * i1);
			if (*v100 != -1i64)
				*v100 = *(_QWORD*)(kk + 8i64 * *v100);
		}
		goto LABEL_160;
	}
	if ((a5 & 2) == 0)
	{
		if ((a5 & 8) != 0)
		{
			v41 = a1[1] - v13;
			v42 = 8 * v41;
			if (!is_mul_ok(v41, 8ui64))
				v42 = -1i64;
			v43 = sub_14018B280(v42, 0);
			v44 = *a1;
			for (i2 = (__int64)&v43[-2 * *a1]; v44 < a1[1]; ++v44)
				*(_QWORD*)(i2 + 8 * v44) = v44;
			sub_14001FEC0(a2, (__int64*)(i2 + 8 * *a1), a1[1] - *a1, a4);
			v46 = *a1;
			if (*a1 < a1[1])
			{
				do
				{
					v47 = *(_QWORD*)(i2 + 8 * v46++);
					*(_QWORD*)(a1[2] + 8 * v47) = v47;
					if (v46 >= a1[1])
						break;
					do
					{
						if ((unsigned int)a2(v47, *(_QWORD*)(i2 + 8 * v46), a4))
							break;
						v48 = *(_QWORD*)(i2 + 8 * v46++);
						*(_QWORD*)(a1[2] + 8 * v48) = -1i64;
					} while (v46 < a1[1]);
				} while (v46 < a1[1]);
				v14 = a5;
			}
			sub_14018B900(i2, 0);
			if ((v14 & 0x10) != 0)
			{
				v49 = *a1;
				for (i3 = *a1; i3 < a1[1]; ++i3)
				{
					v51 = a1[2];
					v52 = *(_QWORD*)(v51 + 8 * i3);
					if (v52 != -1)
						*(_QWORD*)(v51 + 8 * v49++) = v52;
				}
				a1[1] = v49;
			}
			if ((v14 & 0x20) == 0)
				goto LABEL_213;
			v53 = a3[1] - *a3;
			v54 = 8 * v53;
			if (!is_mul_ok(v53, 8ui64))
				v54 = -1i64;
			v55 = sub_14018B280(v54, 0);
			v56 = *a3;
			for (kk = (__int64)&v55[-2 * *a3]; v56 < a3[1]; ++v56)
				*(_QWORD*)(kk + 8 * v56) = -1i64;
			for (i4 = *a1; i4 < a1[1]; ++i4)
			{
				v59 = *(_QWORD*)(a1[2] + 8 * i4);
				if (v59 != -1)
					*(_QWORD*)(kk + 8 * v59) = 0i64;
			}
			v60 = *a3;
			for (i5 = 0i64; v60 < a3[1]; ++v60)
			{
				if (*(_QWORD*)(kk + 8 * v60) != -1i64)
					*(_QWORD*)(kk + 8 * v60) = i5++;
			}
			for (i6 = *a1; i6 < a1[1]; ++i6)
			{
				v63 = (_QWORD*)(a1[2] + 8 * i6);
				if (*v63 != -1i64)
					*v63 = *(_QWORD*)(kk + 8i64 * *v63);
			}
		}
		else
		{
			if ((a5 & 4) == 0)
			{
				if ((a5 & 0x20) != 0)
				{
					for (i7 = 0i64; v13 < a1[1]; ++i7)
					{
						++v13;
						*(_QWORD*)(a1[2] + 8 * v13 - 8) = i7;
					}
				}
				else
				{
					for (; v13 < a1[1]; ++v13)
						*(_QWORD*)(a1[2] + 8 * v13) = v13;
				}
				goto LABEL_213;
			}
			v64 = a1[1] - v13;
			v65 = 8 * v64;
			if (!is_mul_ok(v64, 8ui64))
				v65 = -1i64;
			v66 = sub_14018B280(v65, 0);
			v67 = *a1;
			for (i8 = (__int64)&v66[-2 * *a1]; v67 < a1[1]; ++v67)
				*(_QWORD*)(i8 + 8 * v67) = v67;
			sub_14001FEC0(a2, (__int64*)(i8 + 8 * *a1), a1[1] - *a1, a4);
			v69 = *a1;
			while (v69 < a1[1])
			{
				v70 = *(_QWORD*)(i8 + 8 * v69++);
				*(_QWORD*)(a1[2] + 8 * v70) = v70;
				if (v69 >= a1[1])
					break;
				do
				{
					if ((unsigned int)a2(v70, *(_QWORD*)(i8 + 8 * v69), a4))
						break;
					v71 = *(_QWORD*)(i8 + 8 * v69++);
					*(_QWORD*)(a1[2] + 8 * v71) = v70;
				} while (v69 < a1[1]);
			}
			sub_14018B900(i8, 0);
			if ((a5 & 0x20) == 0)
				goto LABEL_213;
			v72 = a3[1] - *a3;
			v73 = 8 * v72;
			if (!is_mul_ok(v72, 8ui64))
				v73 = -1i64;
			v74 = sub_14018B280(v73, 0);
			v75 = *a3;
			for (kk = (__int64)&v74[-2 * *a3]; v75 < a3[1]; ++v75)
				*(_QWORD*)(kk + 8 * v75) = -1i64;
			for (i9 = *a1; i9 < a1[1]; ++i9)
			{
				v77 = *(_QWORD*)(a1[2] + 8 * i9);
				if (v77 != -1)
					*(_QWORD*)(kk + 8 * v77) = 0i64;
			}
			v78 = *a3;
			for (i10 = 0i64; v78 < a3[1]; ++v78)
			{
				if (*(_QWORD*)(kk + 8 * v78) != -1i64)
					*(_QWORD*)(kk + 8 * v78) = i10++;
			}
			for (i11 = *a1; i11 < a1[1]; ++i11)
			{
				v81 = (_QWORD*)(a1[2] + 8 * i11);
				if (*v81 != -1i64)
					*v81 = *(_QWORD*)(kk + 8i64 * *v81);
			}
		}
	LABEL_160:
		sub_14018B900(kk, 0);
		goto LABEL_213;
	}
	v15 = a1[1] - v13;
	v16 = 8 * v15;
	if (!is_mul_ok(v15, 8ui64))
		v16 = -1i64;
	v17 = sub_14018B280(v16, 0);
	v18 = *a1;
	for (i12 = (__int64)&v17[-2 * *a1]; v18 < a1[1]; ++v18)
		*(_QWORD*)(i12 + 8 * v18) = v18;
	sub_14001FEC0(a2, (__int64*)(i12 + 8 * *a1), a1[1] - *a1, a4);
	if ((a5 & 8) != 0)
	{
		v20 = *a1;
		if ((a5 & 0x20) != 0)
		{
			for (i13 = 0i64; v20 < a1[1]; ++i13)
			{
				v22 = 8 * v20++;
				for (*(_QWORD*)(a1[2] + 8i64 * *(_QWORD*)(v22 + i12)) = i13; v20 < a1[1]; *(_QWORD*)(a1[2] + 8 * v23) = -1i64)
				{
					if ((unsigned int)a2(*(_QWORD*)(v22 + i12), *(_QWORD*)(i12 + 8 * v20), a4))
						break;
					v23 = *(_QWORD*)(i12 + 8 * v20++);
				}
			}
		}
		else
		{
			while (v20 < a1[1])
			{
				v24 = 8 * v20;
				*(_QWORD*)(a1[2] + 8i64 * *(_QWORD*)(8 * v20 + i12)) = v20;
				if (++v20 >= a1[1])
					break;
				do
				{
					if ((unsigned int)a2(*(_QWORD*)(v24 + i12), *(_QWORD*)(i12 + 8 * v20), a4))
						break;
					v25 = *(_QWORD*)(i12 + 8 * v20++);
					*(_QWORD*)(a1[2] + 8 * v25) = -1i64;
				} while (v20 < a1[1]);
			}
		}
		if ((a5 & 0x10) != 0)
		{
			v26 = *a1;
			for (i14 = *a1; i14 < a1[1]; ++i14)
			{
				v28 = a1[2];
				v29 = *(_QWORD*)(v28 + 8 * i14);
				if (v29 != -1)
					*(_QWORD*)(v28 + 8 * v26++) = v29;
			}
			a1[1] = v26;
			sub_14018B900(i12, 0);
			goto LABEL_213;
		}
	}
	else if ((a5 & 4) != 0)
	{
		v30 = *a1;
		if ((a5 & 0x20) != 0)
		{
			for (i15 = 0i64; v30 < a1[1]; ++i15)
			{
				v32 = 8 * v30++;
				for (*(_QWORD*)(a1[2] + 8i64 * *(_QWORD*)(v32 + i12)) = i15; v30 < a1[1]; *(_QWORD*)(a1[2] + 8 * v33) = i15)
				{
					if ((unsigned int)a2(*(_QWORD*)(v32 + i12), *(_QWORD*)(i12 + 8 * v30), a4))
						break;
					v33 = *(_QWORD*)(i12 + 8 * v30++);
				}
			}
		}
		else
		{
			while (v30 < a1[1])
			{
				v34 = 8 * v30;
				v35 = v30;
				*(_QWORD*)(a1[2] + 8i64 * *(_QWORD*)(8 * v30 + i12)) = v30;
				if (++v30 >= a1[1])
					break;
				do
				{
					if ((unsigned int)a2(*(_QWORD*)(v34 + i12), *(_QWORD*)(i12 + 8 * v30), a4))
						break;
					v36 = *(_QWORD*)(i12 + 8 * v30++);
					*(_QWORD*)(a1[2] + 8 * v36) = v35;
				} while (v30 < a1[1]);
			}
		}
	}
	else if ((a5 & 0x20) != 0)
	{
		v37 = *a1;
		for (i16 = 0i64; v37 < a1[1]; ++i16)
		{
			v39 = *(_QWORD*)(i12 + 8 * v37++);
			*(_QWORD*)(a1[2] + 8 * v39) = i16;
		}
	}
	else
	{
		for (i17 = *a1; i17 < a1[1]; ++i17)
			*(_QWORD*)(a1[2] + 8i64 * *(_QWORD*)(i12 + 8 * i17)) = i17;
	}
	sub_14018B900(i12, 0);
LABEL_213:
	if ((v14 & 0x10) != 0)
	{
		v130 = *a1;
		*a1 = 0i64;
		a1[2] += 8 * v130;
		a1[1] -= v130;
	}
	return a1;
}

