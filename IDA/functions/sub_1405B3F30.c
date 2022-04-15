//----- (00000001405B3F30) ----------------------------------------------------
__int64 __fastcall sub_1405B3F30(__int64 a1)
{
	__int64 result; // rax

	if (*(_QWORD*)(a1 + 3880) != -1i64)
		return *(_QWORD*)(a1 + 3880);
	if (*(_QWORD*)(a1 + 3840))
	{
		result = sub_1405B3F30() + 1;
		*(_QWORD*)(a1 + 3880) = result;
	}
	else
	{
		*(_QWORD*)(a1 + 3880) = 0i64;
		return *(_QWORD*)(a1 + 3880);
	}
	return result;
}

