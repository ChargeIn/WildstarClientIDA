//----- (000000014085AE30) ----------------------------------------------------
__int64 __fastcall sub_14085AE30(__int64 a1, unsigned int a2)
{
	__int64 v2; // rsi
	unsigned __int64 v4; // rdi
	unsigned __int64 v5; // rdx
	__int64 v6; // r8
	unsigned __int64 v7; // rcx
	__int64 v8; // rax

	v2 = a2;
	v4 = (__int64)(*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) >> 3;
	if (v4 >= *(unsigned int*)(a1 + 16) && !sub_140892EF0(a1, 1) || v4 >= *(unsigned int*)(a1 + 16))
		return 0i64;
	v5 = *(_QWORD*)(a1 + 8);
	v6 = 8 * v2;
	v7 = 8 * v2 + *(_QWORD*)a1;
	*(_QWORD*)(a1 + 8) = v5 + 8;
	if (v5 > v7)
	{
		do
		{
			v8 = *(_QWORD*)(v5 - 8);
			v5 -= 8i64;
			*(_QWORD*)(v5 + 8) = v8;
		} while (v5 > v6 + *(_QWORD*)a1);
	}
	return v6 + *(_QWORD*)a1;
}

