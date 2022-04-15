//----- (000000014088BCA0) ----------------------------------------------------
__int64 __fastcall sub_14088BCA0(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	__int64 a4,
	__int64 a5,
	__int64 a6,
	__int64 a7,
	_DWORD* a8,
	int a9,
	_DWORD* a10,
	int a11,
	__int64 a12,
	__int64 a13)
{
	sub_14085CFE0(a1, a3, a4, a5, a6, a8, a9, a10, 0, a11, a12, a13);
	sub_14088E7B0((_QWORD*)(a1 + 544), a2);
	*(_DWORD*)(a1 + 584) &= 0xFFFFFFFC;
	*(_BYTE*)(a1 + 382) &= ~0x20u;
	*(_DWORD*)(a1 + 568) = -1;
	*(_QWORD*)a1 = off_1409A81C0;
	*(_QWORD*)(a1 + 16) = &off_1409A48A0;
	*(_QWORD*)(a1 + 544) = off_1409A8248;
	*(_QWORD*)(a1 + 576) = a7;
	return a1;
}
// 1409A48A0: using guessed type __int64 (__fastcall *off_1409A48A0)();
// 1409A81C0: using guessed type __int64 (__fastcall *off_1409A81C0[29])();
// 1409A8248: using guessed type __int64 (__fastcall *off_1409A8248[12])();

