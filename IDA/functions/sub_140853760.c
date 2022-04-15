//----- (0000000140853760) ----------------------------------------------------
__int64 __fastcall sub_140853760(__int64* a1, int a2, float a3, __int64 a4, __int64 a5)
{
	__int64 result; // rax
	__int64 v9; // rax
	int v10; // [rsp+20h] [rbp-48h] BYREF
	__int64 v11; // [rsp+28h] [rbp-40h]
	char v12; // [rsp+30h] [rbp-38h]
	__int64 v13; // [rsp+38h] [rbp-30h]
	float v14; // [rsp+40h] [rbp-28h]

	result = (*(__int64(__fastcall**)(__int64*))(*a1 + 496))(a1);
	if ((_BYTE)result)
	{
		v14 = a3;
		v13 = a5;
		v9 = *a1;
		v10 = a2;
		v12 = 0;
		v11 = a4;
		return (*(__int64(__fastcall**)(__int64*, int*))(v9 + 160))(a1, &v10);
	}
	return result;
}

