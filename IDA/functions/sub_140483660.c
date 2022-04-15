//----- (0000000140483660) ----------------------------------------------------
__int64 __fastcall sub_140483660(__int64 a1, __int64 a2, __int64 a3)
{
	_DWORD* v3; // rcx
	_DWORD* v4; // rdx
	unsigned int v5; // eax
	unsigned int v6; // r8d
	unsigned int v8; // eax
	unsigned int v9; // r8d
	unsigned int v10; // eax
	unsigned int v11; // r8d
	unsigned int v12; // r8d
	unsigned int v13; // ecx

	v3 = (_DWORD*)(a3 + 56 * a1);
	v4 = (_DWORD*)(a3 + 56 * a2);
	v5 = v3[4];
	v6 = v4[4];
	if (v5 < v6)
		return 0xFFFFFFFFi64;
	if (v5 > v6)
		return 1i64;
	v8 = v3[5];
	v9 = v4[5];
	if (v8 < v9)
		return 0xFFFFFFFFi64;
	if (v8 > v9)
		return 1i64;
	v10 = v3[6];
	v11 = v4[6];
	if (v10 < v11)
		return 0xFFFFFFFFi64;
	if (v10 > v11)
		return 1i64;
	v12 = v3[7];
	v13 = v4[7];
	if (v12 < v13)
		return 0xFFFFFFFFi64;
	return v12 > v13;
}

