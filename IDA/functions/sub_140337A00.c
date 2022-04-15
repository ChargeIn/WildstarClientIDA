//----- (0000000140337A00) ----------------------------------------------------
__int64 __fastcall sub_140337A00(__int64 a1, _DWORD* a2, __int64 a3)
{
	const __m128i* v3; // r9
	const __m128i* v7; // r10
	signed __int64 v8; // r10
	__int64 v9; // r8
	const __m128i* v10; // rax
	unsigned __int8* v11; // rdi
	const __m128i* v12; // rax
	__int64 v13; // rax
	_BYTE* v14; // rax
	int v15; // ebx
	__int64 result; // rax
	__int64 v17; // [rsp+40h] [rbp+8h] BYREF

	v3 = *(const __m128i**)a1;
	v7 = *(const __m128i**)a1;
	while (v7->m128i_i8[0] == aHttp_2[(_QWORD)v7 - *(_QWORD*)a1])
	{
		if (v7->m128i_i8[0])
		{
			v7 = (const __m128i*)((char*)v7 + 1);
			if ((unsigned __int64)v7 - *(_QWORD*)a1 < 4)
				continue;
		}
		v17 = 0x141DECC20i64;
		sub_1401A3130(21, 1, &v17);
	LABEL_10:
		v10 = sub_1407DDCF8(*(const __m128i**)a1, (const __m128i*) & unk_1409E6A5C);
		if (!v10)
			return 2147500037i64;
		v11 = &v10->m128i_u8[1];
		if (v10 == (const __m128i*) - 1i64)
			return 2147500037i64;
		v12 = sub_1407DDCF8((const __m128i*) & v10->m128i_i8[1], (const __m128i*) & unk_1409E6BCC);
		if (v12)
			v12 = (const __m128i*)((char*)v12 + 1);
		*(_QWORD*)(a3 + 8) = v12;
		if (!v12)
			return 2147500037i64;
		v13 = *(_QWORD*)(a1 + 8);
		if (!v13)
			return 2147500037i64;
		v14 = (_BYTE*)(v13 - 1);
		if (*v14 == 10)
			--v14;
		if (*v14 == 13)
			--v14;
		v15 = (_DWORD)v14 + 1;
		if (v14 == (_BYTE*)-1i64)
			return 2147500037i64;
		*a2 = sub_1407DF3E4(v11);
		result = 0i64;
		*(_DWORD*)a3 = v15 - *(_DWORD*)(a3 + 8);
		*(_DWORD*)(a1 + 16) = 1;
		return result;
	}
	v8 = &unk_1409E6B04 - (_UNKNOWN*)v3;
	v9 = -(__int64)v3;
	while (v3->m128i_i8[0] == v3->m128i_i8[v8])
	{
		if (v3->m128i_i8[0])
		{
			v3 = (const __m128i*)((char*)v3 + 1);
			if ((unsigned __int64)v3->m128i_u64 + v9 < 3)
				continue;
		}
		goto LABEL_10;
	}
	return 2147500037i64;
}

