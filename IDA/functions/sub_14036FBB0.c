//----- (000000014036FBB0) ----------------------------------------------------
__int64 __fastcall sub_14036FBB0(__m128* a1, __int64 a2)
{
	float* v4; // rdx
	__m128* v5; // rax

	if (!a2)
		return 0i64;
	v4 = (float*)(a2 + 80);
	if (a1[1].m128_f32[0] > *v4)
		return 0i64;
	if (a1[2].m128_f32[0] < v4[4])
		return 0i64;
	if (a1[1].m128_f32[1] > v4[1])
		return 0i64;
	if (a1[2].m128_f32[1] < v4[5])
		return 0i64;
	v5 = sub_1403702A0(a1, v4);
	if ((unsigned int)sub_140370330(v5, a2))
		return 0i64;
	else
		return sub_140370330(a1, a2);
}

