//----- (0000000140893240) ----------------------------------------------------
__int64 __fastcall sub_140893240(__int64 a1, int a2)
{
	sub_1408957A0(a1, a2);
	*(_QWORD*)(a1 + 256) = 0i64;
	*(_DWORD*)(a1 + 264) = 0;
	*(_QWORD*)a1 = off_1409A8D60;
	*(_QWORD*)(a1 + 248) = off_1409A9018;
	sub_1408347C0(a1 + 272);
	*(_BYTE*)(a1 + 296) = 1;
	*(_QWORD*)(a1 + 304) = 0i64;
	*(_QWORD*)(a1 + 312) = 0i64;
	return a1;
}
// 1409A8D60: using guessed type __int64 (__fastcall *off_1409A8D60[4])();
// 1409A9018: using guessed type __int64 (__fastcall *off_1409A9018[5])();

