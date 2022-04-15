//----- (00000001408CE070) ----------------------------------------------------
__int64 __fastcall sub_1408CE070(__int64 a1)
{
	__int64 result; // rax
	__int64 v2; // rbx

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 840i64);
	v2 = result;
	if (result)
	{
		*(_QWORD*)result = off_1409B1660;
		*(_QWORD*)(result + 8) = 0i64;
		*(_QWORD*)(result + 16) = 0i64;
		*(_QWORD*)(result + 24) = 2048i64;
		*(_DWORD*)(result + 32) = 0;
		*(_DWORD*)(result + 36) = 1065353216;
		*(_QWORD*)(result + 40) = 2048i64;
		*(_DWORD*)(result + 48) = 0;
		*(_DWORD*)(result + 52) = 1065353216;
		sub_1408AC600(result + 72);
		return v2;
	}
	return result;
}
// 1409B1660: using guessed type __int64 (__fastcall *off_1409B1660[6])();

