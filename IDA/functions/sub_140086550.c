//----- (0000000140086550) ----------------------------------------------------
unsigned __int64 __fastcall sub_140086550(_QWORD* a1, _QWORD* a2, _DWORD* a3)
{
	unsigned __int64 v3; // r9
	unsigned __int64 v5; // r10
	__int64 v6; // r10
	__int64 v7; // rax
	__int64 v8; // r9
	unsigned __int64 result; // rax

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
	*(_QWORD*)a3 += 2 * v5;
	if (v5 <= 0x7F)
		v6 = 16 * v5 + 8;
	else
		v6 = 16 * (v5 + 1);
	*a2 += v6;
	v7 = a1[1];
	if (v7)
	{
		do
			++v3;
		while (*(_WORD*)(v7 + 2 * v3));
	}
	else
	{
		v3 = 0i64;
	}
	*(_QWORD*)a3 += 2 * v3;
	if (v3 <= 0x7F)
		v8 = 16 * v3 + 8;
	else
		v8 = 16 * (v3 + 1);
	*a2 += v8;
	result = sub_140085D40(a1 + 2, a2, a3);
	++* a2;
	return result;
}

