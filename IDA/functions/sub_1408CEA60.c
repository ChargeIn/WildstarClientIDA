//----- (00000001408CEA60) ----------------------------------------------------
__int64 __fastcall sub_1408CEA60(__int64 a1)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 24i64);
	if (result)
	{
		*(_QWORD*)result = off_1409B16B0;
		*(_QWORD*)(result + 8) = 2048i64;
		*(_DWORD*)(result + 16) = 0;
		*(_DWORD*)(result + 20) = 1065353216;
	}
	return result;
}
// 1409B16B0: using guessed type __int64 (__fastcall *off_1409B16B0[6])();

