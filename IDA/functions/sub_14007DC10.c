//----- (000000014007DC10) ----------------------------------------------------
__int64 __fastcall sub_14007DC10(_QWORD* a1, _QWORD* a2, _QWORD* a3)
{
	_QWORD* v4; // rdx
	_QWORD* v5; // r8
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 result; // rax

	sub_14007D8F0(a1, a2, a3);
	*v4 += 32i64;
	v6 = a1[7];
	if (v6)
	{
		v7 = -1i64;
		do
			++v7;
		while (*(_WORD*)(v6 + 2 * v7));
	}
	else
	{
		v7 = 0i64;
	}
	*v5 += 2 * v7;
	if (v7 <= 0x7F)
		result = 16 * v7 + 296;
	else
		result = 16 * (v7 + 1) + 288;
	*v4 += result;
	return result;
}
// 14007DC1E: variable 'v4' is possibly undefined
// 14007DC42: variable 'v5' is possibly undefined

