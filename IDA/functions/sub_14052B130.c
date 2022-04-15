//----- (000000014052B130) ----------------------------------------------------
__m128 __fastcall sub_14052B130(__int64 a1)
{
	__int64 v1; // rcx
	__m128 result; // xmm0
	int* v3; // rax
	__m128 v4; // xmm1
	__m128 v5[2]; // [rsp+20h] [rbp-28h] BYREF

	v1 = *(_QWORD*)(a1 + 1152);
	if (v1)
	{
		v3 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v1 + 88i64))(v1);
		sub_14044A3B0((__int64)v5, v3);
		result = _mm_sub_ps(v5[1], v5[0]);
		v4 = _mm_shuffle_ps(result, result, 170);
		if (result.m128_f32[0] < v4.m128_f32[0])
		{
			v4.m128_f32[0] = v4.m128_f32[0] * 0.00048828125;
			return v4;
		}
		else
		{
			result.m128_f32[0] = result.m128_f32[0] * 0.00048828125;
		}
	}
	else
	{
		return (__m128)0x3F800000u;
	}
	return result;
}

