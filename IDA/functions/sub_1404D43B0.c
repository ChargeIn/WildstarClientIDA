//----- (00000001404D43B0) ----------------------------------------------------
__int64 __fastcall sub_1404D43B0(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1);
	if (result)
		return (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)result + 8i64))(result, a2, a3);
	return result;
}

