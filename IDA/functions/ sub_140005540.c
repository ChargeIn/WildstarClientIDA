//----- (0000000140005540) ----------------------------------------------------
__int64 __fastcall sub_140005540(__int64 a1, __int64 a2)
{
	int v4; // edx
	int v6; // [rsp+20h] [rbp-28h] BYREF
	__int64 v7; // [rsp+28h] [rbp-20h]
	void(__fastcall * v8)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v9; // [rsp+38h] [rbp-10h]

	sub_140195D70(a1 + 400);
	v4 = *(_DWORD*)(a2 + 16);
	v6 = 0;
	v9 = 0i64;
	v7 = a1;
	v8 = sub_140006890;
	sub_140195960(a1 + 400, v4, (__int64)&v6, 4);
	*(_DWORD*)(a1 + 384) = *(_DWORD*)a2;
	*(_DWORD*)(a1 + 388) = *(_DWORD*)(a2 + 4);
	*(_DWORD*)(a1 + 392) = *(_DWORD*)(a2 + 8);
	*(_DWORD*)(a1 + 396) = *(_DWORD*)(a2 + 12);
	if (a1 != -472)
		sub_1401E82F0((__int64*)(a1 + 472), *(float*)(a2 + 20));
	*(_DWORD*)(a1 + 480) = *(_DWORD*)(a2 + 24);
	sub_140006FC0(a1);
	return 0i64;
}

