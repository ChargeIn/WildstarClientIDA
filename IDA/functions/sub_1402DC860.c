//----- (00000001402DC860) ----------------------------------------------------
__int64 __fastcall sub_1402DC860(const __m128i* a1)
{
	__int64 result; // rax
	__int64(__fastcall * v3)(const __m128i*, __int64); // rax
	__int64 v4; // rsi
	__int64 v5; // rbx
	void(__fastcall * v6)(const __m128i*, __int64); // rax
	__int64 v7; // [rsp+40h] [rbp+8h] BYREF

	if ((*(unsigned int(__fastcall**)(const __m128i*))(a1->m128i_i64[0] + 56))(a1))
		return 2147500037i64;
	v3 = (__int64(__fastcall*)(const __m128i*, __int64))a1[114].m128i_i64[1];
	if (v3)
	{
		v4 = v3(a1, a1[120].m128i_i64[1]);
	}
	else if (sub_1401B5B50(*(__int64*)&qword_140C63788, a1 + 66, 1i64, 4, &v7) < 0)
	{
		v4 = 0i64;
	}
	else
	{
		v5 = v7;
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 32i64))(v7);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	}
	if (a1[99].m128i_i64[1] != v4)
	{
		result = sub_1402DB980(a1);
		if ((int)result < 0)
			return result;
		v6 = (void(__fastcall*)(const __m128i*, __int64))a1[121].m128i_i64[0];
		if (v6)
			v6(a1, a1[127].m128i_i64[0]);
	}
	return 0i64;
}

