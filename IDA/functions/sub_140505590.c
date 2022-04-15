#include "../winhttp.h"

//----- (0000000140505590) ----------------------------------------------------
void __fastcall sub_140505590(__int64 a1, __int64 a2, unsigned __int64 a3)
{
	__int64 v6; // r12
	__int64 v7; // r14
	int* v8; // rax
	int* v9; // rdi
	int* v10; // rax
	int* v11; // rsi
	int* v12; // rdx
	__int64 v13; // rax
	__int64 v14; // rbx
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64 v17; // r8
	__int64 v18; // r8
	__int64 v19[2]; // [rsp+20h] [rbp-69h] BYREF
	__int64 v20; // [rsp+30h] [rbp-59h] BYREF
	int* v21; // [rsp+38h] [rbp-51h]
	int* v22; // [rsp+40h] [rbp-49h]
	int* v23; // [rsp+48h] [rbp-41h]
	int v24; // [rsp+50h] [rbp-39h]
	int v25; // [rsp+54h] [rbp-35h]
	char v26[8]; // [rsp+58h] [rbp-31h] BYREF
	int* v27; // [rsp+60h] [rbp-29h]
	int* v28; // [rsp+68h] [rbp-21h]
	int* v29; // [rsp+70h] [rbp-19h]
	unsigned __int64 v30[4]; // [rsp+80h] [rbp-9h] BYREF

	sub_140508730(a2, *(_QWORD**)(a2 + 8), *(_QWORD*)(a2 + 16));
	sub_140503CA0(a1, a3, v30);
	v6 = 3i64;
	v7 = a1 + 360;
	do
	{
		if (*(_BYTE*)(v7 - 56))
		{
			v8 = sub_14018B280(16i64, 0);
			v9 = v8;
			v21 = v8;
			v22 = v8;
			v23 = v8 + 4;
			if (v8)
				*(_WORD*)v8 = 0;
			v10 = sub_14018B280(16i64, 0);
			v11 = v10;
			v27 = v10;
			v28 = v10;
			v29 = v10 + 4;
			if (v10)
				*(_WORD*)v10 = 0;
			v12 = *(int**)(v7 - 40);
			v13 = 0i64;
			v24 = *(_DWORD*)(v7 - 16);
			v25 = *(_DWORD*)(v7 - 12);
			if (*(_WORD*)v12)
			{
				do
					++v13;
				while (*((_WORD*)v12 + v13));
			}
			if ((2 * v13) >> 1)
			{
				sub_14001C310(&v20, v12, (int*)((char*)v12 + 2 * v13));
				v11 = v27;
				v9 = v21;
			}
			else
			{
				sub_1407DB590(v9, v12, 0i64);
			}
			if ((char*)(v7 - 8) != v26)
			{
				sub_14001C480((__int64)v26, *(int**)v7, *(int**)(v7 + 8));
				v11 = v27;
				v9 = v21;
			}
			v14 = *(_QWORD*)(a2 + 16);
			v15 = v30[v6];
			v16 = *(_QWORD*)(v7 + 24);
			v19[0] = v15;
			v19[1] = v16;
			if (v14 == *(_QWORD*)(a2 + 24))
			{
				sub_1405087E0((_QWORD*)a2, v14, (__int64)v19);
				v11 = v27;
				v9 = v21;
			}
			else
			{
				if (v14)
				{
					v17 = (__int64)v22;
					*(_QWORD*)(v14 + 8) = v16;
					*(_QWORD*)v14 = v15;
					*(_QWORD*)(v14 + 24) = 0i64;
					*(_QWORD*)(v14 + 32) = 0i64;
					*(_QWORD*)(v14 + 40) = 0i64;
					sub_14001C1B0((_QWORD*)(v14 + 16), v9, v17);
					v18 = (__int64)v28;
					*(_DWORD*)(v14 + 48) = v24;
					*(_DWORD*)(v14 + 52) = v25;
					*(_QWORD*)(v14 + 64) = 0i64;
					*(_QWORD*)(v14 + 72) = 0i64;
					*(_QWORD*)(v14 + 80) = 0i64;
					sub_14001C1B0((_QWORD*)(v14 + 56), v11, v18);
				}
				*(_QWORD*)(a2 + 16) += 88i64;
			}
			if (v11)
				sub_14018B900((__int64)v11, 0);
			if (v9)
				sub_14018B900((__int64)v9, 0);
		}
		v7 -= 88i64;
		--v6;
	} while (v6 >= 0);
}
// 140505590: using guessed type unsigned __int64 var_60[4];
// 140505590: using guessed type char var_88[8];

