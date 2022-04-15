//----- (00000001404DAD90) ----------------------------------------------------
_BOOL8 __fastcall sub_1404DAD90(__int64 a1)
{
	__int64 v2; // rax

	if (*(_DWORD*)(a1 + 31000))
		return (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 200i64))(
			*(_QWORD*)(a1 + 30088),
			25i64) != 0;
	v2 = *(_QWORD*)(a1 + 29080);
	if (v2)
	{
		if (*(_DWORD*)(v2 + 80))
			return (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 200i64))(
				*(_QWORD*)(a1 + 30088),
				25i64) != 0;
	}
	return (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 200i64))(
		*(_QWORD*)(a1 + 30088),
		27i64)
		|| sub_1404DAC20(a1)
		&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 200i64))(
			*(_QWORD*)(a1 + 30088),
			29i64);
}

