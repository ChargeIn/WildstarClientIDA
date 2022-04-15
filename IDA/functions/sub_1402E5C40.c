//----- (00000001402E5C40) ----------------------------------------------------
__int64 __fastcall sub_1402E5C40(__int64* a1, int a2, _QWORD* a3, int a4)
{
	__int64 v5; // rsi
	__int64 v8; // rax
	void(__fastcall * **v9)(_QWORD); // rcx
	int v10[6]; // [rsp+20h] [rbp-18h] BYREF

	v5 = a2;
	if (!a3 || a4 != 1)
		return 2147942487i64;
	v8 = *a1;
	v10[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v8 + 48))(a1, v10);
	v9 = (void(__fastcall***)(_QWORD))a1[v5 + 19];
	if (!v9)
		v9 = *(void(__fastcall****)(_QWORD))(qword_140C657F8 + 8 * v5 + 48);
	*a3 = v9;
	(**v9)(v9);
	return 0i64;
}
// 140C657F8: using guessed type __int64 qword_140C657F8;
// 1402E5C40: using guessed type int var_18[6];

