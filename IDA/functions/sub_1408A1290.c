//----- (00000001408A1290) ----------------------------------------------------
__int64 __fastcall sub_1408A1290(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 32i64);
	if (result)
	{
		*(_QWORD*)result = off_1409A9D10;
		*(_DWORD*)(result + 8) = *(_DWORD*)(a1 + 8);
		*(_DWORD*)(result + 12) = *(_DWORD*)(a1 + 12);
		*(_DWORD*)(result + 16) = *(_DWORD*)(a1 + 16);
		*(_DWORD*)(result + 20) = *(_DWORD*)(a1 + 20);
		*(_BYTE*)(result + 21) = 1;
		*(_QWORD*)(result + 24) = *(_QWORD*)(a1 + 24);
		*(_BYTE*)(result + 29) = 1;
	}
	return result;
}
// 1409A9D10: using guessed type __int64 (__fastcall *off_1409A9D10[6])();

