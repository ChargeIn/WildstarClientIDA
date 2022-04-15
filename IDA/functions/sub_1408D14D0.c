//----- (00000001408D14D0) ----------------------------------------------------
__int64 __fastcall sub_1408D14D0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	__int64 result; // rax

	if (a4)
		return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 40i64))(a1, a3, a4);
	*(_QWORD*)(a1 + 8) = 1065353216i64;
	*(_QWORD*)(a1 + 16) = 1065353216i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 24) = 1056964608i64;
	*(_DWORD*)(a1 + 40) = 1065353216;
	result = 1i64;
	*(_WORD*)(a1 + 48) = 257;
	*(_BYTE*)(a1 + 50) = 1;
	*(_BYTE*)(a1 + 44) = 1;
	return result;
}

