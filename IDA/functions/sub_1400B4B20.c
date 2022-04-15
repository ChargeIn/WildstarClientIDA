//----- (00000001400B4B20) ----------------------------------------------------
__int64 __fastcall sub_1400B4B20(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v6; // rbx
	__int64 v7; // rsi
	int** v8; // rdi
	__int64 i; // rdi
	__int64 v10; // rcx
	__int64 result; // rax

	v6 = a2;
	v7 = (*(_QWORD*)(a1 + 16) - a3) >> 5;
	if (v7 > 0)
	{
		v8 = (int**)(a3 + 8);
		do
		{
			if (v8 - 1 != (int**)v6)
				sub_14001B1A0(v6, *v8, v8[1]);
			--v7;
			v8 += 4;
			v6 += 32i64;
		} while (v7 > 0);
	}
	for (i = *(_QWORD*)(a1 + 16); v6 != i; v6 += 32i64)
	{
		v10 = *(_QWORD*)(v6 + 8);
		if (v10)
			sub_14018B900(v10, 0);
	}
	result = a2;
	*(_QWORD*)(a1 + 16) += -32 * ((a3 - a2) >> 5);
	return result;
}

