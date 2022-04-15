//----- (00000001408989C0) ----------------------------------------------------
__int64 __fastcall sub_1408989C0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v5; // rcx

	sub_14088C150((_QWORD*)a1, a3);
	*(_QWORD*)(a1 + 128) = a2;
	*(_QWORD*)a1 = off_1409A9840;
	*(_QWORD*)(a1 + 24) = off_1409A98F0;
	*(_QWORD*)(a1 + 40) = &off_1409A93A0;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_DWORD*)(a1 + 152) = 0;
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_QWORD*)(a1 + 168) = 0i64;
	v5 = *(_QWORD*)(a1 + 128);
	*(_BYTE*)(a1 + 192) &= 0xFCu;
	*(_QWORD*)(a1 + 184) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	return a1;
}
// 1409A93A0: using guessed type __int64 (__fastcall *off_1409A93A0)();
// 1409A9840: using guessed type __int64 (__fastcall *off_1409A9840[5])();
// 1409A98F0: using guessed type __int64 (__fastcall *off_1409A98F0[3])();

