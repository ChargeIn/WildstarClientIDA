//----- (000000014035FC90) ----------------------------------------------------
__int64 __fastcall sub_14035FC90(__int64 a1)
{
	int v2; // ebx

	*(_DWORD*)(a1 + 6168) = 1;
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6176) + 88i64))(*(_QWORD*)(a1 + 6176));
	(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 6184) + 72i64))(
		*(_QWORD*)(a1 + 6184),
		*(_QWORD*)(a1 + 6176));
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6184) + 88i64))(*(_QWORD*)(a1 + 6184));
	(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 6224) + 72i64))(
		*(_QWORD*)(a1 + 6224),
		*(_QWORD*)(a1 + 6184));
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6224) + 88i64))(*(_QWORD*)(a1 + 6224));
	v2 = sub_14035FF70(a1);
	if (v2 >= 0)
		v2 = 0;
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6224) + 112i64))(*(_QWORD*)(a1 + 6224));
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6184) + 112i64))(*(_QWORD*)(a1 + 6184));
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6176) + 112i64))(*(_QWORD*)(a1 + 6176));
	return (unsigned int)v2;
}

