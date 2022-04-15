//----- (00000001406C2E00) ----------------------------------------------------
int* __fastcall sub_1406C2E00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	int* result; // rax
	_OWORD v9[6]; // [rsp+30h] [rbp-88h] BYREF

	sub_1400D45E0((__int64)v9, a1, a2, a5, 0i64);
	result = sub_14018B280(2656i64, 0);
	if (result)
		return (int*)sub_1406BC4A0((__int64)result, a1, a2, v9, a4, a5);
	return result;
}
// 1406C2E00: using guessed type _OWORD var_88[6];

