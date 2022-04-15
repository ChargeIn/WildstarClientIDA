//----- (00000001406D7B10) ----------------------------------------------------
__int64 __fastcall sub_1406D7B10(__int64 a1)
{
	*(_DWORD*)(a1 + 12) = 300;
	*(_DWORD*)(a1 + 16) = -1;
	sub_1401095E0(a1 + 40);
	sub_1405C7150(a1 + 96, 1);
	*(_QWORD*)a1 = 0i64;
	*(_DWORD*)(a1 + 8) = 0;
	*(_OWORD*)(a1 + 20) = xmmword_140C784D0;
	sub_1405C7AD0(a1 + 96, 0, 0);
	*(_DWORD*)(a1 + 12) = 300;
	*(_DWORD*)(a1 + 16) = -1;
	return a1;
}
// 140C784D0: using guessed type __int128 xmmword_140C784D0;

