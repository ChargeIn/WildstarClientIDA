//----- (00000001406EDF70) ----------------------------------------------------
__int64 __fastcall sub_1406EDF70(_QWORD* a1)
{
	unsigned int v2; // edi
	int v3; // edx
	_DWORD* v4; // rax
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 result; // rax
	__m128i v8; // xmm0
	__int64 v9; // rax

	if (qword_140C65898 && *(_QWORD*)(qword_140C65898 + 120) && qword_140C65970)
	{
		v2 = sub_140056D60(a1, 1u);
		v3 = *(_DWORD*)(qword_140C65970 + 8);
		v4 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v4 < a1[2] && v4 != dword_140A12138 && *(int*)(a1[3] + 24i64) > 0)
			v3 = sub_140056D60(a1, 2u);
		v5 = sub_140491CF0(qword_140C65968, v3, v2);
		v6 = a1[2];
		if (v5)
		{
			v8 = _mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)v5 + 12i64));
			*(_DWORD*)(v6 + 8) = 3;
			result = 1i64;
			*(_QWORD*)v6 = *(_OWORD*)&_mm_cvtepi32_pd(v8);
			a1[2] += 16i64;
		}
		else
		{
			*(_QWORD*)v6 = 0i64;
			*(_DWORD*)(v6 + 8) = 3;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		v9 = a1[2];
		*(_QWORD*)v9 = 0x3FF0000000000000i64;
		*(_DWORD*)(v9 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65968: using guessed type __int64 qword_140C65968;
// 140C65970: using guessed type __int64 qword_140C65970;

