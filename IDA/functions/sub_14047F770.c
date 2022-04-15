#include "../winhttp.h"

//----- (000000014047F770) ----------------------------------------------------
void __fastcall sub_14047F770(__int64 a1)
{
	int v2; // r15d
	unsigned __int64 v3; // r14
	int v4; // r12d
	__int64 v5; // rbx
	__int64 v6; // rdi
	unsigned int v7; // edx
	__int64 v8; // r9
	__int64 v9; // r8
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64* v12; // rax
	__int64 v13; // rax
	int v14; // eax
	__int64 v15; // rax
	int v16; // xmm1_4
	int v17; // xmm0_4
	int v18; // eax
	unsigned int v19; // edx
	__int64 v20; // rax
	int* v21; // rax
	__int64 v22; // rcx
	double v23; // xmm7_8
	__m128 v24; // xmm8
	double v25; // xmm3_8
	float v26; // xmm0_4
	__m128 v27; // xmm2
	int* v28; // rax
	int v29; // xmm0_4
	__int64 v30; // rcx
	int v31; // eax
	__int64 v32; // rdi
	__int64 v33; // rax
	int* v34; // rax
	int* v35; // rax
	int* v36; // rax
	__m128* v37; // rdi
	float v38; // [rsp+28h] [rbp-E0h] BYREF
	__int64 v39; // [rsp+30h] [rbp-D8h] BYREF
	__int64 v40; // [rsp+38h] [rbp-D0h] BYREF
	__m128 v41; // [rsp+48h] [rbp-C0h]
	__int64 v42; // [rsp+58h] [rbp-B0h] BYREF
	__m128 v43; // [rsp+68h] [rbp-A0h] BYREF
	__int64 v44; // [rsp+78h] [rbp-90h] BYREF
	int v45[2]; // [rsp+88h] [rbp-80h] BYREF
	int v46; // [rsp+90h] [rbp-78h]
	unsigned int v47; // [rsp+94h] [rbp-74h]
	unsigned int v48; // [rsp+98h] [rbp-70h]
	int v49; // [rsp+9Ch] [rbp-6Ch]
	char v50; // [rsp+108h] [rbp+0h]
	int v51; // [rsp+118h] [rbp+10h]
	__int16 v52; // [rsp+11Ch] [rbp+14h]
	int* v53; // [rsp+120h] [rbp+18h]
	int v54; // [rsp+1A0h] [rbp+98h]
	int v55[38]; // [rsp+1A8h] [rbp+A0h] BYREF
	_WORD v56[2]; // [rsp+240h] [rbp+138h] BYREF
	int v57; // [rsp+244h] [rbp+13Ch]

	if (!*(_QWORD*)(a1 + 13888))
		return;
	v2 = 1;
	v3 = 0i64;
	v4 = sub_14018CDF0();
	if (!*(_QWORD*)(a1 + 13888))
		goto LABEL_42;
	v5 = 0i64;
	do
	{
		v6 = *(_QWORD*)(a1 + 13880);
		if (*(_DWORD*)(v6 + v5 + 56))
			goto LABEL_40;
		if (*(_DWORD*)(v6 + v5 + 52) - v4 > 0)
		{
			v2 = 0;
			goto LABEL_40;
		}
		if (sub_1403D90D0(qword_140C65898, *(_DWORD*)(v6 + v5)))
			goto LABEL_7;
		v7 = *(_DWORD*)(v6 + v5);
		v8 = *(_QWORD*)(qword_140C65898 + 32144);
		v9 = *(_QWORD*)(v8 + 40);
		v10 = v9;
		v11 = *(_QWORD*)(v9 + 8);
		while (v11)
		{
			if (*(_DWORD*)(v11 + 32) < v7)
			{
				v11 = *(_QWORD*)(v11 + 24);
			}
			else
			{
				v10 = v11;
				v11 = *(_QWORD*)(v11 + 16);
			}
		}
		if (v10 == v9 || v7 < *(_DWORD*)(v10 + 32))
		{
			v42 = *(_QWORD*)(v8 + 40);
			v12 = &v42;
		}
		else
		{
			v40 = v10;
			v12 = &v40;
		}
		v13 = *v12;
		if (v13 == v9 || v13 == -40)
		{
		LABEL_7:
			*(_DWORD*)(*(_QWORD*)(a1 + 13880) + v5 + 56) = 1;
			goto LABEL_40;
		}
		*(_DWORD*)(*(_QWORD*)(a1 + 13880) + v5 + 56) = 1;
		sub_1407E4830(v45, 0i64, 0x120ui64);
		v14 = *(_DWORD*)(v6 + v5);
		v50 |= 1u;
		v45[0] = v14;
		v45[1] = 18;
		v51 = sub_14018CDF0();
		v15 = *(_QWORD*)(a1 + 13880);
		v55[0] = 2;
		v55[18] = 14;
		v55[36] = 22;
		v55[2] = *(_DWORD*)(v15 + v5 + 32);
		v16 = *(_DWORD*)(v15 + v5 + 36);
		LODWORD(v39) = 1065353216;
		v55[3] = v16;
		v17 = *(_DWORD*)(v15 + v5 + 40);
		v55[5] = 0;
		v55[23] = 0;
		v55[4] = v17;
		sub_140482270(v56, (unsigned int*)&v39);
		v57 = 0;
		v18 = *(_DWORD*)(v6 + v5 + 12);
		if (!v18)
		{
			v19 = *(_DWORD*)(v6 + v5 + 4);
			goto LABEL_24;
		}
		if (v18 == 8)
		{
			v20 = sub_1401E8C20(*(_DWORD*)(v6 + v5 + 4));
			if (v20)
			{
				v19 = *(_DWORD*)(v20 + 8);
			LABEL_24:
				v21 = sub_1400B5DF0(qword_140C658F0, v19, 0i64);
				if (v21)
				{
					v38 = sub_140453960(v22, (__int64)v21);
					sub_140482270(v56, (unsigned int*)&v38);
				}
			}
		}
		*(_QWORD*)&v23 = *(unsigned int*)(*(_QWORD*)(a1 + 13880) + v5 + 48);
		v41.m128_u64[0] = COERCE_UNSIGNED_INT(sub_1408FE3D0(v23));
		v24 = 0i64;
		v41.m128_i32[2] = sub_1408FC950(v23);
		v25 = *(double*)v41.m128_u64;
		v27 = _mm_mul_ps(v41, v41);
		v27.m128_f32[0] = (float)(v27.m128_f32[0] + _mm_shuffle_ps(v27, v27, 85).m128_f32[0])
			+ _mm_shuffle_ps(v27, v27, 170).m128_f32[0];
		v26 = 1.0 / fsqrt(v27.m128_f32[0]);
		v27.m128_f32[0] = (float)(v27.m128_f32[0] * v26) * v26;
		v24.m128_f32[0] = fmaxf((float)((float)(3.0 - v27.m128_f32[0]) * 0.5) * v26, 0.0);
		v43 = _mm_mul_ps(_mm_shuffle_ps(v24, v24, 0), v41);
		v28 = (int*)sub_1401B3170((__int64)&v44, v43.m128_f32);
		v55[20] = *v28;
		v55[21] = v28[1];
		v29 = v28[2];
		v52 = 3;
		v53 = v55;
		v55[22] = v29;
		v46 = 17512;
		v49 = *(_DWORD*)(v6 + v5 + 12);
		v47 = *(_DWORD*)(v6 + v5 + 4);
		v48 = *(_DWORD*)(v6 + v5 + 8);
		v31 = sub_1403DA850(v30, v49, v47, v48);
		v32 = qword_140C65918;
		if (!v31)
			v31 = 17512;
		v46 = v31;
		v33 = sub_1404835C0(qword_140C65918, v31);
		if (v33)
		{
			if (*(_DWORD*)(v33 + 348))
			{
				v34 = sub_140484600(v32 + 80, (int*)(v33 + 348));
				v35 = (int*)sub_1404846C0((__int64)v34);
				if (v35)
					v54 = *v35;
			}
		}
		v36 = sub_14018B280(14256i64, 8u);
		if (v36)
			v37 = (__m128*)sub_140454380((__int64)v36);
		else
			v37 = 0i64;
		if ((int)sub_140456960(v37, (__int64)v45, *(double*)v27.m128_u64, v25) >= 0)
		{
			v37[865].m128_i32[0] = *(_DWORD*)(a1 + 8);
			v38 = *(float*)v45;
			sub_140003460((__int64*)(a1 + 13848), (int*)&v38);
		}
		else if (v37)
		{
			(*(void(__fastcall**)(__m128*, __int64))v37->m128_u64[0])(v37, 1i64);
		}
	LABEL_40:
		++v3;
		v5 += 64i64;
	} while (v3 < *(_QWORD*)(a1 + 13888));
	if (v2)
		LABEL_42:
	*(_QWORD*)(a1 + 13888) = 0i64;
}
// 14047F9D6: variable 'v22' is possibly undefined
// 14047FAEB: variable 'v30' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65918: using guessed type __int64 qword_140C65918;
// 14047F770: using guessed type _WORD var_C8[2];

