//----- (0000000140618C60) ----------------------------------------------------
void __fastcall sub_140618C60(_QWORD* a1)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	void(__fastcall * **v4)(_QWORD, __int64); // rcx
	__int64 v5; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v8; // rbp
	_QWORD* v9; // rax
	_QWORD* v10; // rbx
	void(__fastcall * **v11)(_QWORD, __int64); // rcx
	__int64 v12; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v15; // rsi
	__int64 v16; // rbx
	__int64 v17; // rdi
	__int64 v18; // rbx

	*a1 = off_140B672F0;
	v2 = (_QWORD*)a1[2];
	v3 = (_QWORD*)v2[2];
	if (v3 != v2)
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
	v8 = (__int64)(a1 + 1);
	sub_140008410((__int64)(a1 + 1));
	v9 = (_QWORD*)a1[6];
	v10 = (_QWORD*)v9[2];
	if (v10 != v9)
	{
		do
		{
			v11 = (void(__fastcall***)(_QWORD, __int64))v10[5];
			if (v11)
				(**v11)(v11, 1i64);
			v12 = v10[3];
			if (v12)
			{
				v10 = (_QWORD*)v10[3];
				for (k = *(_QWORD**)(v12 + 16); k; k = (_QWORD*)k[2])
					v10 = k;
			}
			else
			{
				for (m = v10[1]; v10 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v10 = (_QWORD*)m;
				if (v10[3] != m)
					v10 = (_QWORD*)m;
			}
		} while (v10 != (_QWORD*)a1[6]);
	}
	if (a1[7])
	{
		v15 = *(_QWORD*)(a1[6] + 8i64);
		if (v15)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 5), *(_QWORD*)(v15 + 24));
				v16 = *(_QWORD*)(v15 + 16);
				sub_14018B900(v15, 0);
				v15 = v16;
			} while (v16);
		}
		*(_QWORD*)(a1[6] + 16i64) = a1[6];
		*(_QWORD*)(a1[6] + 8i64) = 0i64;
		*(_QWORD*)(a1[6] + 24i64) = a1[6];
		a1[7] = 0i64;
	}
	sub_14018B900(a1[6], 0);
	if (a1[3])
	{
		v17 = *(_QWORD*)(a1[2] + 8i64);
		if (v17)
		{
			do
			{
				sub_1400083B0(v8, *(_QWORD*)(v17 + 24));
				v18 = *(_QWORD*)(v17 + 16);
				sub_14018B900(v17, 0);
				v17 = v18;
			} while (v18);
		}
		*(_QWORD*)(*(_QWORD*)(v8 + 8) + 16i64) = *(_QWORD*)(v8 + 8);
		*(_QWORD*)(*(_QWORD*)(v8 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(v8 + 8) + 24i64) = *(_QWORD*)(v8 + 8);
		*(_QWORD*)(v8 + 16) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(v8 + 8), 0);
}
// 140B672F0: using guessed type __int64 (__fastcall *off_140B672F0[2])();

