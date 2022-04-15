//----- (00000001404C0880) ----------------------------------------------------
__int64 __fastcall sub_1404C0880(__m128* a1)
{
	unsigned __int64 v3; // rcx
	unsigned __int64 v4; // rcx
	unsigned __int64 v5; // rcx
	unsigned __int64 v6; // rcx
	unsigned __int64 v7; // rcx
	unsigned __int64 v8; // rbx
	int v9; // eax
	unsigned __int64 v10; // rcx
	unsigned __int64 v11; // rcx
	unsigned __int64 v12; // rbx
	int v13; // eax
	unsigned __int64 v14; // rcx
	unsigned __int64 v15; // rbx
	int v16; // eax
	_QWORD* v17; // rcx
	unsigned __int64 v18; // rcx
	__int64* v19; // rcx
	__int64 v20; // rbx
	__int64 v21; // [rsp+20h] [rbp-20h] BYREF
	__int64 v22; // [rsp+28h] [rbp-18h]
	__int64 v23; // [rsp+30h] [rbp-10h]
	__int64 v24; // [rsp+38h] [rbp-8h]

	if (a1[40].m128_i32[0])
		return 1i64;
	v3 = a1[39].m128_u64[0];
	if (v3)
	{
		LODWORD(v21) = 0;
		if (!(*(unsigned int(__fastcall**)(unsigned __int64, __int64*, _QWORD))(*(_QWORD*)v3 + 16i64))(v3, &v21, 0i64))
			return 0i64;
	}
	v4 = a1[39].m128_u64[0];
	if (v4)
	{
		(*(void(__fastcall**)(unsigned __int64, void(__fastcall*)(__int64, __int64, __int64, __int64, int, __int64), __m128*))(*(_QWORD*)v4 + 648i64))(
			v4,
			sub_1404C2910,
			a1);
		v5 = a1[39].m128_u64[0];
		v21 = 1106i64;
		v22 = 1065353216i64;
		v23 = 0i64;
		v24 = 0i64;
		(*(void(__fastcall**)(unsigned __int64, _QWORD, __int64*))(*(_QWORD*)v5 + 584i64))(v5, 0i64, &v21);
	}
	v6 = a1[39].m128_u64[1];
	if (v6)
	{
		LODWORD(v21) = 0;
		if (!(*(unsigned int(__fastcall**)(unsigned __int64, __int64*, _QWORD))(*(_QWORD*)v6 + 16i64))(v6, &v21, 0i64))
			return 0i64;
	}
	v7 = a1[39].m128_u64[1];
	if (v7)
	{
		(*(void(__fastcall**)(unsigned __int64, void(__fastcall*)(__int64, __int64, __int64, int), __m128*))(*(_QWORD*)v7 + 648i64))(
			v7,
			sub_1404C2880,
			a1);
		v8 = a1[39].m128_u64[1];
		v9 = sub_1401AE6F0(0, -1);
		LODWORD(v21) = 6691;
		v22 = 1065353216i64;
		v23 = 0i64;
		v24 = 0i64;
		HIDWORD(v21) = v9;
		(*(void(__fastcall**)(unsigned __int64, _QWORD, __int64*))(*(_QWORD*)v8 + 584i64))(v8, 0i64, &v21);
	}
	v10 = a1[38].m128_u64[1];
	if (v10)
	{
		LODWORD(v21) = 0;
		if (!(*(unsigned int(__fastcall**)(unsigned __int64, __int64*, _QWORD))(*(_QWORD*)v10 + 16i64))(
			v10,
			&v21,
			0i64))
			return 0i64;
	}
	v11 = a1[38].m128_u64[1];
	if (v11)
	{
		(*(void(__fastcall**)(unsigned __int64, void(__fastcall*)(__int64, __int64, __int64, int), __m128*))(*(_QWORD*)v11 + 648i64))(
			v11,
			sub_1404C2880,
			a1);
		v12 = a1[38].m128_u64[1];
		v13 = sub_1401AE6F0(0, -1);
		LODWORD(v21) = 6691;
		v22 = 1065353216i64;
		v23 = 0i64;
		v24 = 0i64;
		HIDWORD(v21) = v13;
		(*(void(__fastcall**)(unsigned __int64, _QWORD, __int64*))(*(_QWORD*)v12 + 584i64))(v12, 0i64, &v21);
	}
	v14 = a1[38].m128_u64[0];
	if (v14)
	{
		LODWORD(v21) = 0;
		if (!(*(unsigned int(__fastcall**)(unsigned __int64, __int64*, _QWORD))(*(_QWORD*)v14 + 16i64))(
			v14,
			&v21,
			0i64))
			return 0i64;
	}
	(*(void(__fastcall**)(unsigned __int64, void(__fastcall*)(__int64, __int64, __int64, int), __m128*))(*(_QWORD*)a1[38].m128_u64[0] + 648i64))(
		a1[38].m128_u64[0],
		sub_1404C2880,
		a1);
	v15 = a1[38].m128_u64[0];
	v16 = sub_1401AE6F0(0, -1);
	LODWORD(v21) = 6691;
	v22 = 1065353216i64;
	v23 = 0i64;
	v24 = 0i64;
	HIDWORD(v21) = v16;
	(*(void(__fastcall**)(unsigned __int64, _QWORD, __int64*))(*(_QWORD*)v15 + 584i64))(v15, 0i64, &v21);
	v17 = (_QWORD*)a1[1].m128_u64[0];
	if (v17)
		*v17 = a1[1].m128_u64[1];
	v18 = a1[1].m128_u64[1];
	if (v18)
		*(_QWORD*)(v18 + 16) = a1[1].m128_u64[0];
	a1[1].m128_u64[0] = 0i64;
	a1[1].m128_u64[1] = 0i64;
	sub_1404C19C0(a1);
	v19 = (__int64*)xmmword_140C7DFC0;
	if ((_QWORD)xmmword_140C7DFC0 != *((_QWORD*)&xmmword_140C7DFC0 + 1))
	{
		while (*(_DWORD*)(*v19 + 188) != *(_DWORD*)(a1[18].m128_u64[1] + 20))
		{
			if (++v19 == *((__int64**)&xmmword_140C7DFC0 + 1))
				goto LABEL_34;
		}
		v20 = *v19;
		if (*v19)
		{
			if (sub_1404C06C0((__int64)a1))
			{
				sub_1405AE010(v20, a1[8].m128_i32[0]);
			}
			else if (!*(_QWORD*)(a1[18].m128_u64[1] + 144)
				&& ((*(_QWORD*)(v20 + 424) - *(_QWORD*)(v20 + 416)) & 0xFFFFFFFFFFFFFFF8ui64) != 0
				&& !*(_DWORD*)qword_140C659F0)
			{
				sub_1405AEC80(v20);
			}
		}
	}
LABEL_34:
	a1[40].m128_i32[0] = 1;
	return 1i64;
}
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;

