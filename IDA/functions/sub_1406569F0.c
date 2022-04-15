//----- (00000001406569F0) ----------------------------------------------------
__int64 __fastcall sub_1406569F0(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // rax
	unsigned int v4; // eax
	__int64 v5; // r9
	__m128i v6; // xmm0
	__int64 result; // rax

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
		sub_140056570(a1, 1u, "invalid unit");
	v4 = sub_14045BA60(v3);
	*(_DWORD*)(v5 + 8) = 3;
	v6 = _mm_cvtsi32_si128(v4);
	result = 1i64;
	*(_QWORD*)v5 = *(_OWORD*)&_mm_cvtepi32_pd(v6);
	a1[2] += 16i64;
	return result;
}
// 140656A27: variable 'v5' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

