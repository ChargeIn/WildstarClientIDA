//----- (000000014087BDE0) ----------------------------------------------------
__int64 __fastcall sub_14087BDE0(__int64 a1, unsigned __int16 a2)
{
	int v2; // eax

	*(_WORD*)(a1 + 32) = a2;
	*(_WORD*)(a1 + 34) = a2;
	*(_QWORD*)a1 = off_1409A73A0;
	v2 = 50000 * a2;
	*(_DWORD*)(a1 + 24) = v2;
	*(_DWORD*)(a1 + 28) = v2;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_DWORD*)(a1 + 56) = 0;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	return a1;
}
// 1409A73A0: using guessed type __int64 (__fastcall *off_1409A73A0[9])();

