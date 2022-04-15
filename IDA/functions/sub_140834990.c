//----- (0000000140834990) ----------------------------------------------------
__int64 __fastcall sub_140834990(__int64 a1, unsigned int a2, unsigned int* a3, int a4, int a5)
{
	__int64 result; // rax
	__int64 v7; // rdi
	__int64 v8; // rax
	bool v9; // si
	char v10[24]; // [rsp+30h] [rbp-18h] BYREF

	if (a4 != *(_DWORD*)a1)
		return 0i64;
	if (a4)
	{
		if (*(_BYTE*)(a1 + 18))
			v8 = sub_140834A70(a1, a3, a4, a2, a5, (__int64)v10);
		else
			v8 = sub_140834CA0(a1, *(_QWORD*)(a1 + 8), a3, a4);
		v7 = v8;
	}
	else
	{
		v7 = *(_QWORD*)(a1 + 8);
	}
	v9 = 0;
	if (v7)
	{
		if (*(_WORD*)(a1 + 16) < 0x64u || *(_WORD*)(v7 + 10) < 0x64u)
			v9 = (unsigned __int16)(*(_WORD*)(a1 + 16) * *(_WORD*)(v7 + 10)) <= (unsigned __int16)(int)((double)(int)sub_1407DDB28()
				* 0.00003051850947599719
				* 10000.0);
		result = *(unsigned int*)(v7 + 4);
	}
	else
	{
		result = 0i64;
	}
	if (v9)
		return 0i64;
	return result;
}
// 140834990: using guessed type char var_18[24];

