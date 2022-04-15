//----- (00000001406E87D0) ----------------------------------------------------
int* __fastcall sub_1406E87D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	int* result; // rax
	__int64 v9; // r9
	_OWORD v10[6]; // [rsp+40h] [rbp-78h] BYREF

	sub_1400D45E0((__int64)v10, a1, a2, a5, 0i64);
	result = sub_14018B280(3840i64, 0);
	if (result)
		return (int*)sub_1406DFAD0((__int64)result, a1, a2, v9, v10, a4);
	return result;
}
// 1406E8847: variable 'v9' is possibly undefined
// 1406E87D0: using guessed type _OWORD var_78[6];

