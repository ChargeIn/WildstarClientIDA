//----- (000000014007EAA0) ----------------------------------------------------
__int64 __fastcall sub_14007EAA0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 v3; // r9
	unsigned __int64 v4; // rax
	__int64 v5; // rax
	__int64 result; // rax

	*a2 += 32i64;
	v3 = *(_QWORD*)(a1 + 8);
	if (v3)
	{
		v4 = -1i64;
		do
			++v4;
		while (*(_WORD*)(v3 + 2 * v4));
	}
	else
	{
		v4 = 0i64;
	}
	*a3 += 2 * v4;
	if (v4 <= 0x7F)
		v5 = 16 * v4 + 8;
	else
		v5 = 16 * (v4 + 1);
	*a2 += v5 + 35;
	*a2 += 32i64 * *(unsigned int*)(a1 + 20);
	*a3 += 4i64 * *(unsigned int*)(a1 + 20);
	*a2 += 32i64 * *(unsigned int*)(a1 + 20);
	*a3 += 4i64 * *(unsigned int*)(a1 + 20);
	*a2 += 32i64;
	*a2 += 32i64 * *(unsigned int*)(a1 + 40);
	result = 4i64 * *(unsigned int*)(a1 + 40);
	*a3 += result;
	return result;
}

