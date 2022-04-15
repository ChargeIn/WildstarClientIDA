#include "../winhttp.h"

//----- (00000001403AA1E0) ----------------------------------------------------
void __fastcall sub_1403AA1E0(__m128* a1, __int64* a2, int a3)
{
	unsigned __int64 v5; // rax
	float v6; // xmm1_4
	__int64 v7; // rdi
	__m128* v8; // rax
	__m128 v9; // xmm0
	__m128 v10; // xmm2
	__m128 v11; // xmm1
	__int64 v12; // r8
	__m128 v13; // [rsp+30h] [rbp-38h] BYREF
	__m128 v14; // [rsp+40h] [rbp-28h]
	__m128 v15; // [rsp+50h] [rbp-18h] BYREF

	if (a3 || *((_DWORD*)a2 + 24))
	{
		a1[2031].m128_u64[1] = 0i64;
	}
	else
	{
		v5 = a1[1609].m128_u64[0];
		if (v5 && a1[2031].m128_i32[1])
		{
			v6 = *(float*)(v5 + 4580);
			v13 = a1[2030];
			v7 = 0i64;
			v8 = *(__m128**)(qword_140C65898 + 120);
			v13.m128_f32[1] = v6;
			v9 = v8[286];
			v14 = v13;
			v15 = v9;
			if (fabs(v8[286].m128_f32[1] - v6) > 10.0
				|| (v14.m128_i32[1] = 0,
					v15.m128_i32[1] = 0,
					v10 = _mm_sub_ps(v14, v15),
					v11 = _mm_mul_ps(v10, v10),
					(float)((float)(v11.m128_f32[0] + _mm_shuffle_ps(v11, v11, 85).m128_f32[0])
						+ _mm_shuffle_ps(v11, v11, 170).m128_f32[0]) > 25.0))
			{
				if (!*(_QWORD*)(qword_140C65898 + 25744) || (int)sub_140486340(a2, &v13) < 0)
				{
					(*(void(__fastcall**)(__int64*))(*a2 + 8))(a2);
					a1[2031].m128_u64[1] = 0i64;
				}
			}
			else
			{
				v12 = *(_QWORD*)(qword_140C65898 + 25744);
				v15 = 0ui64;
				if (*(_DWORD*)qword_140C65920)
					v7 = sub_140486F10(
						qword_140C65920,
						(__int64)L"Art\\FX\\Model\\Props\\Destination_Arrow_01_BLU\\Destination_Arrow_01_BLU.m3",
						(__int128*)(v12 + 4528),
						(_DWORD*)a2 + 14,
						(__int64*)&v15);
				(*(void(__fastcall**)(__int64*, __int64, __int64))(*a2 + 8))(a2, *a2, v12);
				a1[2031].m128_u64[1] = v7;
			}
		}
		else
		{
			(*(void(__fastcall**)(__int64*))(*a2 + 8))(a2);
			a1[2031].m128_u64[1] = 0i64;
		}
	}
}
// 1403AA305: variable 'v12' is possibly undefined
// 140AF54B0: using guessed type wchar_t aArtFxModelProp_1[72];
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65920: using guessed type __int64 qword_140C65920;
// 1403AA1E0: using guessed type __m128 var_18;

