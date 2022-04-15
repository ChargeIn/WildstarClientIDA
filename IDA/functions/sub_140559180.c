//----- (0000000140559180) ----------------------------------------------------
__int64 __fastcall sub_140559180(__int64 a1, _OWORD* a2)
{
	int v3; // eax
	__int64 v6; // rcx

	v3 = dword_140C4D220;
	if (*(_DWORD*)qword_140C63750 < dword_140C4D220)
		v3 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&dword_140C4D230 + v3))
		return 2147500037i64;
	*(_DWORD*)(a1 + 4) = -1;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_DWORD*)(a1 + 64) = 0;
	*(_DWORD*)(a1 + 16) = 0;
	*(_DWORD*)(a1 + 72) = 300;
	*(_QWORD*)(a1 + 76) = -1i64;
	v6 = *(_QWORD*)(a1 + 144);
	*(_DWORD*)(a1 + 84) = -1;
	*(_DWORD*)(a1 + 128) = 0;
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 152i64))(v6);
	*(_DWORD*)(a1 + 4) = 0;
	*(_OWORD*)(a1 + 32) = *a2;
	*(_DWORD*)(a1 + 60) = 1069547520;
	sub_140559920((__m128*)a1);
	sub_14055A050(a1);
	return 0i64;
}
// 140C4D220: using guessed type int dword_140C4D220;
// 140C4D230: using guessed type int dword_140C4D230;
// 140C63750: using guessed type __int64 qword_140C63750;

