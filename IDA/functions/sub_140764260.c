//----- (0000000140764260) ----------------------------------------------------
__int64 __fastcall sub_140764260(_DWORD* a1)
{
	_DWORD* v1; // rax
	_QWORD* v2; // rbx
	int v3; // eax
	__int64 result; // rax
	__m128i v5; // xmm3
	__int64 v6; // rax

	v1 = (_DWORD*)*((_QWORD*)a1 + 3);
	v2 = a1;
	if ((unsigned __int64)v1 >= *((_QWORD*)a1 + 2) || (a1 = dword_140A12138, v1 == dword_140A12138) || (int)v1[2] <= 0)
	{
		v3 = 1;
	}
	else
	{
		v3 = sub_140056D60(v2, 1u);
		if (v3 == 2)
		{
			result = 1i64;
			*(_DWORD*)(v2[2] + 8i64) = 0;
			v2[2] += 16i64;
			return result;
		}
	}
	v5 = _mm_cvtsi32_si128(sub_140630510((__int64)a1, v3));
	v6 = v2[2];
	*(_DWORD*)(v6 + 8) = 3;
	*(_QWORD*)v6 = *(_OWORD*)&_mm_cvtepi32_pd(v5);
	v2[2] += 16i64;
	return 1i64;
}
// 1407642B9: variable 'a1' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

