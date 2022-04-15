//----- (00000001408BE0C0) ----------------------------------------------------
__int64 __fastcall sub_1408BE0C0(__int64 a1)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 112i64);
	if (!result)
		return 0i64;
	*(_QWORD*)result = off_1409AA370;
	*(_QWORD*)(result + 16) = 0i64;
	*(_QWORD*)(result + 24) = 0i64;
	*(_QWORD*)(result + 32) = 0i64;
	*(_QWORD*)(result + 40) = 0i64;
	*(_BYTE*)(result + 104) = 0;
	return result;
}
// 1409AA370: using guessed type __int64 (__fastcall *off_1409AA370[6])();

