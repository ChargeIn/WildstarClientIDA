//----- (00000001402EC500) ----------------------------------------------------
__int64 __fastcall sub_1402EC500(__int64 a1, __int64 a2)
{
	if (*(_DWORD*)(a1 + 4))
		return 1i64;
	if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2040) + 32i64))(*(_QWORD*)(a1 + 2040))
		&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2048) + 32i64))(*(_QWORD*)(a1 + 2048), a2)
		&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2056) + 32i64))(*(_QWORD*)(a1 + 2056), a2)
		&& (*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2064) + 32i64))(*(_QWORD*)(a1 + 2064), a2))
	{
		*(_DWORD*)(a1 + 4) = 1;
		return 1i64;
	}
	return 0i64;
}

