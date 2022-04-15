//----- (000000014049B0B0) ----------------------------------------------------
void __fastcall sub_14049B0B0(_QWORD* a1)
{
	_QWORD* v1; // rax
	_QWORD* v3; // rbx
	void(__fastcall * **v4)(_QWORD, __int64); // rcx
	__int64 v5; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD* v8; // rax
	_QWORD* v9; // rbx
	void(__fastcall * **v10)(_QWORD, __int64); // rcx
	__int64 v11; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v14; // rsi
	__int64 v15; // rbx
	__int64 v16; // rbp
	__int64 v17; // rbx
	__int64 v18; // rbp
	__int64 v19; // rbx
	__int64 v20; // rbp
	__int64 v21; // rbx
	__int64 v22; // rsi
	__int64 v23; // rbx
	__int64 v24; // rdi
	__int64 v25; // rbx

	*a1 = off_140B67680;
	v1 = (_QWORD*)a1[2];
	v3 = (_QWORD*)v1[2];
	if (v3 != v1)
	{
		do
		{
			v4 = (void(__fastcall***)(_QWORD, __int64))v3[5];
			if (v4)
				(**v4)(v4, 1i64);
			v5 = v3[3];
			if (v5)
			{
				v3 = (_QWORD*)v3[3];
				for (i = *(_QWORD**)(v5 + 16); i; i = (_QWORD*)i[2])
					v3 = i;
			}
			else
			{
				for (j = v3[1]; v3 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v3 = (_QWORD*)j;
				if (v3[3] != j)
					v3 = (_QWORD*)j;
			}
		} while (v3 != (_QWORD*)a1[2]);
	}
	sub_140008410((__int64)(a1 + 1));
	v8 = (_QWORD*)a1[6];
	v9 = (_QWORD*)v8[2];
	if (v9 != v8)
	{
		do
		{
			v10 = (void(__fastcall***)(_QWORD, __int64))v9[5];
			if (v10)
				(**v10)(v10, 1i64);
			v11 = v9[3];
			if (v11)
			{
				v9 = (_QWORD*)v9[3];
				for (k = *(_QWORD**)(v11 + 16); k; k = (_QWORD*)k[2])
					v9 = k;
			}
			else
			{
				for (m = v9[1]; v9 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v9 = (_QWORD*)m;
				if (v9[3] != m)
					v9 = (_QWORD*)m;
			}
		} while (v9 != (_QWORD*)a1[6]);
	}
	if (a1[7])
	{
		v14 = *(_QWORD*)(a1[6] + 8i64);
		if (v14)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 5), *(_QWORD*)(v14 + 24));
				v15 = *(_QWORD*)(v14 + 16);
				sub_14018B900(v14, 0);
				v14 = v15;
			} while (v15);
		}
		*(_QWORD*)(a1[6] + 16i64) = a1[6];
		*(_QWORD*)(a1[6] + 8i64) = 0i64;
		*(_QWORD*)(a1[6] + 24i64) = a1[6];
		a1[7] = 0i64;
	}
	if (a1[19])
	{
		v16 = *(_QWORD*)(a1[18] + 8i64);
		if (v16)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 17), *(_QWORD*)(v16 + 24));
				v17 = *(_QWORD*)(v16 + 16);
				sub_14018B900(v16, 0);
				v16 = v17;
			} while (v17);
		}
		*(_QWORD*)(a1[18] + 16i64) = a1[18];
		*(_QWORD*)(a1[18] + 8i64) = 0i64;
		*(_QWORD*)(a1[18] + 24i64) = a1[18];
		a1[19] = 0i64;
	}
	sub_14018B900(a1[18], 0);
	if (a1[15])
	{
		v18 = *(_QWORD*)(a1[14] + 8i64);
		if (v18)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 13), *(_QWORD*)(v18 + 24));
				v19 = *(_QWORD*)(v18 + 16);
				sub_14018B900(v18, 0);
				v18 = v19;
			} while (v19);
		}
		*(_QWORD*)(a1[14] + 16i64) = a1[14];
		*(_QWORD*)(a1[14] + 8i64) = 0i64;
		*(_QWORD*)(a1[14] + 24i64) = a1[14];
		a1[15] = 0i64;
	}
	sub_14018B900(a1[14], 0);
	if (a1[11])
	{
		v20 = *(_QWORD*)(a1[10] + 8i64);
		if (v20)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 9), *(_QWORD*)(v20 + 24));
				v21 = *(_QWORD*)(v20 + 16);
				sub_14018B900(v20, 0);
				v20 = v21;
			} while (v21);
		}
		*(_QWORD*)(a1[10] + 16i64) = a1[10];
		*(_QWORD*)(a1[10] + 8i64) = 0i64;
		*(_QWORD*)(a1[10] + 24i64) = a1[10];
		a1[11] = 0i64;
	}
	sub_14018B900(a1[10], 0);
	if (a1[7])
	{
		v22 = *(_QWORD*)(a1[6] + 8i64);
		if (v22)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 5), *(_QWORD*)(v22 + 24));
				v23 = *(_QWORD*)(v22 + 16);
				sub_14018B900(v22, 0);
				v22 = v23;
			} while (v23);
		}
		*(_QWORD*)(a1[6] + 16i64) = a1[6];
		*(_QWORD*)(a1[6] + 8i64) = 0i64;
		*(_QWORD*)(a1[6] + 24i64) = a1[6];
		a1[7] = 0i64;
	}
	sub_14018B900(a1[6], 0);
	if (a1[3])
	{
		v24 = *(_QWORD*)(a1[2] + 8i64);
		if (v24)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 1), *(_QWORD*)(v24 + 24));
				v25 = *(_QWORD*)(v24 + 16);
				sub_14018B900(v24, 0);
				v24 = v25;
			} while (v25);
		}
		*(_QWORD*)(a1[2] + 16i64) = a1[2];
		*(_QWORD*)(a1[2] + 8i64) = 0i64;
		*(_QWORD*)(a1[2] + 24i64) = a1[2];
		a1[3] = 0i64;
	}
	sub_14018B900(a1[2], 0);
}
// 140B67680: using guessed type __int64 (__fastcall *off_140B67680[2])();

