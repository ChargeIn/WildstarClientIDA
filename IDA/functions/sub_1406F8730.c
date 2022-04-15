//----- (00000001406F8730) ----------------------------------------------------
__int64 sub_1406F8730()
{
	__int64 v0; // rcx
	int v1; // eax
	float (***v2)(void); // rbx
	__m128i v3; // xmm0
	float (**v4)(void); // rax
	int v6; // [rsp+38h] [rbp+10h] BYREF

	v0 = qword_140C65898;
	v1 = *(_DWORD*)(qword_140C65898 + 29816);
	*(_DWORD*)(qword_140C65898 + 29808) = 0x7FFFFFFF;
	v2 = (float (***)(void))(v0 + 29704);
	*(_DWORD*)(v0 + 29812) = v1;
	*(_OWORD*)(v0 + 29792) = xmmword_140B7B240;
	v3 = _mm_cvtsi32_si128(*(_DWORD*)(v0 + 29812));
	*(_DWORD*)(v0 + 29696) = 1;
	sub_1400F9C30(v0 + 29704, 1.0, 1000.0 / _mm_cvtepi32_ps(v3).m128_f32[0]);
	*(float*)v3.m128i_i32 = (**v2)();
	v4 = *v2;
	v6 = v3.m128i_i32[0];
	((void(__fastcall*)(float (***)(void), int*))v4[1])(v2, &v6);
	return 0i64;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65898: using guessed type __int64 qword_140C65898;

