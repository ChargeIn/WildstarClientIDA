//----- (00000001402CDBF0) ----------------------------------------------------
__m128* __fastcall sub_1402CDBF0(__int64* a1, __m128* a2, unsigned int a3, __int64 a4)
{
	__int64 v4; // rax
	__m128* result; // rax
	unsigned int v10; // edi
	__int64 v11; // rbx
	__int64 v12; // rbx
	__m128 v13; // xmm1
	__m128 v14; // [rsp+20h] [rbp-38h] BYREF
	__m128 v15; // [rsp+30h] [rbp-28h]

	v4 = *a1;
	v14.m128_i32[0] = -1;
	result = (__m128*)(*(__int64(__fastcall**)(__int64*, __m128*, __int64))(v4 + 64))(a1, &v14, 5i64);
	v10 = 0;
	if (a1[32])
	{
		v11 = 0i64;
		do
		{
			v12 = 416 * v11;
			result = (__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v12 + a1[31]) + 112i64))(v12 + a1[31]);
			v13 = _mm_min_ps(result[1], a2[1]);
			v14 = _mm_max_ps(*result, *a2);
			v15 = v13;
			if (v14.m128_f32[0] < v13.m128_f32[0] && v14.m128_f32[1] < v15.m128_f32[1] && v14.m128_f32[2] < v15.m128_f32[2])
				result = (__m128*)(*(__int64(__fastcall**)(__int64, __m128*, _QWORD, __int64, unsigned __int64))(*(_QWORD*)(v12 + a1[31]) + 168i64))(
					v12 + a1[31],
					a2,
					a3,
					a4,
					v14.m128_u64[0]);
			v11 = ++v10;
		} while (v10 < (unsigned __int64)a1[32]);
	}
	return result;
}
// 1402CDBF0: using guessed type __m128 var_28;

