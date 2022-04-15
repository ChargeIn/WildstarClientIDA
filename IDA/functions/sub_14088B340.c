//----- (000000014088B340) ----------------------------------------------------
__int64 __fastcall sub_14088B340(__int64 a1, __int64 a2)
{
	sub_14088E7B0((_QWORD*)a1, a2);
	*(_DWORD*)(a1 + 32) = 0;
	*(_QWORD*)a1 = off_1409A8160;
	*(_QWORD*)(a1 + 24) = off_1409A81A8;
	*(_QWORD*)(a1 + 40) = &off_1409A93A0;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_BYTE*)(a1 + 72) &= 0xFCu;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_BYTE*)(a1 + 98) &= 0xE0u;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_DWORD*)(a1 + 88) = 1065353216;
	*(_DWORD*)(a1 + 92) = -1;
	*(_WORD*)(a1 + 96) = 0;
	return a1;
}
// 1409A8160: using guessed type __int64 (__fastcall *off_1409A8160[5])();
// 1409A81A8: using guessed type __int64 (__fastcall *off_1409A81A8[2])();
// 1409A93A0: using guessed type __int64 (__fastcall *off_1409A93A0)();

