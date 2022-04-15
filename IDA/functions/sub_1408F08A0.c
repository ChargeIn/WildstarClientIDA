//----- (00000001408F08A0) ----------------------------------------------------
_QWORD* __fastcall sub_1408F08A0(__int64 a1)
{
	_QWORD* result; // rax

	result = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 80i64);
	if (result)
	{
		*result = off_1409C6010;
		result[1] = 0i64;
		result[3] = 0i64;
		result[4] = 0i64;
		result[7] = 0i64;
	}
	return result;
}
// 1409C6010: using guessed type __int64 (__fastcall *off_1409C6010[6])();

