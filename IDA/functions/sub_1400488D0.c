//----- (00000001400488D0) ----------------------------------------------------
__int64 __fastcall sub_1400488D0(__int64 a1, __int64* a2, int a3, int a4, int a5, unsigned int a6)
{
	__int64 v7; // rcx
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 v13; // r15
	int* v14; // rax
	__int64 v15; // rdi
	int v16; // r15d
	__int64 result; // rax
	__int64 v18; // rax
	unsigned int v19; // esi
	__int64 v20; // rcx
	__m128 v21; // xmm3
	__m128 v22; // xmm0
	unsigned int v23; // eax
	int* v24; // rax
	int* v25; // rdi
	int* v26; // rcx
	__int64 v27; // rcx
	unsigned int* v28; // rbx
	__int64 v29; // rdx
	int v30; // r8d
	__int64 v31; // [rsp+48h] [rbp-C0h] BYREF
	int v32; // [rsp+50h] [rbp-B8h]
	int v33; // [rsp+54h] [rbp-B4h] BYREF
	_OWORD v34[4]; // [rsp+58h] [rbp-B0h] BYREF
	__m256 v35; // [rsp+98h] [rbp-70h] BYREF
	__int128 v36; // [rsp+B8h] [rbp-50h]
	__int128 v37; // [rsp+C8h] [rbp-40h]
	__int64 v38; // [rsp+D8h] [rbp-30h]
	__int128 v39; // [rsp+E8h] [rbp-20h]
	__int128 v40; // [rsp+F8h] [rbp-10h]
	__int128 v41; // [rsp+108h] [rbp+0h]
	__m128 v42; // [rsp+118h] [rbp+10h]
	__int128 v43; // [rsp+128h] [rbp+20h]
	int v44; // [rsp+138h] [rbp+30h]
	int v45; // [rsp+13Ch] [rbp+34h]
	int v46; // [rsp+140h] [rbp+38h]
	__int64 v47; // [rsp+188h] [rbp+80h] BYREF
	int v48; // [rsp+190h] [rbp+88h]
	int v49; // [rsp+194h] [rbp+8Ch]
	int v50; // [rsp+198h] [rbp+90h]
	int v51; // [rsp+19Ch] [rbp+94h]
	int v52; // [rsp+1A0h] [rbp+98h]
	int v53[16]; // [rsp+1A4h] [rbp+9Ch] BYREF
	__int64 v54; // [rsp+1E4h] [rbp+DCh]
	__int64 v55; // [rsp+1ECh] [rbp+E4h]
	__int64 v56; // [rsp+1F4h] [rbp+ECh]
	__int64 v57; // [rsp+200h] [rbp+F8h]
	__int64 v58; // [rsp+208h] [rbp+100h]
	__int64 v59; // [rsp+210h] [rbp+108h]
	__int64 v60; // [rsp+218h] [rbp+110h]
	__int64 v61; // [rsp+220h] [rbp+118h]
	__int64 v62; // [rsp+228h] [rbp+120h]
	int v63; // [rsp+230h] [rbp+128h]
	__int64 v64; // [rsp+238h] [rbp+130h]
	__int64 v65; // [rsp+240h] [rbp+138h]
	__int64 v66; // [rsp+248h] [rbp+140h]
	__int64 v67; // [rsp+250h] [rbp+148h]
	__int64 v68; // [rsp+258h] [rbp+150h]
	__int64 v69; // [rsp+260h] [rbp+158h]
	__int64 v70; // [rsp+268h] [rbp+160h]
	int v71; // [rsp+270h] [rbp+168h]

	v7 = *(_QWORD*)(a1 + 16);
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	v11 = *(_QWORD*)(a1 + 24);
	if (v11)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	v47 = 0i64;
	v49 = a3;
	v50 = a4;
	v51 = a5;
	v48 = 0;
	v52 = 1065353216;
	sub_1407E4830(v53, 0i64, 0x40ui64);
	v63 = 0;
	v54 = 0i64;
	v55 = 0i64;
	v56 = 0i64;
	v57 = 0i64;
	v58 = 0i64;
	v59 = 0i64;
	v60 = 0i64;
	v61 = 0i64;
	v62 = 0i64;
	v66 = 0i64;
	v67 = 0i64;
	v68 = 0i64;
	v69 = 0i64;
	v70 = 0i64;
	v71 = 0;
	v12 = *a2;
	v64 = 0i64;
	v65 = 0i64;
	v13 = (*(__int64(__fastcall**)(__int64*))(v12 + 32))(a2);
	v14 = sub_14018B280(3200i64, 0);
	if (v14)
		v15 = sub_1401DF340((__int64)v14);
	else
		v15 = 0i64;
	v16 = (*(__int64(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)v15 + 24i64))(v15, v13, &v47);
	if (v16 >= 0)
	{
		*(_QWORD*)(a1 + 16) = v15;
		result = sub_14002E510(a1 + 32, v15, 1);
		if ((int)result >= 0)
		{
			v18 = *a2;
			v35 = ymmword_140C78390;
			v38 = 0i64;
			v36 = xmmword_140C783B0;
			v37 = xmmword_140C783C0;
			result = (*(__int64(__fastcall**)(__int64*, _QWORD, __m256*, _QWORD, int, int, __int64, _DWORD))(v18 + 184))(
				a2,
				a6,
				&v35,
				0i64,
				1,
				2,
				a1 + 24,
				0);
			v19 = result;
			if ((int)result >= 0)
			{
				v20 = *(_QWORD*)(a1 + 16);
				v31 = 0i64;
				v32 = 0;
				(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)v20 + 56i64))(v20, &v31);
				sub_14002F5D0(a1 + 32, *(__int64**)(a1 + 16), 0i64);
				sub_140030080(a1 + 32, *(_QWORD*)(a1 + 16));
				v44 = 0;
				v40 = xmmword_140C78410;
				v34[0] = xmmword_140C78410;
				v39 = xmmword_140C78430;
				v21 = _mm_shuffle_ps((__m128)0i64, (__m128)0i64, 85);
				v34[2] = xmmword_140C78430;
				v22 = _mm_shuffle_ps((__m128)0i64, (__m128)0i64, 170);
				v41 = xmmword_140C78420;
				v45 = v21.m128_i32[0];
				v46 = v22.m128_i32[0];
				v34[1] = xmmword_140C78420;
				v43 = 0i64;
				v42 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)0i64, v22), _mm_unpacklo_ps(v21, (__m128)0x3F800000u));
				v34[3] = v42;
				sub_140049900(a1, v34, 0i64, 0, 0);
				v23 = sub_140048880(a1);
				sub_140049A80(a1, 0, v23, 1, 1.0, 0.0, 1, 0);
				if (!*(_QWORD*)(a1 + 8))
				{
					v24 = sub_14018B280(24i64, 0);
					v25 = v24;
					if (v24)
					{
						*(_QWORD*)v24 = off_140B55048;
						v24[2] = 1;
						*(_QWORD*)v24 = off_140B55048;
					}
					else
					{
						v25 = 0i64;
					}
					v26 = *(int**)(a1 + 8);
					if (v26 != v25)
					{
						if (v26)
							(*(void(__fastcall**)(int*))(*(_QWORD*)v26 + 8i64))(v26);
						*(_QWORD*)(a1 + 8) = v25;
					}
					*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64) = a1;
				}
				v27 = qword_140C63678;
				v28 = (unsigned int*)(a1 + 5100);
				if (v28 != (unsigned int*)&v33)
				{
					sub_1401429A0(qword_140C63678, *v28);
					v27 = qword_140C63678;
					*v28 = 0;
					if (*(_QWORD*)(v27 + 48))
					{
						v29 = *(_QWORD*)(v27 + 40);
						v30 = *(_DWORD*)(v29 + 16);
						if ((unsigned int)(v30 - 1) <= 0xFFFFFFFD)
							*(_DWORD*)(v29 + 16) = v30 + 1;
					}
				}
				sub_1401429A0(v27, 0);
				return v19;
			}
		}
	}
	else
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v15 + 360i64))(v15, 1i64);
		return (unsigned int)v16;
	}
	return result;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 1400488D0: using guessed type int var_124[16];

