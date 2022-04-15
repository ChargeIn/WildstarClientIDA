//----- (00000001407DF460) ----------------------------------------------------
__int64 __fastcall sub_1407DF460(
	__int64(__fastcall* a1)(_WORD**, __int64, __int64, __int64),
	_WORD* a2,
	__int64 a3,
	__int64 a4,
	__int64 a5)
{
	unsigned __int64 v10; // rax
	_WORD* v11; // [rsp+20h] [rbp-38h] BYREF
	int v12; // [rsp+28h] [rbp-30h] BYREF
	_WORD* v13; // [rsp+30h] [rbp-28h]
	int v14; // [rsp+38h] [rbp-20h]

	v11 = 0i64;
	sub_1407E4830(&v12, 0i64, 0x28ui64);
	if (a2 && a3)
	{
		v10 = sub_1407E6CA0(a2);
		v14 = 73;
		v13 = a2;
		v11 = a2;
		if (v10 <= 0x3FFFFFFF)
			v12 = 2 * v10;
		else
			v12 = 0x7FFFFFFF;
		return a1(&v11, a3, a4, a5);
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0xFFFFFFFFi64;
	}
}

