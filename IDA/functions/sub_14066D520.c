//----- (000000014066D520) ----------------------------------------------------
__int64 __fastcall sub_14066D520(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rax
	__int64 v6; // rsi
	__int64 v7; // rsi
	__int64 v8; // rdx
	__m128i v9; // xmm0

	if (*(_QWORD*)(qword_140C65898 + 120) && (v2 = sub_140056AB0(a1, 1u)) != 0 && (v3 = *(_QWORD*)(v2 + 8)) != 0)
		v4 = sub_14066DAB0(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 8i64), **(_DWORD**)(*(_QWORD*)(v3 + 8) + 8i64));
	else
		v4 = 0i64;
	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v5 = sub_140056AB0(a1, 1u)) != 0
		&& (v6 = *(_QWORD*)(v5 + 8)) != 0
		&& (v7 = *(_QWORD*)(v6 + 8)) != 0
		&& v4
		&& (*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 88i64))(v4, **(unsigned int**)(v7 + 8)))
	{
		v8 = a1[2];
		v9 = _mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)(v7 + 8) + 80i64));
		*(_DWORD*)(v8 + 8) = 3;
		*(_QWORD*)v8 = *(_OWORD*)&_mm_cvtepi32_pd(v9);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

