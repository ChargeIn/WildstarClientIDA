//----- (000000014009FCE0) ----------------------------------------------------
__int64 __fastcall sub_14009FCE0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	__int64 v3; // rax
	unsigned __int64 v4; // rcx
	__int64 result; // rax

	*a2 += 85i64;
	v3 = *(_QWORD*)(a1 + 24);
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
		result = 16 * v4 + 105;
	else
		result = 16 * (v4 + 1) + 97;
	*a2 += result;
	return result;
}

