//----- (0000000140395F60) ----------------------------------------------------
__m128* __fastcall sub_140395F60(__int64* a1, __m128* a2, int a3)
{
	__int64 v3; // rax
	int v7; // edi
	int v8; // edi
	__m128 v9; // xmm0
	__int64 v10; // rcx
	__m128* v11; // rax
	__int64 v12; // rcx
	__m128* v13; // rax
	__int64 v14; // rcx
	__m128* v15; // rax
	int v17[10]; // [rsp+20h] [rbp-28h] BYREF

	v3 = *a1;
	v17[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v3 + 40))(a1, v17);
	if (!a3)
	{
		v14 = a1[5];
		if (v14)
		{
			v15 = (__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v14 + 1168i64))(v14);
			*a2 = *v15;
			v9 = v15[1];
			goto LABEL_13;
		}
		goto LABEL_12;
	}
	v7 = a3 - 1;
	if (!v7)
	{
		v12 = a1[5];
		if (v12)
		{
			v13 = (__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 1192i64))(v12);
			*a2 = *v13;
			v9 = v13[1];
			goto LABEL_13;
		}
		goto LABEL_12;
	}
	v8 = v7 - 1;
	if (!v8)
	{
		v10 = a1[5];
		if (v10)
		{
			v11 = (__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 1208i64))(v10);
			*a2 = *v11;
			v9 = v11[1];
			goto LABEL_13;
		}
	LABEL_12:
		*a2 = (__m128)xmmword_140C798A0;
		v9 = (__m128)xmmword_140C798B0;
		goto LABEL_13;
	}
	if (v8 != 1)
		goto LABEL_12;
	v17[4] = 1065353216;
	v9 = _mm_add_ps((__m128)xmmword_140B7B240, (__m128)0i64);
	*a2 = _mm_sub_ps((__m128)0i64, (__m128)xmmword_140B7B240);
LABEL_13:
	a2[1] = v9;
	return a2;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C798A0: using guessed type __int128 xmmword_140C798A0;
// 140C798B0: using guessed type __int128 xmmword_140C798B0;

