//----- (00000001402F6E40) ----------------------------------------------------
_BOOL8 __fastcall sub_1402F6E40(__int64* a1, int a2)
{
	__int64 v2; // rax
	__int64 v5; // rbx
	_BOOL8 result; // rax
	int v7[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v7[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v2 + 1400))(a1, v7);
	result = 1;
	if (a2 != 150)
	{
		v5 = *(_QWORD*)(a1[7] + 184);
		if ((unsigned int)sub_1402EA550(v5, a2) == *(unsigned __int16*)(v5 + 28))
			return 0;
	}
	return result;
}
// 1402F6E40: using guessed type int var_18[6];

