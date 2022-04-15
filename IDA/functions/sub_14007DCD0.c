//----- (000000014007DCD0) ----------------------------------------------------
__int64 __fastcall sub_14007DCD0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	_WORD* v3; // rax
	__int64 v4; // r9
	__int64 v5; // r10
	__int64 result; // rax
	_QWORD* v7; // rdx

	*a2 += 96i64;
	v3 = (_WORD*)(a1 + 16);
	if (a1 == -16)
	{
	LABEL_5:
		v5 = 0i64;
	}
	else
	{
		v4 = 251i64;
		while (*v3)
		{
			++v3;
			if (!--v4)
				goto LABEL_5;
		}
		v5 = 251 - v4;
	}
	*a2 += 16 * (v5 + 10);
	*a3 += 8i64;
	*a2 += 128i64;
	*a3 += 8i64;
	*a2 += 128i64;
	result = sub_14007DC10((_QWORD*)(a1 + 568), a2, a3);
	*v7 += 32i64;
	return result;
}
// 14007DD35: conditional instruction was optimized away because r9.8!=0
// 14007DD29: variable 'v7' is possibly undefined

