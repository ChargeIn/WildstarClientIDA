#include "../winhttp.h"

//----- (00000001406E70A0) ----------------------------------------------------
__int64 __fastcall sub_1406E70A0(__m128* a1, signed int a2, unsigned int* a3, unsigned __int8 a4)
{
	int* v4; // r13
	unsigned __int64 v7; // r12
	unsigned __int64 v8; // r14
	__m128i v9; // xmm2
	__int64 v10; // rdi
	char v11; // cl
	int v12; // edx
	char v13; // cl
	__int64 v14; // rcx
	unsigned __int64 v15; // rax
	__int64 v16; // rdx
	__m128i* v17; // r8
	__int64 v18; // rdx
	__m128i* v19; // r8
	unsigned __int64 v21; // [rsp+38h] [rbp-59h]
	__int64 v22; // [rsp+48h] [rbp-49h] BYREF
	char v23; // [rsp+50h] [rbp-41h]
	__int64 v24; // [rsp+58h] [rbp-39h]
	__int64 v25; // [rsp+60h] [rbp-31h]
	__int64 v26; // [rsp+68h] [rbp-29h]
	__int64 v27; // [rsp+70h] [rbp-21h]
	__int64 v28; // [rsp+78h] [rbp-19h]
	__int64 v29; // [rsp+80h] [rbp-11h]
	__int64 v30; // [rsp+88h] [rbp-9h]
	int v31; // [rsp+F8h] [rbp+67h] BYREF
	int v32; // [rsp+FCh] [rbp+6Bh]
	int* v33; // [rsp+108h] [rbp+77h]
	unsigned __int8 v34; // [rsp+110h] [rbp+7Fh]

	v34 = a4;
	v33 = (int*)a3;
	v4 = (int*)a3;
	if (a1[1].m128_i8[12] < 0)
	{
		a1[70].m128_i32[0] = 1;
		a1[70].m128_i32[2] = *a3;
		a1[70].m128_i32[3] = a3[1];
		v7 = a1[154].m128_u64[0];
		v8 = 0i64;
		v9 = _mm_cvtsi32_si128(0);
		v21 = _mm_div_ps(
			_mm_sub_ps(
				_mm_cvtepi32_ps(
					_mm_unpacklo_epi32(
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(*a3), v9),
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(a3[1]), v9))),
				a1[69]),
			_mm_shuffle_ps((__m128)a1[71].m128_u32[0], (__m128)a1[71].m128_u32[0], 0)).m128_u64[0];
		if (v7)
		{
			do
			{
				v10 = *(_QWORD*)(a1[153].m128_u64[1] + 8 * v8);
				if (*(_DWORD*)(v10 + 64) || a2)
				{
					v31 = (int)*(float*)&v21;
					v32 = (int)*((float*)&v21 + 1);
					sub_1400C3F20(v10 + 72, &v31);
					v11 = *(_BYTE*)(v10 + 484);
					if ((v11 & 0x10) != 0 && v11 < 0)
					{
						v12 = *(_DWORD*)(v10 + 368);
						*(_DWORD*)(v10 + 464) = 0;
						v13 = v11 & 0xDD | 0x20;
						*(_BYTE*)(v10 + 484) = v13;
						if (v12)
						{
							if (v12 == 2)
							{
								*(_DWORD*)(v10 + 476) = 0;
								*(_BYTE*)(v10 + 484) = v13 | 0x40;
							}
						}
						else
						{
							*(_BYTE*)(v10 + 484) = v13 | 0x40;
							v14 = *(_QWORD*)(v10 + 360);
							if (v14)
								sub_14010B100((unsigned int*)(v14 + 112));
							if (!*(_DWORD*)(v10 + 64))
							{
								v15 = a1[165].m128_u64[0];
								if (v15 != v10)
								{
									if (v15)
									{
										v16 = a1[2].m128_i64[0];
										v17 = (__m128i*)a1[2 * *(int*)(v15 + 488) + 123].m128_u64[*(int*)(v15 + 64)];
										v22 = 0i64;
										v23 = 0;
										v24 = 0i64;
										v25 = 0i64;
										v26 = 0i64;
										v27 = 0i64;
										v28 = 0i64;
										v29 = 0i64;
										v30 = 0i64;
										sub_14010B330(&v22, v16, v17, L"PrimalMatrixNode");
										sub_1400C3880(a1[165].m128_u64[0] + 72, (__int64)&v22, 0, 0, 0);
										*(_BYTE*)(a1[165].m128_u64[0] + 484) |= 1u;
										*(_DWORD*)(a1[165].m128_u64[0] + 480) = 1048576000;
										*(_BYTE*)(a1[165].m128_u64[0] + 484) &= ~0x40u;
									}
									sub_1406E66A0((__int64)a1, (__int64**)v10);
									if (a1[166].m128_u64[0])
									{
										v18 = a1[2].m128_i64[0];
										v19 = (__m128i*)a1[2 * *(int*)(v10 + 488) + 123].m128_u64[*(int*)(v10 + 64)];
										v22 = 0i64;
										v23 = 0;
										v24 = 0i64;
										v25 = 0i64;
										v26 = 0i64;
										v27 = 0i64;
										v28 = 0i64;
										v29 = 0i64;
										v30 = 0i64;
										sub_14010B330(&v22, v18, v19, L"PrimalMatrixNode");
										sub_1400C3880(v10 + 72, (__int64)&v22, 1, 0, 0);
										*(_BYTE*)(v10 + 484) |= 1u;
										*(_DWORD*)(v10 + 480) = 1048576000;
										*(_BYTE*)(v10 + 484) |= 0x40u;
									}
								}
							}
						}
					}
				}
				++v8;
			} while (v8 < v7);
			v4 = v33;
			a4 = v34;
		}
	}
	return sub_1400D2120((__int64)a1, a2, v4, a4);
}
// 140B3ECB0: using guessed type wchar_t aPrimalmatrixno_3[17];
// 140B3ECD8: using guessed type wchar_t aPrimalmatrixno_2[17];

