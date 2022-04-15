#include "../winhttp.h"

//----- (0000000140373470) ----------------------------------------------------
__int64 __fastcall sub_140373470(__int64 a1, __int64 a2, int a3, float a4, int a5, int a6, int a7, int a8, int* a9)
{
	const __m128i* v11; // rax
	__int64 v12; // rcx
	__int64 result; // rax
	__int64 v14; // rcx
	__int64 v15; // [rsp+30h] [rbp-38h] BYREF
	int v16; // [rsp+38h] [rbp-30h]
	__int64 v17; // [rsp+40h] [rbp-28h]
	__int64(__fastcall * v18)(__int64); // [rsp+48h] [rbp-20h]
	__int64 v19; // [rsp+50h] [rbp-18h]
	__int64 v20; // [rsp+58h] [rbp-10h]

	*(_DWORD*)(a1 + 36) = a3;
	*(_DWORD*)(a1 + 56) = a8;
	*(_DWORD*)(a1 + 44) = a5;
	*(float*)(a1 + 40) = a4;
	*(_DWORD*)(a1 + 52) = a7;
	*(_DWORD*)(a1 + 48) = a6;
	v11 = (const __m128i*)sub_14018E9C0(a9);
	*(_QWORD*)(a1 + 64) = v11;
	result = sub_1401B6DE0(v12, v11, (int**)(a1 + 24), a1 + 16, 0i64);
	if ((int)result >= 0)
	{
		v15 = *(_QWORD*)(a1 + 64);
		v16 = 0;
		v17 = a2;
		v19 = 0i64;
		v20 = 0i64;
		v18 = sub_1403746B0;
		sub_1401B6BF0(v14, &v15, (int**)(a1 + 72));
		return 0i64;
	}
	return result;
}
// 1403734E5: variable 'v12' is possibly undefined
// 14037351F: variable 'v14' is possibly undefined

