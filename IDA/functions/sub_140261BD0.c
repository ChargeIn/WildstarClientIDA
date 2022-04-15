//----- (0000000140261BD0) ----------------------------------------------------
void __fastcall sub_140261BD0(__int64 a1, __m128** a2, __int64 a3)
{
	__int64 v5; // r8
	__m128* v6; // [rsp+30h] [rbp-D8h] BYREF
	__int64 v7; // [rsp+38h] [rbp-D0h]
	int v8; // [rsp+44h] [rbp-C4h]
	__m128 v9[4]; // [rsp+50h] [rbp-B8h] BYREF
	__m128* v10[10]; // [rsp+90h] [rbp-78h] BYREF

	if (*(_DWORD*)(a1 + 2408))
	{
		v6 = *a2;
		v10[0] = v6;
		v7 = a1 + 160;
		v10[1] = (__m128*)(a1 + 160);
		sub_1401AFB10(v10, v9);
		if ((unsigned int)sub_14025FA40(
			(__m128*)a1,
			*(int**)(*(_QWORD*)(v5 + 24) + 8i64),
			**(unsigned int**)(v5 + 24),
			*(__m128**)(*(_QWORD*)(v5 + 16) + 8i64),
			**(unsigned int**)(v5 + 16),
			v9))
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 336i64))(qword_140C65670, 2i64);
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2096) + 24i64))(*(_QWORD*)(a1 + 2096));
			v7 = *(_QWORD*)(a1 + 2352);
			LODWORD(v6) = 1;
			v8 = 0;
			(*(void(__fastcall**)(__int64, __m128**, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
				qword_140C65670,
				&v6,
				&unk_140C3FE88,
				&unk_140C3FE88,
				&unk_140C3FE88);
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, a1 + 2328);
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 7i64);
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65670 + 464i64))(
				qword_140C65670,
				1i64,
				4i64);
			sub_14025ED60(a1, a3, 1, 0);
			sub_140260520(a1);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2096) + 32i64))(*(_QWORD*)(a1 + 2096));
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 496i64))(
				qword_140C65670,
				*(_QWORD*)(a1 + 2096),
				0i64);
			v7 = *(_QWORD*)(a1 + 1712);
			LODWORD(v6) = 1;
			v8 = 0;
			(*(void(__fastcall**)(__int64, __m128**, void*, void*, void*))(*(_QWORD*)qword_140C65670 + 520i64))(
				qword_140C65670,
				&v6,
				&unk_140C3FE88,
				&unk_140C3FE88,
				&unk_140C3FE88);
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 592i64))(qword_140C65670, a1 + 2328);
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 448i64))(qword_140C65670, 1i64);
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 464i64))(
				qword_140C65670,
				1i64,
				0i64);
			if (*(_DWORD*)(a1 + 48) == 9)
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int))(*(_QWORD*)qword_140C65670 + 432i64))(
					qword_140C65670,
					0i64,
					0i64,
					2i64,
					7);
			sub_14025EFB0(a1, 0);
			sub_140260520(a1);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
			if (*(_DWORD*)(a1 + 48) == 9)
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD*)qword_140C65670 + 432i64))(
					qword_140C65670,
					0i64,
					0i64,
					0i64,
					2);
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 496i64))(
				qword_140C65670,
				0i64,
				0i64);
		}
	}
}
// 140261C42: variable 'v5' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;
// 140261BD0: using guessed type __m128 var_B8[4];

