//----- (00000001406B01C0) ----------------------------------------------------
__int64 __fastcall sub_1406B01C0(_QWORD* a1)
{
	__m128d v1; // xmm0
	__int64 v3; // rax
	__int64 v4; // rcx
	unsigned __int64 v5; // rdx
	__int64 v7; // rbx
	unsigned __int64 v8; // rdx
	unsigned int v9; // ecx
	__int64 v10; // r8
	__int64 v11; // rax
	_QWORD* v12; // rcx
	__m128d v13; // xmm6
	_DWORD* v14; // rax
	_QWORD* v15; // rcx
	__m128 v16; // xmm8
	_DWORD* v17; // rax
	_QWORD* v18; // rcx
	__m128 v19; // xmm7
	_DWORD* v20; // rax
	__int64 v21; // rcx
	__m128 v23; // [rsp+20h] [rbp-48h] BYREF

	v3 = sub_140056AB0(a1, 1u);
	if (v3 && qword_140C659F0)
	{
		v5 = *(_QWORD*)(v3 + 16);
		if (v5 ? sub_1404B6E50(v4, v5) : sub_1404C9B90(v4, *(_DWORD*)(v3 + 8)))
		{
			v7 = 0i64;
			v8 = *(_QWORD*)(qword_140C63650 + 768);
			v9 = 0;
			if (v8)
			{
				v10 = *(_QWORD*)(qword_140C63650 + 760);
				v11 = 0i64;
				while (*(_QWORD**)(*(_QWORD*)(v10 + 8 * v11) + 400i64) != a1)
				{
					v11 = ++v9;
					if (v9 >= v8)
						goto LABEL_13;
				}
				v7 = *(_QWORD*)(v10 + 8i64 * v9);
			}
		LABEL_13:
			v12 = *(_QWORD**)(v7 + 400);
			v13 = 0i64;
			v14 = (_DWORD*)(v12[3] + 16i64);
			if ((unsigned __int64)v14 >= v12[2] || v14 == dword_140A12138 || *(int*)(v12[3] + 24i64) <= 0)
				v1 = 0i64;
			else
				v1.m128d_f64[0] = sub_140056C40(v12, 2u);
			v15 = *(_QWORD**)(v7 + 400);
			v16 = 0i64;
			v16.m128_f32[0] = v1.m128d_f64[0];
			v17 = (_DWORD*)(v15[3] + 32i64);
			if ((unsigned __int64)v17 >= v15[2] || v17 == dword_140A12138 || *(int*)(v15[3] + 40i64) <= 0)
				v1 = 0i64;
			else
				v1.m128d_f64[0] = sub_140056C40(v15, 3u);
			v18 = *(_QWORD**)(v7 + 400);
			v19 = 0i64;
			v19.m128_f32[0] = v1.m128d_f64[0];
			v20 = (_DWORD*)(v18[3] + 48i64);
			if ((unsigned __int64)v20 < v18[2] && v20 != dword_140A12138 && *(int*)(v18[3] + 56i64) > 0)
			{
				v1.m128d_f64[0] = sub_140056C40(v18, 4u);
				v13 = v1;
			}
			v23 = _mm_unpacklo_ps(_mm_unpacklo_ps(v16, _mm_cvtpd_ps(v13)), _mm_unpacklo_ps(v19, (__m128)0i64));
			if (sub_1405B1510(&qword_140C7DFB0))
			{
				v21 = *(_QWORD*)(qword_140C659F8 + 200);
				if (v21)
					(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)v21 + 16i64))(v21, &v23);
			}
		}
	}
	return 0i64;
}
// 1406B01FA: variable 'v4' is possibly undefined
// 1406B0315: variable 'v1' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

