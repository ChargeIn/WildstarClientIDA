//----- (000000014071E0F0) ----------------------------------------------------
__int64 __fastcall sub_14071E0F0(
	__int64 a1,
	__int64 a2,
	void(__fastcall*** a3)(_QWORD),
	void(__fastcall*** a4)(_QWORD))
{
	__int64 v8; // rcx
	__int64 v9; // rcx

	if (!a3 || !a4)
		return 2147500037i64;
	if (*(void(__fastcall****)(_QWORD))(a1 + 608) != a3)
	{
		(**a3)(a3);
		v8 = *(_QWORD*)(a1 + 608);
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		*(_QWORD*)(a1 + 608) = a3;
	}
	if (*(void(__fastcall****)(_QWORD))(a1 + 616) != a4)
	{
		(**a4)(a4);
		v9 = *(_QWORD*)(a1 + 616);
		if (v9)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		*(_QWORD*)(a1 + 616) = a4;
	}
	sub_14071CA20((_DWORD*)(a1 + 352), a2);
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 96i64))(a1, *(unsigned int*)(a1 + 604));
	return sub_14071C0B0(a1, a1 + 352);
}

