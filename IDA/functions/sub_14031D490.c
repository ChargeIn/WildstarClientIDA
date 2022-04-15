#include "../winhttp.h"

//----- (000000014031D490) ----------------------------------------------------
__int64 __fastcall sub_14031D490(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	int v5; // eax
	__int64 v6; // rcx
	int v7; // edx
	unsigned int v8; // ebp
	int v9; // r8d
	unsigned int v10; // esi
	int v11; // edx
	int v12; // edx
	__int64 v13; // r9
	unsigned __int8 v14; // al
	unsigned int v15; // eax
	int v16; // eax
	float v17; // xmm1_4
	__int16 v18; // ax
	int v19; // ebx
	unsigned int v20; // ebx
	unsigned int v21; // edx
	float v22; // xmm1_4
	__int64 v23; // rax
	__int64 v24; // rax
	int v25; // ebx
	__int64 v26; // rcx
	unsigned int v27; // ebp
	int v28; // eax
	int v29; // edx
	__int64 v30; // rdx
	__int64 v31; // rcx
	unsigned __int64 v32; // rdx
	unsigned __int64 v33; // rbp
	unsigned int i; // r9d
	__int64 v35; // r8
	int v36; // r8d
	int v37; // r9d
	int v38; // eax
	int v39; // edx
	__int64 v40; // rcx
	__int64 v41; // r10
	int v42; // eax
	__int64 v43; // rdx
	__m128* v44; // r10
	int v45; // eax
	__int64* v46; // rbx
	__int64 v47; // rdx
	__int64 v48; // r8
	float v49; // xmm3_4
	__int64 v50; // r10
	__int64 v51; // r9
	__int64 v52; // rcx
	__m128 v53; // xmm2
	__m128 v54; // xmm1
	float v55; // xmm0_4
	__int64* v56; // rbx
	unsigned int v57; // r9d
	float v58; // xmm5_4
	__int64 v59; // r10
	float v60; // xmm1_4
	__int64 v61; // r8
	__m128 v62; // xmm4
	__m128 v63; // xmm1
	__int64 v64; // rax
	float v65; // xmm0_4
	__int64* v66; // rbx
	unsigned int v67; // r10d
	float v68; // xmm5_4
	__int64 v69; // r11
	__int64 v70; // r9
	__int64 v71; // r8
	__int64 v72; // rdx
	__int64 v73; // rax
	__m128 v74; // xmm4
	__m128 v75; // xmm1
	float v76; // xmm0_4
	__int64 v77; // rdx
	int v78; // eax
	__int64 v79; // rcx
	float v80; // xmm1_4
	__int64 v81; // rax
	float v82; // xmm2_4
	float v83; // xmm0_4
	float v84; // xmm2_4
	__m128 v85; // [rsp+40h] [rbp-68h] BYREF
	__m128 v86; // [rsp+50h] [rbp-58h] BYREF

	*(_QWORD*)(a1 + 1256) = *(_QWORD*)(a3 + 152);
	result = sub_14032F6F0(a1, a2, (unsigned __int16*)a3);
	if ((int)result < 0)
		return result;
	v5 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64) + 208i64);
	v6 = *(_QWORD*)(a1 + 8);
	*(_DWORD*)(a1 + 1348) = 0;
	*(_DWORD*)(a1 + 1408) = v5;
	*(_DWORD*)(a1 + 1336) = v5;
	v7 = *(_DWORD*)(v6 + 28);
	v8 = 4;
	v9 = 2;
	v10 = 1;
	if (!v7)
	{
		*(_DWORD*)(a1 + 1356) = 1;
		*(_QWORD*)(a1 + 1364) = 5i64;
	LABEL_10:
		*(_DWORD*)(a1 + 1360) = 4;
		goto LABEL_11;
	}
	v11 = v7 - 1;
	if (v11)
	{
		v12 = v11 - 1;
		if (v12)
		{
			if (v12 == 1)
			{
				*(_DWORD*)(a1 + 1356) = 0;
				*(_DWORD*)(a1 + 1360) = 8;
				*(_QWORD*)(a1 + 1364) = 2i64;
			}
			goto LABEL_11;
		}
		*(_DWORD*)(a1 + 1356) = 0;
		*(_QWORD*)(a1 + 1364) = 1i64;
		goto LABEL_10;
	}
	*(_DWORD*)(a1 + 1356) = 0;
	*(_QWORD*)(a1 + 1360) = 8i64;
	*(_DWORD*)(a1 + 1368) = 0;
LABEL_11:
	v13 = *(_QWORD*)(a1 + 1256);
	v14 = *(_BYTE*)(v13 + 4);
	if (v14)
	{
		if (v14 <= 2u)
		{
			v15 = *(_DWORD*)(v13 + 8);
			*(_DWORD*)(a1 + 1372) = v15;
			if (v15 < 2)
				return 2147942487i64;
		}
		else if (v14 == 4)
		{
			*(_DWORD*)(a1 + 1372) = 4;
		}
		else
		{
			*(_DWORD*)(a1 + 1372) = *(unsigned __int16*)(v13 + 36);
		}
	}
	else
	{
		*(_DWORD*)(a1 + 1372) = 1;
	}
	v16 = *(_DWORD*)(a1 + 1372);
	if (v16 == 1)
		v17 = 1000000.0;
	else
		v17 = 1.0 / (float)(v16 - 1);
	*(float*)(a1 + 1536) = v17;
	if (*(_BYTE*)v13)
	{
		v18 = *(_WORD*)(v13 + 2);
		if ((v18 & 1) == 0)
			*(_WORD*)(v13 + 2) = v18 + 1;
		if (*(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 2i64) + 1 > 2)
			v9 = *(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 2i64) + 1;
	}
	else
	{
		v9 = 2
			* (*(unsigned __int16*)(v13 + 38)
				* ((*(unsigned __int16*)(v13 + 2) + 999)
					/ *(unsigned __int16*)(v13 + 2))
				/ 1000)
			+ 32;
	}
	v19 = *(_DWORD*)(a1 + 1372);
	*(_DWORD*)(a1 + 1312) = v9;
	v20 = 16 * (v19 + 7);
	*(_DWORD*)(a1 + 1316) = v20;
	*(_QWORD*)(a1 + 1304) = sub_14018B280(v9 * v20, 0);
	*(_QWORD*)(a1 + 1324) = 0i64;
	*(_DWORD*)(a1 + 1320) = 0;
	*(_QWORD*)(a1 + 1416) = sub_14018B280(v20, 0);
	*(_QWORD*)(a1 + 1424) = sub_14018B280(v20, 0);
	*(_OWORD*)(*(_QWORD*)(a1 + 1416) + 32i64) = *(_OWORD*)(a1 + 448);
	*(_OWORD*)(*(_QWORD*)(a1 + 1416) + 48i64) = *(_OWORD*)(a1 + 608);
	*(_DWORD*)(*(_QWORD*)(a1 + 1416) + 4i64) = *(_DWORD*)(a1 + 848);
	*(_DWORD*)(*(_QWORD*)(a1 + 1416) + 8i64) = *(_DWORD*)(a1 + 1008);
	*(_DWORD*)(*(_QWORD*)(a1 + 1416) + 24i64) = *(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 38i64);
	*(_DWORD*)(*(_QWORD*)(a1 + 1416) + 20i64) = *(_DWORD*)(a1 + 1336);
	*(_OWORD*)(*(_QWORD*)(a1 + 1424) + 32i64) = *(_OWORD*)(a1 + 576);
	*(_OWORD*)(*(_QWORD*)(a1 + 1424) + 48i64) = *(_OWORD*)(a1 + 736);
	*(_DWORD*)(*(_QWORD*)(a1 + 1424) + 4i64) = *(_DWORD*)(a1 + 912);
	*(_DWORD*)(*(_QWORD*)(a1 + 1424) + 8i64) = *(_DWORD*)(a1 + 1072);
	*(_DWORD*)(*(_QWORD*)(a1 + 1424) + 24i64) = 0;
	*(_DWORD*)(*(_QWORD*)(a1 + 1424) + 20i64) = *(_DWORD*)(a1 + 1336);
	v21 = *(_DWORD*)(a1 + 1372);
	v22 = 0.0;
	if (v21 >= 2)
		v22 = (float)(*(_DWORD*)(*(_QWORD*)(a1 + 1256) + 8i64) - 3) / (float)(int)(v21 - 1);
	v23 = *(_QWORD*)(a1 + 1256);
	*(float*)(a1 + 1352) = v22;
	if (*(_BYTE*)(v23 + 4) != 4)
		v8 = *(_DWORD*)(v23 + 8);
	sub_1402626B0((__int64*)(a1 + 1568), v8);
	sub_1402626B0((__int64*)(a1 + 1584), v8);
	sub_1402626B0((__int64*)(a1 + 1600), v8);
	sub_1402626B0((__int64*)(a1 + 1616), v8);
	sub_1402626B0((__int64*)(a1 + 1632), v8);
	v24 = *(_QWORD*)(a1 + 1256);
	*(_QWORD*)(a1 + 1696) = 0i64;
	if (*(_BYTE*)v24 == 1)
	{
		v25 = 0;
		if (*(_WORD*)(v24 + 2))
		{
			do
			{
				v26 = *(_QWORD*)(a1 + 1256);
				v27 = v25 + 1;
				v85 = 0i64;
				sub_14031E520(
					a1,
					a1 + 1584,
					&v85,
					(v25 + 1) * (unsigned int)*(unsigned __int16*)(v26 + 38) / *(unsigned __int16*)(v26 + 2));
				v28 = *(_DWORD*)(a1 + 1324);
				if (!v28)
					v28 = *(_DWORD*)(a1 + 1312);
				v29 = *(_DWORD*)(a1 + 1336) - v25++;
				*(_DWORD*)((unsigned int)(*(_DWORD*)(a1 + 1316) * (v28 - 1)) + *(_QWORD*)(a1 + 1304) + 20i64) = v29 - 1;
			} while (v27 < *(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 2i64));
		}
		*(_DWORD*)(*(_QWORD*)(a1 + 1424) + 20i64) = *(_DWORD*)(a1 + 1336)
			- *(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 2i64)
			- 1;
		sub_1402626B0((__int64*)(a1 + 1488), *(unsigned int*)(a1 + 1372));
		sub_1402626B0((__int64*)(a1 + 1504), *(unsigned int*)(a1 + 1372));
	}
	v30 = *(_QWORD*)(a1 + 1256);
	if (*(_BYTE*)(v30 + 4) == 1)
	{
		v66 = (__int64*)(a1 + 1376);
		sub_140052360((__int64*)(a1 + 1376), *(unsigned int*)(a1 + 1372));
		v67 = 1;
		v68 = 0.0;
		**(_DWORD**)(a1 + 1376) = 0;
		if (*(_DWORD*)(a1 + 1372) > 1u)
		{
			v69 = *v66;
			do
			{
				v70 = v67;
				v71 = *(_QWORD*)(*(_QWORD*)(a1 + 1256) + 16i64);
				v72 = 3i64 * v67;
				v73 = 3i64 * (v67++ - 1);
				v74 = _mm_sub_ps(
					_mm_unpacklo_ps(
						_mm_unpacklo_ps(
							(__m128) * (unsigned int*)(v71 + 4 * v73),
							(__m128) * (unsigned int*)(v71 + 4 * v73 + 8)),
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v71 + 4 * v73 + 4), (__m128)0i64)),
					_mm_unpacklo_ps(
						_mm_unpacklo_ps(
							(__m128) * (unsigned int*)(v71 + 4 * v72),
							(__m128) * (unsigned int*)(v71 + 4 * v72 + 8)),
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v71 + 4 * v72 + 4), (__m128)0i64)));
				v75 = _mm_mul_ps(v74, v74);
				*(float*)(v69 + 4 * v70) = fsqrt(
					(float)(v75.m128_f32[0] + _mm_shuffle_ps(v75, v75, 85).m128_f32[0])
					+ _mm_shuffle_ps(v75, v75, 170).m128_f32[0]);
				v69 = *v66;
				v68 = v68 + *(float*)(*v66 + 4 * v70);
			} while (v67 < *(_DWORD*)(a1 + 1372));
			if (*(_DWORD*)(a1 + 1372) > 1u)
			{
				do
				{
					if (v68 == 0.0)
						v76 = 0.0;
					else
						v76 = (float)(*(float*)(*v66 + 4i64 * v10) / v68) + *(float*)(*v66 + 4i64 * (v10 - 1));
					v31 = v10++;
					*(float*)(*v66 + 4 * v31) = v76;
				} while (v10 < *(_DWORD*)(a1 + 1372));
			}
		}
	}
	else if (*(_BYTE*)(v30 + 4) == 2)
	{
		v56 = (__int64*)(a1 + 1376);
		sub_140052360((__int64*)(a1 + 1376), *(unsigned int*)(a1 + 1372));
		v57 = 1;
		v58 = 0.0;
		**(_DWORD**)(a1 + 1376) = 0;
		if (*(_DWORD*)(a1 + 1372) > 1u)
		{
			v59 = *v56;
			do
			{
				v60 = 0.0;
				if ((v57 & 1) != 0)
				{
					v61 = *(_QWORD*)(*(_QWORD*)(a1 + 1256) + 16i64);
					v62 = _mm_sub_ps(
						_mm_unpacklo_ps(
							_mm_unpacklo_ps(
								(__m128) * (unsigned int*)(v61 + 12i64 * (v57 - 1)),
								(__m128) * (unsigned int*)(v61 + 12i64 * (v57 - 1) + 8)),
							_mm_unpacklo_ps((__m128) * (unsigned int*)(v61 + 12i64 * (v57 - 1) + 4), (__m128)0i64)),
						_mm_unpacklo_ps(
							_mm_unpacklo_ps(
								(__m128) * (unsigned int*)(v61 + 12i64 * v57),
								(__m128) * (unsigned int*)(v61 + 12i64 * v57 + 8)),
							_mm_unpacklo_ps((__m128) * (unsigned int*)(v61 + 12i64 * v57 + 4), (__m128)0i64)));
					v63 = _mm_mul_ps(v62, v62);
					v60 = fsqrt(
						(float)(v63.m128_f32[0] + _mm_shuffle_ps(v63, v63, 85).m128_f32[0])
						+ _mm_shuffle_ps(v63, v63, 170).m128_f32[0]);
				}
				v64 = v57++;
				*(float*)(v59 + 4 * v64) = v60;
				v59 = *v56;
				v58 = v58 + *(float*)(*v56 + 4 * v64);
			} while (v57 < *(_DWORD*)(a1 + 1372));
			if (*(_DWORD*)(a1 + 1372) > 1u)
			{
				do
				{
					if (v58 == 0.0)
						v65 = 0.0;
					else
						v65 = (float)(*(float*)(*v56 + 4i64 * v10) / v58) + *(float*)(*v56 + 4i64 * (v10 - 1));
					v31 = v10++;
					*(float*)(*v56 + 4 * v31) = v65;
				} while (v10 < *(_DWORD*)(a1 + 1372));
			}
		}
	}
	else
	{
		v31 = (unsigned int)*(unsigned __int8*)(v30 + 4) - 3;
		if (*(_BYTE*)(v30 + 4) == 3)
		{
			v32 = *(unsigned int*)(v30 + 8);
			v85 = 0ui64;
			sub_1402626B0((__int64*)&v85, v32);
			v33 = v85.m128_u64[0];
			for (i = 0;
				i < *(_DWORD*)(*(_QWORD*)(a1 + 1256) + 8i64);
				*(__m128*)(v33 + 16 * v35) = _mm_unpacklo_ps(
					_mm_unpacklo_ps(
						(__m128) * (unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 1256) + 16i64)
							+ 12 * v35),
						(__m128) * (unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 1256) + 16i64)
							+ 12 * v35
							+ 8)),
					_mm_unpacklo_ps(
						(__m128) * (unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 1256) + 16i64)
							+ 12 * v35
							+ 4),
						(__m128)0i64)))
			{
				v35 = i++;
			}
			v36 = *(_DWORD*)(a1 + 1324);
			v37 = *(unsigned __int16*)(*(_QWORD*)(a1 + 1256) + 38i64);
			v38 = v36;
			v86 = 0i64;
			if (!v36)
				v38 = *(_DWORD*)(a1 + 1312);
			v39 = *(_DWORD*)(a1 + 1316);
			v40 = *(_QWORD*)(a1 + 1304);
			v41 = (unsigned int)(v39 * (v38 - 1));
			v42 = v36 + 1;
			*(_DWORD*)(a1 + 1324) = v36 + 1;
			v43 = v40 + (unsigned int)(v36 * v39);
			v44 = (__m128*)(v40 + v41);
			if (v36 + 1 == *(_DWORD*)(a1 + 1312))
				v42 = 0;
			*(_DWORD*)(a1 + 1324) = v42;
			v45 = *(_DWORD*)(a1 + 1328);
			if (v45 == *(_DWORD*)(a1 + 1312))
				*(_DWORD*)(a1 + 1320) = *(_DWORD*)(a1 + 1324);
			else
				*(_DWORD*)(a1 + 1328) = v45 + 1;
			sub_14031E170(a1, v43, v44, (__int64)&v85, &v86, v37, 1);
			v46 = (__int64*)(a1 + 1376);
			sub_140052360((__int64*)(a1 + 1376), *(unsigned int*)(a1 + 1372));
			v48 = 1i64;
			v49 = 0.0;
			**(_DWORD**)(a1 + 1376) = 0;
			v50 = *(_QWORD*)(a1 + 1304);
			if (*(_DWORD*)(a1 + 1372) > 1u)
			{
				v51 = *v46;
				do
				{
					v47 = (unsigned int)v48;
					v52 = (unsigned int)(v48 - 1);
					v48 = (unsigned int)(v48 + 1);
					v31 = 2 * (v52 + 7);
					v53 = _mm_sub_ps(*(__m128*)(v50 + 8 * v31), *(__m128*)(v50 + 16 * (v47 + 7)));
					v54 = _mm_mul_ps(v53, v53);
					*(float*)(v51 + 4 * v47) = fsqrt(
						(float)(v54.m128_f32[0] + _mm_shuffle_ps(v54, v54, 85).m128_f32[0])
						+ _mm_shuffle_ps(v54, v54, 170).m128_f32[0]);
					v51 = *v46;
					v49 = v49 + *(float*)(*v46 + 4 * v47);
				} while ((unsigned int)v48 < *(_DWORD*)(a1 + 1372));
				if (*(_DWORD*)(a1 + 1372) > 1u)
				{
					do
					{
						if (v49 == 0.0)
						{
							v55 = 0.0;
						}
						else
						{
							v47 = *v46;
							v55 = (float)(*(float*)(*v46 + 4i64 * v10) / v49) + *(float*)(*v46 + 4i64 * (v10 - 1));
						}
						v31 = v10++;
						*(float*)(*v46 + 4 * v31) = v55;
					} while (v10 < *(_DWORD*)(a1 + 1372));
				}
			}
			*(_QWORD*)(a1 + 1324) = 0i64;
			*(_DWORD*)(a1 + 1320) = 0;
			if (v33)
				(*(void(__fastcall**)(unsigned __int64, __int64, __int64))(*(_QWORD*)(v33 - 16) + 8i64))(v33 - 16, v47, v48);
		}
	}
	sub_14032F8B0(
		v31,
		(_DWORD*)(a1 + 1264),
		*(_DWORD*)(*(_QWORD*)(a1 + 1256) + 40i64) & 0x80,
		*(_DWORD*)(*(_QWORD*)(a1 + 1256) + 40i64) & 0x100,
		*(float*)(*(_QWORD*)(a1 + 1256) + 968i64));
	v77 = *(_QWORD*)(a1 + 1256);
	v78 = 24;
	if (*(_WORD*)(v77 + 1028))
		v78 = 36;
	v79 = *(_QWORD*)(a1 + 56);
	*(_DWORD*)(a1 + 1432) = v78;
	v80 = 100000.0;
	*(_DWORD*)(a1 + 1404) = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v79 + 64i64))(
		v79,
		*(unsigned int*)(v77 + 992),
		*(unsigned int*)(v77 + 996));
	v81 = *(_QWORD*)(a1 + 1256);
	v82 = *(float*)(v81 + 948);
	if (v82 == 0.0)
		v83 = 100000.0;
	else
		v83 = 1.0 / v82;
	*(float*)(a1 + 1528) = v83;
	v84 = *(float*)(v81 + 952);
	if (v84 != 0.0)
		v80 = 1.0 / v84;
	*(float*)(a1 + 1532) = v80;
	return 0i64;
}
// 14031DB63: variable 'v47' is possibly undefined
// 14031DDC5: variable 'v31' is possibly undefined

