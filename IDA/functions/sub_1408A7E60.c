//----- (00000001408A7E60) ----------------------------------------------------
__int64 __fastcall sub_1408A7E60(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned __int16 a4)
{
	unsigned int v5; // ecx
	__int64 v6; // rax
	unsigned int i; // ebx
	__m128* v9; // rcx

	*(_WORD*)(a1 + 16) = a4;
	*(_WORD*)(a1 + 18) = a3;
	v5 = a4 * a3;
	*(_DWORD*)(a1 + 8) = v5;
	if (v5)
	{
		v6 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 176i64 * v5);
		*(_QWORD*)a1 = v6;
		if (!v6)
			return 52i64;
		for (i = 0; i < *(_DWORD*)(a1 + 8); ++i)
		{
			v9 = (__m128*)(*(_QWORD*)a1 + 176i64 * i);
			if (v9)
			{
				v9[10].m128_u64[0] = 0i64;
				v9[10].m128_u64[1] = 0i64;
				sub_1408A8E90(v9, 1.0, 0.0, 0.0, 0.0, 0.0);
			}
		}
	}
	return 1i64;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

