//----- (000000014083F0A0) ----------------------------------------------------
__int64 __fastcall sub_14083F0A0(__int64 a1, unsigned int a2)
{
	__int64 v2; // rsi
	unsigned __int64 v4; // rdi
	_QWORD* v5; // rax
	__int64 v6; // r8
	unsigned __int64 v7; // rdx
	__int64 v8; // rcx

	v2 = a2;
	v4 = (*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) / 40i64;
	if (v4 >= *(unsigned int*)(a1 + 16) && !sub_14088C660(a1, 8) || v4 >= *(unsigned int*)(a1 + 16))
		return 0i64;
	v5 = *(_QWORD**)(a1 + 8);
	v6 = 40 * v2;
	v7 = 40 * v2 + *(_QWORD*)a1;
	*(_QWORD*)(a1 + 8) = v5 + 5;
	if ((unsigned __int64)v5 > v7)
	{
		do
		{
			v8 = *(v5 - 5);
			v5 -= 5;
			v5[5] = v8;
			v5[6] = v5[1];
			v5[7] = v5[2];
			v5[8] = v5[3];
			v5[9] = v5[4];
		} while ((unsigned __int64)v5 > v6 + *(_QWORD*)a1);
	}
	return v6 + *(_QWORD*)a1;
}

