//----- (0000000140896090) ----------------------------------------------------
__int64* __fastcall sub_140896090(__int64** a1)
{
	__int64* v1; // rbx
	__int64* v2; // rdi
	__int64* v4; // rsi
	__int64 v5; // rdx
	__int64 v6; // rdx
	__int64 v7; // rdx
	__int64* result; // rax

	v1 = *a1;
	v2 = a1[1];
	if (*a1 == v2)
	{
		a1[1] = v1;
	}
	else
	{
		v4 = v1 + 4;
		do
		{
			v5 = v4[8];
			if (v5)
				sub_140881720(dword_140C10F20, v5);
			v6 = *v1;
			if (*v1)
			{
				*(v4 - 3) = v6;
				sub_140881720(dword_140C10F20, v6);
				*v1 = 0i64;
				*(v4 - 3) = 0i64;
				*((_DWORD*)v4 - 4) = 0;
			}
			v7 = *(v4 - 1);
			if (v7)
			{
				*v4 = v7;
				sub_140881720(dword_140C10F20, v7);
				*(v4 - 1) = 0i64;
				*v4 = 0i64;
				*((_DWORD*)v4 + 2) = 0;
			}
			v1 += 13;
			v4 += 13;
		} while (v1 != v2);
		result = *a1;
		a1[1] = *a1;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

