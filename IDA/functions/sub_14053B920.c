//----- (000000014053B920) ----------------------------------------------------
__int64 __fastcall sub_14053B920(__int64 a1, int a2, _OWORD* a3)
{
	__int64 v3; // rcx
	float (***v4)(void); // rbx
	__m128i v5; // xmm0
	float (**v6)(void); // rax
	int v8; // [rsp+38h] [rbp+10h] BYREF

	v3 = qword_140C65898;
	if (a2 >= 0)
		*(_DWORD*)(qword_140C65898 + 29812) = a2;
	else
		*(_DWORD*)(qword_140C65898 + 29812) = *(_DWORD*)(qword_140C65898 + 29816);
	*(_DWORD*)(v3 + 29808) = 0x7FFFFFFF;
	v4 = (float (***)(void))(v3 + 29704);
	*(_OWORD*)(v3 + 29792) = *a3;
	v5 = _mm_cvtsi32_si128(*(_DWORD*)(v3 + 29812));
	*(_DWORD*)(v3 + 29696) = 1;
	sub_1400F9C30(v3 + 29704, 1.0, 1000.0 / _mm_cvtepi32_ps(v5).m128_f32[0]);
	*(float*)v5.m128i_i32 = (**v4)();
	v6 = *v4;
	v8 = v5.m128i_i32[0];
	return ((__int64(__fastcall*)(float (***)(void), int*))v6[1])(v4, &v8);
}
// 140C65898: using guessed type __int64 qword_140C65898;

