//----- (0000000140771590) ----------------------------------------------------
__int64 __fastcall sub_140771590(__m128* a1, __m128* a2, double a3, float a4, int a5, __int64 a6)
{
	__int64 result; // rax
	char v9[16]; // [rsp+30h] [rbp-38h] BYREF

	result = (*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 40))(a1);
	if ((_DWORD)result)
	{
		if (a6
			&& (a5
				|| (_mm_movemask_ps(
					_mm_cmpneq_ps(
						a1[1],
						*(__m128*)(*(__int64(__fastcall**)(__m128*, char*))(a1->m128_u64[0] + 16))(a1, v9))) & 7) != 0))
		{
			sub_140770FC0(a1, a2, a3, a4, a6);
		}
		return 1i64;
	}
	return result;
}
// 140771590: using guessed type char var_38[16];

