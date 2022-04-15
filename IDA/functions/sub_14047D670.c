#include "../winhttp.h"

//----- (000000014047D670) ----------------------------------------------------
__int64 __fastcall sub_14047D670(__m128* a1, __m128* a2, int a3)
{
	__int64* v5; // rdi
	unsigned __int64 v7; // rbx
	float v8; // xmm6_4
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rdi
	__int32 v13; // ebx
	__int32 v14; // ebx
	int v16[4]; // [rsp+30h] [rbp-88h] BYREF
	__m128 v17; // [rsp+40h] [rbp-78h] BYREF
	__m128 v18; // [rsp+50h] [rbp-68h] BYREF
	__int64 v19; // [rsp+60h] [rbp-58h] BYREF
	int v20; // [rsp+68h] [rbp-50h]
	__int64 v21; // [rsp+70h] [rbp-48h]
	__int64 v22; // [rsp+78h] [rbp-40h]
	int v23; // [rsp+80h] [rbp-38h]
	__int64 v24; // [rsp+88h] [rbp-30h]
	__int64 v25; // [rsp+D8h] [rbp+20h] BYREF

	v5 = *(__int64**)(qword_140C65898 + 29256);
	if (!v5)
		return 0i64;
	v7 = a1[208].m128_u64[1];
	v8 = 0.0;
	v17 = a1[286];
	if (v7)
	{
		v8 = sub_14047A940(a1) * *(float*)(v7 + 140);
	}
	else
	{
		v9 = sub_14022D500(a1[13].m128_u32[2]);
		if (v9)
			v8 = *(float*)(v9 + 40);
	}
	v17.m128_f32[1] = v17.m128_f32[1] + fmaxf(2.0, v8);
	sub_14047DAA0(a2, &v18, &v17, a3);
	v25 = 0i64;
	v20 = 0;
	v16[1] = 1065353216;
	v21 = 0i64;
	v22 = 0i64;
	v23 = 0;
	v24 = 0i64;
	v16[0] = 0;
	v10 = *v5;
	v19 = 16449i64;
	if ((*(unsigned int(__fastcall**)(__int64*, __m128*, __m128*, int*, __int64*, __int64*))(v10 + 424))(
		v5,
		&v17,
		&v18,
		v16,
		&v25,
		&v19))
	{
		v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v25 + 24i64))(v25);
		v12 = v11;
		if (!v11
			|| (v13 = a2->m128_i32[2], (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v11 + 48i64))(v11) != v13)
			&& (v14 = a1->m128_i32[2], (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v12 + 48i64))(v12) != v14))
		{
			if (v25)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 8i64))(v25);
			return 0i64;
		}
	}
	if (v25)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 8i64))(v25);
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

