//----- (00000001402DFF20) ----------------------------------------------------
__int64 __fastcall sub_1402DFF20(__int64* a1, unsigned int a2, unsigned __int64* a3)
{
	__int64 v3; // rax
	unsigned __int64 v7; // r10
	unsigned __int64 v8; // r9
	unsigned __int64 v9; // rax
	unsigned int v10; // edx
	int v12[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = *a1;
	v12[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v3 + 32))(a1, v12);
	v7 = a1[670];
	v8 = 0i64;
	if (!v7)
	{
	LABEL_7:
		if (a3)
			*a3 = v8;
		return 0i64;
	}
	while (1)
	{
		v9 = (v7 + v8) >> 1;
		v10 = **(_DWORD**)(a1[669] + 8 * v9);
		if (v10 >= a2)
			break;
		v8 = v9 + 1;
	LABEL_6:
		if (v8 >= v7)
			goto LABEL_7;
	}
	if (v10 > a2)
	{
		v7 = (v7 + v8) >> 1;
		goto LABEL_6;
	}
	if (a3)
		*a3 = v9;
	return 1i64;
}
// 1402DFF20: using guessed type int var_18[6];

