//----- (00000001408C0480) ----------------------------------------------------
__int64 __fastcall sub_1408C0480(__int64 a1)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 96i64);
	if (!result)
		return 0i64;
	*(_QWORD*)result = off_1409AA480;
	*(_QWORD*)(result + 8) = 0i64;
	*(_QWORD*)(result + 16) = 0i64;
	*(_QWORD*)(result + 24) = 0i64;
	*(_QWORD*)(result + 56) = 0i64;
	*(_QWORD*)(result + 64) = 0i64;
	*(_DWORD*)(result + 76) = -1;
	*(_DWORD*)(result + 80) = 0;
	return result;
}
// 1409AA480: using guessed type __int64 (__fastcall *off_1409AA480[6])();

