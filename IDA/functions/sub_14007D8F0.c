//----- (000000014007D8F0) ----------------------------------------------------
__int64 __fastcall sub_14007D8F0(_QWORD* a1, _QWORD* a2, _QWORD* a3)
{
	unsigned __int64 v3; // r9
	unsigned __int64 v5; // r10
	__int64 v6; // r10
	__int64 v7; // rax
	unsigned __int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 result; // rax

	v3 = -1i64;
	if (*a1)
	{
		v5 = -1i64;
		do
			++v5;
		while (*(_WORD*)(*a1 + 2 * v5));
	}
	else
	{
		v5 = 0i64;
	}
	*a3 += 2 * v5;
	if (v5 <= 0x7F)
		v6 = 16 * v5 + 8;
	else
		v6 = 16 * (v5 + 1);
	*a2 += v6;
	v7 = a1[1];
	if (v7)
	{
		v8 = -1i64;
		do
			++v8;
		while (*(_WORD*)(v7 + 2 * v8));
	}
	else
	{
		v8 = 0i64;
	}
	*a3 += 2 * v8;
	if (v8 <= 0x7F)
		v9 = 16 * v8 + 8;
	else
		v9 = 16 * (v8 + 1);
	*a2 += v9;
	v10 = a1[2];
	if (v10)
	{
		do
			++v3;
		while (*(_WORD*)(v10 + 2 * v3));
	}
	else
	{
		v3 = 0i64;
	}
	*a3 += 2 * v3;
	if (v3 <= 0x7F)
		result = 16 * v3 + 168;
	else
		result = 16 * (v3 + 1) + 160;
	*a2 += result;
	return result;
}

