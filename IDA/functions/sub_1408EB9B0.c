//----- (00000001408EB9B0) ----------------------------------------------------
__int64 __fastcall sub_1408EB9B0(__int64 a1, __int64 a2, int a3)
{
	int v3; // eax
	int v4; // edi
	unsigned int v7; // edi
	int* v8; // rbp
	void* v9; // r12
	void* v10; // rax
	int v11; // r9d
	int v12; // esi
	__int64 v13; // r13
	__int64* v14; // r14

	v3 = *(_DWORD*)(a1 + 136);
	v4 = *(_DWORD*)(a1 + 140);
	if (v3 >= v4)
		return 0i64;
	v7 = v4 - v3;
	if (a2)
	{
		v8 = *(int**)(a1 + 32);
		if ((int)v7 > a3)
			v7 = a3;
		v9 = sub_1408EB810(*v8 >> 1);
		v10 = sub_1408EB810(v8[1] >> 1);
		v11 = *(_DWORD*)(a1 + 24);
		v12 = 0;
		v13 = (__int64)v10;
		v14 = (__int64*)(a1 + 40);
		do
		{
			sub_1408ECE70(
				*v8,
				v8[1],
				*(_DWORD*)(a1 + 144),
				*(_DWORD*)(a1 + 148),
				*v14,
				v14[6],
				(__int64)v9,
				v13,
				(_WORD*)(a2 + 2i64 * v12),
				v11,
				*(_DWORD*)(a1 + 136),
				*(_DWORD*)(a1 + 136) + v7);
			v11 = *(_DWORD*)(a1 + 24);
			++v12;
			++v14;
		} while (v12 < v11);
		*(_DWORD*)(a1 + 136) += v7;
	}
	return v7;
}

