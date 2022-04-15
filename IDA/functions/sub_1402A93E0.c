//----- (00000001402A93E0) ----------------------------------------------------
__int64 __fastcall sub_1402A93E0(__int64 a1)
{
	const __m128i* v1; // rdx
	unsigned int v2; // ebx
	int v4; // eax
	int v6[2]; // [rsp+30h] [rbp-38h] BYREF
	__int64 v7; // [rsp+38h] [rbp-30h]
	__int64(__fastcall * v8)(__int64); // [rsp+40h] [rbp-28h]
	__int64 v9; // [rsp+48h] [rbp-20h]
	int v10; // [rsp+50h] [rbp-18h]
	void(__fastcall * **v11)(_QWORD); // [rsp+70h] [rbp+8h] BYREF

	v1 = *(const __m128i**)(a1 + 32);
	v2 = 0;
	v11 = 0i64;
	v4 = sub_1401B6DE0(a1, v1, (int**)(a1 + 56), (__int64)&v11, 0i64);
	if (v4 < 0
		|| (v8 = sub_1402A95E0,
			v6[0] = 12,
			v6[1] = 2,
			v7 = a1,
			v9 = 0i64,
			v10 = 1,
			v4 = sub_14019DCA0((__int64)v6, 0, v11, (int**)(a1 + 64)),
			v4 < 0))
	{
		v2 = sub_1402A9770(a1, v4);
	}
	if (v11)
		(*v11)[1](v11);
	return v2;
}

