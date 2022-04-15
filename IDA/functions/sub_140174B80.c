//----- (0000000140174B80) ----------------------------------------------------
__int64 __fastcall sub_140174B80(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v3; // rdx
	__int64 result; // rax
	__int64 v5; // rdx
	__int64 v6; // rdx
	__int64 v7; // rdx
	__int64 v8; // [rsp+30h] [rbp-58h] BYREF
	char v9; // [rsp+38h] [rbp-50h]
	__int128 v10; // [rsp+40h] [rbp-48h]
	__int128 v11; // [rsp+50h] [rbp-38h]
	__int128 v12; // [rsp+60h] [rbp-28h]
	__int64 v13; // [rsp+70h] [rbp-18h]

	v1 = *(_QWORD*)(a1 + 32);
	if (v1)
		sub_140109710((__int64*)(a1 + 2400), v1 + 240, 0i64, 0);
	v3 = *(_QWORD*)(a1 + 32);
	v10 = 0i64;
	v12 = 0i64;
	v8 = 0i64;
	v9 = 0;
	v11 = 0i64;
	v13 = 0i64;
	sub_14010B330(&v8, v3, (__m128i*)L"DefaultHScrollThumb", 0i64);
	*(_DWORD*)(a1 + 2184) = 0;
	sub_1400C3730(a1 + 1888, (__int64)&v8);
	*(_BYTE*)(a1 + 2302) &= ~1u;
	result = v13;
	*(_WORD*)(a1 + 2300) = 16;
	*(_DWORD*)(a1 + 2284) = 1048576000;
	*(_QWORD*)(a1 + 2288) = 1048576000i64;
	*(_QWORD*)(a1 + 2276) = 5i64;
	*(_DWORD*)(a1 + 2296) = 1056964608;
	*(_DWORD*)(a1 + 2272) = 5;
	*(_QWORD*)(a1 + 2176) = result;
	v5 = *(_QWORD*)(a1 + 32);
	if (v5)
		result = sub_140109710((__int64*)(a1 + 2304), v5 + 240, 0i64, 0);
	v6 = *(_QWORD*)(a1 + 32);
	if (v6)
		result = sub_140109710((__int64*)(a1 + 2352), v6 + 240, 0i64, 0);
	v7 = *(_QWORD*)(a1 + 32);
	if (v7)
		return sub_140109710((__int64*)(a1 + 2448), v7 + 240, 0i64, 0);
	return result;
}
// 140A1F048: using guessed type wchar_t aDefaulthscroll[20];

