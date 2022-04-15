#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A7B60) ----------------------------------------------------
__int64 __fastcall sub_1400A7B60(_QWORD* a1, _WORD* a2)
{
	unsigned __int64 v4; // rbp
	__int64 result; // rax
	unsigned __int64 i; // r14
	unsigned __int16 v7; // si
	__int64 v8; // rdx
	__int64 v9; // rdx
	unsigned __int64 v10; // rdx
	__int64* v11; // rax
	__int64 v12; // rcx
	__int64* v13; // rax
	__int64 v14; // r13
	int* v15; // rax
	_WORD* v16; // r8
	_WORD* v17; // rdx
	int* v18; // r12
	int* j; // rbx
	__int64 v20; // rcx
	unsigned __int64 v21; // [rsp+60h] [rbp+8h] BYREF
	unsigned __int64 v22; // [rsp+68h] [rbp+10h] BYREF

	v4 = 0i64;
	if (*a2)
	{
		do
			++v4;
		while (a2[v4]);
	}
	result = (__int64)sub_1400A7F20(a1, v4 + ((__int64)(a1[2] - a1[1]) >> 1));
	for (i = 0i64; i < v4; result = 128i64)
	{
		v7 = a2[i];
		if (v7 >= 0x80u)
		{
			v7 = sub_14018DF60(v7);
		}
		else if ((unsigned __int16)(v7 - 65) <= 0x19u)
		{
			v7 += 32;
		}
		v8 = a1[2];
		if (v8 + 2 == a1[3])
		{
			v9 = v8 - a1[1];
			v21 = 1i64;
			v10 = v9 >> 1;
			v11 = (__int64*)&v21;
			v22 = v10;
			if (v10)
				v11 = (__int64*)&v22;
			v12 = *v11;
			v21 = v10;
			v13 = (__int64*)&v21;
			v22 = v10 + v12;
			if (v10 + v12 >= v10)
				v13 = (__int64*)&v22;
			v14 = 2 * (*v13 + 1);
			v15 = sub_14018B280(v14, 0);
			v16 = (_WORD*)a1[2];
			v17 = (_WORD*)a1[1];
			v18 = v15;
			for (j = v15; v17 != v16; j = (int*)((char*)j + 2))
			{
				if (j)
					*(_WORD*)j = *v17;
				++v17;
			}
			if (j)
				*(_WORD*)j = 0;
			v20 = a1[1];
			if (v20)
				sub_14018B900(v20, 0);
			a1[2] = j;
			a1[1] = v18;
			a1[3] = (char*)v18 + v14;
		}
		if (a1[2] != -2i64)
			*(_WORD*)(a1[2] + 2i64) = 0;
		++i;
		*(_WORD*)a1[2] = v7;
		a1[2] += 2i64;
	}
	return result;
}

