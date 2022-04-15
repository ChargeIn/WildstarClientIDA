#include "../winhttp.h"

//----- (000000014059E900) ----------------------------------------------------
int* __fastcall sub_14059E900(__int64 a1, _QWORD* a2, int a3, int a4)
{
	int* result; // rax
	__int64* v8; // rdx
	__int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF

	result = (int*)*(unsigned int*)(a1 + 28);
	if ((_DWORD)result && (!a4 || (_DWORD)result == a4))
	{
		result = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(a1 + 12), 0i64);
		if (result)
		{
			if (!a3 || result[82] == a3)
			{
				v8 = (__int64*)a2[2];
				v9[0] = a1;
				v9[1] = (__int64)result;
				if (v8 == (__int64*)a2[3])
				{
					return (int*)sub_1400B4C50(a2, v8, v9);
				}
				else
				{
					if (v8)
					{
						*v8 = a1;
						v8[1] = (__int64)result;
					}
					a2[2] += 16i64;
				}
			}
		}
	}
	return result;
}
// 140C658F0: using guessed type __int64 qword_140C658F0;

