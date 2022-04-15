//----- (00000001401C5500) ----------------------------------------------------
__int64 __fastcall sub_1401C5500(__int64 a1)
{
	__int64 v1; // rbp
	__int64 v2; // r14
	__int64 v3; // rdx
	int v4; // ebp
	__int64* v5; // rsi
	unsigned __int64 i; // rdi
	__int64 v7; // rbx
	__int64 v8; // rcx
	__int64 v9; // rcx

	v1 = *(int*)(a1 - 8);
	v2 = a1 - 8;
	v3 = 5 * v1;
	v4 = v1 - 1;
	if (v4 >= 0)
	{
		v5 = (__int64*)(a1 + 16 + 8 * v3);
		do
		{
			v5 -= 5;
			for (i = 0i64; i < *(v5 - 1); ++i)
			{
				v7 = *v5;
				while (*(_QWORD*)(v7 + 8 * i))
				{
					v8 = *(_QWORD*)(v7 + 8 * i);
					*(_QWORD*)(v7 + 8 * i) = *(_QWORD*)(v8 + 8);
					sub_14018B900(v8, 0);
				}
			}
			v9 = *v5;
			*(v5 - 2) = 0i64;
			sub_14018B900(v9, 0);
			--v4;
			*v5 = 0i64;
		} while (v4 >= 0);
	}
	sub_14018B900(v2, 0);
	return v2;
}

