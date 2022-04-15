//----- (00000001406F3B00) ----------------------------------------------------
__int64 __fastcall sub_1406F3B00(_QWORD* a1)
{
	_DWORD* v1; // rax
	int v3; // eax
	__int64 v4; // rdx
	__int64 v5; // r8
	__int64 v6; // rcx
	__int64 v7; // rax
	unsigned int v8; // esi
	unsigned __int64 i; // rbp
	__int64 v10; // rax
	__m128i v11; // xmm0
	unsigned int v12; // edi
	__int64 v13; // rax
	__int64 v15; // [rsp+48h] [rbp+10h]

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 >= a1[2])
		return 0i64;
	if (v1 == dword_140A12138)
		return 0i64;
	if ((int)v1[2] <= 0)
		return 0i64;
	v3 = sub_140056D60(a1, 1u);
	v4 = (unsigned int)v3;
	if (v3 >= 8)
		return 0i64;
	v5 = *(_QWORD*)(qword_140C65898 + 32368);
	v6 = v5;
	v7 = *(_QWORD*)(v5 + 8);
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < (int)v4)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v6 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v6 == v5 || (v15 = v6, (int)v4 < *(_DWORD*)(v6 + 32)))
		v15 = *(_QWORD*)(qword_140C65898 + 32368);
	if (v15 == v5 || v15 == -40)
		return 0i64;
	v8 = 1;
	sub_140058900((__int64)a1, v4, 0);
	for (i = 0i64; i < *(_QWORD*)(v15 + 48); ++i)
	{
		v10 = a1[2];
		v11 = _mm_cvtsi32_si128(v8++);
		*(_DWORD*)(v10 + 8) = 3;
		*(_QWORD*)v10 = *(_OWORD*)&_mm_cvtepi32_pd(v11);
		a1[2] += 16i64;
		v12 = *(_DWORD*)(*(_QWORD*)(v15 + 40) + 4 * i);
		if (qword_140C63840)
		{
			v13 = qword_140C63840(off_140A6C238, v12, qword_140C63858);
		}
		else if (dword_140C65364)
		{
			v13 = 0i64;
		}
		else if ((int)sub_140224AA0() >= 0)
		{
			v13 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A38 + 24i64))(qword_140C64A38, v12);
		}
		else
		{
			v13 = 0i64;
		}
		sub_140434100(a1, v13);
		sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 32i64;
	}
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6C238: using guessed type wchar_t *off_140A6C238[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64A38: using guessed type __int64 qword_140C64A38;
// 140C65364: using guessed type int dword_140C65364;
// 140C65898: using guessed type __int64 qword_140C65898;

