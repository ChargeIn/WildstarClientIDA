//----- (000000014043A820) ----------------------------------------------------
signed __int64 __fastcall sub_14043A820(__int64 a1, __int64 a2, unsigned __int8(__fastcall* a3)(_QWORD, __int64))
{
	signed __int64 result; // rax
	__int64 v6; // rcx
	__int64* v7; // r14
	__int64 v8; // r12
	__int64 v9; // rbp
	__int64 v10; // rbx
	__int64 v11; // rsi
	bool i; // zf
	__int64 j; // rbx
	__int64 v14; // [rsp+50h] [rbp+8h]

	result = (a2 - a1) & 0xFFFFFFFFFFFFFFF8ui64;
	if (result > 8)
	{
		v6 = -a1;
		v7 = (__int64*)(a2 - 8);
		v14 = v6;
		do
		{
			v8 = *v7;
			v9 = ((__int64)v7 + v6) >> 3;
			v10 = 2i64;
			v11 = 0i64;
			*v7 = *(_QWORD*)a1;
			for (i = v9 == 2; v10 < v9; i = v10 == v9)
			{
				if (a3(*(_QWORD*)(a1 + 8 * v10), *(_QWORD*)(a1 + 8 * v10 - 8)))
					--v10;
				*(_QWORD*)(a1 + 8 * v11) = *(_QWORD*)(a1 + 8 * v10);
				v11 = v10;
				v10 = 2 * v10 + 2;
			}
			if (i)
			{
				*(_QWORD*)(a1 + 8 * v11) = *(_QWORD*)(a1 + 8 * v10 - 8);
				v11 = v10 - 1;
			}
			for (j = (v11 - 1) / 2; v11 > 0; j = (j - 1) / 2)
			{
				if (!a3(*(_QWORD*)(a1 + 8 * j), v8))
					break;
				*(_QWORD*)(a1 + 8 * v11) = *(_QWORD*)(a1 + 8 * j);
				v11 = j;
			}
			v6 = v14;
			--v7;
			*(_QWORD*)(a1 + 8 * v11) = v8;
			result = ((unsigned __int64)v7 + 8 - a1) & 0xFFFFFFFFFFFFFFF8ui64;
		} while (result > 8);
	}
	return result;
}

