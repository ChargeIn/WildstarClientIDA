#include "../winhttp.h"

//----- (00000001404E9DD0) ----------------------------------------------------
__int64 __fastcall sub_1404E9DD0(_QWORD* a1)
{
	__m128* v2; // rax
	__m128* v3; // rbx
	__m128* v4; // rcx
	__int32 v5; // eax
	unsigned int v6; // r14d
	__int32 v7; // eax
	unsigned int v8; // ebp
	unsigned int v9; // ebx
	__m128* v10; // rax
	__m128 v12; // [rsp+20h] [rbp-28h] BYREF
	unsigned __int64 v13; // [rsp+58h] [rbp+10h] BYREF

	if (!qword_140C63658)
		sub_140056830(a1, (unsigned __int64*)"AlienFx not loaded.");
	v2 = (__m128*)a1[3];
	v3 = (__m128*)dword_140A12138;
	v4 = (__m128*)dword_140A12138;
	if ((unsigned __int64)v2 < a1[2])
		v4 = v2;
	v5 = v4->m128_i32[2];
	if (v5 == 3)
		goto LABEL_9;
	if (v5 == 4 && sub_14005AC80((char*)(v4->m128_u64[0] + 32), &v13))
	{
		v12.m128_i32[2] = 3;
		v4 = &v12;
		v12.m128_u64[0] = v13;
	LABEL_9:
		v6 = (int)*(double*)v4->m128_u64;
		goto LABEL_10;
	}
	v6 = 0;
LABEL_10:
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (__m128*)(a1[3] + 16i64);
	v7 = v3->m128_i32[2];
	if (v7 == 3)
		goto LABEL_16;
	if (v7 == 4 && sub_14005AC80((char*)(v3->m128_u64[0] + 32), &v13))
	{
		v12.m128_i32[2] = 3;
		v3 = &v12;
		v12.m128_u64[0] = v13;
	LABEL_16:
		v8 = (int)*(double*)v3->m128_u64;
		goto LABEL_17;
	}
	v8 = 0;
LABEL_17:
	v12 = (__m128)xmmword_140C777D0;
	sub_140143880((unsigned int*)&v13, a1, 3u, &v12);
	v9 = v13;
	if ((unsigned __int64)(unsigned int)v13 >= *(_QWORD*)(qword_140C63678 + 48))
		v10 = *(__m128**)(qword_140C63678 + 40);
	else
		v10 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32i64 * (unsigned int)v13);
	v12 = *v10;
	if ((int)sub_1400FD5C0(qword_140C63678, v6, v8, &v12) < 0)
		sub_140056830(a1, (unsigned __int64*)"SetLightColor failed to set light %d color on device %d", v8, v6);
	sub_1401429A0(qword_140C63678, v9);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63658: using guessed type __int64 qword_140C63658;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;

