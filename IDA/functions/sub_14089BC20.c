//----- (000000014089BC20) ----------------------------------------------------
_QWORD* __fastcall sub_14089BC20(__int64 a1)
{
	_QWORD* result; // rax

	result = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 48i64);
	if (result)
	{
		result[5] = 0i64;
		*result = off_1409A99D0;
	}
	return result;
}
// 1409A99D0: using guessed type __int64 (__fastcall *off_1409A99D0[6])();

