//----- (00000001408ACBB0) ----------------------------------------------------
__int64 __fastcall sub_1408ACBB0(__int64 a1)
{
	__int64 i; // rsi
	__int64 v3; // rax
	__int64 result; // rax
	int* v5; // rcx

	for (i = 0i64; (unsigned int)i < *(_DWORD*)(a1 + 728); i = (unsigned int)(i + 1))
	{
		v3 = 2i64 * (unsigned int)i;
		*(_BYTE*)(a1 + 8 * v3 + 364) = 0;
		*(_BYTE*)(a1 + 8 * v3 + 460) = 0;
		*(_BYTE*)(a1 + 8 * v3 + 556) = 0;
		if (*(_BYTE*)(a1 + 750))
			sub_1408AF3B0(a1 + 24 * i);
		result = sub_1408AF3B0(32i64 * (unsigned int)i + a1 + 144);
		v5 = *(int**)(a1 + 8 * i + 640);
		if (v5)
			result = (__int64)sub_1407E4830(v5, 0i64, (unsigned int)(4 * (*(_DWORD*)(a1 + 736) >> 1) + 4));
	}
	*(_QWORD*)(a1 + 740) = 0i64;
	*(_WORD*)(a1 + 748) = 257;
	return result;
}

