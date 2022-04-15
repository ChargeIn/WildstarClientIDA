#include "../winhttp.h"

//----- (00000001404E9F70) ----------------------------------------------------
__int64 __fastcall sub_1404E9F70(_QWORD* a1)
{
	__m128* v2; // rax
	__m128* v3; // rcx
	__int32 v4; // eax
	unsigned int v5; // ebp
	__m128* v6; // rax
	__int128 v8; // [rsp+20h] [rbp-18h] BYREF
	unsigned __int64 v9; // [rsp+48h] [rbp+10h] BYREF

	if (!qword_140C63658)
		sub_140056830(a1, (unsigned __int64*)"AlienFx not loaded.");
	v2 = (__m128*)a1[3];
	v3 = (__m128*)dword_140A12138;
	if ((unsigned __int64)v2 < a1[2])
		v3 = v2;
	v4 = v3->m128_i32[2];
	if (v4 == 3)
		goto LABEL_9;
	if (v4 == 4 && sub_14005AC80((char*)(v3->m128_u64[0] + 32), &v9))
	{
		DWORD2(v8) = 3;
		v3 = (__m128*) & v8;
		*(_QWORD*)&v8 = v9;
	LABEL_9:
		v5 = (int)*(double*)v3->m128_u64;
		goto LABEL_10;
	}
	v5 = 0;
LABEL_10:
	v8 = xmmword_140C777D0;
	sub_140143880((unsigned int*)&v9, a1, 2u, (__m128*) & v8);
	if ((unsigned __int64)(unsigned int)v9 >= *(_QWORD*)(qword_140C63678 + 48))
		v6 = *(__m128**)(qword_140C63678 + 40);
	else
		v6 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32i64 * (unsigned int)v9);
	v8 = (__int128)*v6;
	if ((int)sub_1400FD6B0(qword_140C63678, v5, (__m128*) & v8) < 0)
		sub_140056830(a1, (unsigned __int64*)"SetLocationColor failed to set light color");
	sub_1401429A0(qword_140C63678, v9);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63658: using guessed type __int64 qword_140C63658;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;
// 1404E9F70: using guessed type __m128 var_18;

