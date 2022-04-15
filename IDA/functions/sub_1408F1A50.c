//----- (00000001408F1A50) ----------------------------------------------------
__int64 __fastcall sub_1408F1A50(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 72i64);
	if (result)
		return sub_1408F1950(result, a1);
	return result;
}

