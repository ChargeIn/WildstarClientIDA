#include "../winhttp.h"

//----- (00000001402C99C0) ----------------------------------------------------
__int64 __fastcall sub_1402C99C0(__int64 a1)
{
	const __m128i* v1; // rdx
	int v3; // esi
	int* v4; // rax
	int v6; // [rsp+30h] [rbp-28h] BYREF
	__int64 v7; // [rsp+38h] [rbp-20h]
	__int64(__fastcall * v8)(__int64); // [rsp+40h] [rbp-18h]
	__int64 v9; // [rsp+48h] [rbp-10h]

	v1 = *(const __m128i**)(a1 + 16);
	v6 = 0;
	v8 = sub_1402C9A70;
	*(_DWORD*)(a1 + 28) = 0;
	v7 = a1;
	v9 = 0i64;
	v3 = sub_1401B6DE0(a1, v1, (int**)(a1 + 40), a1 + 32, (__int64)&v6);
	if (v3 >= 0)
	{
		*(_DWORD*)(a1 + 24) = 0;
		return 0i64;
	}
	else
	{
		sub_1401C5690(368i64, (int**)(a1 + 40), 0);
		v4 = (int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 40) + 32i64))(*(_QWORD*)(a1 + 40));
		*(_QWORD*)(a1 + 64) = v4;
		sub_1407E4830(v4, 0i64, 0x170ui64);
		*(_DWORD*)(a1 + 24) = 3;
		return (unsigned int)v3;
	}
}

