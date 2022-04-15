#include "../winhttp.h"

//----- (000000014062F300) ----------------------------------------------------
__int64 __fastcall sub_14062F300(__int64 a1, __int64* a2, __int64 a3)
{
	__int64 v3; // rsi
	unsigned __int64 v6; // r14
	__int64 result; // rax
	_QWORD* v8; // rbx
	__int64** v9; // rbx
	__int64* v10; // r15
	__int64 v11; // r14
	__int64 v12; // rbx
	__int64 v13; // rsi
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // r9
	__int64 v17; // rax
	bool v18; // zf
	__m128 v19; // xmm2
	__int128 v20; // xmm1
	__int128 v21; // xmm0
	__int128 v22; // xmm1
	__m128 v23; // [rsp+70h] [rbp-90h] BYREF
	__int128 v24; // [rsp+80h] [rbp-80h]
	__int128 v25; // [rsp+90h] [rbp-70h]
	__int128 v26; // [rsp+A0h] [rbp-60h]
	__int128 v27; // [rsp+B0h] [rbp-50h] BYREF
	__int128 v28; // [rsp+C0h] [rbp-40h] BYREF
	__int128 v29[4]; // [rsp+D0h] [rbp-30h] BYREF
	__m128* v30[10]; // [rsp+110h] [rbp+10h] BYREF

	v3 = qword_140C7E570;
	v6 = (*(__int64(__fastcall**)(__int64))(qword_140C7E570 + 24))(a3);
	result = v6 / *(_QWORD*)(v3 + 8);
	v8 = *(_QWORD**)(*(_QWORD*)(v3 + 16) + 8 * (v6 % *(_QWORD*)(v3 + 8)));
	if (v8)
	{
		while (1)
		{
			if (v6 == *v8)
			{
				result = (*(__int64(__fastcall**)(__int64, _QWORD*))(v3 + 32))(a3, v8 + 2);
				if ((_DWORD)result)
					break;
			}
			v8 = (_QWORD*)v8[1];
			if (!v8)
				return result;
		}
		v9 = (__int64**)(v8 + 5);
		if (v9)
		{
			v10 = *v9;
			v11 = (*v9)[1];
			if (v11)
			{
				v12 = 0i64;
				do
				{
					v13 = *v10;
					v14 = *(unsigned int*)(v12 + *v10 + 8);
					result = (unsigned int)v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)~(unsigned __int8)*(_DWORD*)(v12 + *v10 + 8)) & 2;
					if (((unsigned __int8)(v14 ^ (v14 ^ ~(unsigned __int8)*(_DWORD*)(v12 + *v10 + 8)) & 2) & (a2[5] & 5 | ~(unsigned __int8)*((_DWORD*)a2 + 10) & 2)) != 0)
					{
						result = sub_14062F230(v14, **(_DWORD**)(v12 + v13));
						if (!(_DWORD)result)
						{
							v17 = *a2;
							if (*a2)
							{
								v18 = (a2[5] & 1) == 0;
								v23 = *(__m128*)ymmword_140C78390.m256_f32;
								v24 = *(_OWORD*)&ymmword_140C78390.m256_f32[4];
								v25 = xmmword_140C783B0;
								v26 = xmmword_140C783C0;
								if (v18)
								{
									v20 = *(_OWORD*)(v17 + 16);
									v23 = *(__m128*)v17;
									v21 = *(_OWORD*)(v17 + 32);
									v24 = v20;
									v22 = *(_OWORD*)(v17 + 48);
									v25 = v21;
									v26 = v22;
								}
								else
								{
									v19 = (__m128) * ((unsigned int*)a2 + 3);
									v19.m128_f32[0] = v19.m128_f32[0] - *(float*)(v17 + 52);
									v29[0] = xmmword_140C78410;
									v29[1] = xmmword_140C78420;
									v29[2] = xmmword_140C78430;
									v30[1] = (__m128*)v29;
									v29[3] = (__int128)_mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps(v19, (__m128)0x3F800000u));
									v30[0] = (__m128*)v17;
									sub_1401AFB10(v30, &v23);
								}
								v28 = 0i64;
								result = sub_1405787D0(
									v15,
									0,
									*((_DWORD*)a2 + 4),
									v16,
									*(_QWORD*)(v12 + v13),
									0i64,
									(__int128*)&v23,
									0,
									0i64,
									&v28,
									0);
							}
							else
							{
								v27 = 0i64;
								result = sub_1405787D0(
									v15,
									0,
									*((_DWORD*)a2 + 4),
									v16,
									*(_QWORD*)(v12 + v13),
									0i64,
									0i64,
									0,
									0i64,
									&v27,
									0);
							}
						}
					}
					v12 += 16i64;
					--v11;
				} while (v11);
			}
		}
	}
	return result;
}
// 14062F4E5: variable 'v15' is possibly undefined
// 14062F4E5: variable 'v16' is possibly undefined
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 140C7E570: using guessed type __int64 qword_140C7E570;

