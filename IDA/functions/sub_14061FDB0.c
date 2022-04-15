#include "../winhttp.h"

//----- (000000014061FDB0) ----------------------------------------------------
__int64 __fastcall sub_14061FDB0(__int64 a1)
{
	bool v2; // zf
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // r8
	float v7; // xmm6_4
	unsigned int v8; // r14d
	int v9; // ecx
	int v10; // ecx
	int v11; // r15d
	__int64 v12; // rcx
	__int64 v13; // rdi
	unsigned int v14; // ebx
	__int64 v15; // r8
	int v16; // ecx
	int v17; // ecx
	unsigned int v18; // edx
	int v19; // eax
	__int64 v20; // rcx
	int v21; // eax
	unsigned int v22; // eax
	__int64 v23; // rcx
	__int64 v24; // rcx
	void(__fastcall * v25)(__int64, __int64, __int64, int, int, __int64); // rbx
	float v26; // eax
	__int64 v27; // rcx
	int v28; // edx
	__int128 v29; // xmm0
	__m128 v30; // xmm1
	__m128 v31; // xmm2
	float v32; // xmm2_4
	float v33; // xmm0_4
	__int64 v34; // rcx
	__int64 v35; // rax
	__int64 v36; // r9
	__int128 v37; // xmm1
	__int64 v38; // rax
	_DWORD* v39; // rcx
	__int64 v40; // rax
	__int64 v41; // r9
	__int128 v42; // xmm1
	int v43; // ebx
	int v45; // ecx
	__int64 v46; // rax
	__int64 v47; // rbx
	int* v48; // rax
	unsigned int v49; // r8d
	int v50; // edx
	float v51; // xmm1_4
	int v52; // edx
	__int64 v53; // rcx
	__int64 v54; // rcx
	__m128 v55; // xmm3
	__m128 v56; // xmm6
	__int32 v57; // eax
	__int32 v58; // eax
	__m128 v59; // xmm1
	float v60; // xmm2_4
	__m128 v61; // xmm1
	float v62; // xmm0_4
	__m128i v63; // xmm1
	__m128 v64; // xmm3
	__m128 v65; // xmm1
	float v66; // xmm2_4
	__m128 v67; // xmm1
	float v68; // xmm0_4
	__m128i v69; // xmm1
	__m128 v70; // xmm3
	__m128 v71; // xmm2
	float v72; // xmm0_4
	__m128i v73; // xmm6
	__m128* v74; // rdx
	double v75; // xmm7_8
	__m128* v76; // rbx
	float v77; // xmm6_4
	unsigned int v78; // xmm0_4
	__int64 v79; // rax
	__int64 v80; // rbx
	unsigned int v81; // xmm6_4
	unsigned int v82; // eax
	__int64 v83; // rbx
	double v84; // xmm6_8
	float v85; // xmm7_4
	float v86; // xmm0_4
	__int64 v87; // rax
	__int64 v88; // rax
	__int64 v89; // rcx
	__m256i v90; // [rsp+48h] [rbp-C0h] BYREF
	__m256i v91; // [rsp+68h] [rbp-A0h]
	__int64(__fastcall * *TlsValue)(); // [rsp+88h] [rbp-80h] BYREF
	__int128 v93; // [rsp+90h] [rbp-78h]
	__int64* v94; // [rsp+A0h] [rbp-68h] BYREF
	__m128* v95; // [rsp+A8h] [rbp-60h]
	__m256i v96; // [rsp+B8h] [rbp-50h] BYREF
	__m256i v97; // [rsp+D8h] [rbp-30h]
	__int128 v98; // [rsp+F8h] [rbp-10h]
	__m128 v99[4]; // [rsp+108h] [rbp+0h] BYREF
	__int64 v100; // [rsp+148h] [rbp+40h]
	__m128* v101[10]; // [rsp+158h] [rbp+50h] BYREF

	if (*(_DWORD*)(a1 + 676) || *(_DWORD*)(a1 + 684))
		return 0i64;
	v2 = *(_DWORD*)(a1 + 968) == 3;
	*(_DWORD*)(a1 + 672) = 0;
	v3 = *(_QWORD*)(a1 + 48);
	if (v2)
	{
		(*(void(__fastcall**)(__int64, __int64(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(*(_QWORD*)v3 + 648i64))(
			v3,
			sub_140623460,
			a1);
		(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 48) + 728i64))(
			*(_QWORD*)(a1 + 48),
			61i64,
			1i64);
		(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 48) + 728i64))(
			*(_QWORD*)(a1 + 48),
			62i64,
			1i64);
		(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 48) + 728i64))(
			*(_QWORD*)(a1 + 48),
			63i64,
			1i64);
		v4 = *(_QWORD*)(a1 + 48);
	LABEL_9:
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 728i64))(v4, 64i64);
		goto LABEL_10;
	}
	if (v3)
	{
		(*(void(__fastcall**)(__int64, void(__fastcall*)(__int64*, __int64, __int64, int, int, __int64), __int64))(*(_QWORD*)v3 + 648i64))(
			v3,
			sub_140622CD0,
			a1);
		(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 48) + 728i64))(
			*(_QWORD*)(a1 + 48),
			61i64,
			1i64);
		(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 48) + 728i64))(
			*(_QWORD*)(a1 + 48),
			62i64,
			1i64);
		(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 48) + 728i64))(
			*(_QWORD*)(a1 + 48),
			63i64,
			1i64);
		(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 48) + 728i64))(
			*(_QWORD*)(a1 + 48),
			64i64,
			1i64);
	}
	v5 = *(_QWORD*)(a1 + 96);
	if (v5)
	{
		(*(void(__fastcall**)(__int64, void(__fastcall*)(__int64*, __int64, __int64, int, int, __int64), __int64))(*(_QWORD*)v5 + 648i64))(
			v5,
			sub_140622CD0,
			a1);
		(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 96) + 728i64))(
			*(_QWORD*)(a1 + 96),
			61i64,
			1i64);
		(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 96) + 728i64))(
			*(_QWORD*)(a1 + 96),
			62i64,
			1i64);
		(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 96) + 728i64))(
			*(_QWORD*)(a1 + 96),
			63i64,
			1i64);
		v4 = *(_QWORD*)(a1 + 96);
		goto LABEL_9;
	}
LABEL_10:
	v6 = *(_QWORD*)(a1 + 48);
	v7 = 1.0;
	v8 = 546;
	if (v6)
	{
		v9 = *(_DWORD*)(a1 + 968);
		if (v9 && (v10 = v9 - 2) != 0)
		{
			if (v10 == 1)
			{
				v11 = 150;
				if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 408i64))(v6, 1334i64))
					v11 = 1334;
			}
			else
			{
				v11 = 150;
			}
		}
		else if (*(float*)(a1 + 924) > 0.0000099999997
			&& (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 408i64))(v6, 546i64)
			&& (v12 = *(_QWORD*)(a1 + 72)) != 0
			&& (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v12 + 848i64))(v12, 67i64))
		{
			v11 = 546;
			v7 = (float)*(int*)((*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 48) + 424i64))(
				*(_QWORD*)(a1 + 48),
				546i64,
				0i64)
				+ 20)
				/ *(float*)(a1 + 924);
		}
		else
		{
			v11 = 150;
			if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 48) + 408i64))(
				*(_QWORD*)(a1 + 48),
				547i64))
			{
				v11 = 547;
			}
		}
		v13 = *(_QWORD*)(a1 + 48);
		v14 = *(_DWORD*)(a1 + 964);
		v90.m256i_i32[0] = v11;
		*(__int64*)((char*)&v90.m256i_i64[1] + 4) = v14;
		*(float*)&v90.m256i_i32[2] = v7;
		*(__int64*)((char*)&v90.m256i_i64[2] + 4) = 3i64;
		v90.m256i_i32[7] = 0;
		v90.m256i_i32[1] = sub_1401AE6F0(0, -1);
		(*(void(__fastcall**)(__int64, _QWORD, __m256i*))(*(_QWORD*)v13 + 584i64))(v13, 0i64, &v90);
	}
	v15 = *(_QWORD*)(a1 + 96);
	if (v15)
	{
		v16 = *(_DWORD*)(a1 + 968);
		if (v16 && (v17 = v16 - 2) != 0)
		{
			if (v17 == 1)
			{
				v19 = (*(__int64(__fastcall**)(_QWORD, __int64))(*(_QWORD*)v15 + 408i64))(*(_QWORD*)(a1 + 96), 1334i64);
				v18 = 150;
				if (v19)
					v18 = 1334;
			}
			else
			{
				v18 = 150;
			}
		}
		else if (*(float*)(a1 + 924) > 0.0000099999997
			&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(*(_QWORD*)v15 + 408i64))(*(_QWORD*)(a1 + 96), 546i64)
			&& (v20 = *(_QWORD*)(a1 + 72)) != 0
			&& (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v20 + 848i64))(v20, 67i64)
			&& *(float*)(a1 + 924) != 0.0)
		{
			v18 = 546;
		}
		else
		{
			v21 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 96) + 408i64))(*(_QWORD*)(a1 + 96), 547i64);
			v18 = 150;
			if (v21)
				v18 = 547;
		}
		v22 = *(_DWORD*)(a1 + 964);
		v23 = *(_QWORD*)(a1 + 96);
		v90.m256i_i64[0] = v18;
		*(__int64*)((char*)&v90.m256i_i64[1] + 4) = v22;
		v90.m256i_i32[2] = 1065353216;
		*(__int64*)((char*)&v90.m256i_i64[2] + 4) = 3i64;
		v90.m256i_i32[7] = 0;
		(*(void(__fastcall**)(__int64, _QWORD, __m256i*))(*(_QWORD*)v23 + 584i64))(v23, 0i64, &v90);
	}
	v24 = *(_QWORD*)(a1 + 56);
	if (v24)
	{
		if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v24 + 408i64))(v24, 546i64))
		{
			v25 = sub_140624AB0;
		}
		else if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 408i64))(
			*(_QWORD*)(a1 + 56),
			150i64))
		{
			v8 = 150;
			v25 = sub_140624AB0;
		}
		else
		{
			v8 = 2016;
			if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 408i64))(
				*(_QWORD*)(a1 + 56),
				2016i64))
			{
				v25 = sub_140624B60;
			}
			else
			{
				v8 = 2017;
				if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 408i64))(
					*(_QWORD*)(a1 + 56),
					2017i64))
				{
					v25 = sub_140624C10;
				}
				else if (*(_DWORD*)(a1 + 684)
					|| !(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 408i64))(
						*(_QWORD*)(a1 + 56),
						2017i64))
				{
					v8 = 2018;
					if ((*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 408i64))(
						*(_QWORD*)(a1 + 56),
						2018i64))
					{
						v25 = sub_140624A90;
					}
					else
					{
						v8 = 0;
						v25 = 0i64;
					}
				}
				else
				{
					v25 = sub_140624C10;
				}
			}
		}
		v26 = *(float*)(a1 + 964);
		v27 = *(_QWORD*)(a1 + 56);
		v90.m256i_i64[0] = v8;
		*(float*)&v90.m256i_i32[3] = v26;
		v90.m256i_i32[2] = 1065353216;
		*(_OWORD*)&v90.m256i_u64[2] = 0ui64;
		(*(void(__fastcall**)(__int64, _QWORD, __m256i*))(*(_QWORD*)v27 + 584i64))(v27, 0i64, &v90);
		(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 56) + 648i64))(
			*(_QWORD*)(a1 + 56),
			v25,
			a1);
	}
	v28 = *(_DWORD*)(a1 + 960);
	if (v28 != -1 && (*(_DWORD*)(a1 + 896) & 0x400) != 0 && v28 && (*(_DWORD*)(a1 + 968) == 3 || *(_QWORD*)(a1 + 56)))
	{
		v90.m256i_i32[0] = 0;
		v90.m256i_i64[1] = a1;
		v90.m256i_i64[2] = (__int64)sub_140623150;
		v90.m256i_i64[3] = 0i64;
		sub_140195960(a1 + 1144, v28, (__int64)&v90, 4);
	}
	sub_140622800(a1);
	*(_OWORD*)(a1 + 736) = *(_OWORD*)(a1 + 272);
	*(_OWORD*)(a1 + 752) = *(_OWORD*)(a1 + 288);
	*(_OWORD*)(a1 + 768) = *(_OWORD*)(a1 + 304);
	*(_OWORD*)(a1 + 784) = *(_OWORD*)(a1 + 320);
	sub_140621C30((__m128*)a1);
	v29 = *(_OWORD*)(a1 + 336);
	*(_OWORD*)(a1 + 464) = v29;
	*(_OWORD*)(a1 + 448) = v29;
	*(_OWORD*)(a1 + 432) = v29;
	v30 = _mm_sub_ps(*(__m128*)(a1 + 336), *(__m128*)(a1 + 352));
	v31 = _mm_mul_ps(v30, v30);
	v32 = fsqrt(
		(float)(v31.m128_f32[0] + _mm_shuffle_ps(v31, v31, 85).m128_f32[0])
		+ _mm_shuffle_ps(v31, v31, 170).m128_f32[0]);
	if (v32 > 0.0000099999997)
		v33 = (float)(*(float*)(a1 + 1028) - *(float*)(a1 + 1024)) / v32;
	else
		v33 = 100000000.0;
	*(float*)(a1 + 664) = v33;
	*(_DWORD*)(a1 + 592) = 0;
	sub_140622590(a1, (__m128*) & v90);
	sub_140621F70((__m128*)a1);
	if (*(_QWORD*)(a1 + 48))
	{
		v35 = sub_14061F3D0(v34, (__int64)&v90, (__m128*)(a1 + 352), (__m128*)(a1 + 336), (_DWORD*)(a1 + 336));
		v36 = *(_QWORD*)(a1 + 48);
		v96 = *(__m256i*)v35;
		*(_OWORD*)v97.m256i_i8 = *(_OWORD*)(v35 + 32);
		v37 = *(_OWORD*)(v35 + 48);
		*(_QWORD*)&v98 = 0i64;
		*(_OWORD*)&v97.m256i_u64[2] = v37;
		if ((*(int(__fastcall**)(_QWORD, _QWORD, __m256i*, __int64, int, _DWORD, __int64, _DWORD))(**(_QWORD**)(qword_140C65898 + 29256)
			+ 184i64))(
				*(_QWORD*)(qword_140C65898 + 29256),
				0i64,
				&v96,
				v36,
				1,
				0,
				a1 + 112,
				0) < 0)
		{
			*(_QWORD*)&v93 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v93 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v38 = 0x141E21EF0i64;
			v39 = &unk_140C8AFE4;
		LABEL_74:
			v94 = (__int64*)v38;
			v90.m256i_i64[0] = (__int64)TlsValue;
			*(_OWORD*)&v90.m256i_u64[1] = v93;
			v43 = sub_1401971E0(v39, 5, &v94, &v90);
			TlsValue = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v93 + 1));
			if (v43)
				DebugBreak();
			return 2147500037i64;
		}
	}
	if (*(_QWORD*)(a1 + 64))
	{
		v40 = sub_14061F3D0(v34, (__int64)&v90, (__m128*)(a1 + 352), (__m128*)(a1 + 336), (_DWORD*)(a1 + 336));
		v41 = *(_QWORD*)(a1 + 64);
		v96 = *(__m256i*)v40;
		*(_OWORD*)v97.m256i_i8 = *(_OWORD*)(v40 + 32);
		v42 = *(_OWORD*)(v40 + 48);
		*(_QWORD*)&v98 = 0i64;
		*(_OWORD*)&v97.m256i_u64[2] = v42;
		if ((*(int(__fastcall**)(_QWORD, _QWORD, __m256i*, __int64, int, _DWORD, __int64, _DWORD))(**(_QWORD**)(qword_140C65898 + 29256)
			+ 184i64))(
				*(_QWORD*)(qword_140C65898 + 29256),
				0i64,
				&v96,
				v41,
				1,
				0,
				a1 + 120,
				0) < 0)
		{
			*(_QWORD*)&v93 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v93 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v38 = 0x141E21F70i64;
			v39 = &unk_140C8AFE8;
			goto LABEL_74;
		}
	}
	v45 = *(_DWORD*)(a1 + 968);
	if (!v45)
		*(float*)(a1 + 596) = (float)*(int*)(a1 + 912) * 0.001;
	if (v45 == 3)
	{
		sub_14061B900(a1, 0.0);
		v46 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 904));
		v47 = v46;
		if (v46)
		{
			v48 = sub_14046BEC0(v46, *(_DWORD*)(a1 + 1000));
			v49 = *(_DWORD*)(a1 + 1000);
			v50 = v48[2];
			*(_DWORD*)(a1 + 1480) = 0;
			v51 = 0.0 / (float)(v50 + 1);
			*(float*)(a1 + 1488) = v51;
			*(float*)(a1 + 1484) = v51;
			sub_14046BFE0(v47, a1, v49);
			if (*(_DWORD*)(a1 + 996))
			{
				v52 = *(_DWORD*)(a1 + 988);
				if (v52)
				{
					v90.m256i_i32[0] = 0;
					v90.m256i_i64[1] = a1;
					v90.m256i_i64[2] = (__int64)sub_140623D40;
					v90.m256i_i64[3] = 0i64;
					sub_140195960(a1 + 1216, v52, (__int64)&v90, 4);
				}
				else
				{
					sub_140623D40(a1);
				}
			}
		}
	}
	else if (*(float*)(a1 + 924) > 0.0000099999997
		&& (v53 = *(_QWORD*)(a1 + 72)) != 0
		&& (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v53 + 408i64))(v53, 150i64)
		&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 72) + 848i64))(
			*(_QWORD*)(a1 + 72),
			67i64))
	{
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 128) + 336i64))(
			*(_QWORD*)(a1 + 128),
			*(_QWORD*)(a1 + 72));
		if ((*(_DWORD*)(a1 + 896) & 0x100) != 0)
		{
			v55 = *(__m128*)(a1 + 736);
			v56 = (__m128)0x40400000u;
			v57 = *(_DWORD*)(a1 + 784);
			v90 = (__m256i)ymmword_140C78390;
			*(_OWORD*)&v91.m256i_u64[2] = xmmword_140C783C0;
			v91.m256i_i32[4] = v57;
			v91.m256i_i32[5] = *(_DWORD*)(a1 + 788);
			v58 = *(_DWORD*)(a1 + 792);
			*(_OWORD*)v91.m256i_i8 = xmmword_140C783B0;
			v59 = _mm_mul_ps(v55, v55);
			v60 = (float)(v59.m128_f32[0] + _mm_shuffle_ps(v59, v59, 85).m128_f32[0])
				+ _mm_shuffle_ps(v59, v59, 170).m128_f32[0];
			v61 = (__m128)0x40400000u;
			v62 = fsqrt(v60);
			v61.m128_f32[0] = fmaxf(
				(float)((float)(3.0 - (float)((float)(v60 * (float)(1.0 / v62)) * (float)(1.0 / v62))) * 0.5)
				* (float)(1.0 / v62),
				0.0);
			v63 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v61, v61, 0), v55);
			v64 = *(__m128*)(a1 + 752);
			v90.m256i_i64[0] = v63.m128i_i64[0];
			v90.m256i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v63, 8));
			v65 = _mm_mul_ps(v64, v64);
			v66 = (float)(v65.m128_f32[0] + _mm_shuffle_ps(v65, v65, 85).m128_f32[0])
				+ _mm_shuffle_ps(v65, v65, 170).m128_f32[0];
			v67 = (__m128)0x40400000u;
			v68 = fsqrt(v66);
			v67.m128_f32[0] = fmaxf(
				(float)((float)(3.0 - (float)((float)(v66 * (float)(1.0 / v68)) * (float)(1.0 / v68))) * 0.5)
				* (float)(1.0 / v68),
				0.0);
			v69 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v67, v67, 0), v64);
			v70 = *(__m128*)(a1 + 768);
			v90.m256i_i64[2] = v69.m128i_i64[0];
			v90.m256i_i32[6] = _mm_cvtsi128_si32(_mm_srli_si128(v69, 8));
			v71 = _mm_mul_ps(v70, v70);
			v71.m128_f32[0] = (float)(v71.m128_f32[0] + _mm_shuffle_ps(v71, v71, 85).m128_f32[0])
				+ _mm_shuffle_ps(v71, v71, 170).m128_f32[0];
			v72 = 1.0 / fsqrt(v71.m128_f32[0]);
			v56.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v71.m128_f32[0] * v72) * v72)) * 0.5) * v72, 0.0);
			v73 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v56, v56, 0), v70);
			v91.m256i_i64[0] = v73.m128i_i64[0];
			v91.m256i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v73, 8));
			v91.m256i_i32[6] = v58;
			*(_QWORD*)&v98 = 0i64;
			v74 = (__m128*) & v96;
			v96 = v90;
			v97 = v91;
		}
		else
		{
			v96.m256i_i32[0] = *(_DWORD*)(a1 + 916);
			*(_QWORD*)&v75 = v96.m256i_u32[0];
			v76 = (__m128*)sub_14061F3D0(
				v54,
				(__int64)&v90,
				(__m128*)(a1 + 352),
				(__m128*)(a1 + 336),
				(_DWORD*)(a1 + 336));
			v77 = sub_1408FE3D0(v75);
			*(float*)&v78 = sub_1408FC950(v75);
			v94 = &v96.m256i_i64[2];
			v98 = xmmword_140C78440;
			v95 = v76;
			*(_OWORD*)&v96.m256i_u64[2] = __PAIR64__(LODWORD(v77), v78);
			v97.m256i_i32[1] = v78;
			*(float*)v97.m256i_i32 = -v77;
			v97.m256i_i64[1] = 0i64;
			*(_OWORD*)&v97.m256i_u64[2] = xmmword_140B7A700;
			v101[1] = v76;
			v101[0] = (__m128*) & v96.m256i_u64[2];
			sub_1401AFB10(v101, v99);
			v100 = 0i64;
			v74 = v99;
		}
		(*(void(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(a1 + 128) + 320i64))(*(_QWORD*)(a1 + 128), v74);
		v79 = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 72) + 424i64))(
			*(_QWORD*)(a1 + 72),
			150i64,
			0i64);
		v80 = *(_QWORD*)(a1 + 72);
		*(float*)&v81 = (float)*(int*)(v79 + 20) / *(float*)(a1 + 924);
		v82 = sub_1401AE6F0(0, -1);
		v90.m256i_i32[0] = 150;
		*(__int64*)((char*)&v90.m256i_i64[2] + 4) = 3i64;
		*(_OWORD*)((char*)v90.m256i_i64 + 4) = __PAIR64__(v81, v82);
		v90.m256i_i32[7] = 0;
		(*(void(__fastcall**)(__int64, _QWORD, __m256i*))(*(_QWORD*)v80 + 584i64))(v80, 0i64, &v90);
		(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 72) + 648i64))(
			*(_QWORD*)(a1 + 72),
			sub_1406246F0,
			a1);
		v83 = *(_QWORD*)(a1 + 48);
		if (v83)
		{
			if (*(char*)(a1 + 896) >= 0)
			{
				(*(void(__fastcall**)(_QWORD, __int64))(*(_QWORD*)v83 + 72i64))(*(_QWORD*)(a1 + 48), a1 + 208);
			}
			else
			{
				v96.m256i_i32[0] = *(_DWORD*)(a1 + 512);
				*(_QWORD*)&v84 = v96.m256i_u32[0];
				v85 = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)v96.m256i_u32[0]));
				v86 = sub_1408FC950(v84);
				v94 = &v96.m256i_i64[2];
				*(_OWORD*)&v96.m256i_u64[2] = xmmword_140B7A330;
				*(_OWORD*)((char*)v97.m256i_i64 + 4) = __PAIR64__(LODWORD(v85), LODWORD(v86));
				v97.m256i_i64[3] = LODWORD(v86);
				*(float*)&v97.m256i_i32[5] = -v85;
				v95 = (__m128*)(a1 + 208);
				v98 = xmmword_140C78440;
				v97.m256i_i32[0] = 0;
				v99[0].m128_u64[0] = (unsigned __int64)&v96.m256i_u64[2];
				v99[0].m128_u64[1] = a1 + 208;
				sub_1401AFB10((__m128**)v99, (__m128*) & v90);
				(*(void(__fastcall**)(__int64, __m256i*))(*(_QWORD*)v83 + 72i64))(v83, &v90);
			}
			(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 72) + 896i64))(
				*(_QWORD*)(a1 + 72),
				67i64,
				*(_QWORD*)(a1 + 48));
		}
	}
	else
	{
		sub_140625410(a1);
	}
	if (*(_QWORD*)(a1 + 96))
	{
		if ((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 328i64))(*(_QWORD*)(a1 + 128))
			&& (v87 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 328i64))(*(_QWORD*)(a1 + 128)),
				(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v87 + 848i64))(v87, 21i64)))
		{
			v88 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 128) + 328i64))(*(_QWORD*)(a1 + 128));
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v88 + 896i64))(v88, 21i64, *(_QWORD*)(a1 + 96));
		}
		else
		{
			v89 = *(_QWORD*)(a1 + 48);
			if (v89 && (*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v89 + 848i64))(v89, 44i64))
				(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 48) + 896i64))(
					*(_QWORD*)(a1 + 48),
					44i64,
					*(_QWORD*)(a1 + 96));
		}
	}
	*(_DWORD*)(a1 + 696) = 1;
	if (*(_QWORD*)(a1 + 56))
		return sub_14061B900(a1, 0.0);
	sub_14061A6B0(a1);
	return 0i64;
}
// 14062043E: variable 'v34' is possibly undefined
// 140620991: variable 'v54' is possibly undefined
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B7A330: using guessed type __int128 xmmword_140B7A330;
// 140B7A700: using guessed type __int128 xmmword_140B7A700;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C78440: using guessed type __int128 xmmword_140C78440;

