//----- (0000000140271A50) ----------------------------------------------------
__int64 __fastcall sub_140271A50(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
	__int64 result; // rax

	if (*(_DWORD*)(a1 + 7976) != a2)
	{
		*(_DWORD*)(a1 + 7976) = a2;
		result = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			57i64,
			a2);
	}
	if (*(_DWORD*)(a1 + 7980) != a3)
	{
		*(_DWORD*)(a1 + 7980) = a3;
		result = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			58i64,
			a3);
	}
	if (*(_DWORD*)(a1 + 7984) != a4)
	{
		*(_DWORD*)(a1 + 7984) = a4;
		return (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6608) + 456i64))(
			*(_QWORD*)(a1 + 6608),
			59i64,
			a4);
	}
	return result;
}

