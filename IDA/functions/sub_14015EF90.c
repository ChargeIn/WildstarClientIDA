//----- (000000014015EF90) ----------------------------------------------------
unsigned __int64 __fastcall sub_14015EF90(__int64 a1, __m128i* a2)
{
	__int64 v3; // rdx
	__int64 v6; // [rsp+20h] [rbp-58h] BYREF
	char v7; // [rsp+28h] [rbp-50h]
	__int128 v8; // [rsp+30h] [rbp-48h]
	__int128 v9; // [rsp+40h] [rbp-38h]
	__int128 v10; // [rsp+50h] [rbp-28h]
	__int64 v11; // [rsp+60h] [rbp-18h]

	v3 = *(_QWORD*)(a1 + 32);
	v6 = 0i64;
	v8 = 0i64;
	v10 = 0i64;
	v9 = 0i64;
	v7 = 0;
	v11 = 0i64;
	sub_14010B330(&v6, v3, a2, 0i64);
	return sub_1400C3730(a1 + 1624, (__int64)&v6);
}

