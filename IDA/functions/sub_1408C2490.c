//----- (00000001408C2490) ----------------------------------------------------
__int64 __fastcall sub_1408C2490(__int64 a1)
{
	__int64 v2; // rcx

	v2 = a1 + 24;
	*(_QWORD*)(v2 - 24) = off_1409AA500;
	*(_QWORD*)(v2 - 16) = 0i64;
	*(_QWORD*)(v2 - 8) = 0i64;
	sub_1408C2DB0(v2);
	return a1;
}
// 1409AA500: using guessed type __int64 (__fastcall *off_1409AA500[6])();

