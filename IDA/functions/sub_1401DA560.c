//----- (00000001401DA560) ----------------------------------------------------
__int64 __fastcall sub_1401DA560(volatile signed __int32* a1)
{
	__int64 result; // rax

	result = (unsigned int)_InterlockedDecrement(a1 + 2);
	if (!(_DWORD)result)
	{
		if (a1)
			(*(void(__fastcall**)(volatile signed __int32*, __int64))(*(_QWORD*)a1 + 56i64))(a1, 1i64);
		return 0i64;
	}
	return result;
}
