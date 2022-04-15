//----- (000000014045A640) ----------------------------------------------------
__int64 __fastcall sub_14045A640(__m128* a1)
{
	__int64 v2; // r8
	__int64 v3; // r9
	__m128* v4; // rcx
	float v5; // xmm3_4
	__int64 v6; // rcx
	__m128* v7; // rcx
	float v8; // xmm3_4
	__int64 v9; // rcx
	__m128* v10; // rcx
	float v11; // xmm3_4
	__int64 v12; // rcx
	__m128* v13; // rcx
	float v14; // xmm3_4
	__int64 v15; // rcx
	__m128* v16; // rcx
	float v17; // xmm3_4
	__int64 v18; // rcx

	sub_140472F70((__int64)a1);
	if (a1[386].m128_u64[1] || a1[388].m128_u64[1])
		sub_1404762C0((__int64)a1);
	sub_14062A160(qword_140C65898 + 27592, a1, v2, v3);
	if (a1[599].m128_i8[4])
	{
		v4 = *(__m128**)(qword_140C65898 + 120);
		if (v4)
		{
			v5 = a1[600].m128_f32[0];
			if (v5 <= 0.0)
				v5 = 5.0;
			if (sub_1403AD690(v4, a1, 0.0, v5, 0.0))
				sub_1404824C0(v6, 44, a1->m128_i32[2]);
		}
	}
	if (a1[792].m128_i8[12])
	{
		v7 = *(__m128**)(qword_140C65898 + 120);
		if (v7)
		{
			v8 = a1[793].m128_f32[2];
			if (v8 <= 0.0)
				v8 = 5.0;
			if (sub_1403AD690(v7, a1, 0.0, v8, 0.0))
				sub_1404824C0(v9, 87, a1->m128_i32[2]);
		}
	}
	if (a1[756].m128_i8[12])
	{
		v10 = *(__m128**)(qword_140C65898 + 120);
		if (v10)
		{
			v11 = a1[757].m128_f32[2];
			if (v11 <= 0.0)
				v11 = 5.0;
			if (sub_1403AD690(v10, a1, 0.0, v11, 0.0))
				sub_1404824C0(v12, 79, a1->m128_i32[2]);
		}
	}
	if (a1[783].m128_i8[12])
	{
		v13 = *(__m128**)(qword_140C65898 + 120);
		if (v13)
		{
			v14 = a1[784].m128_f32[2];
			if (v14 <= 0.0)
				v14 = 5.0;
			if (sub_1403AD690(v13, a1, 0.0, v14, 0.0))
				sub_1404824C0(v15, 85, a1->m128_i32[2]);
		}
	}
	if (a1[702].m128_i8[12])
	{
		v16 = *(__m128**)(qword_140C65898 + 120);
		if (v16)
		{
			v17 = a1[703].m128_f32[2];
			if (v17 <= 0.0)
				v17 = 5.0;
			if (sub_1403AD690(v16, a1, 0.0, v17, 0.0))
				sub_1404824C0(v18, 67, a1->m128_i32[2]);
		}
	}
	sub_14047F770((__int64)a1);
	return 0i64;
}
// 14045A680: variable 'v2' is possibly undefined
// 14045A680: variable 'v3' is possibly undefined
// 14045A6D4: variable 'v6' is possibly undefined
// 14045A725: variable 'v9' is possibly undefined
// 14045A776: variable 'v12' is possibly undefined
// 14045A7C7: variable 'v15' is possibly undefined
// 14045A818: variable 'v18' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

