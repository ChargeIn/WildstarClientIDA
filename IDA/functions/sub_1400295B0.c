//----- (00000001400295B0) ----------------------------------------------------
void __fastcall sub_1400295B0(__int64* a1, unsigned __int64 a2)
{
	unsigned __int64 v2; // rax
	unsigned __int64 v5; // rsi
	__int64 v6; // rdi
	__int64 v7; // rcx
	int* v8; // r14
	unsigned __int64 v9; // rax
	__int64 v10; // rdi
	unsigned __int64 v11; // rsi
	unsigned __int64 v12; // rsi
	__int64 v13; // rdi
	__int64 v14; // rcx

	v2 = a1[1];
	if (v2 <= a2)
	{
		v8 = sub_14018DB00(*a1, a2, 816i64);
		v9 = a1[1];
		if (v9 < a2)
		{
			v10 = (__int64)&v8[204 * v9];
			v11 = a2 - v9;
			do
			{
				if (v10)
					sub_140020110(v10);
				v10 += 816i64;
				--v11;
			} while (v11);
		}
		if ((int*)*a1 != v8)
		{
			v12 = 0i64;
			if (a1[1])
			{
				v13 = 0i64;
				do
				{
					if (&v8[v13])
						sub_140029950((__int64)&v8[v13], (__int64*)(v13 * 4 + *a1));
					v14 = *(_QWORD*)(v13 * 4 + *a1 + 784);
					if (v14)
						sub_14018B900(v14, 0);
					++v12;
					v13 += 204i64;
				} while (v12 < a1[1]);
			}
			if (*a1)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
			*a1 = (__int64)v8;
		}
	}
	else
	{
		v5 = a2;
		if (a2 >= v2)
		{
			a1[1] = a2;
			return;
		}
		v6 = 816 * a2;
		do
		{
			v7 = *(_QWORD*)(v6 + *a1 + 784);
			if (v7)
				sub_14018B900(v7, 0);
			++v5;
			v6 += 816i64;
		} while (v5 < a1[1]);
	}
	a1[1] = a2;
}

