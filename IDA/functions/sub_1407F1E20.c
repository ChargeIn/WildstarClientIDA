//----- (00000001407F1E20) ----------------------------------------------------
__int64 __fastcall sub_1407F1E20(__int64* a1, int* a2, __int64 a3, int a4, _OWORD* a5)
{
	__int64 result; // rax
	unsigned __int64 v9; // rdx
	int v10[6]; // [rsp+30h] [rbp-68h] BYREF
	char v11[24]; // [rsp+48h] [rbp-50h] BYREF

	sub_1407F6CF8(*a1, (__int64)v10, v11, 22i64);
	if (a2 && a3)
	{
		v9 = -1i64;
		if (a3 != -1)
			v9 = a3 - (v10[0] == 45);
		result = sub_1407F69CC((int*)((char*)a2 + (v10[0] == 45)), v9, a4 + v10[1], (__int64)v10);
		if ((_DWORD)result)
			*(_BYTE*)a2 = 0;
		else
			return sub_1407F1CBC(a2, a3, a4, v10, 0, a5);
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 22i64;
	}
	return result;
}
// 1407F1E20: using guessed type char var_50[24];

