#include "../winhttp.h"

//----- (00000001401D1640) ----------------------------------------------------
__int64 __fastcall sub_1401D1640(__m128i* a1, __m128i* a2)
{
	__m128i* v4; // rbx
	__m128i* v5; // rax
	unsigned int v6; // r14d
	unsigned __int64 v7; // rbx
	unsigned __int64 v8; // r9
	unsigned __int64 v9; // r10
	__m128i* v10; // r8
	__int8 v11; // cl
	__int8 v12; // dl
	__int8* i; // rdx
	__int8 v14; // r8
	__int8 v15; // al

	v4 = sub_1407E05F0(a1, 92);
	v5 = sub_1407E05F0(a2, 92);
	v6 = 0;
	if (v4)
		v7 = (char*)v4 - (char*)a1 + 1;
	else
		v7 = 0i64;
	if (v5)
		v8 = (char*)v5 - (char*)a2 + 1;
	else
		v8 = 0i64;
	v9 = v7;
	if (v8 < v7)
		v9 = v8;
	if (v9)
	{
		v10 = a2;
		while (1)
		{
			v11 = v10->m128i_i8[(char*)a1 - (char*)a2];
			if ((unsigned __int8)(v11 - 65) <= 0x19u)
				v11 += 32;
			v12 = v10->m128i_i8[0];
			if ((unsigned __int8)(v10->m128i_i8[0] - 65) <= 0x19u)
				v12 += 32;
			if (v11 != v12)
				break;
			v10 = (__m128i*)((char*)v10 + 1);
			if ((char*)v10 - (char*)a2 >= v9)
				goto LABEL_17;
		}
		if (v11 == 92)
			return 0xFFFFFFFFi64;
		if (v12 == 92)
			return 1i64;
		return (unsigned int)(v11 - v12);
	}
	else
	{
	LABEL_17:
		if (v7 < v8)
			return 0xFFFFFFFFi64;
		if (v7 > v8)
			return 1i64;
		for (i = &a1->m128i_i8[v7]; ; ++i)
		{
			v14 = *i;
			if ((unsigned __int8)(*i - 65) <= 0x19u)
				v14 += 32;
			v15 = i[(_QWORD)a2 + v8 - ((_QWORD)a1 + v7)];
			if ((unsigned __int8)(v15 - 65) <= 0x19u)
				v15 += 32;
			if (v14 != v15)
				break;
			if (!*i)
				return v6;
		}
		return (unsigned int)(v14 - v15);
	}
}

