//----- (00000001402DB980) ----------------------------------------------------
__int64 __fastcall sub_1402DB980(const __m128i* a1)
{
	void(__fastcall * v1)(const __m128i*, __int64); // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64(__fastcall * v7)(const __m128i*, __int64); // rax
	__int64 v8; // r14
	__int64 v9; // rax
	__int64 v10; // rax
	int v11; // ebx
	__int64 v12; // r15
	__int64 v13; // rdi
	__int64 v14; // rbx
	__int64 v15; // rax
	int v17; // [rsp+30h] [rbp-38h] BYREF
	const __m128i* v18; // [rsp+38h] [rbp-30h]
	__int64(__fastcall * v19)(__int64*); // [rsp+40h] [rbp-28h]
	__int64 v20; // [rsp+48h] [rbp-20h]
	__int64 v21; // [rsp+70h] [rbp+8h] BYREF

	v1 = (void(__fastcall*)(const __m128i*, __int64))a1[115].m128i_i64[0];
	if (v1)
		v1(a1, a1[120].m128i_i64[1]);
	v3 = a1[99].m128i_i64[0];
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 104i64))(v3);
		v4 = a1[99].m128i_i64[0];
		v17 = -1;
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v4 + 32i64))(v4, &v17);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1[99].m128i_i64[0] + 8i64))(a1[99].m128i_i64[0]);
		a1[99].m128i_i64[0] = 0i64;
	}
	v5 = a1[100].m128i_i64[0];
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		a1[100].m128i_i64[0] = 0i64;
	}
	v6 = *(_QWORD*)&qword_140C63788;
	a1[100].m128i_i32[2] = 4;
	a1[100].m128i_i32[3] = 93;
	a1[101].m128i_i32[0] = 94;
	a1[101].m128i_i32[1] = 95;
	a1[101].m128i_i32[2] = 96;
	v21 = 0i64;
	a1[101].m128i_i32[3] = 1103626240;
	a1[102].m128i_i32[0] = 1056964608;
	a1[102].m128i_i32[1] = 0;
	a1[102].m128i_i32[2] = 50463490;
	a1[102].m128i_i32[3] = 84149508;
	a1[103].m128i_i32[0] = 3;
	sub_1401B5B50(v6, a1 + 66, 1i64, 4, &v21);
	v7 = (__int64(__fastcall*)(const __m128i*, __int64))a1[114].m128i_i64[1];
	v8 = v21;
	if (v7)
	{
		v9 = v7(a1, a1[120].m128i_i64[1]);
	}
	else
	{
		if (!v21)
		{
			a1[99].m128i_i64[1] = 0i64;
			return 0i64;
		}
		v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v21 + 32i64))(v21);
	}
	a1[99].m128i_i64[1] = v9;
	if (v8)
	{
		if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 24i64))(v8))
		{
			v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 24i64))(v8);
			v11 = sub_1401C5690(v10, (int**)&v21, 0);
			if (v11 < 0)
			{
			LABEL_16:
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
				return (unsigned int)v11;
			}
			v12 = v21;
			v17 = 0;
			v18 = a1;
			v20 = 0i64;
			v19 = sub_1402DBBE0;
			v13 = *(_QWORD*)v8;
			v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v21 + 16i64))(v21);
			v15 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 32i64))(v12);
			v11 = (*(__int64(__fastcall**)(__int64, __int64, __int64, const __m128i*, int*))(v13 + 80))(
				v8,
				v15,
				v14,
				a1 + 99,
				&v17);
			if (v11 < 0)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
				goto LABEL_16;
			}
			a1[100].m128i_i64[0] = v12;
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
	}
	return 0i64;
}

