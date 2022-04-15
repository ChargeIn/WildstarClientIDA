//----- (000000014026FEE0) ----------------------------------------------------
__int64 __fastcall sub_14026FEE0(__int64 a1)
{
	unsigned int i; // edi
	__int64 result; // rax
	unsigned int j; // edi

	for (i = 0; i < *(_DWORD*)(a1 + 10368); ++i)
	{
		result = i;
		if (*(_QWORD*)(a1 + 8i64 * i + 10048))
		{
			*(_QWORD*)(a1 + 8i64 * i + 10048) = 0i64;
			result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 6608) + 520i64))(
				*(_QWORD*)(a1 + 6608),
				i,
				0i64);
		}
	}
	*(_DWORD*)(a1 + 10368) = 0;
	for (j = 0; j < *(_DWORD*)(a1 + 10372); ++j)
	{
		result = j;
		if (*(_QWORD*)(a1 + 8i64 * j + 10304))
		{
			*(_QWORD*)(a1 + 8i64 * j + 10304) = 0i64;
			result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 6608) + 520i64))(
				*(_QWORD*)(a1 + 6608),
				j + 257,
				0i64);
		}
	}
	*(_DWORD*)(a1 + 10372) = 0;
	return result;
}

