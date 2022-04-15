//----- (00000001404AB910) ----------------------------------------------------
void __fastcall sub_1404AB910(_QWORD* a1)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rsi
	__int64 v5; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD* v8; // rax
	_QWORD* v9; // rbx
	__int64 v10; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v13; // rsi
	__int64 v14; // rbx
	__int64 v15; // rdi
	__int64 v16; // rbx

	*a1 = &off_140B68798;
	v2 = (_QWORD*)a1[2];
	v3 = (_QWORD*)v2[2];
	if (v3 != v2)
	{
		do
		{
			v4 = v3[5];
			if (v4)
			{
				sub_140008410(v4 + 8);
				sub_14018B900(*(_QWORD*)(v4 + 16), 0);
				sub_14018B900(v4, 0);
			}
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
			sub_14018B900(v9[5], 0);
			v10 = v9[3];
			if (v10)
			{
				v9 = (_QWORD*)v9[3];
				for (k = *(_QWORD**)(v10 + 16); k; k = (_QWORD*)k[2])
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
		v13 = *(_QWORD*)(a1[6] + 8i64);
		if (v13)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 5), *(_QWORD*)(v13 + 24));
				v14 = *(_QWORD*)(v13 + 16);
				sub_14018B900(v13, 0);
				v13 = v14;
			} while (v14);
		}
		*(_QWORD*)(a1[6] + 16i64) = a1[6];
		*(_QWORD*)(a1[6] + 8i64) = 0i64;
		*(_QWORD*)(a1[6] + 24i64) = a1[6];
		a1[7] = 0i64;
	}
	sub_14018B900(a1[6], 0);
	if (a1[3])
	{
		v15 = *(_QWORD*)(a1[2] + 8i64);
		if (v15)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 1), *(_QWORD*)(v15 + 24));
				v16 = *(_QWORD*)(v15 + 16);
				sub_14018B900(v15, 0);
				v15 = v16;
			} while (v16);
		}
		*(_QWORD*)(a1[2] + 16i64) = a1[2];
		*(_QWORD*)(a1[2] + 8i64) = 0i64;
		*(_QWORD*)(a1[2] + 24i64) = a1[2];
		a1[3] = 0i64;
	}
	sub_14018B900(a1[2], 0);
}
// 140B68798: using guessed type __int64 (__fastcall *off_140B68798)();

