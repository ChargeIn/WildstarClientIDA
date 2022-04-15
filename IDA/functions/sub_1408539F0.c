//----- (00000001408539F0) ----------------------------------------------------
__int64 __fastcall sub_1408539F0(__int64* a1, __int64 a2, int a3, int a4, int a5)
{
	__int64 v5; // rax
	int v7; // [rsp+20h] [rbp-38h] BYREF
	__int64 v8; // [rsp+28h] [rbp-30h]
	int v9; // [rsp+30h] [rbp-28h]
	int v10; // [rsp+34h] [rbp-24h]
	int v11; // [rsp+38h] [rbp-20h]
	__int16 v12; // [rsp+3Ch] [rbp-1Ch]
	char v13; // [rsp+3Eh] [rbp-1Ah]

	v8 = a2;
	v11 = a5;
	v5 = *a1;
	v12 = 0;
	v13 = 0;
	v7 = 1;
	v9 = a3;
	v10 = a4;
	return (*(__int64(__fastcall**)(__int64*, int*))(v5 + 128))(a1, &v7);
}

