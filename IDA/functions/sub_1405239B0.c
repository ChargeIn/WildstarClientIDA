//----- (00000001405239B0) ----------------------------------------------------
__int64 __fastcall sub_1405239B0(__int64* a1, _QWORD* a2)
{
	__int64 v3; // rcx
	void(__fastcall * **v5)(_QWORD); // rax
	void(__fastcall * **v6)(_QWORD); // rdi
	__int64 v7; // rcx

	v3 = a1[2];
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		a1[2] = 0i64;
	}
	a1[4] = 0i64;
	a1[6] = 0i64;
	v5 = (void(__fastcall***)(_QWORD))sub_1406E8880(a2, 3u);
	v6 = v5;
	if ((void(__fastcall***)(_QWORD))a1[2] != v5)
	{
		if (v5)
			(**v5)(v5);
		v7 = a1[2];
		if (v7)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		a1[2] = (__int64)v6;
	}
	sub_1406E6910(
		a1[2],
		a1 + 3,
		(__int64)(a1 + 5),
		(__int64)(a1 + 7),
		(__int64)(a1 + 10),
		(__int64)(a1 + 13),
		(__int64)(a1 + 16));
	return 0i64;
}

