//----- (000000014041BB20) ----------------------------------------------------
__int64 __fastcall sub_14041BB20(_QWORD* a1)
{
	int* v2; // rax
	unsigned int v3; // eax
	__int64 v4; // r11
	__m128i v5; // xmm0
	int v6; // r8d
	__int64 result; // rax
	__int64 v8; // rax

	v2 = sub_140417BF0(a1, 1u);
	if (v2 && v2[114])
	{
		v3 = sub_1403ABFE0(qword_140C65898 + 7160, 25, 0);
		*(_DWORD*)(v4 + 8) = 3;
		v5 = _mm_cvtsi32_si128(v3);
		result = (unsigned int)(v6 + 1);
		*(_QWORD*)v4 = *(_OWORD*)&_mm_cvtepi32_pd(v5);
		a1[2] += 16i64;
	}
	else
	{
		v8 = a1[2];
		*(_QWORD*)v8 = 0i64;
		*(_DWORD*)(v8 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 14041BB5F: variable 'v4' is possibly undefined
// 14041BB6B: variable 'v6' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

