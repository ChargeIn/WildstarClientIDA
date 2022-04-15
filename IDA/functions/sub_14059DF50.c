//----- (000000014059DF50) ----------------------------------------------------
bool __fastcall sub_14059DF50(_QWORD* a1, __int64 a2)
{
	int v2; // r9d
	unsigned int v3; // r8d
	unsigned int v4; // r10d
	_DWORD* v6; // rax
	_DWORD* v7; // rcx
	unsigned int v8; // r8d
	unsigned int v9; // edx
	int v10; // edx
	int v11; // r8d
	int v12; // edx
	int v13; // r8d

	v2 = *(_DWORD*)(*a1 + 8i64);
	if (v2 == 22)
	{
		v3 = *(_DWORD*)(a1[1] + 292i64);
		v4 = *(_DWORD*)(*(_QWORD*)(a2 + 8) + 292i64);
		if (v3 != v4)
			return v3 > v4;
	}
	v6 = (_DWORD*)a1[1];
	v7 = *(_DWORD**)(a2 + 8);
	v8 = v7[88];
	v9 = v6[88];
	if (v9 != v8)
		return v9 > v8;
	v10 = v6[86];
	v11 = v7[86];
	if (v10 != v11)
		return v10 > v11;
	v12 = v6[81];
	v13 = v7[81];
	if (v12 != v13)
		return v12 < v13;
	if (v2 == 22)
	{
		v9 = v6[96];
		v8 = v7[96];
		if (v9 != v8)
			return v9 > v8;
	}
	return 0;
}

