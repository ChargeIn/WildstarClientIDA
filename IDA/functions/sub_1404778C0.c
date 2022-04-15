#include "../winhttp.h"

//----- (00000001404778C0) ----------------------------------------------------
__int64 __fastcall sub_1404778C0(__int64 a1, int a2, _WORD* a3, int a4)
{
	__int64 v5; // r12
	int v6; // edi
	int v7; // ebp
	int v8; // ebx
	int v9; // r13d
	unsigned int v10; // r14d
	__int64 v11; // r9
	__int64 v12; // rsi
	unsigned __int16 v13; // cx
	int v14; // edx
	__int64 result; // rax
	int v16; // [rsp+20h] [rbp-48h] BYREF
	int v17; // [rsp+24h] [rbp-44h]

	if (a2 >= 0 || a2 < (int)((*(_QWORD*)(qword_140C65898 + 31936) - *(_QWORD*)(qword_140C65898 + 31928)) / 112i64))
		v5 = *(_QWORD*)(qword_140C65898 + 31928) + 112i64 * a2;
	else
		v5 = 0i64;
	v6 = 0;
	v7 = 0;
	v8 = 0;
	v9 = 0;
	v10 = 0;
	if (sub_14018E200(a3))
	{
		v12 = 0i64;
		do
		{
			v13 = a3[v12];
			if ((unsigned __int16)(v13 - 48) <= 9u)
			{
				sub_140109840(*(float**)(v5 + 8i64 * v13 - 352), &v16);
				if (v10)
					v8 += a4;
				else
					v9 = v16;
				if (v12 == sub_14018E200(a3) - 1)
				{
					if (v8 < 0)
						v6 = v9 - v8;
					else
						v6 = v14 + v8;
				}
				else
				{
					v8 += v14;
				}
				if (v17 > v7)
					v7 = v17;
			}
			v12 = ++v10;
		} while (v10 < (unsigned __int64)sub_14018E200(a3));
		v11 = a1;
	}
	*(_QWORD*)v11 = 0i64;
	result = v11;
	*(float*)(v11 + 16) = (float)v6;
	*(float*)(v11 + 20) = (float)v7;
	return result;
}
// 14047799F: variable 'v14' is possibly undefined
// 1404779DB: variable 'v11' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

