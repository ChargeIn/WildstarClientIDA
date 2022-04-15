//----- (000000014089BFE0) ----------------------------------------------------
__int64 __fastcall sub_14089BFE0(__int64 a1)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 32i64);
	if (result)
	{
		*(_QWORD*)result = off_1409A9A38;
		*(_BYTE*)(result + 24) = 0;
	}
	return result;
}
// 1409A9A38: using guessed type __int64 (__fastcall *off_1409A9A38[6])();

