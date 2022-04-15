//----- (00000001408CC660) ----------------------------------------------------
_QWORD* __fastcall sub_1408CC660(__int64 a1)
{
	_QWORD* result; // rax
	_QWORD* v2; // rbx

	result = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 1024i64);
	v2 = result;
	if (result)
	{
		result[1] = 0i64;
		*result = off_1409B15D0;
		result[2] = 0i64;
		sub_1408CC6B0((__int64)(result + 4));
		return v2;
	}
	return result;
}
// 1409B15D0: using guessed type __int64 (__fastcall *off_1409B15D0[6])();

