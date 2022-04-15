//----- (0000000140836F60) ----------------------------------------------------
__int64 __fastcall sub_140836F60(__int64 a1, unsigned int a2)
{
	__int64 v2; // rsi
	unsigned __int64 v4; // rdi
	_QWORD* v5; // rdx
	__int64 v6; // r8
	unsigned __int64 v7; // rcx
	__int64 v8; // rax

	v2 = a2;
	v4 = (__int64)(*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) >> 4;
	if (v4 >= *(unsigned int*)(a1 + 16) && !sub_1408297A0((__int64*)a1, 8) || v4 >= *(unsigned int*)(a1 + 16))
		return 0i64;
	v5 = *(_QWORD**)(a1 + 8);
	v6 = 16 * v2;
	v7 = 16 * v2 + *(_QWORD*)a1;
	*(_QWORD*)(a1 + 8) = v5 + 2;
	if ((unsigned __int64)v5 > v7)
	{
		do
		{
			v8 = *(v5 - 2);
			v5 -= 2;
			v5[2] = v8;
			v5[3] = v5[1];
		} while ((unsigned __int64)v5 > v6 + *(_QWORD*)a1);
	}
	return v6 + *(_QWORD*)a1;
}

