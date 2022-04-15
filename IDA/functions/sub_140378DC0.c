//----- (0000000140378DC0) ----------------------------------------------------
__int64 __fastcall sub_140378DC0(__int64 a1, __m128* a2)
{
	__m128 v2; // xmm0
	__int64 v4; // rcx
	__int64 result; // rax
	unsigned __int64 v6; // rbx
	unsigned __int64 i; // rdi
	__m128 v8; // [rsp+20h] [rbp-28h] BYREF
	char v9[24]; // [rsp+30h] [rbp-18h] BYREF

	v2 = *(__m128*)(a1 + 144);
	v4 = *(_QWORD*)(a1 + 24);
	v8 = _mm_mul_ps(v2, *a2);
	if (v4)
		v8 = _mm_mul_ps(*(__m128*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v4 + 264i64))(v4, v9), v8);
	(*(void(__fastcall**)(_QWORD, __m128*))(**(_QWORD**)(a1 + 48) + 160i64))(*(_QWORD*)(a1 + 48), &v8);
	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 72i64))(*(_QWORD*)(a1 + 48));
	v6 = 0i64;
	for (i = result; v6 < i; ++v6)
	{
		result = (*(__int64(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(a1 + 48) + 80i64))(
			*(_QWORD*)(a1 + 48),
			v6);
		if (result)
			result = sub_140378DC0(result, &v8);
	}
	return result;
}
// 140378DC0: using guessed type char var_18[24];

