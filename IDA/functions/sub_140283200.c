//----- (0000000140283200) ----------------------------------------------------
int __fastcall sub_140283200(__int64 a1)
{
	bool v1; // zf
	_QWORD* v3; // rdx
	__int64 v4; // rcx
	__int64 v5; // rcx
	const void*** i; // r14
	const void*** j; // r15
	_QWORD* v8; // rbx
	const void*** v9; // r13
	_QWORD* k; // rsi
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rcx
	unsigned __int64 v20; // rbx
	__int64 v21; // rsi
	__int64 v22; // rcx
	__int64 v23; // rcx
	unsigned __int64 m; // rbx
	__int64 v25; // rsi
	__int64 v26; // rcx
	__int64 v27; // rcx
	unsigned __int64 n; // rbx
	__int64 v29; // rsi
	__int64 v30; // rcx
	__int64 v31; // rcx
	__int64 v32; // rax

	v1 = *(_QWORD*)(a1 + 224) == 0i64;
	*(_QWORD*)a1 = off_140B61570;
	if (!v1)
	{
		do
		{
			v3 = *(_QWORD**)(a1 + 224);
			*(_QWORD*)(a1 + 224) = v3[1];
			sub_1402882B0(a1, v3);
		} while (*(_QWORD*)(a1 + 224));
	}
	v4 = *(_QWORD*)(a1 + 400);
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a1 + 400) = 0i64;
	}
	v5 = *(_QWORD*)(a1 + 408);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		*(_QWORD*)(a1 + 408) = 0i64;
	}
	for (i = (const void***)(a1 + 120); *i; (*((void(__fastcall**)(const void**)) * *i + 1))(*i))
		;
	for (j = (const void***)(a1 + 128); *j; (*((void(__fastcall**)(const void**)) * *j + 1))(*j))
		;
	sub_1401981B0((__int64**)(a1 + 448));
	v8 = *(_QWORD**)(a1 + 56);
	v9 = (const void***)(a1 + 56);
	if (v8)
	{
		do
		{
			(*(__int64(__fastcall**)(_QWORD*))(*v8 + 24i64))(v8);
			sub_1400035B0();
			v8 = (_QWORD*)v8[310];
		} while (v8);
		i = (const void***)(a1 + 120);
		j = (const void***)(a1 + 128);
		v9 = (const void***)(a1 + 56);
	}
	for (k = *(_QWORD**)(a1 + 104); k; k = (_QWORD*)k[10])
	{
		(*(void(__fastcall**)(_QWORD*))(*k + 64i64))(k);
		(*(void(__fastcall**)(_QWORD*))(*k + 48i64))(k);
		sub_1400035B0();
	}
	v11 = *(_QWORD*)(a1 + 456);
	if (v11)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
	sub_1401981B0((__int64**)(a1 + 448));
	if (*(_QWORD*)(a1 + 448))
		sub_1401A4A00((const void***)(a1 + 448));
	v12 = *(_QWORD*)(a1 + 416);
	if (v12)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
	v13 = *(_QWORD*)(a1 + 376);
	if (v13)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
	v14 = *(_QWORD*)(a1 + 360);
	if (v14)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
	v15 = *(_QWORD*)(a1 + 344);
	if (v15)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
	v16 = *(_QWORD*)(a1 + 328);
	if (v16)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v16 - 16) + 8i64))(v16 - 16);
	v17 = *(_QWORD*)(a1 + 312);
	if (v17)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16);
	v18 = *(_QWORD*)(a1 + 296);
	if (v18)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
	v19 = *(_QWORD*)(a1 + 280);
	if (v19)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v19 - 16) + 8i64))(v19 - 16);
	v20 = 0i64;
	if (*(_QWORD*)(a1 + 272))
	{
		v21 = 0i64;
		do
		{
			v22 = *(_QWORD*)(v21 + *(_QWORD*)(a1 + 264) + 96);
			if (v22)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 8i64))(v22);
			++v20;
			v21 += 144i64;
		} while (v20 < *(_QWORD*)(a1 + 272));
	}
	v23 = *(_QWORD*)(a1 + 264);
	if (v23)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v23 - 16) + 8i64))(v23 - 16);
	for (m = 0i64; m < *(_QWORD*)(a1 + 144); ++m)
	{
		v25 = *(_QWORD*)(a1 + 152);
		while (*(_QWORD*)(v25 + 8 * m))
		{
			v26 = *(_QWORD*)(v25 + 8 * m);
			*(_QWORD*)(v25 + 8 * m) = *(_QWORD*)(v26 + 8);
			sub_14018B900(v26, 0);
		}
	}
	v27 = *(_QWORD*)(a1 + 152);
	*(_QWORD*)(a1 + 136) = 0i64;
	sub_14018B900(v27, 0);
	*(_QWORD*)(a1 + 152) = 0i64;
	if (*j)
		sub_1401A4A00(j);
	if (*i)
		sub_1401A4A00(i);
	if (*(_QWORD*)(a1 + 112))
		sub_1401A4A00((const void***)(a1 + 112));
	if (*(_QWORD*)(a1 + 104))
		sub_1401A4A00((const void***)(a1 + 104));
	for (n = 0i64; n < *(_QWORD*)(a1 + 72); ++n)
	{
		v29 = *(_QWORD*)(a1 + 80);
		while (*(_QWORD*)(v29 + 8 * n))
		{
			v30 = *(_QWORD*)(v29 + 8 * n);
			*(_QWORD*)(v29 + 8 * n) = *(_QWORD*)(v30 + 8);
			sub_14018B900(v30, 0);
		}
	}
	v31 = *(_QWORD*)(a1 + 80);
	*(_QWORD*)(a1 + 64) = 0i64;
	sub_14018B900(v31, 0);
	*(_QWORD*)(a1 + 80) = 0i64;
	if (*v9)
		sub_1401A4A00(v9);
	v32 = *(_QWORD*)(a1 + 48);
	if (v32)
		LODWORD(v32) = CloseHandle(*(HANDLE*)(a1 + 48));
	return v32;
}
// 140283245: variable 'a1' is possibly undefined
// 140B61570: using guessed type __int64 (__fastcall *off_140B61570[4])();

