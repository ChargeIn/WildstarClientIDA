//----- (0000000140453D90) ----------------------------------------------------
__int64 __fastcall sub_140453D90(__int64 a1)
{
	int v2; // eax

	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)a1 = off_140B67088;
	v2 = dword_140C1E664;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_DWORD*)(a1 + 16) = v2;
	*(_QWORD*)(a1 + 20) = 0i64;
	*(_QWORD*)(a1 + 28) = 0i64;
	*(_DWORD*)(a1 + 36) = 0;
	dword_140C1E664 = v2 + 1;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_DWORD*)(a1 + 88) = 0;
	sub_140565410(0i64, a1);
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B67088: using guessed type __int64 (__fastcall *off_140B67088[10])();
// 140C1E664: using guessed type int dword_140C1E664;

