//----- (00000001408CCA60) ----------------------------------------------------
__int64 __fastcall sub_1408CCA60(_DWORD* a1, __int64 a2)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 80i64);
	if (result)
		return sub_1408CC970(result, a1);
	return result;
}

