#include "../winhttp.h"

//----- (0000000140505BB0) ----------------------------------------------------
void __fastcall sub_140505BB0(
	__int64 a1,
	unsigned int a2,
	unsigned int a3,
	unsigned int a4,
	unsigned int a5,
	unsigned int a6)
{
	__int64 v7; // r15
	unsigned __int64 v8; // r8
	__int64 v9; // rcx
	__int64 v10; // r13
	__int64 v11; // r14
	unsigned int v12; // edi
	__int64 v13; // rbx
	__int64 v14; // rsi
	__int64 v15; // rcx
	__int64 v16; // rdx
	__int64* v17; // rbx
	__int64 v18; // rcx
	char v19[8]; // [rsp+30h] [rbp-48h] BYREF
	__int64 v20; // [rsp+38h] [rbp-40h]
	__int64 v21; // [rsp+40h] [rbp-38h]
	__int64 v22; // [rsp+48h] [rbp-30h]

	if (a6 <= 2)
	{
		*(_BYTE*)(a1 + 1076) = 0;
		v7 = 232i64 * a6;
		sub_140503600(*(_QWORD*)(v7 + a1 + 1112), a2, a3, a4, a5);
		v8 = *(_QWORD*)(v7 + a1 + 1080);
		v9 = *(_QWORD*)(v7 + a1 + 1112);
		v20 = 0i64;
		v21 = 0i64;
		v22 = 0i64;
		sub_140505590(v9, (__int64)v19, v8);
		v10 = v20;
		v11 = v21;
		v12 = 0;
		if (v20 != v21)
		{
			v13 = v20 + 24;
			do
			{
				if (v12 >= 4)
					break;
				if (*(_QWORD*)v13 == *(_QWORD*)(v13 + 8))
				{
					v14 = v7 + 48i64 * v12;
					v15 = *(_QWORD*)(v14 + a1 + 1120);
					if (v15)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
						*(_QWORD*)(v14 + a1 + 1120) = 0i64;
					}
				}
				else
				{
					v16 = *(_QWORD*)(a1 + 32);
					if (v16)
						sub_140109710((__int64*)(a1 + v7 + 48i64 * v12 + 1120), v16 + 240, *(__m128i**)v13, 0);
				}
				v13 += 88i64;
				++v12;
			} while (v13 - 24 != v11);
		}
		if (v10 != v11)
		{
			v17 = (__int64*)(v10 + 24);
			do
			{
				v18 = v17[5];
				if (v18)
					sub_14018B900(v18, 0);
				if (*v17)
					sub_14018B900(*v17, 0);
				v17 += 11;
			} while (v17 - 3 != (__int64*)v11);
		}
		if (v10)
			sub_14018B900(v10, 0);
	}
}
// 140505BB0: using guessed type char var_48[8];

