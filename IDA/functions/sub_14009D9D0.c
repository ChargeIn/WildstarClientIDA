//----- (000000014009D9D0) ----------------------------------------------------
__int64 __fastcall sub_14009D9D0(_DWORD* a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax

	*a2 += 32i64;
	*a3 += 104i64 * (unsigned int)*a1;
	for (result = 0i64; (unsigned int)result < *a1; result = (unsigned int)(result + 1))
		*a2 += 700i64;
	return result;
}
