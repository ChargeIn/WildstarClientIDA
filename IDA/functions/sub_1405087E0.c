#include "../winhttp.h"

//----- (00000001405087E0) ----------------------------------------------------
void __fastcall sub_1405087E0(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 v4; // rcx
	__int64 v7; // rax
	__int64 v8; // r8
	int* v9; // rdx
	int v10; // eax
	__int64 v11; // r8
	int* v12; // rdx
	int v13; // eax
	int* v14; // rdi
	int* v15; // rbx
	__int64 v16; // rcx
	bool v17; // zf
	__int64 v18; // rcx
	__int64 v19; // rax
	unsigned __int64 v20; // r8
	__int64 v21; // r15
	int* v22; // rax
	__int64 v23; // rdi
	int* v24; // r12
	__int64 i; // rbx
	__int64 v26; // r14
	__int64 v27; // rdi
	__int64 v28; // rbx
	__int64 v29; // rsi
	__int64 j; // rbx
	__int64 v31; // rcx
	__int64 v32; // rcx
	__int64 v33; // rcx
	__int64 v34; // [rsp+30h] [rbp-78h]
	__int64 v35; // [rsp+38h] [rbp-70h]
	__int64 v36; // [rsp+40h] [rbp-68h] BYREF
	int* v37; // [rsp+48h] [rbp-60h]
	__int128 v38; // [rsp+50h] [rbp-58h]
	int v39; // [rsp+60h] [rbp-48h]
	int v40; // [rsp+64h] [rbp-44h]
	__int64 v41; // [rsp+68h] [rbp-40h] BYREF
	__int128 v42; // [rsp+70h] [rbp-38h]
	__int64 v43; // [rsp+80h] [rbp-28h]

	v4 = a1[2];
	if (v4 == a1[3])
	{
		v16 = v4 - a1[1];
		v17 = v16 / 88 == 0;
		v18 = 2 * (v16 / 88);
		if (v17)
			v18 = 1i64;
		v19 = sub_14018A3E0(88 * v18);
		v21 = 22 * ((unsigned __int64)(((unsigned __int64)v19 * (unsigned __int128)v20) >> 64) >> 4);
		v22 = sub_14018B280(v21 * 4, 0);
		v23 = a1[1];
		v24 = v22;
		for (i = (__int64)v22; v23 != a2; i += 88i64)
		{
			if (i)
				sub_140508A90(i, v23);
			v23 += 88i64;
		}
		if (i)
			sub_140508A90(i, a3);
		v26 = a1[2];
		v27 = i + 88;
		if (a2 != v26)
		{
			v28 = a2;
			do
			{
				if (v27)
					sub_140508A90(v27, v28);
				v28 += 88i64;
				v27 += 88i64;
			} while (v28 != v26);
		}
		v29 = a1[2];
		for (j = a1[1]; j != v29; j += 88i64)
		{
			v31 = *(_QWORD*)(j + 64);
			if (v31)
				sub_14018B900(v31, 0);
			v32 = *(_QWORD*)(j + 24);
			if (v32)
				sub_14018B900(v32, 0);
		}
		v33 = a1[1];
		if (v33)
			sub_14018B900(v33, 0);
		a1[1] = v24;
		a1[3] = &v24[v21];
		a1[2] = v27;
	}
	else
	{
		if (v4)
			sub_140508A90(v4, v4 - 88);
		a1[2] += 88i64;
		v7 = *(_QWORD*)a3;
		v8 = *(_QWORD*)(a3 + 32);
		v38 = 0i64;
		v9 = *(int**)(a3 + 24);
		v34 = v7;
		v35 = *(_QWORD*)(a3 + 8);
		v37 = 0i64;
		sub_14001C1B0(&v36, v9, v8);
		v10 = *(_DWORD*)(a3 + 48);
		v42 = 0i64;
		v11 = *(_QWORD*)(a3 + 72);
		v12 = *(int**)(a3 + 64);
		v39 = v10;
		v13 = *(_DWORD*)(a3 + 52);
		v43 = 0i64;
		v40 = v13;
		sub_14001C1B0(&v41, v12, v11);
		sub_140508B10(a2, a1[2] - 176i64, (_QWORD*)(a1[2] - 88i64));
		v14 = v37;
		*(_QWORD*)a2 = v34;
		*(_QWORD*)(a2 + 8) = v35;
		if (&v36 != (__int64*)(a2 + 16))
			sub_14001C480(a2 + 16, v14, (int*)v38);
		v15 = (int*)v42;
		*(_DWORD*)(a2 + 48) = v39;
		*(_DWORD*)(a2 + 52) = v40;
		if (&v41 != (__int64*)(a2 + 56))
			sub_14001C480(a2 + 56, v15, *((int**)&v42 + 1));
		if (v15)
			sub_14018B900((__int64)v15, 0);
		if (v14)
			sub_14018B900((__int64)v14, 0);
	}
}
// 14050896E: variable 'v20' is possibly undefined

