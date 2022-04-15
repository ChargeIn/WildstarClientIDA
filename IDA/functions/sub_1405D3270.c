//----- (00000001405D3270) ----------------------------------------------------
void __fastcall sub_1405D3270(__int64 a1, __int64 a2, double a3, double a4)
{
	__int64 v4; // rdx
	int v5; // [rsp+20h] [rbp-28h] BYREF
	__int64 v6; // [rsp+28h] [rbp-20h]
	void(__fastcall * v7)(__int64, __int64, double, double); // [rsp+30h] [rbp-18h]
	__int64 v8; // [rsp+38h] [rbp-10h]
	__int64 v9; // [rsp+50h] [rbp+8h] BYREF

	v4 = *(unsigned int*)(a1 + 1060);
	if ((_DWORD)v4)
	{
		v6 = a1;
		v5 = 0;
		v8 = 0i64;
		v7 = sub_1405D3310;
		sub_140195960(a1 + 608, v4, (__int64)&v5, 4);
	}
	else if (*(_DWORD*)(a1 + 688) && (*(_BYTE*)(a1 + 684) & 4) != 0)
	{
		*(_DWORD*)(a1 + 692) = 1;
		v9 = 4i64;
		sub_1403F4900(qword_140C65898, 0x720u, (__int64)&v9);
	}
	else
	{
		sub_1405D3380(a1, v4, a3, a4);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

