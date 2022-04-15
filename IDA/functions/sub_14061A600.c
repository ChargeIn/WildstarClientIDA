//----- (000000014061A600) ----------------------------------------------------
__int64 __fastcall sub_14061A600(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx

	v2 = *(_QWORD*)(a1 + 56);
	if (v2 && !*(_DWORD*)(a1 + 676))
	{
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v2 + 648i64))(v2, 0i64, 0i64);
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 56) + 1120i64))(
			*(_QWORD*)(a1 + 56),
			0i64,
			0i64);
		result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 936i64))(*(_QWORD*)(a1 + 56));
		v4 = *(_QWORD*)(a1 + 64);
		if (v4)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 936i64))(v4);
		v5 = *(_QWORD*)(a1 + 56);
		if (v5)
		{
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
			*(_QWORD*)(a1 + 56) = 0i64;
		}
		v6 = *(_QWORD*)(a1 + 64);
		if (v6)
		{
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
			*(_QWORD*)(a1 + 64) = 0i64;
		}
		v7 = *(_QWORD*)(a1 + 120);
		if (v7)
		{
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
			*(_QWORD*)(a1 + 120) = 0i64;
		}
	}
	return result;
}

