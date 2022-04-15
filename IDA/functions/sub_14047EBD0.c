//----- (000000014047EBD0) ----------------------------------------------------
void __fastcall sub_14047EBD0(__m128* a1, __int64* a2, int a3)
{
	__int64 v5; // rax
	__m128* v6; // rcx
	__m128 v7; // xmm2
	__m128 v8; // xmm1

	if (a3 || *((_DWORD*)a2 + 24))
	{
		a1[889].m128_u64[1] = 0i64;
		return;
	}
	v5 = qword_140C65898;
	v6 = *(__m128**)(qword_140C65898 + 120);
	if (!v6)
	{
		(*(void(__fastcall**)(__int64*))(*a2 + 8))(a2);
		a1[889].m128_u64[1] = 0i64;
		return;
	}
	v7 = _mm_sub_ps(v6[286], a1[286]);
	v8 = _mm_mul_ps(v7, v7);
	if ((float)((float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0]) + _mm_shuffle_ps(v8, v8, 170).m128_f32[0]) < *(float*)&dword_140C458B8)
	{
		if (!(unsigned int)sub_14047EE80((__int64)a1))
		{
			(*(void(__fastcall**)(__int64*))(*a2 + 8))(a2);
			a1[889].m128_u64[1] = 0i64;
			return;
		}
		v5 = qword_140C65898;
	}
	if (!*(_QWORD*)(v5 + 25744) || (int)sub_140486340(a2, a1 + 286) < 0)
	{
		a1[889].m128_u64[1] = 0i64;
		(*(void(__fastcall**)(__int64*))(*a2 + 8))(a2);
	}
}
// 140C458B8: using guessed type int dword_140C458B8;
// 140C65898: using guessed type __int64 qword_140C65898;

