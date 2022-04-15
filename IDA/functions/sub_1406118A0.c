#include "../winhttp.h"

//----- (00000001406118A0) ----------------------------------------------------
__int64 __fastcall sub_1406118A0(char* a1, int a2, char* a3, unsigned int a4)
{
	__int64 result; // rax
	int v7; // edi
	int v8; // r10d
	unsigned int v9; // ecx
	__int64 v10; // rdx
	signed __int64 v11; // r10
	int v12; // r9d

	result = *(_QWORD*)a1;
	if (*(_QWORD*)a1)
	{
		v7 = dword_140C636A8;
		if (a2)
		{
			v8 = *(_DWORD*)(*(_QWORD*)(result + 8) + 288i64);
			if (v8)
			{
				result = (unsigned int)(a2 + dword_140C636A8 - v8);
				*((_DWORD*)a1 + 19) = result;
			}
		}
		v9 = 0;
		if (a4)
		{
			v10 = 24i64;
			v11 = a1 - a3;
			do
			{
				result = *(unsigned int*)(*(_QWORD*)a1 + 16i64);
				if (v9 != (_DWORD)result && v9 <= (unsigned int)result)
				{
					result = *(_QWORD*)(v10 + *(_QWORD*)a1);
					if (result)
					{
						v12 = *(_DWORD*)(result + 40);
						if (v12)
						{
							result = *(unsigned int*)a3;
							if ((_DWORD)result)
							{
								result = (unsigned int)(v7 + result - v12);
								*(_DWORD*)&a3[v11 + 80] = result;
							}
						}
					}
				}
				++v9;
				v10 += 8i64;
				a3 += 4;
			} while (v9 < a4);
		}
	}
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;

