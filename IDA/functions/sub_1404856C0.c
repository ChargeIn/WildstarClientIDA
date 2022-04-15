//----- (00000001404856C0) ----------------------------------------------------
__int64 __fastcall sub_1404856C0(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 result; // rax
	__int64 v6; // r11
	__int64 v7; // r10
	char v8[24]; // [rsp+30h] [rbp-18h] BYREF
	unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
	__int64 v10; // [rsp+68h] [rbp+20h]

	v9 = a1;
	result = *(_QWORD*)(a4 + 8);
	v6 = result;
	v7 = *(_QWORD*)(result + 8);
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < a1)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v6 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v6 == result || (v10 = v6, a1 < *(_DWORD*)(v6 + 32)))
		v10 = result;
	if (v10 == result)
	{
		sub_1400035B0();
		return sub_1400293C0(a4, (__int64)v8, (int*)&v9);
	}
	return result;
}
// 1404856C0: using guessed type char var_18[24];

