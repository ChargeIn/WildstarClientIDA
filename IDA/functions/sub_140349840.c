//----- (0000000140349840) ----------------------------------------------------
__int64 __fastcall sub_140349840(volatile signed __int32* a1)
{
	__int64 result; // rax

	result = (unsigned int)_InterlockedDecrement(a1 + 40);
	if (!(_DWORD)result)
	{
		if (a1)
			(*(void(__fastcall**)(volatile signed __int32*, __int64))(*(_QWORD*)a1 + 80i64))(a1, 1i64);
		return 0i64;
	}
	return result;
}

