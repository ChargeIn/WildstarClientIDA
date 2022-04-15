//----- (000000014071F450) ----------------------------------------------------
__int64 __fastcall sub_14071F450(__m128* a1)
{
	__int64 result; // rax
	unsigned __int64 v3; // rcx
	int v4[6]; // [rsp+20h] [rbp-18h] BYREF

	if (a1[20].m128_i32[1])
		return (*(__int64(__fastcall**)(__m128*, __int64))(a1->m128_u64[0] + 80))(a1, 1i64);
	if (a1[4].m128_u64[1] && (v3 = a1[14].m128_u64[0]) != 0)
	{
		v4[0] = 0;
		return (*(__int64(__fastcall**)(unsigned __int64, int*, _QWORD))(*(_QWORD*)v3 + 16i64))(v3, v4, 0i64);
	}
	else if (a1[14].m128_u64[0])
	{
		if (a1[14].m128_i32[2])
		{
			if (a1[35].m128_i32[0] != 1)
			{
				if (a1[44].m128_i32[0])
				{
					(*(void(__fastcall**)(__m128*))(a1->m128_u64[0] + 128))(a1);
					return sub_14071F500(a1);
				}
			}
		}
		else
		{
			return (*(__int64(__fastcall**)(__m128*))(a1->m128_u64[0] + 104))(a1);
		}
	}
	return result;
}
// 14071F450: using guessed type int var_18[6];

