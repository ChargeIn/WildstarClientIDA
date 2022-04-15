//----- (00000001408A4490) ----------------------------------------------------
__int64 __fastcall sub_1408A4490(__int64 a1)
{
	unsigned int i; // edi
	__int64 result; // rax

	if (*(_QWORD*)(a1 + 8))
	{
		for (i = 0; i < *(_DWORD*)(a1 + 184); ++i)
			sub_1408A6450(*(_QWORD*)(a1 + 8) + 56i64 * i, *(_QWORD*)(a1 + 32));
		result = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 32) + 16i64))(
			*(_QWORD*)(a1 + 32),
			*(_QWORD*)(a1 + 8));
		*(_QWORD*)(a1 + 8) = 0i64;
	}
	return result;
}

