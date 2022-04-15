//----- (0000000140891E30) ----------------------------------------------------
__int64 __fastcall sub_140891E30(__int64 a1, int a2, _DWORD* a3, _DWORD* a4)
{
	__int64 v4; // r11
	unsigned int v5; // eax
	__int64 result; // rax
	__int64 v7; // rdx

	v4 = *(_QWORD*)(a1 + 224);
	v5 = 1;
	if ((unsigned int)((*(_QWORD*)(a1 + 232) - v4) >> 4) == 2)
		return 2i64;
	while (*(_DWORD*)(v4 + 16i64 * v5 + 4) <= (unsigned int)(a2 + *(_DWORD*)(v4 + 4))
		|| *a3 && *(_DWORD*)(v4 + 16i64 * v5) != *a3)
	{
		if (++v5 > (unsigned int)((*(_QWORD*)(a1 + 232) - v4) >> 4) - 2)
			return 2i64;
	}
	v7 = v5;
	result = 1i64;
	v7 *= 2i64;
	*a3 = *(_DWORD*)(v4 + 8 * v7);
	*a4 = *(_DWORD*)(*(_QWORD*)(a1 + 224) + 8 * v7 + 4) - *(_DWORD*)(*(_QWORD*)(a1 + 224) + 4i64);
	return result;
}

