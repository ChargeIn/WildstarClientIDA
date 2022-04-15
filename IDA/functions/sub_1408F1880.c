//----- (00000001408F1880) ----------------------------------------------------
__int64 __fastcall sub_1408F1880(__int64 a1)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 72i64);
	if (result)
	{
		*(_QWORD*)result = off_1409C6070;
		*(_QWORD*)(result + 8) = 0i64;
		*(_QWORD*)(result + 56) = 0i64;
		*(_DWORD*)(result + 64) = 0;
	}
	return result;
}
// 1409C6070: using guessed type __int64 (__fastcall *off_1409C6070[6])();

