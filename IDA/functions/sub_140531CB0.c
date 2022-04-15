#include "../winhttp.h"

//----- (0000000140531CB0) ----------------------------------------------------
__int64 __fastcall sub_140531CB0(_QWORD* a1)
{
	__int64 v2; // rsi
	__int64 v3; // rax
	char* v5; // rdx
	_DWORD* v6; // rax
	char* v7; // rdx
	_DWORD* v8; // rax
	int v9; // ecx
	__int64 v10; // rax
	unsigned int v11; // edi
	__int64 v12; // r8
	__int128* v13; // rdx
	__int128 v14; // xmm0
	unsigned __int64 v15; // rbx
	__int64 v16; // rdx
	_OWORD* v17; // rdx
	__int64* v18; // rcx
	__m128* v19; // rcx
	__m128 v20; // [rsp+20h] [rbp-88h] BYREF
	int* v21; // [rsp+30h] [rbp-78h]
	__int64 v22; // [rsp+40h] [rbp-68h] BYREF
	int* v23; // [rsp+48h] [rbp-60h]
	int* v24; // [rsp+50h] [rbp-58h]
	__int64 v25; // [rsp+60h] [rbp-48h] BYREF
	__int64 v26; // [rsp+68h] [rbp-40h]
	unsigned int v27; // [rsp+B8h] [rbp+10h] BYREF
	unsigned int v28; // [rsp+C0h] [rbp+18h] BYREF

	v2 = sub_14052E9B0(a1);
	if (v2)
	{
		v20 = 0i64;
		sub_140143880(&v27, a1, 2u, &v20);
		v20 = 0i64;
		sub_140143880(&v28, a1, 3u, &v20);
		v5 = (char*)sub_14018F0E0(&v20, word_1409F1E7C)[1];
		v6 = (_DWORD*)(a1[3] + 48i64);
		if ((unsigned __int64)v6 < a1[2] && v6 != dword_140A12138 && *(int*)(a1[3] + 56i64) > 0)
			v5 = (char*)sub_140056BB0(a1, 4u, 0i64);
		sub_14018F2D0(&v22, v5);
		if (v20.m128_u64[1])
			sub_14018B900(v20.m128_i64[1], 0);
		v7 = (char*)sub_14018F0E0(&v25, word_1409F1DB4)[1];
		v8 = (_DWORD*)(a1[3] + 64i64);
		if ((unsigned __int64)v8 < a1[2] && v8 != dword_140A12138 && *(int*)(a1[3] + 72i64) > 0)
			v7 = (char*)sub_140056BB0(a1, 5u, 0i64);
		sub_14018F2D0(&v20, v7);
		if (v26)
			sub_14018B900(v26, 0);
		v9 = *(_DWORD*)(v2 + 1408) + 1;
		*(_DWORD*)(v2 + 1408) = v9;
		v10 = a1[2];
		*(_DWORD*)(v10 + 8) = 3;
		*(double*)v10 = (double)v9;
		a1[2] += 16i64;
		sub_140538AB0((__int64*)(v2 + 1576), (unsigned int)(*(_DWORD*)(v2 + 1408) + 1));
		v11 = v27;
		v12 = qword_140C63678;
		if ((unsigned __int64)v27 >= *(_QWORD*)(qword_140C63678 + 48))
			v13 = *(__int128**)(qword_140C63678 + 40);
		else
			v13 = (__int128*)(*(_QWORD*)(qword_140C63678 + 40) + 32i64 * v27);
		v14 = *v13;
		v15 = v28;
		v16 = v28;
		*(_OWORD*)(*(_QWORD*)(v2 + 1576) + 96i64 * *(unsigned int*)(v2 + 1408)) = v14;
		if (v15 >= *(_QWORD*)(v12 + 48))
			v17 = *(_OWORD**)(v12 + 40);
		else
			v17 = (_OWORD*)(*(_QWORD*)(v12 + 40) + 32 * v16);
		*(_OWORD*)(96i64 * *(unsigned int*)(v2 + 1408) + *(_QWORD*)(v2 + 1576) + 16) = *v17;
		v18 = (__int64*)(*(_QWORD*)(v2 + 1576) + 32i64 + 96i64 * *(unsigned int*)(v2 + 1408));
		if (&v22 != v18)
			sub_14001C480((__int64)v18, v23, v24);
		v19 = (__m128*)(*(_QWORD*)(v2 + 1576) + 64i64 + 96i64 * *(unsigned int*)(v2 + 1408));
		if (&v20 != v19)
			sub_14001C480((__int64)v19, (int*)v20.m128_u64[1], v21);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2);
		if (v20.m128_u64[1])
			sub_14018B900(v20.m128_i64[1], 0);
		if (v23)
			sub_14018B900((__int64)v23, 0);
		sub_1401429A0(qword_140C63678, v15);
		sub_1401429A0(qword_140C63678, v11);
		return 1i64;
	}
	else
	{
		v3 = a1[2];
		*(_QWORD*)v3 = 0x4014000000000000i64;
		*(_DWORD*)(v3 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1409F1DB4: using guessed type unsigned __int16 word_1409F1DB4[12];
// 1409F1E7C: using guessed type unsigned __int16 word_1409F1E7C[20];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63678: using guessed type __int64 qword_140C63678;

