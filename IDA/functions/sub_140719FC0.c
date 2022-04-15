//----- (0000000140719FC0) ----------------------------------------------------
void __fastcall sub_140719FC0(__int64 a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx

	v2 = *(_QWORD**)(a1 + 8);
	if (v2)
		*v2 = *(_QWORD*)(a1 + 16);
	v3 = *(_QWORD*)(a1 + 16);
	if (v3)
		*(_QWORD*)(v3 + 8) = *(_QWORD*)(a1 + 8);
	*(_DWORD*)(a1 + 200) = 1;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	if (*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1) + 12))
		goto LABEL_13;
	v4 = *(_QWORD*)(a1 + 208);
	if (!v4)
	{
		if (*(_QWORD*)(a1 + 72) || *(_QWORD*)(a1 + 144))
			return;
	LABEL_13:
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 80i64))(a1, 0i64);
		return;
	}
	if (!*(_DWORD*)(v4 + 688) && (*(_QWORD*)(v4 + 640) || *(_QWORD*)(v4 + 632)))
		sub_1407191F0(v4);
}

