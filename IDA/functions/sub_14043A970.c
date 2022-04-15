//----- (000000014043A970) ----------------------------------------------------
void __fastcall sub_14043A970(__int64 a1, __int64 a2, unsigned __int8(__fastcall* a3)(_QWORD, __int64))
{
	__int64 v5; // r14
	__int64 v6; // rbp
	__int64 i; // r13
	__int64 v8; // r12
	__int64 v9; // rsi
	__int64 j; // rbx
	__int64 k; // rbx

	v5 = (a2 - a1) >> 3;
	if (v5 >= 2)
	{
		v6 = (v5 - 2) / 2;
		for (i = 2 * v6 + 2; ; i -= 2i64)
		{
			v8 = *(_QWORD*)(a1 + 8 * v6);
			v9 = v6;
			for (j = i; j < v5; j = 2 * j + 2)
			{
				if (a3(*(_QWORD*)(a1 + 8 * j), *(_QWORD*)(a1 + 8 * j - 8)))
					--j;
				*(_QWORD*)(a1 + 8 * v9) = *(_QWORD*)(a1 + 8 * j);
				v9 = j;
			}
			if (j == v5)
			{
				*(_QWORD*)(a1 + 8 * v9) = *(_QWORD*)(a1 + 8 * j - 8);
				v9 = j - 1;
			}
			for (k = (v9 - 1) / 2; v9 > v6; k = (k - 1) / 2)
			{
				if (!a3(*(_QWORD*)(a1 + 8 * k), v8))
					break;
				*(_QWORD*)(a1 + 8 * v9) = *(_QWORD*)(a1 + 8 * k);
				v9 = k;
			}
			*(_QWORD*)(a1 + 8 * v9) = v8;
			if (!v6)
				break;
			--v6;
		}
	}
}

