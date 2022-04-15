#include "../winhttp.h"

//----- (00000001403A0670) ----------------------------------------------------
void __fastcall sub_1403A0670(__int64 a1, __m128* a2, int a3, float a4, float a5, float* a6)
{
	__m128 v6; // xmm0
	double v7; // xmm2_8
	__m128* v8; // rax
	__m128 v11; // xmm1
	__m128 v12; // xmm6
	__int64 v13; // rax
	float v14; // xmm1_4
	int* v15; // r14
	_DWORD* v16; // rdx
	unsigned int v17; // eax
	unsigned int v18; // eax
	unsigned int v19; // r15d
	__int64 v20; // rax
	int* v21; // rax
	int v22; // ecx
	__int64 v23; // rsi
	int v24; // ebx
	unsigned int v25; // edi
	__int64 i; // rbx
	__m128 v27; // [rsp+30h] [rbp-50h] BYREF
	unsigned int v28; // [rsp+40h] [rbp-40h] BYREF
	__int64 v29; // [rsp+44h] [rbp-3Ch]
	int* v30; // [rsp+50h] [rbp-30h]
	unsigned int v31; // [rsp+A0h] [rbp+20h] BYREF
	__int16 v32; // [rsp+A4h] [rbp+24h]

	v8 = *(__m128**)(a1 + 25744);
	if (v8[213].m128_i32[0])
	{
		if (a3)
		{
			v11 = (__m128)LODWORD(a5);
			v6 = (__m128)0x40000000u;
			v11.m128_f32[0] = (float)(a5 * 2.0) * 0.03125;
			a4 = _mm_sqrt_ps(v11).m128_f32[0] * 2.0;
		}
		v6.m128_f32[0] = a4;
		v12 = _mm_div_ps(_mm_sub_ps(*a2, v8[286]), _mm_shuffle_ps(v6, v6, 0));
		v27 = v12;
		if (a3)
		{
			v27.m128_f32[1] = v27.m128_f32[1] + (float)(a4 * 16.0);
			v12 = v27;
		}
		v13 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 28608) + 24i64))(*(_QWORD*)(a1 + 28608));
		*(__m128*)(v13 + 64) = v12;
		*(_OWORD*)(v13 + 80) = 0i64;
		*(_OWORD*)(v13 + 96) = 0i64;
		*(_OWORD*)(v13 + 112) = 0i64;
		*(_DWORD*)(v13 + 160) = 0;
		*(_DWORD*)(v13 + 176) = 0;
		if (a3)
		{
			v14 = *(float*)(v13 + 140);
			*(_DWORD*)(v13 + 136) = 1;
			*(float*)(v13 + 140) = fmaxf(v14, 0.5);
		}
		v29 = 8i64;
		v15 = sub_14018C320(0i64, 0x240ui64, 8u);
		v30 = v15;
		*v15 = 1;
		v15[2] = 0;
		v16 = *(_DWORD**)(a1 + 25744);
		v15[18] = 2;
		v15[20] = v16[1144];
		v15[21] = v16[1145];
		v15[22] = v16[1146];
		v15[23] = 0;
		sub_1401C9800(&v31, (__m128i*) & v27);
		v17 = v31;
		v15[36] = 8;
		v27 = 0i64;
		v15[38] = v17;
		*((_WORD*)v15 + 78) = v32;
		v15[40] = 0;
		sub_1401C9800(&v31, (__m128i*) & v27);
		v18 = v31;
		v15[54] = 11;
		v15[56] = v18;
		v19 = 4;
		*((_WORD*)v15 + 114) = v32;
		v15[58] = 0;
		v20 = *(_QWORD*)(a1 + 25744);
		v28 = 4;
		if (!*(_DWORD*)(v20 + 5664))
		{
			v21 = (int*)sub_1401B3170((__int64)&v27, a6);
			v15[72] = 14;
			v19 = 5;
			v22 = *v21;
			v28 = 5;
			v15[74] = v22;
			v15[75] = v21[1];
			*((_QWORD*)v15 + 38) = (unsigned int)v21[2];
		}
		v23 = *(_QWORD*)(a1 + 25744);
		v31 = dword_140C636A8;
		if (*(_DWORD*)(v23 + 3408) || *(_DWORD*)(v23 + 128) == 18)
		{
			v24 = 0;
			while ((int)sub_1405B4AB0(v23, &v31, (unsigned int*)&v15[18 * v24], 0i64, 0i64) >= 0)
			{
				if (++v24 >= v19)
				{
					v25 = v31;
					sub_1405B4F50(v23, v31);
					sub_1405B5070(v23, v25);
					sub_1405B82A0(v23, v25, v7);
					for (i = *(_QWORD*)(v23 + 3848); i; i = *(_QWORD*)(i + 3864))
						sub_1405B4EF0(i, v25, v7);
					break;
				}
			}
		}
		sub_14057A190(a1, &v28);
		sub_14079A4F0((__int64)&v28);
		sub_14018B900((__int64)v30, 0);
	}
}
// 1403A08B7: conditional instruction was optimized away because r15d.4 is in (4..5)
// 1403A06DF: variable 'v6' is possibly undefined
// 1403A0905: variable 'v7' is possibly undefined
// 140C636A8: using guessed type int dword_140C636A8;

