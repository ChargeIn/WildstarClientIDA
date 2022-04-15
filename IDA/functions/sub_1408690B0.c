//----- (00000001408690B0) ----------------------------------------------------
__int64 __fastcall sub_1408690B0(int a1)
{
	__int64 result; // rax
	_QWORD* v3; // rbx

	result = sub_1408819F0(dword_140C10F20, 48i64);
	v3 = (_QWORD*)result;
	if (result)
	{
		sub_140865E10(result, a1);
		*v3 = off_1409A48D0;
		v3[4] = 0i64;
		v3[5] = 0i64;
		sub_140869040((__int64)v3);
		return (__int64)v3;
	}
	return result;
}
// 1409A48D0: using guessed type __int64 (__fastcall *off_1409A48D0[8])();
// 140C10F20: using guessed type int dword_140C10F20;

