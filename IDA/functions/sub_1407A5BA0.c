#include "../winhttp.h"

//----- (00000001407A5BA0) ----------------------------------------------------
__int64 __fastcall sub_1407A5BA0(__int64** a1, _QWORD* a2, int a3, unsigned int a4, float* a5, float* a6)
{
	_QWORD* v6; // r15
	__int64* v8; // rsi
	int* v9; // rdi
	int v10; // ebx
	int v11; // eax
	__int64* v12; // rax
	__int64* v13; // rdi
	__int64 v14; // rax
	float v15; // xmm8_4
	double v16; // xmm0_8
	unsigned int v17; // ebx
	float v18; // xmm9_4
	float* v19; // r14
	float* v20; // r12
	unsigned int v21; // ebx
	int v22; // eax
	__int64 v23; // rax
	int v24; // ebx
	unsigned __int64 v25; // r12
	float v26; // xmm0_4
	__int64 v27; // rax
	double v28; // xmm0_8
	__int64 v29; // rax
	__int64 v30; // rax
	unsigned __int64 v31; // r13
	__int64 v32; // rbx
	__int64 v33; // rax
	double v34; // xmm0_8
	__int64 v35; // rbx
	float v36; // xmm6_4
	__int64 v37; // rax
	__int64 v38; // rax
	__int64 v39; // r15
	unsigned __int64 v40; // rax
	__int64 v41; // rbx
	__int64 v42; // rax
	double v43; // xmm0_8
	__int64 v44; // rbx
	float v45; // xmm6_4
	__int64 v46; // rax
	__int64 v47; // rax
	unsigned __int64 v48; // r14
	float v49; // xmm8_4
	int v50; // r15d
	double v51; // xmm0_8
	int v52; // xmm6_4
	__int128* v53; // rdi
	__int128* v54; // rbx
	__int128 v55; // xmm1
	__int128 v56; // xmm2
	unsigned __int64 v57; // rbx
	__int64 v58; // r15
	double v59; // xmm0_8
	float v60; // xmm12_4
	__m128* v61; // rax
	__int64 v62; // r8
	__m128* v63; // r14
	__m128* v64; // r12
	__int64* v65; // rax
	__int64 v66; // r8
	double v67; // xmm0_8
	float v68; // xmm11_4
	double v69; // xmm0_8
	float v70; // xmm11_4
	double v71; // xmm0_8
	float v72; // xmm6_4
	__m128* v73; // rbx
	__m128* v74; // r11
	__m128* v75; // rbx
	__m128* v76; // r10
	__m128* v77; // r11
	float v78; // xmm10_4
	float v79; // xmm9_4
	float v80; // xmm1_4
	__m128 v81; // xmm1
	__m128 v82; // xmm10
	__m128 v83; // xmm1
	__m128 v84; // xmm2
	__m128 v85; // xmm2
	__m128 v86; // xmm9
	float v87; // xmm9_4
	double v88; // xmm0_8
	float v89; // xmm6_4
	unsigned __int64 v90; // [rsp+50h] [rbp-B0h] BYREF
	int v91; // [rsp+58h] [rbp-A8h]
	__m128* v92; // [rsp+60h] [rbp-A0h]
	__m128* v93; // [rsp+68h] [rbp-98h]
	__int64 v94; // [rsp+70h] [rbp-90h] BYREF
	__int64 v95; // [rsp+78h] [rbp-88h]
	unsigned __int64 v96; // [rsp+80h] [rbp-80h]
	__int64* v97; // [rsp+88h] [rbp-78h]
	unsigned __int64 v98; // [rsp+90h] [rbp-70h] BYREF
	__int64 v99; // [rsp+98h] [rbp-68h]
	__m128 v100; // [rsp+A0h] [rbp-60h] BYREF
	__m128 v101; // [rsp+B0h] [rbp-50h] BYREF
	__m128 v102; // [rsp+C0h] [rbp-40h] BYREF
	__m128 v103; // [rsp+D0h] [rbp-30h] BYREF
	__m128 v104; // [rsp+E0h] [rbp-20h] BYREF
	__m128 v105; // [rsp+F0h] [rbp-10h] BYREF
	__int128 v106[5]; // [rsp+100h] [rbp+0h] BYREF
	float v107; // [rsp+150h] [rbp+50h]
	int v108; // [rsp+154h] [rbp+54h]
	int v109; // [rsp+158h] [rbp+58h]
	int v110; // [rsp+168h] [rbp+68h]
	float v113; // [rsp+260h] [rbp+160h] BYREF
	unsigned int v114; // [rsp+268h] [rbp+168h]

	v114 = a4;
	v113 = *(float*)&a3;
	v6 = a2;
	v96 = a2[1];
	if (!v96)
		return 2147500037i64;
	if (!a1)
		return 2147942487i64;
	v8 = *(__int64**)*a2;
	v99 = 0i64;
	if (!v8 || (unsigned __int64)(*(__int64(__fastcall**)(__int64*))(*v8 + 32))(v8) < 4)
		return 2147500037i64;
	v9 = sub_14018B280(96i64, 0);
	if (v9)
	{
		v10 = (*(__int64(__fastcall**)(__int64*))(*v8 + 24))(v8);
		v11 = (*(__int64(__fastcall**)(__int64*))(*v8 + 16))(v8);
		v12 = (__int64*)sub_1407A2BB0((__int64)v9, v11, v10);
		v13 = v12;
		v97 = v12;
		if (v12)
			(*(void(__fastcall**)(__int64*)) * v12)(v12);
	}
	else
	{
		v13 = 0i64;
		v97 = 0i64;
	}
	v14 = *v8;
	v95 = 0i64;
	v15 = 0.0;
	v16 = (*(double(__fastcall**)(__int64*))(v14 + 96))(v8);
	v17 = 0;
	v114 = 0;
	v18 = *(float*)&v16;
	v19 = a6;
	while (1)
	{
		v20 = a5;
		if (v17)
		{
			if (v91)
			{
				v25 = v90;
			}
			else
			{
				v28 = (*(double(__fastcall**)(__int64*, __int64))(*v8 + 104))(v8, 1i64);
				v25 = *(float*)&v28 == (*(float(__fastcall**)(__int64*, _QWORD))(*v8 + 104))(v8, 0i64);
			}
			v94 = v25;
		}
		else
		{
			v21 = (*(__int64(__fastcall**)(__int64*))(*v8 + 24))(v8);
			v22 = (*(__int64(__fastcall**)(__int64*))(*v8 + 16))(v8);
			*(__int64*)((char*)v13 + 12) = v21;
			*((_DWORD*)v13 + 2) = v22;
			v13[4] = 0i64;
			sub_1407A4640((__int64)v13);
			if (v20)
			{
				v23 = *v8;
				v113 = 0.0;
				if ((unsigned __int64)(*(__int64(__fastcall**)(__int64*))(v23 + 32))(v8) < 2)
					goto LABEL_66;
				v24 = sub_1407A6510((__int64)v13, v8, v20, &v94, (unsigned int*)&v113);
				if (v24 < 0)
					goto LABEL_63;
				v25 = v94;
				v26 = (*(float(__fastcall**)(__int64*, __int64))(*v8 + 104))(v8, v94);
				v15 = v15 + (float)((float)(v26 * v18) + v113);
				v27 = (*(__int64(__fastcall**)(__int64*))(*v13 + 32))(v13);
				v17 = v114;
				v95 = v27;
			}
			else
			{
				v17 = v114;
				v25 = 0i64;
				v94 = 0i64;
			}
		}
		v29 = v6[1] - 1i64;
		v93 = (__m128*)v17;
		if (v17 != v29)
			break;
		v30 = *v8;
		if (v19)
		{
			v32 = *v8;
			v33 = (*(__int64(__fastcall**)(__int64*))(v30 + 32))(v8);
			v34 = (*(double(__fastcall**)(__int64*, __int64))(v32 + 104))(v8, v33 - 1);
			v35 = *v8;
			v36 = *(float*)&v34;
			v37 = (*(__int64(__fastcall**)(__int64*))(*v8 + 32))(v8);
			*(float*)&v34 = (*(float(__fastcall**)(__int64*, __int64))(v35 + 104))(v8, v37 - 2);
			v38 = *v8;
			if (v36 == *(float*)&v34)
				v31 = (*(__int64(__fastcall**)(__int64*))(v38 + 32))(v8) - 3;
			else
				v31 = (*(__int64(__fastcall**)(__int64*))(v38 + 32))(v8) - 2;
			goto LABEL_39;
		}
		v31 = (*(__int64(__fastcall**)(__int64*))(v30 + 32))(v8) - 1;
	LABEL_40:
		v48 = v25;
		v49 = v15 - (float)((*(float(__fastcall**)(__int64*, unsigned __int64))(*v8 + 104))(v8, v25) * v18);
		if (v25 <= v31)
		{
			v92 = (__m128*)(v13 + 3);
			do
			{
				v50 = (*(__int64(__fastcall**)(__int64*, unsigned __int64))(*v8 + 64))(v8, v48);
				if (v48 == v25 && v17)
				{
					v50 = 98;
				}
				else if (v48 != v31 || v17 == v96 - 1)
				{
					if ((unsigned int)(v50 - 98) <= 1)
						v50 = 0;
				}
				else
				{
					v50 = 99;
				}
				v51 = (*(double(__fastcall**)(__int64*, unsigned __int64))(*v8 + 56))(v8, v48);
				v52 = LODWORD(v51);
				v53 = (__int128*)(*(__int64(__fastcall**)(__int64*, unsigned __int64))(*v8 + 48))(v8, v48);
				v54 = (__int128*)(*(__int64(__fastcall**)(__int64*, unsigned __int64))(*v8 + 40))(v8, v48);
				*(float*)&v51 = (*(float(__fastcall**)(__int64*, unsigned __int64))(*v8 + 104))(v8, v48);
				v55 = *v54;
				v56 = *v53;
				v108 = v52;
				v57 = v95;
				v109 = v50;
				v106[0] = v55;
				v106[4] = v56;
				v107 = (float)(*(float*)&v51 * v18) + v49;
				v110 = 0;
				sub_1407A7140((__int64*)v92, v95, (__int64)v106);
				v13 = v97;
				sub_1407A4640((__int64)v97);
				++v48;
				v95 = v57 + 1;
				v17 = v114;
			} while (v48 <= v31);
			v6 = a2;
		}
		v15 = v49 + (float)((*(float(__fastcall**)(__int64*, unsigned __int64))(*v8 + 104))(v8, v31) * v18);
		if (v93 == (__m128*)(v6[1] - 1i64))
		{
			v19 = a6;
			if (a6)
			{
				v88 = (*(double(__fastcall**)(__int64*, unsigned __int64))(*v8 + 104))(v8, v31 + 1);
				v89 = *(float*)&v88;
				*(float*)&v88 = (*(float(__fastcall**)(__int64*, unsigned __int64))(*v8 + 104))(v8, v31);
				v24 = sub_1407A6A60(v13, (__int64)v8, v19, v31 + 1, (float)((float)(v89 - *(float*)&v88) * v18) + v15);
				if (v24 < 0)
					goto LABEL_63;
			}
		}
		else
		{
			v58 = v99;
			v59 = (*(double(__fastcall**)(__int64))(*(_QWORD*)v99 + 96i64))(v99);
			v60 = *(float*)&v59;
			v61 = (__m128*)(*(__int64(__fastcall**)(__int64*, unsigned __int64))(*v8 + 40))(v8, v31 - 1);
			v62 = *v8;
			v93 = v61;
			v63 = (__m128*)(*(__int64(__fastcall**)(__int64*, unsigned __int64))(v62 + 40))(v8, v31);
			v64 = (__m128*)(*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)v58 + 40i64))(v58, v90);
			v65 = (__int64*)(*(__int64(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)v58 + 40i64))(v58, v90 + 1);
			v66 = *v8;
			v92 = (__m128*)v65;
			v67 = (*(double(__fastcall**)(__int64*, unsigned __int64))(v66 + 104))(v8, v31);
			v68 = *(float*)&v67;
			v69 = (*(double(__fastcall**)(__int64*, unsigned __int64))(*v8 + 104))(v8, v31 - 1);
			v70 = (float)(v68 - *(float*)&v69) * v18;
			v71 = (*(double(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)v58 + 104i64))(v58, v90 + 1);
			v72 = (float)(*(float*)&v71
				- (*(float(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)v58 + 104i64))(v58, v90))
				* v60;
			if ((*(unsigned int(__fastcall**)(__int64*))(*v13 + 24))(v13) == 1)
			{
				v73 = (__m128*)(*(__int64(__fastcall**)(__int64*, unsigned __int64))(*v8 + 40))(v8, v31 - 2);
				(*(void(__fastcall**)(__int64, unsigned __int64))(*(_QWORD*)v58 + 40i64))(v58, v90 + 2);
				sub_1407A5A60(v73, v93, v63, &v100, 0i64);
				sub_1407A5A60(v74, v63, v64, &v104, &v105);
				v75 = v92;
				sub_1407A5A60(v63, v64, v92, &v101, &v102);
				sub_1407A5A60(v64, v75, v76, 0i64, &v103);
				LODWORD(v78) = sub_1407A5810(v77, &v100, v63, &v105, 0.0, 0i64, 1.0, 0i64, 0.0).m128_u32[0];
				LODWORD(v79) = sub_1407A5810(v64, &v101, v75, &v103, 0.0, 0i64, 1.0, 0i64, 0.0).m128_u32[0];
				LODWORD(v80) = sub_1407A5810(v63, &v104, v64, &v102, 0.0, 0i64, 1.0, 0i64, 0.0).m128_u32[0];
			}
			else
			{
				v81 = _mm_sub_ps(*v63, *v93);
				v82 = _mm_mul_ps(v81, v81);
				v83 = _mm_sub_ps(*v92, *v64);
				v84 = _mm_sub_ps(*v64, *v63);
				v78 = fsqrt(
					(float)(v82.m128_f32[0] + _mm_shuffle_ps(v82, v82, 85).m128_f32[0])
					+ _mm_shuffle_ps(v82, v82, 170).m128_f32[0]);
				v85 = _mm_mul_ps(v84, v84);
				v86 = _mm_mul_ps(v83, v83);
				v79 = fsqrt(
					(float)(v86.m128_f32[0] + _mm_shuffle_ps(v86, v86, 85).m128_f32[0])
					+ _mm_shuffle_ps(v86, v86, 170).m128_f32[0]);
				v80 = fsqrt(
					(float)(v85.m128_f32[0] + _mm_shuffle_ps(v85, v85, 85).m128_f32[0])
					+ _mm_shuffle_ps(v85, v85, 170).m128_f32[0]);
			}
			v87 = v79 + v78;
			if (v87 > 0.0)
				v15 = v15 + (float)((float)((float)(v72 + v70) * v80) / v87);
			v19 = a6;
			v8 = (__int64*)v58;
			v6 = a2;
			v18 = v60;
		}
		v17 = ++v114;
		if (v114 >= v96)
		{
			v24 = 0;
			*a1 = v13;
			goto LABEL_63;
		}
	}
	v39 = *(_QWORD*)(*v6 + 8i64 * (v17 + 1));
	v99 = v39;
	if (v39 && (unsigned __int64)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v39 + 32i64))(v39) >= 4)
	{
		if ((*(unsigned int(__fastcall**)(__int64*, __int64, unsigned __int64*, unsigned __int64))(*v8 + 72))(
			v8,
			99i64,
			&v98,
			v25 + 1))
		{
			if (v98 >= 2)
			{
				if ((*(unsigned int(__fastcall**)(__int64, __int64, unsigned __int64*))(*(_QWORD*)v39 + 72i64))(
					v39,
					98i64,
					&v90))
				{
					v40 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v39 + 32i64))(v39);
					if (v90 + 2 < v40)
					{
						v31 = v98;
						v6 = a2;
						v91 = 1;
						goto LABEL_40;
					}
				}
			}
		}
		v41 = *v8;
		v91 = 0;
		v42 = (*(__int64(__fastcall**)(__int64*))(v41 + 32))(v8);
		v43 = (*(double(__fastcall**)(__int64*, __int64))(v41 + 104))(v8, v42 - 2);
		v44 = *v8;
		v45 = *(float*)&v43;
		v46 = (*(__int64(__fastcall**)(__int64*))(*v8 + 32))(v8);
		*(float*)&v43 = (*(float(__fastcall**)(__int64*, __int64))(v44 + 104))(v8, v46 - 1);
		v47 = *v8;
		if (v45 == *(float*)&v43)
			v31 = (*(__int64(__fastcall**)(__int64*))(v47 + 32))(v8) - 2;
		else
			v31 = (*(__int64(__fastcall**)(__int64*))(v47 + 32))(v8) - 1;
		v6 = a2;
		v90 = 1i64;
	LABEL_39:
		v17 = v114;
		goto LABEL_40;
	}
LABEL_66:
	v24 = -2147467259;
LABEL_63:
	if (v13)
		(*(void(__fastcall**)(__int64*))(*v13 + 8))(v13);
	return (unsigned int)v24;
}
// 1407A5D1D: conditional instruction was optimized away because r14.8!=0
// 1407A624F: variable 'v74' is possibly undefined
// 1407A6289: variable 'v76' is possibly undefined
// 1407A62BB: variable 'v77' is possibly undefined

