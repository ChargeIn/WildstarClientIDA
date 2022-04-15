#include "../winhttp.h"

//----- (000000014012FE90) ----------------------------------------------------
__int64 __fastcall sub_14012FE90(__int64 a1, __m128i* a2, int a3)
{
	__int64 v5; // rdx
	char v7; // di
	char v8; // bl
	__int64 result; // rax
	__int64 v10; // [rsp+20h] [rbp-68h] BYREF
	char v11; // [rsp+28h] [rbp-60h]
	__int128 v12; // [rsp+30h] [rbp-58h]
	__int128 v13; // [rsp+40h] [rbp-48h]
	__int128 v14; // [rsp+50h] [rbp-38h]
	__int64 v15; // [rsp+60h] [rbp-28h]

	v5 = *(_QWORD*)(a1 + 32);
	v10 = 0i64;
	v12 = 0i64;
	v14 = 0i64;
	v13 = 0i64;
	v11 = 0;
	v15 = 0i64;
	sub_14010B330(&v10, v5, a2, 0i64);
	v7 = *(_BYTE*)(a1 + 664) >> 1;
	v8 = *(_BYTE*)(a1 + 664) & 1;
	*(_DWORD*)(a1 + 1320) = a3;
	sub_1400C3730(a1 + 1024, (__int64)&v10);
	*(_BYTE*)(a1 + 1438) &= ~1u;
	result = v15;
	*(_BYTE*)(a1 + 1437) = 0;
	*(_DWORD*)(a1 + 1420) = 1048576000;
	*(_QWORD*)(a1 + 1424) = 1048576000i64;
	*(_BYTE*)(a1 + 1436) = 4 * (v8 & 1 | (2 * (v7 & 1 | 2)));
	*(_QWORD*)(a1 + 1412) = 5i64;
	*(_DWORD*)(a1 + 1432) = 1056964608;
	*(_DWORD*)(a1 + 1408) = 5;
	*(_QWORD*)(a1 + 1312) = result;
	*(_QWORD*)(a1 + 656) &= 0xFFFFFFFFFFFFFFF1ui64;
	return result;
}

