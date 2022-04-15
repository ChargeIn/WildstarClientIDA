//----- (00000001408BDD70) ----------------------------------------------------
__int64 __fastcall sub_1408BDD70(_DWORD* a1, __int64 a2)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 112i64);
	if (result)
		return sub_1408BDCC0(result, a1);
	return result;
}

