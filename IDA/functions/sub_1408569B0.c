//----- (00000001408569B0) ----------------------------------------------------
__int64 __fastcall sub_1408569B0(__int64 a1, __int16 a2, int a3, __int64* a4)
{
	__int64 v6; // rcx

	sub_140874840(a1, a2, a3);
	*(_QWORD*)a1 = off_1409A3980;
	*(_BYTE*)(a1 + 88) &= 0xFCu;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	v6 = *a4;
	*(_QWORD*)(a1 + 112) = *a4;
	if (v6)
		sub_140865FB0(v6);
	*(_DWORD*)(a1 + 188) = 0;
	*(_QWORD*)(a1 + 192) = 0i64;
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_DWORD*)(a1 + 208) = 0;
	*(_BYTE*)(a1 + 214) = 0;
	*(_QWORD*)(a1 + 224) = 0i64;
	*(_QWORD*)(a1 + 232) = 0i64;
	*(_DWORD*)(a1 + 240) = 0;
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_DWORD*)(a1 + 120) = 0;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_DWORD*)(a1 + 104) = 0;
	*(_WORD*)(a1 + 212) = 1;
	*(_DWORD*)(a1 + 216) = 1;
	return a1;
}
// 1409A3980: using guessed type __int64 (__fastcall *off_1409A3980[6])();

