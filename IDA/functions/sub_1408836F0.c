//----- (00000001408836F0) ----------------------------------------------------
__int64 __fastcall sub_1408836F0(__int64 a1)
{
	sub_140888F00(a1);
	*(_QWORD*)a1 = &off_1409A7A38;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
	*(_BYTE*)(a1 + 117) &= 0x83u;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)a1 = &off_1409A7A70;
	*(_QWORD*)(a1 + 120) = &off_1409A7AB0;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_DWORD*)(a1 + 152) = 0;
	*(_DWORD*)(a1 + 156) = -1;
	*(_WORD*)(a1 + 160) = 0;
	*(_DWORD*)(a1 + 176) &= 0xFFFFFFF0;
	*(_DWORD*)(a1 + 176) |= 0x10u;
	*(_BYTE*)(a1 + 117) &= 0xFCu;
	*(_DWORD*)(a1 + 168) = 0;
	return a1;
}
// 1409A7A38: using guessed type __int64 (__fastcall *off_1409A7A38)();
// 1409A7A70: using guessed type __int64 (__fastcall *off_1409A7A70)();
// 1409A7AB0: using guessed type __int64 (__fastcall *off_1409A7AB0)();

