#include "../winhttp.h"

//----- (00000001408476A0) ----------------------------------------------------
__int64 __fastcall sub_1408476A0(__int64 a1, char a2, __int64 a3, __int64* a4, int a5, float a6)
{
	__int64 result; // rax
	__int64 v7; // r12
	unsigned int v10; // esi
	unsigned __int8 i; // r15
	__int64 v12; // rdi
	char v13; // r14
	bool v14; // zf
	__int64 v15; // r13
	int v16; // eax
	float v17; // xmm0_4
	float v18; // xmm1_4
	__m128 v19; // xmm2
	unsigned int v20; // r12d
	int j; // ecx
	unsigned int v22; // r8d
	unsigned int v23; // edx
	__m128* v24; // rcx
	__m128 v25; // xmm0
	__int64 v26; // rax
	__int64 v27; // rax
	__int64 v28; // rax
	__m128* v29; // rcx
	__int64 v30; // rdx
	__m128 v31; // xmm2
	__m128 v32; // xmm0
	__m128 v33; // xmm1
	unsigned __int64 v34; // rax
	unsigned __int8 v35; // r15
	unsigned int k; // esi
	__int64 v37; // rbx
	unsigned int v38; // ecx
	__int64 v39; // rax
	__int128 v40; // xmm1
	__int128 v41; // xmm1
	__int128 v42; // xmm0
	__int128 v43; // xmm1
	__int128 v44; // xmm0
	__m128 v45[12]; // [rsp+30h] [rbp-108h] BYREF
	void* retaddr; // [rsp+138h] [rbp+0h] BYREF
	__int64 v48; // [rsp+158h] [rbp+20h]

	result = (__int64)&retaddr;
	v7 = *a4;
	v10 = *(unsigned __int8*)(*a4 + 17);
	v48 = *a4;
	if (*(_BYTE*)(*a4 + 17))
	{
		for (i = 0; (v10 & 1) == 0; ++i)
			v10 >>= 1;
		v12 = *(_QWORD*)(a1 + 96);
		result = (unsigned __int64)i << 7;
		v13 = byte_140C62000[result + 116];
		if (v12)
		{
			while (*(_BYTE*)(v12 + 448) != v13)
			{
				v12 = *(_QWORD*)(v12 + 440);
				if (!v12)
					goto LABEL_7;
			}
		}
		else
		{
		LABEL_7:
			result = sub_140881960(dword_140C10F20, 464i64, 0x10u);
			v12 = result;
			if (result)
			{
				*(_QWORD*)(result + 432) = 0i64;
				*(_BYTE*)(result + 448) = v13;
				sub_1407E4830((int*)result, 0i64, 0x180ui64);
				*(_QWORD*)(v12 + 384) = 0i64;
				*(_QWORD*)(v12 + 392) = 0i64;
				*(_QWORD*)(v12 + 400) = 0i64;
				*(_QWORD*)(v12 + 408) = 0i64;
				*(_QWORD*)(v12 + 416) = 0i64;
				*(_QWORD*)(v12 + 424) = 0i64;
				result = *(_QWORD*)(a1 + 96);
				if (result)
				{
					*(_QWORD*)(v12 + 440) = result;
					*(_QWORD*)(a1 + 96) = v12;
				}
				else
				{
					*(_QWORD*)(a1 + 96) = v12;
					*(_QWORD*)(v12 + 440) = 0i64;
				}
				++* (_DWORD*)(a1 + 104);
			}
		}
		if (v12)
		{
			v14 = (*(_BYTE*)(a3 + 382) & 0x40) == 0;
			*(_DWORD*)(v12 + 432) = *(_DWORD*)(a3 + 212);
			if (v14)
				sub_1408605D0(a3);
			if ((v15 = *(_QWORD*)(a3 + 496), *(float*)(a3 + 448) != *(float*)(a3 + 464))
				|| *(float*)(a3 + 452) != *(float*)(a3 + 468)
				|| *(float*)(a3 + 456) != *(float*)(a3 + 472)
				|| (result = *(unsigned __int8*)(a3 + 460), *(_BYTE*)(a3 + 476) != (_BYTE)result)
				|| (*(_BYTE*)(a3 + 379) & 0x10) != 0
				|| a6 != *(float*)(a3 + 480)
				|| *(float*)(v7 + 20) != *(float*)(a3 + 484)
				|| v15 && *(float*)(v15 + 8) != *(float*)(a3 + 488)
				|| *(_BYTE*)(a1 + 89)
				|| (*(_BYTE*)(a3 + 8) & 0x10) != 0)
			{
				*(_DWORD*)(a3 + 464) = *(_DWORD*)(a3 + 448);
				*(_DWORD*)(a3 + 468) = *(_DWORD*)(a3 + 452);
				*(_DWORD*)(a3 + 472) = *(_DWORD*)(a3 + 456);
				*(_DWORD*)(a3 + 476) = *(_DWORD*)(a3 + 460);
				v16 = *(_DWORD*)(v7 + 20);
				*(float*)(a3 + 480) = a6;
				*(_DWORD*)(a3 + 484) = v16;
				v17 = (float)(*(float*)(a3 + 448) + 100.0) * 0.0049999999;
				if (v17 >= 0.0)
				{
					if (v17 > 1.0)
						v17 = 1.0;
				}
				else
				{
					v17 = 0.0;
				}
				v18 = (float)(*(float*)(a3 + 452) + 100.0) * 0.0049999999;
				if (v18 >= 0.0)
				{
					if (v18 > 1.0)
						v18 = 1.0;
				}
				else
				{
					v18 = 0.0;
				}
				v19 = (__m128) * (unsigned int*)(a3 + 456);
				sub_1408642D0(v17, v18, v19.m128_f32[0] * 0.0099999998, *(_BYTE*)(a3 + 460), a5, v45);
				v20 = 0;
				for (j = a5; j; j &= j - 1)
					++v20;
				v22 = v20;
				if ((a5 & 8) != 0)
					v22 = v20 - 1;
				if (v15)
				{
					v23 = 0;
					*(_DWORD*)(a3 + 488) = *(_DWORD*)(v15 + 8);
					if (!v22)
						goto LABEL_45;
					v24 = v45;
					do
					{
						v25 = *v24;
						v26 = v23++;
						v24 += 2;
						v27 = (v26 + 1) << 6;
						*(__m128*)(v27 + v15) = v25;
						*(__m128*)(v27 + v15 + 16) = v24[-1];
					} while (v23 < v22);
				}
				if (v22)
				{
					v19.m128_f32[0] = a6;
					v28 = v12;
					v29 = v45;
					v30 = v22;
					v31 = _mm_shuffle_ps(v19, v19, 0);
					do
					{
						v32 = *v29;
						v33 = v29[1];
						v28 += 64i64;
						v29 += 2;
						*(__m128*)(v28 - 64) = _mm_mul_ps(v32, v31);
						*(__m128*)(v28 - 48) = _mm_mul_ps(v33, v31);
						--v30;
					} while (v30);
				}
			LABEL_45:
				if ((a5 & 8) != 0)
				{
					v34 = (unsigned __int64)(v20 - 1) << 6;
					*(_QWORD*)(v34 + v12) = 0i64;
					*(_QWORD*)(v34 + v12 + 8) = 0i64;
					*(_QWORD*)(v34 + v12 + 16) = 0i64;
					*(_QWORD*)(v34 + v12 + 24) = 0i64;
					*(float*)(v34 + v12 + 20) = a6;
				}
				result = *(unsigned int*)(v48 + 20);
				*(_DWORD*)(v12 + 384) = result;
				if (a2)
				{
					*(_DWORD*)(v12 + 416) = 1065353216;
					*(_DWORD*)(v12 + 400) = 1065353216;
				}
				v35 = i + 1;
				for (k = v10 >> 1; k; k >>= 1)
				{
					if ((k & 1) != 0)
					{
						result = (unsigned __int64)v35 << 7;
						if (byte_140C62000[result + 116] != v13)
						{
							v37 = *(_QWORD*)(a1 + 96);
							if (v37)
							{
								while (*(_BYTE*)(v37 + 448) != v13)
								{
									v37 = *(_QWORD*)(v37 + 440);
									if (!v37)
										goto LABEL_55;
								}
							}
							else
							{
							LABEL_55:
								result = sub_140881960(dword_140C10F20, 464i64, 0x10u);
								v37 = result;
								if (result)
								{
									*(_BYTE*)(result + 448) = v13;
									*(_QWORD*)(result + 432) = 0i64;
									sub_1407E4830((int*)result, 0i64, 0x180ui64);
									*(_QWORD*)(v37 + 384) = 0i64;
									*(_QWORD*)(v37 + 392) = 0i64;
									*(_QWORD*)(v37 + 400) = 0i64;
									*(_QWORD*)(v37 + 408) = 0i64;
									*(_QWORD*)(v37 + 416) = 0i64;
									*(_QWORD*)(v37 + 424) = 0i64;
									result = *(_QWORD*)(a1 + 96);
									if (result)
									{
										*(_QWORD*)(v37 + 440) = result;
										*(_QWORD*)(a1 + 96) = v37;
									}
									else
									{
										*(_QWORD*)(a1 + 96) = v37;
										*(_QWORD*)(v37 + 440) = 0i64;
									}
									++* (_DWORD*)(a1 + 104);
								}
							}
							if (!v37)
								return result;
							v38 = 0;
							do
							{
								v39 = v38++;
								v39 <<= 6;
								v40 = *(_OWORD*)(v39 + v12 + 48);
								*(_OWORD*)(v39 + v37 + 32) = *(_OWORD*)(v39 + v12 + 32);
								*(_OWORD*)(v39 + v37 + 48) = v40;
								v41 = *(_OWORD*)(v39 + v12 + 16);
								*(_OWORD*)(v39 + v37) = *(_OWORD*)(v39 + v12);
								*(_OWORD*)(v39 + v37 + 16) = v41;
							} while (v38 < v20);
							v42 = *(_OWORD*)(v37 + 384);
							v43 = *(_OWORD*)(v37 + 400);
							*(_DWORD*)(v37 + 432) = *(_DWORD*)(v12 + 432);
							result = *(unsigned int*)(v12 + 436);
							*(_DWORD*)(v37 + 436) = result;
							*(_OWORD*)(v12 + 384) = v42;
							v44 = *(_OWORD*)(v37 + 416);
							*(_OWORD*)(v12 + 400) = v43;
							*(_OWORD*)(v12 + 416) = v44;
						}
					}
					++v35;
				}
			}
		}
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C62000: using guessed type _BYTE byte_140C62000[80];
// 1408476A0: using guessed type __m128 var_108[12];

