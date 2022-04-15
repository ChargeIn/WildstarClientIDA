//----- (00000001402E9060) ----------------------------------------------------
__int64 __fastcall sub_1402E9060(__int64* a1, int a2, _QWORD* a3, int a4)
{
	__int64 v5; // rsi
	__int64 result; // rax
	__int64 v8; // rax
	__int64 v9; // rax
	int v10[6]; // [rsp+20h] [rbp-18h] BYREF

	v5 = a2;
	if (!a3 || a4 != 1)
		return 2147942487i64;
	v8 = *a1;
	v10[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v8 + 48))(a1, v10);
	v9 = a1[v5 + 7];
	if (v9)
	{
		*a3 = v9;
		(**(void(__fastcall***)(__int64))a1[v5 + 7])(a1[v5 + 7]);
		return 0i64;
	}
	else
	{
		result = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD*, __int64))(*(_QWORD*)a1[3] + 72i64))(
			a1[3],
			(unsigned int)v5,
			a3,
			1i64);
		if ((int)result >= 0)
			return 0i64;
	}
	return result;
}
// 1402E9060: using guessed type int var_18[6];

