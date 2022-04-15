//----- (0000000140085AC0) ----------------------------------------------------
unsigned __int64 __fastcall sub_140085AC0(int* a1, _QWORD* a2, _DWORD* a3)
{
	unsigned __int64 result; // rax

	*a2 += 36i64;
	result = *a1;
	if (result < 0xC)
		return ((__int64(__fastcall*)(__int64, __int64, _DWORD*))funcs_140085DF6[result])(
			(__int64)(a1 + 2),
			(__int64)a2,
			a3);
	*a2 = 0i64;
	return result;
}
// 140C1EBD0: using guessed type __int64 (__fastcall *funcs_140085DF6[67])();

