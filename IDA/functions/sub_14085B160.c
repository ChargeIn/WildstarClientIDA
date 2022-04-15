#include "../winhttp.h"

//----- (000000014085B160) ----------------------------------------------------
unsigned int* __fastcall sub_14085B160(__int64 a1, float a2)
{
	unsigned __int8* v2; // rdx
	__int64 v3; // r9
	unsigned int v4; // r10d
	__int64 v5; // rcx
	__int64 v6; // r8
	__int64 v7; // r8
	unsigned int* result; // rax
	unsigned int v9; // r11d
	unsigned int v10; // r10d
	__int64 v11; // rcx
	__int64 v12; // r8
	__int64 v13; // r8
	float* v14; // rax
	unsigned int v15; // r10d
	__int64 v16; // rcx
	__int64 v17; // r8
	float v18; // xmm0_4
	int* v19; // rax
	int v20; // [rsp+40h] [rbp+8h] BYREF
	float v21; // [rsp+50h] [rbp+18h]
	int v22; // [rsp+58h] [rbp+20h] BYREF
	int v23; // [rsp+5Ch] [rbp+24h]

	v2 = *(unsigned __int8**)(a1 + 80);
	v3 = 0i64;
	*(float*)&v20 = 0.0;
	if (v2)
	{
		v4 = *v2;
		v5 = 0i64;
		while (1)
		{
			v6 = (unsigned int)(v5 + 1);
			if (v2[v6] == 29)
				break;
			v5 = (unsigned int)v6;
			if ((unsigned int)v6 >= v4)
				goto LABEL_5;
		}
		v7 = (__int64)&v2[4 * v5 + ((v4 + 4) & 0xFFFFFFFC)];
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	result = (unsigned int*)&v20;
	if (v7)
		result = (unsigned int*)v7;
	v9 = *result;
	if (*result)
	{
		v22 = 0;
		v23 = 4;
		v20 = dword_140C11078;
		if (v2)
		{
			v10 = *v2;
			v11 = 0i64;
			while (1)
			{
				v12 = (unsigned int)(v11 + 1);
				if (v2[v12] == 30)
					break;
				v11 = (unsigned int)v12;
				if ((unsigned int)v12 >= v10)
					goto LABEL_13;
			}
			v13 = (__int64)&v2[4 * v11 + ((v10 + 4) & 0xFFFFFFFC)];
		}
		else
		{
		LABEL_13:
			v13 = 0i64;
		}
		v14 = (float*)&v20;
		if (v13)
			v14 = (float*)v13;
		v21 = *v14;
		v20 = dword_140C1107C;
		if (v2)
		{
			v15 = *v2;
			v16 = 0i64;
			while (1)
			{
				v17 = (unsigned int)(v16 + 1);
				if (v2[v17] == 31)
					break;
				v16 = (unsigned int)v17;
				if ((unsigned int)v17 >= v15)
					goto LABEL_24;
			}
			v3 = (__int64)&v2[4 * v16 + ((v15 + 4) & 0xFFFFFFFC)];
		}
	LABEL_24:
		v18 = v21;
		v19 = &v20;
		if (v3)
			v19 = (int*)v3;
		v20 = *v19;
		if (a2 < v21 || (v18 = *(float*)&v20, a2 > *(float*)&v20))
			a2 = v18;
		return (unsigned int*)sub_1408380A0(qword_140C61BB0, v9, a2, 0i64, &v22, 1);
	}
	return result;
}
// 140C11078: using guessed type int dword_140C11078;
// 140C1107C: using guessed type int dword_140C1107C;
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

