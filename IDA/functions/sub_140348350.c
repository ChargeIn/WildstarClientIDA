//----- (0000000140348350) ----------------------------------------------------
__int64 __fastcall sub_140348350(volatile signed __int32* a1)
{
	__int64 result; // rax

	result = (unsigned int)_InterlockedDecrement(a1 + 2);
	if (!(_DWORD)result)
	{
		if (a1)
			(*(void(__fastcall**)(volatile signed __int32*, __int64))(*(_QWORD*)a1 + 24i64))(a1, 1i64);
		return 0i64;
	}
	return result;
}

