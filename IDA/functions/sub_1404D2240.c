//----- (00000001404D2240) ----------------------------------------------------
__int64 __fastcall sub_1404D2240(__int64 a1, unsigned int a2)
{
	__int64 v2; // r9
	unsigned __int64 v3; // r10
	int v6; // r11d
	int v7; // ebx
	int v8; // ecx
	unsigned int v9; // edx
	unsigned int v10; // eax
	unsigned int v11; // eax
	int v12; // eax

	v2 = *(_QWORD*)(a1 + 8);
	v3 = a2;
	if (!v2)
		return 0i64;
	v6 = -1;
	v7 = *(_DWORD*)(a1 + 24);
	v8 = -1;
	if (v7 != -1)
		v8 = v7;
	v9 = 0;
	v10 = 0;
	if (v8)
		v10 = v8;
	if ((unsigned int)v3 >= v10 || !*(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v3))
		return 0i64;
	v11 = 0;
	if (v7 != -1)
		v6 = v7;
	if (v6)
		v11 = v6;
	if ((unsigned int)v3 < v11)
	{
		v12 = *(_DWORD*)(a1 + 32);
		if (_bittest(&v12, v3))
			return 0i64;
	}
	LOBYTE(v9) = v3 >= *(_QWORD*)(v2 + 24) || *(_DWORD*)(a1 + 36) >= *(_DWORD*)(*(_QWORD*)(v2 + 16) + 4 * v3);
	return v9;
}

