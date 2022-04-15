//----- (00000001408C4D40) ----------------------------------------------------
__int64 __fastcall sub_1408C4D40(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	if (*(_QWORD*)(a1 + 312))
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		*(_QWORD*)(a1 + 312) = 0i64;
	}
	return result;
}

