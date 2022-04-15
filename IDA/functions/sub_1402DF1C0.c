//----- (00000001402DF1C0) ----------------------------------------------------
__int64 __fastcall sub_1402DF1C0(__int64 a1)
{
	__int64 v1; // rdx
	void(__fastcall * v3)(__int64, _QWORD); // rax
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	_QWORD* v7; // rdi
	__int64 v8; // rsi
	__int64 v9; // rcx
	unsigned __int64 i; // rdi
	__int64 v11; // rcx
	__int64 v12; // rcx
	unsigned __int64 j; // rdi
	__int64 v14; // rcx
	__int64 v15; // rcx
	unsigned __int64 k; // rdi
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rdx
	__int64 v20; // r14
	__int64(__fastcall * v21)(__int64, _QWORD); // rax
	__int64 v22; // rax
	unsigned int v23; // eax
	int v24; // edi
	__int64 v25; // r15
	__int64 v26; // rsi
	__int64 v27; // rdi
	__int64 v28; // rax
	__int64 m; // rax
	int v31; // [rsp+30h] [rbp-48h] BYREF
	__int64 v32; // [rsp+38h] [rbp-40h]
	__int64(__fastcall * v33)(__int64*); // [rsp+40h] [rbp-38h]
	__int64 v34; // [rsp+48h] [rbp-30h]
	__int64 v35; // [rsp+80h] [rbp+8h] BYREF

	v1 = *(_QWORD*)(a1 + 16);
	v3 = *(void(__fastcall**)(__int64, _QWORD))(v1 + 1872);
	if (v3)
		v3(a1, *(_QWORD*)(v1 + 1928));
	v4 = *(_QWORD*)(a1 + 1184);
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 104i64))(v4);
		v5 = *(_QWORD*)(a1 + 1184);
		v31 = -1;
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v5 + 32i64))(v5, &v31);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1184) + 8i64))(*(_QWORD*)(a1 + 1184));
		*(_QWORD*)(a1 + 1184) = 0i64;
	}
	v6 = *(_QWORD*)(a1 + 1200);
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		*(_QWORD*)(a1 + 1200) = 0i64;
	}
	v7 = (_QWORD*)(a1 + 3256);
	v8 = 256i64;
	do
	{
		if (*v7)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v7 + 8i64))(*v7);
			*v7 = 0i64;
		}
		++v7;
		--v8;
	} while (v8);
	v9 = *(_QWORD*)(a1 + 5344);
	if (v9)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		*(_QWORD*)(a1 + 5344) = 0i64;
	}
	*(_QWORD*)(a1 + 5360) = 0i64;
	for (i = 0i64; i < *(_QWORD*)(a1 + 5376); ++i)
	{
		v11 = *(_QWORD*)(*(_QWORD*)(a1 + 5368) + 8 * i);
		if (v11)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
	}
	*(_QWORD*)(a1 + 5376) = 0i64;
	v12 = *(_QWORD*)(a1 + 5384);
	if (v12)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
		*(_QWORD*)(a1 + 5384) = 0i64;
	}
	*(_QWORD*)(a1 + 5400) = 0i64;
	for (j = 0i64; j < *(_QWORD*)(a1 + 5416); ++j)
	{
		v14 = *(_QWORD*)(*(_QWORD*)(a1 + 5408) + 8 * j);
		if (v14)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
	}
	*(_QWORD*)(a1 + 5416) = 0i64;
	v15 = *(_QWORD*)(a1 + 5424);
	if (v15)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
		*(_QWORD*)(a1 + 5424) = 0i64;
	}
	*(_QWORD*)(a1 + 5440) = 0i64;
	for (k = 0i64; k < *(_QWORD*)(a1 + 5456); ++k)
	{
		v17 = *(_QWORD*)(*(_QWORD*)(a1 + 5448) + 8 * k);
		if (v17)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
	}
	v18 = *(_QWORD*)&qword_140C63788;
	*(_QWORD*)(a1 + 5456) = 0i64;
	v35 = 0i64;
	sub_1401B5B50(v18, (const __m128i*)(a1 + 616), 1i64, 4, &v35);
	v19 = *(_QWORD*)(a1 + 16);
	v20 = v35;
	v21 = *(__int64(__fastcall**)(__int64, _QWORD))(v19 + 1864);
	if (v21)
	{
		v22 = v21(a1, *(_QWORD*)(v19 + 1928));
	}
	else
	{
		if (!v35)
		{
			*(_QWORD*)(a1 + 1192) = 0i64;
			goto LABEL_42;
		}
		v22 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v35 + 32i64))(v35);
	}
	*(_QWORD*)(a1 + 1192) = v22;
	if (v20)
	{
		if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v20 + 24i64))(v20))
		{
			v23 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v20 + 24i64))(v20);
			v24 = sub_1402E2D10(v23, (int**)&v35);
			if (v24 < 0)
			{
			LABEL_38:
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
				return (unsigned int)v24;
			}
			v25 = v35;
			v31 = 0;
			v32 = a1;
			v34 = 0i64;
			v33 = sub_1402DF520;
			v26 = *(_QWORD*)v20;
			v27 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v35 + 16i64))(v35);
			v28 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v25 + 24i64))(v25);
			v24 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, int*))(v26 + 80))(
				v20,
				v28,
				v27,
				a1 + 1184,
				&v31);
			if (v24 < 0)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 8i64))(v25);
				goto LABEL_38;
			}
			*(_QWORD*)(a1 + 1200) = v25;
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
	}
LABEL_42:
	for (m = *(_QWORD*)(a1 + 5304); m; m = *(_QWORD*)(m + 520))
		*(_DWORD*)(m + 144) = 0;
	return 0i64;
}

