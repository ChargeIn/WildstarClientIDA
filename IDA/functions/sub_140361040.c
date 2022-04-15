//----- (0000000140361040) ----------------------------------------------------
__int64 __fastcall sub_140361040(__int64 a1)
{
	int v2; // ebx

	*(_DWORD*)(a1 + 6168) = 2;
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6176) + 88i64))(*(_QWORD*)(a1 + 6176));
	(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 6184) + 72i64))(
		*(_QWORD*)(a1 + 6184),
		*(_QWORD*)(a1 + 6176));
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6184) + 88i64))(*(_QWORD*)(a1 + 6184));
	(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 6232) + 72i64))(
		*(_QWORD*)(a1 + 6232),
		*(_QWORD*)(a1 + 6184));
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6232) + 88i64))(*(_QWORD*)(a1 + 6232));
	v2 = sub_140361170(a1);
	if (v2 >= 0)
		v2 = 0;
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6232) + 112i64))(*(_QWORD*)(a1 + 6232));
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6184) + 112i64))(*(_QWORD*)(a1 + 6184));
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6176) + 112i64))(*(_QWORD*)(a1 + 6176));
	return (unsigned int)v2;
}

