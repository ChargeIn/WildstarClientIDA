//----- (0000000140344C00) ----------------------------------------------------
__int64 __fastcall sub_140344C00(volatile signed __int32* a1)
{
	__int64 result; // rax

	result = (unsigned int)_InterlockedDecrement(a1 + 18);
	if (!(_DWORD)result)
	{
		if (a1)
			(*(void(__fastcall**)(volatile signed __int32*, __int64))(*(_QWORD*)a1 + 64i64))(a1, 1i64);
		return 0i64;
	}
	return result;
}

