//----- (0000000140856440) ----------------------------------------------------
__int64 __fastcall sub_140856440(__int64 a1, char* a2, __int64 a3)
{
	unsigned __int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rbx
	__int64 result; // rax

	v4 = a3 - 1;
	v5 = -1i64;
	do
		++v5;
	while (*(_WORD*)&a2[2 * v5]);
	if (v4 >= v5 + 1)
	{
		v6 = -1i64;
		do
			++v6;
		while (*(_WORD*)&a2[2 * v6]);
		v4 = v6 + 1;
	}
	sub_1407E6D08(a1, a3, a2, v4);
	result = 0i64;
	*(_WORD*)(a1 + 2 * v4) = 0;
	return result;
}

