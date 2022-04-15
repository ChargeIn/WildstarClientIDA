//----- (0000000140284000) ----------------------------------------------------
__int64 __fastcall sub_140284000(__int64 a1, __int64 a2)
{
	if (*(_DWORD*)(a1 + 176))
		return 1i64;
	if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 400) + 32i64))(*(_QWORD*)(a1 + 400))
		&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 408) + 32i64))(*(_QWORD*)(a1 + 408), a2))
	{
		*(_DWORD*)(a1 + 176) = 1;
		return 1i64;
	}
	return 0i64;
}

