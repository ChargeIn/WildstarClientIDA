#include "../winhttp.h"

//----- (0000000140432380) ----------------------------------------------------
__int16* __fastcall sub_140432380(__int64 a1, const __m128i* a2)
{
	__int64 v3; // r13
	__int64 i; // rax
	int* v5; // rdi
	int* v6; // r14
	__int64 v7; // rax
	__int64 v9; // rbx
	unsigned __int64 v10; // rbx
	char* v11; // r12
	__int64 v12; // rax
	int* v13; // rsi
	__int64 v14; // rbx
	signed __int64 v15; // rbx
	char* v16; // r15
	__int64 v17; // rdi
	int* v18; // r12
	char v19; // r9
	__int64 v20; // rbx
	char* v21; // rax
	__int64 v22; // rdx
	__int64* v23; // rax
	__int64 v24; // r12
	char* v25; // r13
	bool v26; // cf
	int* v27; // rdi
	char* v28; // r15
	unsigned __int64 v29; // rbx
	__int64 v30; // rbx
	int* v31; // rcx
	char* v32; // rdx
	__int16* v33; // rbx
	int v35; // [rsp+20h] [rbp-58h]
	int* v36; // [rsp+30h] [rbp-48h] BYREF
	int* v37; // [rsp+38h] [rbp-40h]
	int* v38; // [rsp+40h] [rbp-38h]
	int* v39; // [rsp+48h] [rbp-30h]
	__int64 v41; // [rsp+A8h] [rbp+30h] BYREF
	__int64 v42; // [rsp+B0h] [rbp+38h] BYREF
	int* v43; // [rsp+B8h] [rbp+40h] BYREF

	v3 = a1;
	if (sub_1407DF6E0(a2, (const __m128i*)L"Archive:") != a2)
		return 0i64;
	for (i = 0i64; aArchive_0[i]; ++i)
		;
	v5 = (__int32*)((char*)a2->m128i_i32 + 2 * i);
	v6 = 0i64;
	v7 = 0i64;
	while (asc_140B01760[++v7] != 0)
		;
	v9 = (2 * v7) >> 1;
	if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v6 = sub_14018B280(2 * (v9 + 1), 0);
	v10 = 2 * v9;
	sub_1407DB590(v6, (int*)L" \r\n", v10);
	v11 = (char*)v6 + v10;
	if ((int*)((char*)v6 + v10))
		*(_WORD*)v11 = 0;
	v12 = 0i64;
	v13 = 0i64;
	if (*(_WORD*)v5)
	{
		do
			++v12;
		while (*((_WORD*)v5 + v12));
	}
	v14 = (2 * v12) >> 1;
	if ((unsigned __int64)(v14 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v13 = sub_14018B280(2 * (v14 + 1), 0);
	v15 = 2 * v14;
	sub_1407DB590(v13, v5, v15);
	v16 = (char*)v13 + v15;
	if ((int*)((char*)v13 + v15))
		*(_WORD*)v16 = 0;
	v41 = -1i64;
	v17 = v15 >> 1;
	if (!(v15 >> 1)
		|| (v36 = v6,
			v18 = (int*)((char*)v6 + 2 * ((v11 - (char*)v6) >> 1)),
			v37 = v18,
			v41 = (__int64)v13,
			v42 = (__int64)v13 + 2 * v17,
			sub_1400F94D0(&v43, &v42, &v41, (_WORD**)&v36, v35),
			v43 == v13)
		|| (v20 = ((char*)v43 - (char*)v13 - 2) >> 1, v20 == -1))
	{
		v27 = sub_14018B280(16i64, 0);
		v37 = v27;
		v38 = v27;
		v39 = v27 + 4;
		if (v27)
			*(_WORD*)v27 = 0;
	}
	else
	{
		v36 = v6;
		v37 = v18;
		v21 = (char*)sub_1400F9810(v13, (__int64)v16, (_WORD**)&v36, v19);
		if (v21 == v16)
			v22 = -1i64;
		else
			v22 = (v21 - (char*)v13) >> 1;
		v23 = &v41;
		if (v22 == -1)
			v22 = 0i64;
		v37 = 0i64;
		v24 = 2 * v22;
		v41 = v17 - v22;
		v25 = (char*)v13 + 2 * v22;
		v26 = v17 - v22 < (unsigned __int64)(v20 - v22 + 1);
		v42 = v20 - v22 + 1;
		v27 = 0i64;
		if (!v26)
			v23 = &v42;
		v39 = 0i64;
		v28 = (char*)v13 + 2 * v22 + 2 * *v23;
		v29 = ((v28 - v25) >> 1) + 1;
		if (v29 <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v30 = 2 * v29;
			v27 = sub_14018B280(v30, 0);
			v37 = v27;
			v39 = (int*)((char*)v27 + v30);
		}
		v31 = v27;
		if (v25 != v28)
		{
			v32 = (char*)v13 + v24 - (_QWORD)v27;
			do
			{
				if (v31)
					*(_WORD*)v31 = *(_WORD*)&v32[(_QWORD)v31];
				v31 = (int*)((char*)v31 + 2);
			} while (&v32[(_QWORD)v31] != v28);
		}
		v3 = a1;
		v38 = v31;
		if (v31)
			*(_WORD*)v31 = 0;
	}
	if (v13)
		sub_14018B900((__int64)v13, 0);
	if (v6)
		sub_14018B900((__int64)v6, 0);
	v33 = sub_14049AC80((__int64)v31, v3, (__int64)&v36);
	if (v27)
		sub_14018B900((__int64)v27, 0);
	return v33;
}
// 140432513: variable 'v35' is possibly undefined
// 140432554: variable 'v19' is possibly undefined
// 140432689: variable 'v31' is possibly undefined
// 140B01760: using guessed type wchar_t asc_140B01760[4];
// 140B01768: using guessed type wchar_t aArchive_0[9];

