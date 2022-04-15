//----- (0000000140531FB0) ----------------------------------------------------
__int64 __fastcall sub_140531FB0(_QWORD* a1)
{
	__int64 v2; // r13
	__m128* v3; // rcx
	__int32 v4; // eax
	unsigned int v5; // r12d
	char* v6; // rdx
	_DWORD* v7; // rax
	char* v8; // rdx
	_DWORD* v9; // rax
	__int64 v10; // rcx
	__int64 v11; // r15
	_OWORD* v12; // rax
	unsigned __int64 v13; // rdi
	_OWORD* v14; // rax
	__int64 v15; // r14
	_QWORD* v16; // rax
	_QWORD* v17; // rbx
	unsigned __int64 i; // r14
	__int64 v19; // rcx
	__int64 v20; // rax
	_QWORD* j; // rax
	__int64 k; // rax
	__m128 v24; // [rsp+20h] [rbp-39h] BYREF
	int* v25; // [rsp+30h] [rbp-29h]
	__int64 v26; // [rsp+40h] [rbp-19h] BYREF
	int* v27; // [rsp+48h] [rbp-11h]
	int* v28; // [rsp+50h] [rbp-9h]
	__int64 v29; // [rsp+60h] [rbp+7h] BYREF
	__int64 v30; // [rsp+68h] [rbp+Fh]
	unsigned __int64 v31; // [rsp+C8h] [rbp+6Fh] BYREF
	unsigned int v32; // [rsp+D0h] [rbp+77h] BYREF

	v2 = sub_14052E9B0(a1);
	if (!v2)
		return 0i64;
	v3 = (__m128*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (__m128*)(a1[3] + 16i64);
	v4 = v3->m128_i32[2];
	if (v4 == 3)
		goto LABEL_8;
	if (v4 == 4 && sub_14005AC80((char*)(v3->m128_u64[0] + 32), &v31))
	{
		v24.m128_i32[2] = 3;
		v3 = &v24;
		v24.m128_u64[0] = v31;
	LABEL_8:
		v5 = (int)*(double*)v3->m128_u64;
		goto LABEL_9;
	}
	v5 = 0;
LABEL_9:
	if (v5 <= *(_DWORD*)(v2 + 1408))
	{
		v24 = 0i64;
		sub_140143880((unsigned int*)&v31, a1, 3u, &v24);
		v24 = 0i64;
		sub_140143880(&v32, a1, 4u, &v24);
		v6 = (char*)sub_14018F0E0(&v24, word_1409F1D9C)[1];
		v7 = (_DWORD*)(a1[3] + 64i64);
		if ((unsigned __int64)v7 < a1[2] && v7 != dword_140A12138 && *(int*)(a1[3] + 72i64) > 0)
			v6 = (char*)sub_140056BB0(a1, 5u, 0i64);
		sub_14018F2D0(&v26, v6);
		if (v24.m128_u64[1])
			sub_14018B900(v24.m128_i64[1], 0);
		v8 = (char*)sub_14018F0E0(&v29, word_1409F1DEC)[1];
		v9 = (_DWORD*)(a1[3] + 80i64);
		if ((unsigned __int64)v9 < a1[2] && v9 != dword_140A12138 && *(int*)(a1[3] + 88i64) > 0)
			v8 = (char*)sub_140056BB0(a1, 6u, 0i64);
		sub_14018F2D0(&v24, v8);
		if (v30)
			sub_14018B900(v30, 0);
		v10 = qword_140C63678;
		v11 = *(_QWORD*)(v2 + 1576) + 96i64 * v5;
		if ((unsigned __int64)(unsigned int)v31 >= *(_QWORD*)(qword_140C63678 + 48))
			v12 = *(_OWORD**)(qword_140C63678 + 40);
		else
			v12 = (_OWORD*)(*(_QWORD*)(qword_140C63678 + 40) + 32i64 * (unsigned int)v31);
		v13 = v32;
		*(_OWORD*)v11 = *v12;
		if (v13 >= *(_QWORD*)(v10 + 48))
			v14 = *(_OWORD**)(v10 + 40);
		else
			v14 = (_OWORD*)(*(_QWORD*)(v10 + 40) + 32i64 * (unsigned int)v13);
		*(_OWORD*)(v11 + 16) = *v14;
		if (&v26 != (__int64*)(v11 + 32))
			sub_14001C480(v11 + 32, v27, v28);
		v15 = v24.m128_i64[1];
		if (&v24 != (__m128*)(v11 + 64))
			sub_14001C480(v11 + 64, (int*)v24.m128_u64[1], v25);
		v16 = *(_QWORD**)(v2 + 1384);
		v17 = (_QWORD*)v16[2];
		if (v17 != v16)
		{
			do
			{
				for (i = 0i64; i < v17[107]; ++i)
				{
					v19 = *(_QWORD*)(v17[106] + 8 * i);
					if (*(_DWORD*)(v19 + 4) == v5)
						sub_140770050((_QWORD*)v19, v11);
				}
				v20 = v17[3];
				if (v20)
				{
					v17 = (_QWORD*)v17[3];
					for (j = *(_QWORD**)(v20 + 16); j; j = (_QWORD*)j[2])
						v17 = j;
				}
				else
				{
					for (k = v17[1]; v17 == *(_QWORD**)(k + 24); k = *(_QWORD*)(k + 8))
						v17 = (_QWORD*)k;
					if (v17[3] != k)
						v17 = (_QWORD*)k;
				}
			} while (v17 != *(_QWORD**)(v2 + 1384));
			v15 = v24.m128_i64[1];
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2);
		*(_DWORD*)(v2 + 1568) = 1;
		if (v15)
			sub_14018B900(v15, 0);
		if (v27)
			sub_14018B900((__int64)v27, 0);
		sub_1401429A0(qword_140C63678, v13);
		sub_1401429A0(qword_140C63678, v31);
	}
	return 0i64;
}
// 1409F1D9C: using guessed type unsigned __int16 word_1409F1D9C[12];
// 1409F1DEC: using guessed type unsigned __int16 word_1409F1DEC[16];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63678: using guessed type __int64 qword_140C63678;

