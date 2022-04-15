//----- (0000000140881F60) ----------------------------------------------------
__int64 __fastcall sub_140881F60(__int64 a1, unsigned __int64 a2)
{
	unsigned __int64 v2; // rbx
	int v4; // r9d
	int v5; // eax
	__int64 v6; // r11
	__int64 v7; // r8
	int v8; // ecx
	int v9; // r10d
	__int64 result; // rax
	bool v11; // zf
	int v12; // eax
	int v13; // ecx
	int v14; // ecx
	__int64 v15; // r8
	__int64 v16; // rax
	__int64 v17; // rdx
	__int64 v18; // rax
	int v19; // edx

	v2 = a2;
	if (!a2)
		return 0i64;
	if (a2 >= 0x20)
		v2 = (1 << (sub_140882470(a2) - 5)) - 1 + a2;
	if (v2 >= 0x100)
	{
		v5 = sub_140882470(v2);
		v4 = v5 - 7;
		LOBYTE(v2) = (v2 >> ((unsigned __int8)v5 - 5)) ^ 0x20;
	}
	else
	{
		v4 = 0;
		LODWORD(v2) = (int)v2 / 8;
	}
	v6 = v4;
	v7 = v4;
	v8 = (-1 << v2) & *(_DWORD*)(a1 + 4i64 * v4 + 36);
	if (!v8)
	{
		v9 = *(_DWORD*)(a1 + 32) & (-1 << (v4 + 1));
		if (!v9)
			return 0i64;
		v4 = sub_140882410(v9);
		v7 = v4;
		v6 = v4;
		v8 = *(_DWORD*)(a1 + 4i64 * v4 + 36);
	}
	v11 = (v8 & -v8) == 0;
	v12 = v8 & -v8;
	v13 = 32;
	if (v11)
		v13 = 31;
	if ((v12 & 0xFFFF0000) == 0)
	{
		v12 <<= 16;
		v13 -= 16;
	}
	if ((v12 & 0xFF000000) == 0)
	{
		v12 <<= 8;
		v13 -= 8;
	}
	if ((v12 & 0xF0000000) == 0)
	{
		v12 *= 16;
		v13 -= 4;
	}
	if ((v12 & 0xC0000000) == 0)
	{
		v12 *= 4;
		v13 -= 2;
	}
	if (v12 >= 0)
		--v13;
	v14 = v13 - 1;
	v15 = *(_QWORD*)(a1 + 8 * (v14 + 32 * v7) + 136);
	if (!v15)
		return v15;
	v16 = *(_QWORD*)(v15 + 24);
	v17 = *(_QWORD*)(v15 + 16);
	*(_QWORD*)(v17 + 24) = v16;
	*(_QWORD*)(v16 + 16) = v17;
	v18 = v14 + 32 * v6;
	if (*(_QWORD*)(a1 + 8 * v18 + 136) != v15)
		return v15;
	*(_QWORD*)(a1 + 8 * v18 + 136) = v17;
	if (v17 != a1)
		return v15;
	result = v15;
	v19 = ~(1 << v14);
	v11 = (v19 & *(_DWORD*)(a1 + 4 * v6 + 36)) == 0;
	*(_DWORD*)(a1 + 4 * v6 + 36) &= v19;
	if (v11)
		*(_DWORD*)(a1 + 32) &= ~(1 << v4);
	return result;
}

