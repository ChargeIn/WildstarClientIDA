//----- (00000001407DFF68) ----------------------------------------------------
__int64 __fastcall sub_1407DFF68(
	__int64(__fastcall* a1)(__int64*, __int64, __int64, __int64),
	__int64 a2,
	__int64 a3,
	__int64 a4)
{
	__int64 v9; // [rsp+20h] [rbp-38h] BYREF
	int v10; // [rsp+28h] [rbp-30h] BYREF
	__int64 v11; // [rsp+30h] [rbp-28h]
	int v12; // [rsp+38h] [rbp-20h]

	v9 = 0i64;
	sub_1407E4830(&v10, 0i64, 0x28ui64);
	if (a2)
	{
		v11 = 0i64;
		v9 = 0i64;
		v10 = 0x7FFFFFFF;
		v12 = 66;
		return a1(&v9, a2, a3, a4);
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0xFFFFFFFFi64;
	}
}

