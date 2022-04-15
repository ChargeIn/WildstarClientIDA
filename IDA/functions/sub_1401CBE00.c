#include "../winhttp.h"

//----- (00000001401CBE00) ----------------------------------------------------
__int64 __fastcall sub_1401CBE00(__int64 a1, int a2, __int64 a3)
{
	__int64 v4; // r8
	__int16 v5; // r9
	__int64 i; // r10
	__int64 result; // rax
	__int64 v8; // r9
	__int64 j; // r10
	__int64 v10; // rdx
	unsigned int v11; // r8d
	unsigned int v12; // eax
	char v13; // cl
	__int16 v14[2]; // [rsp+0h] [rbp-3Ah]
	char v15; // [rsp+4h] [rbp-36h] BYREF

	v4 = a3 - (_QWORD)&v15;
	v5 = 0;
	for (i = 1i64; i <= 15; v14[i] = v5)
	{
		result = v4 + 2 * i++;
		v5 = 2 * (*(__int16*)((char*)&v14[1] + result) + v5);
	}
	v8 = 0i64;
	for (j = a2; v8 <= j; ++v8)
	{
		v10 = *(unsigned __int16*)(a1 + 4 * v8 + 2);
		if (*(_WORD*)(a1 + 4 * v8 + 2))
		{
			v11 = (unsigned __int16)v14[v10 + 1];
			v14[v10 + 1] = v11 + 1;
			v12 = 0;
			do
			{
				v13 = v11;
				LODWORD(v10) = v10 - 1;
				v11 >>= 1;
				v12 = 2 * (v13 & 1 | v12);
			} while ((int)v10 > 0);
			result = v12 >> 1;
			*(_WORD*)(a1 + 4 * v8) = result;
		}
	}
	return result;
}

