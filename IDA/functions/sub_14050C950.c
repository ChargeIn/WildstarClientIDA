#include "../winhttp.h"

//----- (000000014050C950) ----------------------------------------------------
__int64 __fastcall sub_14050C950(_QWORD* a1)
{
	int v2; // esi
	int v3; // ebp
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rbx
	unsigned int v7; // r8d
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rdx
	unsigned int v11; // eax
	__int64 v12; // rcx
	__m128i v13; // xmm0
	__int64 result; // rax
	__int64 v15; // [rsp+38h] [rbp+10h]

	v2 = sub_140056D60(a1, 1u);
	v3 = sub_140056D60(a1, 2u);
	v5 = sub_1405A8A40(v4, v2);
	v6 = v5;
	if (!v5 || !(unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v5 + 8)))
		return 0i64;
	v7 = **(_DWORD**)(v6 + 8);
	v8 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 40i64);
	v9 = *(_QWORD*)(v8 + 8);
	v10 = v8;
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < v7)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v10 = v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v10 == v8 || (v15 = v10, v7 < *(_DWORD*)(v10 + 32)))
		v15 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 40i64);
	if (v15 != v8)
		return 0i64;
	v11 = sub_140611D30(*(_QWORD*)(qword_140C65898 + 29544), v2, v3);
	v12 = a1[2];
	*(_DWORD*)(v12 + 8) = 3;
	v13 = _mm_cvtsi32_si128(v11);
	result = 1i64;
	*(_QWORD*)v12 = *(_OWORD*)&_mm_cvtepi32_pd(v13);
	a1[2] += 16i64;
	return result;
}
// 14050C984: variable 'v4' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B80: using guessed type __int64 qword_140C65B80;

