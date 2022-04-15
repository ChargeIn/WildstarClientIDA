#include "../winhttp.h"

//----- (0000000140390F20) ----------------------------------------------------
void __fastcall sub_140390F20(__int64 a1, __m128* a2, __m128* a3)
{
	bool v3; // zf
	__m128* v4; // r9
	_QWORD* v6; // rcx
	__int64 v7; // rax
	__m128 v8; // xmm1
	unsigned __int64 v9; // rsi
	__m128* v10; // rbx
	__m128* v11; // rax
	__int64 v12; // r10
	__int64 v13; // rax
	__int64 v14; // rdx
	__int64 v15; // rbx
	__int64 v16; // rax
	__int64 v17; // rax
	__int64 v18; // rbx
	__m128* v19; // rbx
	__m128 v20; // xmm1
	__int128 v21; // [rsp+38h] [rbp-D0h] BYREF
	__m128* v22; // [rsp+48h] [rbp-C0h]
	__m128 v23; // [rsp+58h] [rbp-B0h] BYREF
	__m128 v24; // [rsp+68h] [rbp-A0h]
	__int64 v25; // [rsp+78h] [rbp-90h]
	__int128* v26; // [rsp+80h] [rbp-88h]
	__m128* v27; // [rsp+98h] [rbp-70h]
	__m128* v28; // [rsp+A0h] [rbp-68h]
	__int128 v29; // [rsp+A8h] [rbp-60h] BYREF
	__m128 v30[4]; // [rsp+B8h] [rbp-50h] BYREF
	__m128* v31; // [rsp+F8h] [rbp-10h] BYREF
	__int64 v32; // [rsp+100h] [rbp-8h]
	__int128* v33; // [rsp+108h] [rbp+0h]
	__int64 v34; // [rsp+110h] [rbp+8h]
	__int64 v35; // [rsp+118h] [rbp+10h]
	__int128* v36; // [rsp+120h] [rbp+18h]
	__m128* v37[2]; // [rsp+168h] [rbp+60h] BYREF
	__m128 v38[4]; // [rsp+178h] [rbp+70h] BYREF

	v3 = *(_DWORD*)(a1 + 168) == 0;
	v22 = a3;
	v4 = a2;
	v28 = a2;
	if (v3)
	{
		v3 = *(_QWORD*)(a1 + 320) == 0i64;
		*(_DWORD*)(a1 + 168) = 1;
		if (v3)
		{
			v6 = (_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64) + 5464i64);
			*(_QWORD*)(a1 + 320) = v6;
			*(_QWORD*)(a1 + 328) = *v6;
			*v6 = a1;
			v7 = *(_QWORD*)(a1 + 328);
			if (v7)
				*(_QWORD*)(v7 + 320) = a1 + 328;
			*(__m128*)(a1 + 176) = *a2;
			*(__m128*)(a1 + 192) = a2[1];
		}
		else
		{
			v8 = _mm_max_ps(*(__m128*)(a1 + 192), a2[1]);
			*(__m128*)(a1 + 176) = _mm_min_ps(*(__m128*)(a1 + 176), *a2);
			*(__m128*)(a1 + 192) = v8;
		}
		v9 = 0i64;
		v10 = *(__m128**)(*(_QWORD*)(a1 + 8) + 16i64);
		if ((dword_140DC2148 & 1) == 0)
		{
			dword_140DC2148 |= 1u;
			v23 = 0ui64;
			v24.m128_u64[0] = (unsigned __int64)&v21;
			v29 = xmmword_140B7A490;
			v21 = xmmword_140B7A720;
			v31 = 0i64;
			v26 = &v29;
			v24.m128_u64[1] = 0i64;
			v25 = 0i64;
			v32 = 0i64;
			v33 = &v21;
			v34 = 0i64;
			v35 = 0i64;
			v36 = &v29;
			sub_1401AFF00((__int64)&v31, (__int64)&unk_140DC2150);
		}
		*(_QWORD*)&v21 = v10 + 60;
		v11 = (__m128*)sub_140359840(v10, (__int64)&v23, v4);
		v37[0] = (__m128*)v21;
		*((_QWORD*)&v21 + 1) = v11;
		v37[1] = v11;
		sub_1401AFB10(v37, v38);
		*(_QWORD*)&v21 = v38;
		*((_QWORD*)&v21 + 1) = v12;
		v31 = v38;
		v32 = v12;
		sub_1401AFB10(&v31, v30);
		v13 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 128i64))(*(_QWORD*)(a1 + 16));
		v14 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 48i64);
		*(_QWORD*)&v21 = v13;
		*(_QWORD*)&v29 = *(_QWORD*)(v14 + 32);
		if (v13)
		{
			v27 = v10 + 57;
			do
			{
				v15 = (*(__int64(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(a1 + 16) + 136i64))(
					*(_QWORD*)(a1 + 16),
					v9);
				if ((*(unsigned int(__fastcall**)(__int64, __m128*, __m128*, __m128*, __m128*))(*(_QWORD*)v15 + 104i64))(
					v15,
					v27,
					v30,
					v28,
					&v23))
				{
					v16 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
					v17 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v16 + 32i64))(v16);
					v18 = v29 + 336 * v17;
					if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v18 + 24i64))(v18))
					{
						v19 = v22;
						if (v22)
						{
							v20 = _mm_max_ps(v22[1], v24);
							*v22 = _mm_min_ps(*v22, v23);
							v19[1] = v20;
						}
					}
					else
					{
						sub_140390F20(v18, &v23, v22);
					}
				}
				++v9;
			} while (v9 < (unsigned __int64)v21);
		}
		*(_DWORD*)(a1 + 168) = 0;
	}
}
// 1403910B8: variable 'v4' is possibly undefined
// 1403910EE: variable 'v12' is possibly undefined
// 140B7A490: using guessed type __int128 xmmword_140B7A490;
// 140B7A720: using guessed type __int128 xmmword_140B7A720;
// 140DC2148: using guessed type int dword_140DC2148;
// 140390F20: using guessed type __m128 var_60[4];
// 140390F20: using guessed type __m128 var_120[4];

