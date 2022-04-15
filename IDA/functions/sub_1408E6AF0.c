//----- (00000001408E6AF0) ----------------------------------------------------
__int64 __fastcall sub_1408E6AF0(__int64 a1)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 56i64);
	if (!result)
		return 0i64;
	*(_QWORD*)result = off_1409B4358;
	*(_DWORD*)(result + 16) = 1127481344;
	*(_QWORD*)(result + 20) = 1065353216i64;
	*(_DWORD*)(result + 28) = 1065353216;
	*(_DWORD*)(result + 32) = 1065353216;
	*(_QWORD*)(result + 8) = 0i64;
	*(_QWORD*)(result + 36) = 1065353216i64;
	*(_DWORD*)(result + 44) = 1065353216;
	*(_QWORD*)(result + 48) = 1048576000i64;
	return result;
}
// 1409B4358: using guessed type __int64 (__fastcall *off_1409B4358[6])();

