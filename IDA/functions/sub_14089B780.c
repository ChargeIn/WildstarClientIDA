//----- (000000014089B780) ----------------------------------------------------
__int64 __fastcall sub_14089B780(_DWORD* a1, __int64 a2)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 24i64);
	if (result)
	{
		*(_QWORD*)result = off_1409A9930;
		*(_DWORD*)(result + 8) = a1[2];
		*(_DWORD*)(result + 12) = a1[3];
		*(_DWORD*)(result + 16) = a1[4];
	}
	return result;
}
// 1409A9930: using guessed type __int64 (__fastcall *off_1409A9930[12])();

