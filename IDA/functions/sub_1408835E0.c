//----- (00000001408835E0) ----------------------------------------------------
__int64 __fastcall sub_1408835E0(__int64 a1)
{
	char v2; // al

	sub_140888F00(a1);
	*(_QWORD*)a1 = &off_1409A7A38;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
	*(_BYTE*)(a1 + 117) &= 0x83u;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_DWORD*)(a1 + 136) = -1;
	*(_DWORD*)(a1 + 156) = 0;
	*(_QWORD*)a1 = &off_1409A7B20;
	*(_QWORD*)(a1 + 120) = off_1409A7B80;
	*(_DWORD*)(a1 + 168) = 0;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 184) = 0i64;
	v2 = *(_BYTE*)(a1 + 117);
	*(_BYTE*)(a1 + 194) &= 0xFCu;
	*(_BYTE*)(a1 + 192) = 0;
	*(_BYTE*)(a1 + 117) = v2 & 0xFC | 1;
	return a1;
}
// 1409A7A38: using guessed type __int64 (__fastcall *off_1409A7A38)();
// 1409A7B20: using guessed type __int64 (__fastcall *off_1409A7B20)();
// 1409A7B80: using guessed type __int64 (__fastcall *off_1409A7B80[17])();

