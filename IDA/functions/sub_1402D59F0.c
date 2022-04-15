#include "../winhttp.h"

//----- (00000001402D59F0) ----------------------------------------------------
__int64 __fastcall sub_1402D59F0(__int64 a1)
{
	const __m128i* v1; // rdx
	int v3; // ebp
	__int64 v4; // rbx
	int* v5; // rax
	int v7; // [rsp+30h] [rbp-28h] BYREF
	__int64 v8; // [rsp+38h] [rbp-20h]
	__int64(__fastcall * v9)(__int64); // [rsp+40h] [rbp-18h]
	__int64 v10; // [rsp+48h] [rbp-10h]

	v1 = *(const __m128i**)(a1 + 16);
	v7 = 0;
	v9 = sub_1402D5910;
	v8 = a1;
	v10 = 0i64;
	v3 = sub_1401B6DE0(a1, v1, (int**)(a1 + 32), a1 + 40, (__int64)&v7);
	if (v3 >= 0)
	{
		*(_DWORD*)(a1 + 24) = 0;
		return 0i64;
	}
	else
	{
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1);
		sub_1401C5690(v4, (int**)(a1 + 32), 0);
		v5 = (int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 32i64))(*(_QWORD*)(a1 + 32));
		*(_QWORD*)(a1 + 48) = v5;
		sub_1407E4830(v5, 0i64, v4);
		return (unsigned int)v3;
	}
}

