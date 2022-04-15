//----- (0000000140764420) ----------------------------------------------------
__int64 __fastcall sub_140764420(__int64* a1, __int64 a2)
{
	__int64 v2; // rax
	__int64 v6; // rdi
	__int64 v7; // rax
	__int64 v8; // r8
	int v9; // ecx
	__int64 v10; // rdx
	int v11; // eax
	int v12; // eax
	int v13; // ecx
	int v14; // kr00_4

	v2 = *a1;
	if (*a1 == *(_QWORD*)a2)
		return 0i64;
	if (!v2)
		return 1i64;
	if (!*(_QWORD*)a2)
		return 0xFFFFFFFFi64;
	v6 = sub_140214E00(*(_DWORD*)(v2 + 16));
	v7 = sub_140214E00(*(_DWORD*)(*(_QWORD*)a2 + 16i64));
	v8 = v7;
	if (!v6)
		return 1i64;
	if (!v7)
		return 0xFFFFFFFFi64;
	v9 = 0;
	v10 = *(_QWORD*)(qword_140C65898 + 120);
	if (v10)
		v11 = *(_DWORD*)(v10 + 56);
	else
		v11 = 0;
	v12 = v11 - *(_DWORD*)(v6 + 24);
	if (v10)
		v9 = *(_DWORD*)(v10 + 56);
	v13 = v9 - *(_DWORD*)(v8 + 24);
	if (v12 != v13 || !v10)
		return (unsigned int)(v12 - v13);
	v14 = (int)*(float*)(v10 + 3404) - *(_DWORD*)(*a1 + 24);
	return abs32(v14) - abs32((int)*(float*)(v10 + 3404) - *(_DWORD*)(*(_QWORD*)a2 + 24i64));
}
// 140C65898: using guessed type __int64 qword_140C65898;

