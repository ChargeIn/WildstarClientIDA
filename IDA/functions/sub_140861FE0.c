//----- (0000000140861FE0) ----------------------------------------------------
__int64 __fastcall sub_140861FE0(__int64 a1, __int64 a2, int a3, _QWORD* a4)
{
	*(_DWORD*)(a1 + 8) = a3;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_DWORD*)(a1 + 32) = 0;
	*(_QWORD*)(a1 + 40) = a2;
	*(_QWORD*)a1 = off_1409A4650;
	*(_QWORD*)(a1 + 48) = *a4;
	return a1;
}
// 1409A4650: using guessed type __int64 (__fastcall *off_1409A4650[19])();

