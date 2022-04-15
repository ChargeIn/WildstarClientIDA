//----- (0000000140034400) ----------------------------------------------------
__int64 __fastcall sub_140034400(__int64 a1, __int64 a2)
{
	if (*(_DWORD*)(a1 + 72))
		return 1i64;
	if (*(_QWORD*)(a1 + 1264)
		&& (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 232) + 32i64))(*(_QWORD*)(a1 + 232))
		&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 240) + 32i64))(*(_QWORD*)(a1 + 240), a2)
		&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 248) + 32i64))(*(_QWORD*)(a1 + 248), a2)
		&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 256) + 32i64))(*(_QWORD*)(a1 + 256), a2)
		&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 216) + 32i64))(*(_QWORD*)(a1 + 216), a2)
		&& (*(unsigned int(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 1272) + 24i64))(
			*(_QWORD*)(a1 + 1272),
			a2,
			1i64))
	{
		*(_DWORD*)(a1 + 72) = 1;
		return 1i64;
	}
	return 0i64;
}

