//----- (000000014009DE20) ----------------------------------------------------
__int64 __fastcall sub_14009DE20(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 v3; // r9
	unsigned __int64 v4; // rax
	__int64 result; // rax

	*a2 += 2i64;
	v3 = *(_QWORD*)(a1 + 8);
	if (v3)
	{
		v4 = -1i64;
		do
			++v4;
		while (*(_WORD*)(v3 + 2 * v4));
	}
	else
	{
		v4 = 0i64;
	}
	*a3 += 2 * v4;
	if (v4 <= 0x7F)
		result = 16 * v4 + 8;
	else
		result = 16 * (v4 + 1);
	*a2 += result;
	return result;
}
