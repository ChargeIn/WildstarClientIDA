#include "../winhttp.h"

//----- (0000000140185730) ----------------------------------------------------
_QWORD* __fastcall sub_140185730(_QWORD* a1)
{
	_QWORD* result; // rax
	_QWORD* v2; // rbx
	int* v4; // rsi
	__int64 v5; // rax
	int* v6; // rbp
	__int64 v7; // rdi
	unsigned __int64 v8; // rdi
	_WORD* v9; // r14
	__int64 v10; // r15
	__int64 v11; // rsi
	_QWORD* v12; // rdi
	__int64* v13; // rdi
	__int64 v14; // rdi
	__int64 v15; // rcx
	__int64 v16; // rax
	__int64 v17; // rbx
	__int64 v18; // rcx
	__int64 v19; // rsi
	__int64 v20; // [rsp+60h] [rbp+8h] BYREF
	__int64 v21; // [rsp+68h] [rbp+10h] BYREF
	__int64 v22; // [rsp+70h] [rbp+18h] BYREF

	result = (_QWORD*)a1[25];
	v2 = (_QWORD*)result[2];
	if (v2 != result)
	{
		do
		{
			v4 = (int*)a1[3];
			v5 = 0i64;
			v6 = 0i64;
			if (*(_WORD*)v4)
			{
				do
					++v5;
				while (*((_WORD*)v4 + v5));
			}
			v7 = (2 * v5) >> 1;
			if ((unsigned __int64)(v7 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				v6 = sub_14018B280(2 * (v7 + 1), 0);
			v8 = 2 * v7;
			sub_1407DB590(v6, v4, v8);
			v9 = (_WORD*)((char*)v6 + v8);
			if ((int*)((char*)v6 + v8))
				*v9 = 0;
			v10 = *(_QWORD*)(v2[8] + 168i64);
			v11 = v10;
			v12 = *(_QWORD**)(v10 + 8);
			while (v12)
			{
				if ((int)sub_1400454D0(v12[5], v12[6], (unsigned __int16*)v6, (__int64)v9) < 0)
				{
					v12 = (_QWORD*)v12[3];
				}
				else
				{
					v11 = (__int64)v12;
					v12 = (_QWORD*)v12[2];
				}
			}
			if (v11 == v10
				|| (int)sub_1400454D0((__int64)v6, (__int64)v9, *(unsigned __int16**)(v11 + 40), *(_QWORD*)(v11 + 48)) < 0)
			{
				v21 = v10;
				v13 = &v21;
			}
			else
			{
				v20 = v11;
				v13 = &v20;
			}
			v14 = *v13;
			if (v6)
				sub_14018B900((__int64)v6, 0);
			v15 = v2[8];
			if (v14 != *(_QWORD*)(v15 + 168))
			{
				v22 = v14;
				sub_140186550(v15 + 160, &v22);
			}
			v16 = v2[3];
			if (v16)
			{
				v2 = (_QWORD*)v2[3];
				for (result = *(_QWORD**)(v16 + 16); result; result = (_QWORD*)result[2])
					v2 = result;
			}
			else
			{
				for (result = (_QWORD*)v2[1]; v2 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v2 = result;
				if ((_QWORD*)v2[3] != result)
					v2 = result;
			}
		} while (v2 != (_QWORD*)a1[25]);
	}
	if (a1[26])
	{
		v17 = *(_QWORD*)(a1[25] + 8i64);
		if (v17)
		{
			do
			{
				sub_140044CA0((__int64)(a1 + 24), *(_QWORD**)(v17 + 24));
				v18 = *(_QWORD*)(v17 + 40);
				v19 = *(_QWORD*)(v17 + 16);
				if (v18)
					sub_14018B900(v18, 0);
				sub_14018B900(v17, 0);
				v17 = v19;
			} while (v19);
		}
		*(_QWORD*)(a1[25] + 16i64) = a1[25];
		*(_QWORD*)(a1[25] + 8i64) = 0i64;
		result = (_QWORD*)a1[25];
		result[3] = result;
		a1[26] = 0i64;
	}
	return result;
}

