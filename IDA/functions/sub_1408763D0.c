//----- (00000001408763D0) ----------------------------------------------------
__int64 __fastcall sub_1408763D0(__int16 a1, int a2)
{
	__int64 result; // rax
	_QWORD* v5; // rbx

	result = sub_1408819F0(dword_140C10F20, 64i64);
	v5 = (_QWORD*)result;
	if (result)
	{
		sub_1408555E0(result, a1, a2);
		*v5 = off_1409A69A0;
		sub_140855760((__int64)v5);
		return (__int64)v5;
	}
	return result;
}
// 1409A69A0: using guessed type __int64 (__fastcall *off_1409A69A0[6])();
// 140C10F20: using guessed type int dword_140C10F20;

