//----- (0000000140498EE0) ----------------------------------------------------
__int64 __fastcall sub_140498EE0(__int64 a1)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 40i64))(a1);
	if (result)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)result + 176i64))(result);
	return result;
}
