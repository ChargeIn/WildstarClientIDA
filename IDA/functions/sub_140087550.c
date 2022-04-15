//----- (0000000140087550) ----------------------------------------------------
__int64 __fastcall sub_140087550(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 v3; // r10
	unsigned __int64 v4; // r9
	unsigned __int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 result; // rax

	*a2 += 96i64;
	v3 = *(_QWORD*)(a1 + 16);
	v4 = -1i64;
	if (v3)
	{
		v5 = -1i64;
		do
			++v5;
		while (*(_BYTE*)(v3 + v5));
	}
	else
	{
		v5 = 0i64;
	}
	*a3 += v5;
	if (v5 <= 0x7F)
		v6 = 8 * v5 + 8;
	else
		v6 = 8 * v5 + 16;
	*a2 += v6;
	v7 = *(_QWORD*)(a1 + 24);
	if (v7)
	{
		do
			++v4;
		while (*(_WORD*)(v7 + 2 * v4));
	}
	else
	{
		v4 = 0i64;
	}
	result = 2 * v4;
	*a3 += 2 * v4;
	if (v4 <= 0x7F)
	{
		*a2 += 16 * v4 + 8;
	}
	else
	{
		result = 16 * (v4 + 1);
		*a2 += result;
	}
	return result;
}

