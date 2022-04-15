//----- (000000014066E1E0) ----------------------------------------------------
__int64 __fastcall sub_14066E1E0(__int64 a1, int a2)
{
	unsigned int v3; // r14d
	__int64 v4; // r15
	__int64 i; // rbx
	int v6; // r8d
	__int64 v7; // rax
	int v8; // ecx
	__int64 v9; // rdx
	__int64 v10; // rcx

	*(_DWORD*)(a1 + 152) = a2;
	sub_14066E410(a1);
	if (!*(_DWORD*)(a1 + 1340) || a1 == -504)
		return 0i64;
	v3 = 0;
	v4 = a1 + 24;
	if (!*(_DWORD*)(a1 + 152))
		v4 = a1 + 56;
	for (i = 60i64; i < 120; i += 4i64)
	{
		v6 = *(_DWORD*)(a1 + 1340);
		v7 = 0i64;
		if (v6)
			v7 = a1 + 504;
		v8 = *(_DWORD*)(i + v7);
		if (v8 < 0)
			v8 = 0x80000000 - v8;
		if ((int)abs32(v8) > 84)
		{
			v9 = 0i64;
			v3 = 1;
			if (v6)
				v9 = a1 + 504;
			v10 = 0i64;
			if (v6)
				v10 = a1 + 504;
			sub_14066E0F0(v10, v4, *(_DWORD*)(i + v10 - 60), *(float*)(i + v9));
		}
	}
	return v3;
}

