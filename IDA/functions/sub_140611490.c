//----- (0000000140611490) ----------------------------------------------------
__int64 __fastcall sub_140611490(__int64* a1, unsigned int a2)
{
	__int64 v3; // rcx
	unsigned int v5; // eax
	__int64 v6; // rax
	unsigned __int64 v7; // r8
	__int64 v8; // rax
	unsigned int v9; // eax
	__int64 v10; // rax
	__int64 v11; // rcx
	int v12; // ebx
	unsigned int v13; // r10d
	__int64* v14; // r11

	v3 = *a1;
	if (!v3)
		return 0i64;
	v5 = *(_DWORD*)(v3 + 16);
	if (a2 == v5 || a2 > v5)
		return 0i64;
	if (a2 < v5
		&& (v6 = *(_QWORD*)(v3 + 8i64 * a2 + 24)) != 0
		&& (v7 = *(unsigned int*)(v6 + 4), (unsigned int)v7 <= 0x2E)
		&& (v8 = 0x400000018104i64, _bittest64(&v8, v7))
		&& (v9 = *(_DWORD*)(v3 + 16), a2 != v9)
		&& a2 <= v9
		&& (v10 = *(_QWORD*)(v3 + 8i64 * a2 + 24)) != 0
		&& *(_DWORD*)(v10 + 16) > 1u
		&& (a2 >= *(_DWORD*)(v3 + 16) || (*(_DWORD*)(v10 + 8) & 0x200) == 0))
	{
		v11 = a1[a2 + 2];
		return (unsigned int)(int)(float)((float)(*(int(__fastcall**)(__int64))(*(_QWORD*)v11 + 64i64))(v11) * 0.1);
	}
	else
	{
		v12 = sub_140551840(v3, a2);
		if (v12)
			return (unsigned int)(int)(float)((float)(int)sub_1406113B0(v14, v13) * (float)(100.0 / (float)v12));
		else
			return 100i64;
	}
}
// 14061155B: variable 'v14' is possibly undefined
// 14061155B: variable 'v13' is possibly undefined

