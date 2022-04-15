//----- (00000001408C2FA0) ----------------------------------------------------
__int64 __fastcall sub_1408C2FA0(__int64 a1)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 56i64);
	if (result)
	{
		*(_QWORD*)result = off_1409AA548;
		*(_WORD*)(result + 8) = 0;
		*(_DWORD*)(result + 12) = 0;
		*(_DWORD*)(result + 16) = 1065353216;
		*(_DWORD*)(result + 20) = 1148846080;
		*(_DWORD*)(result + 24) = 1065353216;
		*(_QWORD*)(result + 28) = 1065353216i64;
		*(_DWORD*)(result + 36) = 1065353216;
		*(_DWORD*)(result + 40) = 1065353216;
		*(_DWORD*)(result + 44) = 1112014848;
		*(_WORD*)(result + 48) = 0;
	}
	return result;
}
// 1409AA548: using guessed type __int64 (__fastcall *off_1409AA548[6])();

