//----- (00000001402FB200) ----------------------------------------------------
__int64 __fastcall sub_1402FB200(__int64 a1, int a2, _OWORD* a3)
{
	__int64 v4; // r11
	__int64 v5; // rdx
	__int64 v6; // r8
	__int64 v7; // rdx
	__int64 result; // rax

	v4 = a2;
	if ((*(_DWORD*)(a1 + 48) & 0xFFFFFFFB) != 11)
		return 0i64;
	if (*(_DWORD*)(a1 + 1400) - *(_DWORD*)(*(_QWORD*)(a1 + 16) + 224i64) < -2)
		return 0i64;
	if (!a2)
		return 0i64;
	v5 = *(_QWORD*)(a1 + 64);
	if ((unsigned int)v4 >= *(_DWORD*)(v5 + 624))
		return 0i64;
	v6 = *(unsigned __int16*)(*(_QWORD*)(v5 + 632) + 2 * v4);
	if ((unsigned int)v6 >= *(_DWORD*)(v5 + 608))
		return 0i64;
	v7 = *(_QWORD*)(v5 + 616) + 4 * v6;
	if (!v7)
		return 0i64;
	result = 1i64;
	*a3 = *(_OWORD*)(((unsigned __int64)*(unsigned __int16*)(v7 + 2) << 6) + *(_QWORD*)(a1 + 824) + 48);
	return result;
}

