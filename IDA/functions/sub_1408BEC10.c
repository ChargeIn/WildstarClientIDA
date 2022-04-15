//----- (00000001408BEC10) ----------------------------------------------------
__int64 __fastcall sub_1408BEC10(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	__int64 result; // rax

	if (a4)
		return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 40i64))(a1, a3, a4);
	*(_DWORD*)(a1 + 12) = 1036831949;
	*(_DWORD*)(a1 + 16) = -1035993088;
	*(_DWORD*)(a1 + 8) = 0;
	*(_QWORD*)(a1 + 28) = 0i64;
	result = 1i64;
	*(_QWORD*)(a1 + 20) = 1086324736i64;
	return result;
}

