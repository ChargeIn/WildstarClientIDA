//----- (00000001400E6E80) ----------------------------------------------------
char __fastcall sub_1400E6E80(__int64 a1)
{
	char v1; // bp
	char* v2; // rsi
	__int64 v4; // rcx
	_QWORD* v5; // rdi
	__m128 v6; // xmm6
	__m128* v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rcx
	char v10; // al
	unsigned __int64 v11; // rdi
	__int64 v12; // rcx
	__int64 v13; // rcx
	char* v14; // r8
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64 v17; // r8
	__int64 v18; // rdx
	char result; // al
	__int64 v20; // [rsp+20h] [rbp-A8h]
	__int64 v21; // [rsp+28h] [rbp-A0h]
	__m128 v22; // [rsp+40h] [rbp-88h] BYREF
	__m128 v23[4]; // [rsp+50h] [rbp-78h] BYREF
	int v24; // [rsp+D0h] [rbp+8h] BYREF
	char v25; // [rsp+D8h] [rbp+10h] BYREF
	char v26; // [rsp+E0h] [rbp+18h] BYREF

	v1 = 0;
	v2 = *(char**)(a1 + 3392);
	*(_BYTE*)(a1 + 2841) = 1;
	LOBYTE(v24) = 0;
	v25 = 0;
	v26 = 0;
	if (v2)
		(**(void(__fastcall***)(char*))v2)(v2);
	v4 = *(_QWORD*)(a1 + 3392);
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a1 + 3392) = 0i64;
	}
	*(_QWORD*)(a1 + 3496) = qword_140C77760;
	*(_DWORD*)(a1 + 3380) = 0;
	v5 = *(_QWORD**)(a1 + 2896);
	if (v5)
	{
		v6 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(**(_DWORD**)(a1 + 2832)), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(a1 + 2832) + 4i64)), _mm_cvtsi32_si128(0))));
		v7 = sub_1400C96C0(*(_QWORD*)(a1 + 2896), v23);
		v8 = v5[2];
		v22 = _mm_add_ps(
			_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v6, v6, 85), v7[1]), _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), *v7)),
			v7[3]);
		if (!v8)
			goto LABEL_11;
		if (*(float*)(v8 + 648) <= 0.0)
		{
			sub_1400D0F30(v5, 0, &v26, &v24, &v25, &v22);
		LABEL_13:
			v1 = v24;
			goto LABEL_14;
		}
		v9 = *(_QWORD*)(v8 + 16);
		if (v9)
			v10 = sub_1400D1A60(v9);
		else
			LABEL_11:
		v10 = 1;
		sub_1400D0F30(v5, v10, &v26, &v24, &v25, &v22);
		goto LABEL_13;
	}
LABEL_14:
	v11 = 0i64;
	if (*(_QWORD*)(a1 + 3208))
	{
		do
			sub_140157780(
				*(_QWORD*)(*(_QWORD*)(a1 + 3200) + 8 * v11++),
				*(_QWORD*)(a1 + 2832),
				(__int64)&v26,
				(__int64)&v24,
				(__int64)&v25);
		while (v11 < *(_QWORD*)(a1 + 3208));
		v1 = v24;
	}
	if (v2 && v2 != *(char**)(a1 + 3392))
		sub_1400D4070((__int64)v2, 0x1Cu, v2, "b", 0i64);
	v12 = *(_QWORD*)(a1 + 3392);
	if (v2 != (char*)v12 && v12)
	{
		LODWORD(v20) = 1;
		sub_1400D4070(v12, 0x1Cu, *(char**)(a1 + 3392), L"b", v20);
	}
	if (v2)
		(*(void(__fastcall**)(char*))(*(_QWORD*)v2 + 8i64))(v2);
	if (!v1)
	{
		v13 = *(_QWORD*)(a1 + 3384);
		if (!v13)
			return 0;
		v14 = *(char**)(a1 + 3384);
		LODWORD(v21) = *(_DWORD*)(a1 + 3488);
		v15 = *(_QWORD*)(a1 + 3440);
		v24 = 0;
		sub_1400D4070(v13, 0x1Du, v14, "si>b", v15, v21, &v24);
		if (v24)
			goto LABEL_31;
		v16 = *(_QWORD*)(a1 + 3400);
		if (!v16)
			return 0;
		v22.m128_i32[0] = 0;
		if ((unsigned int)sub_140152FD0(v16, (__int64)&v22))
			sub_1400E6E20(a1, *(__int64(__fastcall****)(_QWORD))(a1 + 3400));
	}
LABEL_31:
	v17 = *(_QWORD*)(a1 + 2848);
	if (v17)
	{
		v18 = *(_QWORD*)(v17 + 88);
		if (v18)
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 472i64))(
				qword_140C65670,
				v18,
				*(unsigned int*)(v17 + 96),
				*(unsigned int*)(v17 + 100));
	}
	result = 1;
	if (!*(_QWORD*)(a1 + 2848))
		return 0;
	return result;
}
// 1400E7170: conditional instruction was optimized away because bp.1!=0
// 1400E7092: variable 'v20' is possibly undefined
// 1400E7100: variable 'v21' is possibly undefined
// 1409D38E4: using guessed type wchar_t aB_9[2];
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C77760: using guessed type __int64 qword_140C77760;
// 1400E6E80: using guessed type __m128 var_78[4];

