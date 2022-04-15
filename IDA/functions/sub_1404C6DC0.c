//----- (00000001404C6DC0) ----------------------------------------------------
void __fastcall sub_1404C6DC0(__int64 a1)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // rbp
	int* v6; // rdi
	_QWORD* v7; // r8
	__int64 v8; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	int* k; // rbx
	__int64 v12; // rbp
	__int64 v13; // rbx
	unsigned __int64 m; // rdi
	__int64 v15; // rbx
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rdi
	__int64 v19; // rbx
	__int64 v20; // rdi
	__int64 v21; // rbx
	__int64 v22; // rdi
	__int64 v23; // rbx
	_QWORD* v24; // rcx
	__int64 v25; // [rsp+20h] [rbp-48h] BYREF
	__int64 v26; // [rsp+28h] [rbp-40h]
	int* v27; // [rsp+30h] [rbp-38h]
	__int64 v28; // [rsp+38h] [rbp-30h]

	if (*(int*)(a1 + 40) <= 1)
	{
		sub_1404C7F20(a1, 2u);
		sub_1404C7F20(a1, 3u);
	}
	v2 = *(_QWORD**)(a1 + 88);
	v3 = (_QWORD*)v2[2];
	v4 = 0i64;
	v5 = 0i64;
	v26 = 0i64;
	v6 = 0i64;
	v27 = 0i64;
	v28 = 0i64;
	if (v3 != v2)
	{
		do
		{
			v7 = v3 + 5;
			if (v6 == (int*)v4)
			{
				sub_1400B9430(&v25, v6, v7);
				v4 = v28;
				v6 = v27;
			}
			else
			{
				if (v6)
					*(_QWORD*)v6 = *v7;
				v6 += 2;
				v27 = v6;
			}
			v8 = v3[3];
			if (v8)
			{
				v3 = (_QWORD*)v3[3];
				for (i = *(_QWORD**)(v8 + 16); i; i = (_QWORD*)i[2])
					v3 = i;
			}
			else
			{
				for (j = v3[1]; v3 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = (_QWORD*)j;
				if (v3[3] != j)
					v3 = (_QWORD*)j;
			}
		} while (v3 != *(_QWORD**)(a1 + 88));
		v5 = v26;
	}
	sub_140008410(a1 + 48);
	sub_140008410(a1 + 80);
	sub_140008410(a1 + 112);
	for (k = (int*)v5; k != v6; k += 2)
	{
		if (*(_QWORD*)k)
			(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)k + 16i64))(*(_QWORD*)k, 1i64);
	}
	if (v5)
		sub_14018B900(v5, 0);
	if (*(_QWORD*)(a1 + 216))
	{
		v12 = *(_QWORD*)(*(_QWORD*)(a1 + 208) + 8i64);
		if (v12)
		{
			do
			{
				sub_1400083B0(a1 + 200, *(_QWORD*)(v12 + 24));
				v13 = *(_QWORD*)(v12 + 16);
				sub_14018B900(v12, 0);
				v12 = v13;
			} while (v13);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 208) + 16i64) = *(_QWORD*)(a1 + 208);
		*(_QWORD*)(*(_QWORD*)(a1 + 208) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 208) + 24i64) = *(_QWORD*)(a1 + 208);
		*(_QWORD*)(a1 + 216) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 208), 0);
	for (m = 0i64; m < *(_QWORD*)(a1 + 168); ++m)
	{
		v15 = *(_QWORD*)(a1 + 176) + 8 * m;
		while (*(_QWORD*)v15)
		{
			v16 = *(_QWORD*)v15;
			*(_QWORD*)v15 = *(_QWORD*)(*(_QWORD*)v15 + 8i64);
			sub_14018B900(v16, 0);
		}
	}
	v17 = *(_QWORD*)(a1 + 176);
	*(_QWORD*)(a1 + 160) = 0i64;
	sub_14018B900(v17, 0);
	*(_QWORD*)(a1 + 176) = 0i64;
	if (*(_QWORD*)(a1 + 144))
		sub_1401A4A00((const void***)(a1 + 144));
	if (*(_QWORD*)(a1 + 128))
	{
		v18 = *(_QWORD*)(*(_QWORD*)(a1 + 120) + 8i64);
		if (v18)
		{
			do
			{
				sub_1400083B0(a1 + 112, *(_QWORD*)(v18 + 24));
				v19 = *(_QWORD*)(v18 + 16);
				sub_14018B900(v18, 0);
				v18 = v19;
			} while (v19);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 120) + 16i64) = *(_QWORD*)(a1 + 120);
		*(_QWORD*)(*(_QWORD*)(a1 + 120) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 120) + 24i64) = *(_QWORD*)(a1 + 120);
		*(_QWORD*)(a1 + 128) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 120), 0);
	if (*(_QWORD*)(a1 + 96))
	{
		v20 = *(_QWORD*)(*(_QWORD*)(a1 + 88) + 8i64);
		if (v20)
		{
			do
			{
				sub_1400083B0(a1 + 80, *(_QWORD*)(v20 + 24));
				v21 = *(_QWORD*)(v20 + 16);
				sub_14018B900(v20, 0);
				v20 = v21;
			} while (v21);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 88) + 16i64) = *(_QWORD*)(a1 + 88);
		*(_QWORD*)(*(_QWORD*)(a1 + 88) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 88) + 24i64) = *(_QWORD*)(a1 + 88);
		*(_QWORD*)(a1 + 96) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 88), 0);
	if (*(_QWORD*)(a1 + 64))
	{
		v22 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64);
		if (v22)
		{
			do
			{
				sub_1400083B0(a1 + 48, *(_QWORD*)(v22 + 24));
				v23 = *(_QWORD*)(v22 + 16);
				sub_14018B900(v22, 0);
				v22 = v23;
			} while (v23);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 56) + 16i64) = *(_QWORD*)(a1 + 56);
		*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 56) + 24i64) = *(_QWORD*)(a1 + 56);
		*(_QWORD*)(a1 + 64) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 56), 0);
	if (*(_QWORD*)a1)
		**(_QWORD**)a1 = *(_QWORD*)(a1 + 8);
	v24 = *(_QWORD**)(a1 + 8);
	if (v24)
		*v24 = *(_QWORD*)a1;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)a1 = 0i64;
}

