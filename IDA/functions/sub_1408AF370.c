//----- (00000001408AF370) ----------------------------------------------------
__int64 __fastcall sub_1408AF370(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	if (*(_QWORD*)(a1 + 16))
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		result = 0i64;
		*(_QWORD*)(a1 + 16) = 0i64;
		*(_DWORD*)(a1 + 12) = 0;
	}
	else
	{
		result = 0i64;
		*(_DWORD*)(a1 + 12) = 0;
	}
	return result;
}

