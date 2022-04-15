//----- (00000001404862B0) ----------------------------------------------------
__int64 __fastcall sub_1404862B0(__int64 a1)
{
	unsigned int* v1; // rax
	unsigned int v3; // edx
	__m128 v5; // [rsp+20h] [rbp-18h] BYREF

	v1 = *(unsigned int**)(a1 + 104);
	if (!v1)
		return 2147500037i64;
	v3 = *(_DWORD*)(a1 + 112);
	if (!v3 || !(unsigned int)sub_14043E6D0(qword_140C65898, v3, *v1, v5.m128_f32))
		v5 = _mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128) * (unsigned int*)(*(_QWORD*)(a1 + 104) + 12i64),
				(__m128) * (unsigned int*)(*(_QWORD*)(a1 + 104) + 20i64)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(*(_QWORD*)(a1 + 104) + 16i64), (__m128)0i64));
	if (*(_QWORD*)(qword_140C65898 + 25744))
		return sub_140486340((__int64*)a1, &v5);
	else
		return 2147500037i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 1404862B0: using guessed type __m128 var_18;

