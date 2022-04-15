#include "../winhttp.h"

//----- (000000014047C4B0) ----------------------------------------------------
void __fastcall sub_14047C4B0(__int64 a1, __int64 a2)
{
	__int64 v2; // rbp
	__int64 v4; // r12
	unsigned int v5; // r15d
	int* v6; // rsi
	int* v7; // rdi
	__int64 v8; // rax
	__int64 v9; // r14
	int* v10; // r8
	_QWORD* v11; // rax
	_QWORD* v12; // rcx
	int v13; // ecx
	int v14; // eax
	unsigned int i; // ebp
	__int64 v16; // rax
	int* v17; // rbx
	int v18; // r14d
	int* v19; // rax
	int* v20; // rdi
	__int64 v21; // r8
	__int64 v22; // rax
	__int64 v23; // rdx
	int v24; // [rsp+20h] [rbp-58h] BYREF
	int* v25; // [rsp+28h] [rbp-50h] BYREF
	int* v26; // [rsp+30h] [rbp-48h]
	int* v27; // [rsp+38h] [rbp-40h]
	int* v28; // [rsp+40h] [rbp-38h]

	v2 = a1 + 14088;
	v4 = a1;
	sub_14013CF80(a1 + 14088, *(_QWORD*)(a1 + 14096), *(_QWORD*)(a1 + 14104));
	v5 = 0;
	if (*(_DWORD*)(a2 + 12))
	{
		do
		{
			v6 = 0i64;
			v7 = *(int**)(*(_QWORD*)(a2 + 16) + 8i64 * v5);
			v25 = 0i64;
			v27 = 0i64;
			v8 = 0i64;
			if (*(_WORD*)v7)
			{
				do
					++v8;
				while (*((_WORD*)v7 + v8));
			}
			v9 = (2 * v8) >> 1;
			if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v6 = sub_14018B280(2 * (v9 + 1), 0);
				v25 = v6;
				v27 = (int*)((char*)v6 + 2 * v9 + 2);
			}
			sub_1407DB590(v6, v7, 2 * v9);
			v10 = (int*)((char*)v6 + 2 * v9);
			v26 = v10;
			if (v10)
				*(_WORD*)v10 = 0;
			v11 = *(_QWORD**)(v2 + 16);
			if (v11 == *(_QWORD**)(v2 + 24))
			{
				sub_1400F8CF0((__int64*)v2, *(char**)(v2 + 16), (__int64)&v24);
			}
			else
			{
				if (v11)
				{
					v12 = *(_QWORD**)(v2 + 16);
					v11[1] = 0i64;
					v11[2] = 0i64;
					v11[3] = 0i64;
					sub_14001C1B0(v12, v6, (__int64)v10);
				}
				*(_QWORD*)(v2 + 16) += 32i64;
			}
			if (v6)
				sub_14018B900((__int64)v6, 0);
			++v5;
		} while (v5 < *(_DWORD*)(a2 + 12));
		v4 = a1;
	}
	v13 = *(_DWORD*)(a2 + 8);
	v14 = -1;
	if (v13 != -1)
		v14 = v13 + dword_140C636A8;
	*(_DWORD*)(v4 + 14084) = v14;
	*(_DWORD*)(v4 + 14120) = *(_DWORD*)(a2 + 4);
	sub_1404803F0(v4 + 14128, *(_DWORD**)(v4 + 14136), *(_QWORD*)(v4 + 14144));
	for (i = 0; i < *(_DWORD*)(a2 + 24); ++i)
	{
		v16 = *(_QWORD*)(a2 + 32);
		v17 = *(int**)(v16 + 16i64 * i);
		v18 = *(_DWORD*)(v16 + 16i64 * i + 8);
		v19 = sub_14018B280(16i64, 0);
		v20 = v19;
		v26 = v19;
		v21 = (__int64)v19;
		v27 = v19;
		v28 = v19 + 4;
		if (v19)
			*(_WORD*)v19 = 0;
		v24 = v18;
		if (v17)
		{
			v22 = 0i64;
			if (*(_WORD*)v17)
			{
				do
					++v22;
				while (*((_WORD*)v17 + v22));
			}
			sub_14001C480((__int64)&v25, v17, (int*)((char*)v17 + 2 * v22));
			v21 = (__int64)v27;
			v20 = v26;
			v18 = v24;
		}
		v23 = *(_QWORD*)(v4 + 14144);
		if (v23 == *(_QWORD*)(v4 + 14152))
		{
			sub_140481240((__int64*)(v4 + 14128), v23, &v24);
			v20 = v26;
		}
		else
		{
			if (v23)
			{
				*(_DWORD*)v23 = v18;
				*(_QWORD*)(v23 + 16) = 0i64;
				*(_QWORD*)(v23 + 24) = 0i64;
				*(_QWORD*)(v23 + 32) = 0i64;
				sub_14001C1B0((_QWORD*)(v23 + 8), v20, v21);
			}
			*(_QWORD*)(v4 + 14144) += 40i64;
		}
		if (v20)
			sub_14018B900((__int64)v20, 0);
	}
}
// 140C636A8: using guessed type int dword_140C636A8;

