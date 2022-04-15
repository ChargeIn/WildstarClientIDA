//----- (000000014034B780) ----------------------------------------------------
__int64 __fastcall sub_14034B780(__int64 a1)
{
	__int64 result; // rax

	if (*(_DWORD*)(a1 + 8))
		return 0i64;
	result = (**(__int64(__fastcall***)(__int64))a1)(a1);
	*(_DWORD*)(a1 + 8) = (int)result >= 0;
	return result;
}

