//----- (00000001408E6C70) ----------------------------------------------------
__int64 __fastcall sub_1408E6C70(_DWORD* a1, __int64 a2)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 56i64);
	if (result)
	{
		*(_QWORD*)result = off_1409B4358;
		*(_DWORD*)(result + 16) = 1127481344;
		*(_QWORD*)(result + 20) = 1065353216i64;
		*(_DWORD*)(result + 28) = 1065353216;
		*(_DWORD*)(result + 32) = 1065353216;
		*(_QWORD*)(result + 36) = 1065353216i64;
		*(_DWORD*)(result + 44) = 1065353216;
		*(_QWORD*)(result + 48) = 1048576000i64;
		*(_QWORD*)(result + 8) = 0i64;
		*(_DWORD*)(result + 8) = a1[2];
		*(_DWORD*)(result + 12) = a1[3];
		*(_DWORD*)(result + 16) = a1[4];
		*(_DWORD*)(result + 20) = a1[5];
		*(_DWORD*)(result + 24) = a1[6];
		*(_DWORD*)(result + 28) = a1[7];
		*(_DWORD*)(result + 32) = a1[8];
		*(_DWORD*)(result + 36) = a1[9];
		*(_DWORD*)(result + 40) = a1[10];
		*(_DWORD*)(result + 44) = a1[11];
		*(_DWORD*)(result + 48) = a1[12];
		*(_DWORD*)(result + 52) = a1[13];
	}
	return result;
}
// 1409B4358: using guessed type __int64 (__fastcall *off_1409B4358[6])();

