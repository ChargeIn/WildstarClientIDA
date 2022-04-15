//----- (00000001408F6C80) ----------------------------------------------------
_QWORD* __fastcall sub_1408F6C80(__int64 a1)
{
	_QWORD* result; // rax
	_QWORD* v2; // rbx

	result = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 624i64);
	v2 = result;
	if (result)
	{
		*result = off_1409C6270;
		result[1] = 0i64;
		result[2] = 0i64;
		result[3] = 0i64;
		result[4] = 0i64;
		result[5] = 0i64;
		result[6] = 0i64;
		result[7] = 0i64;
		sub_1408F92B0((__int64)(result + 12));
		v2[10] = 0i64;
		v2[11] = 0i64;
		return v2;
	}
	return result;
}
// 1409C6270: using guessed type __int64 (__fastcall *off_1409C6270[6])();

