//----- (0000000140625C30) ----------------------------------------------------
__int64 __fastcall sub_140625C30(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 result; // rax
	__int64* v8; // rcx
	__int64 v9; // rcx

	v2 = *a1;
	if (v2)
	{
		if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 328i64))(v2))
		{
			v3 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 328i64))(*a1);
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v3 + 648i64))(v3, 0i64, 0i64);
			v4 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 328i64))(*a1);
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v4 + 1120i64))(v4, 0i64, 0i64);
			v5 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 328i64))(*a1);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 936i64))(v5);
		}
		if (*a1)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 8i64))(*a1);
			*a1 = 0i64;
		}
	}
	result = a1[1];
	if (result)
	{
		if ((*(_DWORD*)(result + 612))-- == 1)
		{
			result = a1[1];
			*(_DWORD*)(result + 700) = 1;
		}
	}
	v8 = (__int64*)a1[2];
	if (v8)
	{
		result = a1[3];
		*v8 = result;
	}
	v9 = a1[3];
	if (v9)
	{
		result = a1[2];
		*(_QWORD*)(v9 + 16) = result;
	}
	a1[2] = 0i64;
	a1[3] = 0i64;
	if (*a1)
		return (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 8i64))(*a1);
	return result;
}

