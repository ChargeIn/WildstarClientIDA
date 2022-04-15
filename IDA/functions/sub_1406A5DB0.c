#include "../winhttp.h"

//----- (00000001406A5DB0) ----------------------------------------------------
__int64 __fastcall sub_1406A5DB0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 result; // rax
	__int64 v5; // rcx
	__int64 v6; // r8
	__int64 v7; // rdx
	__int64 v8; // rcx
	float v9; // xmm0_4
	__int64 v10; // rcx

	v2 = sub_140056AB0(a1, 1u);
	v3 = v2;
	if (!v2)
		return 0i64;
	v5 = sub_1405B15C0(*(_QWORD*)(qword_140C659F0 + 824), *(_DWORD*)(*(_QWORD*)(v2 + 8) + 4i64));
	if (!v5)
		return 0i64;
	v6 = *(_QWORD*)(v5 + 232);
	v7 = **(unsigned int**)(v3 + 8);
	if (v6 && (unsigned int)v7 < *(_DWORD*)(v5 + 272))
		v8 = v6 + 192 * v7;
	else
		v8 = 0i64;
	v9 = sub_1405A9D80(v8);
	v10 = a1[2];
	*(_DWORD*)(v10 + 8) = 3;
	result = 1i64;
	*(double*)v10 = (float)(v9 * 86400.0);
	a1[2] += 16i64;
	return result;
}
// 140C659F0: using guessed type __int64 qword_140C659F0;

