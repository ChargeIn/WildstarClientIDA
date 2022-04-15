//----- (000000014071AA90) ----------------------------------------------------
void __fastcall sub_14071AA90(__int64 a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	bool v4; // zf

	v2 = *(_QWORD**)(a1 + 8);
	if (v2)
		*v2 = *(_QWORD*)(a1 + 16);
	v3 = *(_QWORD*)(a1 + 16);
	if (v3)
		*(_QWORD*)(v3 + 8) = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	sub_140195D70(a1 + 432);
	v4 = *(_DWORD*)(a1 + 504) == 0;
	*(_DWORD*)(a1 + 508) = 1;
	if (!v4 && *(_DWORD*)(a1 + 424) == 1)
	{
		if (*(_DWORD*)(a1 + 396))
			sub_14071A6E0(a1, 2, 0);
		else
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 80i64))(a1, 0i64);
	}
}

