//----- (00000001402AB880) ----------------------------------------------------
__int64 __fastcall sub_1402AB880(__int64* a1, _DWORD* a2, char a3)
{
	__int64 v3; // rax
	__int64 v8; // rax
	volatile signed __int32* v9; // rcx
	int v10[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = *a1;
	v10[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v3 + 32))(a1, v10);
	if ((a3 & 3) == 0)
		return 0i64;
	if ((a3 & 2) != 0)
	{
		v8 = a1[2];
		*((_DWORD*)a1 + 18) = 1;
		if (*(__int64**)(v8 + 8536) == a1)
			*(_QWORD*)(v8 + 8536) = 0i64;
	}
	v9 = (volatile signed __int32*)(a1[2] + 1012);
	if ((a3 & 1) != 0)
	{
		_InterlockedIncrement((volatile signed __int32*)(a1[2] + 1036));
		_InterlockedExchangeAdd(v9 + 7, 0x1000u);
	}
	if ((a3 & 2) != 0)
	{
		_InterlockedIncrement(v9 + 8);
		_InterlockedExchangeAdd(v9 + 9, 0x1000u);
	}
	*a2 = 128;
	return a1[8];
}
// 1402AB880: using guessed type int var_18[6];

