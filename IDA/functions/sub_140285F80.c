//----- (0000000140285F80) ----------------------------------------------------
__int64 __fastcall sub_140285F80(__int64 a1, __int64 a2)
{
	unsigned int v3; // eax
	unsigned int v4; // r8d
	unsigned int v5; // eax
	unsigned int v6; // r8d
	int v7; // eax
	int v8; // r8d
	int v9; // eax
	int v10; // r8d
	unsigned __int64 v11; // r8
	unsigned __int64 v12; // rcx

	if (*(float*)a1 > *(float*)a2)
		return 0xFFFFFFFFi64;
	if (*(float*)a1 < *(float*)a2)
		return 1i64;
	v3 = *(_DWORD*)(a1 + 4);
	v4 = *(_DWORD*)(a2 + 4);
	if (v3 < v4)
		return 0xFFFFFFFFi64;
	if (v3 > v4)
		return 1i64;
	v5 = *(_DWORD*)(a1 + 8);
	v6 = *(_DWORD*)(a2 + 8);
	if (v5 < v6)
		return 0xFFFFFFFFi64;
	if (v5 > v6)
		return 1i64;
	v7 = *(_DWORD*)(a1 + 12);
	v8 = *(_DWORD*)(a2 + 12);
	if (v7 < v8)
		return 0xFFFFFFFFi64;
	if (v7 > v8)
		return 1i64;
	v9 = *(_DWORD*)(a1 + 16);
	v10 = *(_DWORD*)(a2 + 16);
	if (v9 < v10)
		return 0xFFFFFFFFi64;
	if (v9 > v10)
		return 1i64;
	v11 = *(_QWORD*)(a1 + 96);
	v12 = *(_QWORD*)(a2 + 96);
	if (v11 < v12)
		return 0xFFFFFFFFi64;
	return v11 > v12;
}

