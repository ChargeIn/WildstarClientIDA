//----- (00000001406E9C80) ----------------------------------------------------
__int64 __fastcall sub_1406E9C80(_QWORD* a1)
{
	unsigned __int64 v2; // r8
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rax
	__int64 v6; // rbx
	__m128 v7; // xmm6
	__m128 v8; // xmm7
	__m128 v9; // xmm2
	__int64 v10; // rbx
	__int64 v11; // rax
	int v12; // esi
	_QWORD* v13; // rax
	__int64 v14; // rdx
	unsigned __int64 v15; // rbx
	unsigned __int64* v16; // rdx
	unsigned __int64 v17; // r8
	__int64 v18; // rax
	__int64* v19; // rax
	_QWORD* v20; // rax
	__int64 v21; // r10
	unsigned __int64* v22; // rdx
	__int64 v23; // rax
	__int64* v24; // rax
	_QWORD* v25; // rax
	__int64 v26; // r10
	__int64 v27; // rdx
	unsigned __int64 v29; // [rsp+20h] [rbp-58h]
	__int64 v30; // [rsp+30h] [rbp-48h] BYREF
	__int64 v31; // [rsp+38h] [rbp-40h]

	sub_1406E8880(a1, 1u);
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0i64;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v3 = (unsigned int)(v3 + 1);
			v5 = (unsigned int)v3;
			if ((unsigned int)v3 >= v2)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8 * v3);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = (__m128)COERCE_UNSIGNED_INT((float)(int)sub_1400F26A0(v6 + 384, 2));
	v8 = v7;
	v8.m128_f32[0] = v7.m128_f32[0] * 96.0;
	v9 = (__m128)COERCE_UNSIGNED_INT((float)(int)sub_1400F26A0(v6 + 384, 3));
	v9.m128_f32[0] = (float)(v9.m128_f32[0] + (float)(v7.m128_f32[0] * 0.5))
		* (float)(_mm_sqrt_ps((__m128)0x40400000u).m128_f32[0] * 64.0);
	v29 = _mm_unpacklo_ps(_mm_unpacklo_ps(v8, (__m128)0i64), _mm_unpacklo_ps(v9, (__m128)0i64)).m128_u64[0];
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v10 = a1[2];
	v11 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v10 + 8) = 5;
	*(_QWORD*)v10 = v11;
	a1[2] += 16i64;
	v12 = sub_1400578C0((__int64)a1);
	v13 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v12);
	v14 = a1[2];
	*(_QWORD*)v14 = *v13;
	*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
	a1[2] += 16i64;
	v15 = -1i64;
	v16 = (unsigned __int64*)sub_14018F0E0(&v30, L"nX")[1];
	if (v16)
	{
		v17 = -1i64;
		do
			++v17;
		while (*((_BYTE*)v16 + v17));
		sub_140058710((__int64)a1, v16, v17);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v31)
		sub_14018B900(v31, 0);
	v18 = a1[2];
	*(_DWORD*)(v18 + 8) = 3;
	*(double*)v18 = *(float*)&v29;
	a1[2] += 16i64;
	v19 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v19, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v20 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v12);
	*(_QWORD*)v21 = *v20;
	*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
	a1[2] += 16i64;
	v22 = (unsigned __int64*)sub_14018F0E0(&v30, L"nY")[1];
	if (v22)
	{
		do
			++v15;
		while (*((_BYTE*)v22 + v15));
		sub_140058710((__int64)a1, v22, v15);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v31)
		sub_14018B900(v31, 0);
	v23 = a1[2];
	*(_DWORD*)(v23 + 8) = 3;
	*(double*)v23 = *((float*)&v29 + 1);
	a1[2] += 16i64;
	v24 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v24, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v25 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v12);
	*(_QWORD*)v26 = *v25;
	*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v27, v12);
	return 1i64;
}
// 1406E9E8A: variable 'v21' is possibly undefined
// 1406E9F3E: variable 'v26' is possibly undefined
// 1406E9F50: variable 'v27' is possibly undefined
// 140B3F65C: using guessed type wchar_t aNy_1[3];
// 140B3F664: using guessed type wchar_t aNx_1[3];
// 140C63650: using guessed type __int64 qword_140C63650;

