//----- (00000001402719D0) ----------------------------------------------------
__int64 __fastcall sub_1402719D0(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 result; // rax

	if (*(_DWORD*)(a1 + 7956) != a2)
	{
		*(_DWORD*)(a1 + 7956) = a2;
		result = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			52i64,
			a2);
	}
	if (a2)
	{
		if (*(_DWORD*)(a1 + 8488) != a3)
		{
			*(_DWORD*)(a1 + 8488) = a3;
			return (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6608) + 456i64))(
				*(_QWORD*)(a1 + 6608),
				185i64,
				a3);
		}
	}
	return result;
}

