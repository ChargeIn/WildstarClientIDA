#include "../winhttp.h"

//----- (0000000140274310) ----------------------------------------------------
__int64 __fastcall sub_140274310(__int64 a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
	__int64 v5; // r14
	unsigned int v7; // ecx
	int v8; // edx
	__int64 result; // rax
	unsigned int v12; // r12d
	unsigned int* v13; // rsi
	_DWORD* v14; // rcx
	__int64 v15; // rbx
	unsigned int i; // ebp
	int v17; // r14d
	unsigned int j; // ebp
	__int64 v19; // rdx
	__int64 v20; // [rsp+30h] [rbp-38h]

	v5 = a2;
	v7 = dword_140AE57A8[a2];
	v8 = dword_140AE5178[a2];
	result = v8 + v7;
	v20 = v5;
	if (a4 >= (unsigned int)result)
	{
		if (a5)
		{
			result = (a4 - v8) / v7;
			v12 = (a4 - v8) / v7;
			if (*(_DWORD*)(a1 + 7088) != 23)
			{
				sub_1402734B0(a1);
				v13 = (unsigned int*)(216i64 * *(int*)(a1 + 7088) + a1 + 1184);
				if (v13[36])
				{
					v15 = 0i64;
					for (i = 0; i < *v13; ++i)
					{
						if (*(_DWORD*)(a1 + 4i64 * i + 9968) != 1)
						{
							*(_DWORD*)(a1 + 4i64 * i + 9968) = 1;
							(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 816i64))(
								*(_QWORD*)(a1 + 6608),
								i,
								1i64);
						}
					}
					v17 = 0;
					while (1)
					{
						for (j = 0; j < v13[37]; ++j)
						{
							v19 = v13[j + 38];
							(*(void(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD, _DWORD))(**(_QWORD**)(a1 + 6608) + 800i64))(
								*(_QWORD*)(a1 + 6608),
								v19,
								*(_QWORD*)(a1 + 16 * (v19 + 607)),
								(unsigned int)(*(_DWORD*)(a1 + 16 * (v19 + 607) + 8) + v17 * *(_DWORD*)(a1 + 16 * (v19 + 607) + 12)),
								0);
						}
						result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 6608) + 648i64))(
							*(_QWORD*)(a1 + 6608),
							(unsigned int)dword_140AE7968[v20],
							a3,
							v12);
						if ((int)result < 0)
							break;
						if (++v17 >= a5)
						{
							if (v13[37])
							{
								do
								{
									if (*(_DWORD*)(a1 + 4 * v15 + 9968) != -2147483647)
									{
										*(_DWORD*)(a1 + 4 * v15 + 9968) = -2147483647;
										(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 816i64))(
											*(_QWORD*)(a1 + 6608),
											(unsigned int)v15,
											2147483649i64);
									}
									v15 = (unsigned int)(v15 + 1);
								} while ((unsigned int)v15 < v13[37]);
							}
							v14 = (_DWORD*)(a1 + 8 * (v20 + 2 * v20 + 133));
							v14[4] += a5 * a4;
							*v14 += a5;
							v14[1] += a5 * v12;
							result = a5 * (v13[36] + a4 * v13[18]);
							goto LABEL_21;
						}
					}
				}
				else
				{
					result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 6608) + 648i64))(
						*(_QWORD*)(a1 + 6608),
						(unsigned int)dword_140AE7968[v5],
						a3,
						v12);
					if ((int)result >= 0)
					{
						v14 = (_DWORD*)(a1 + 8 * (v5 + 2 * v5 + 133));
						++* v14;
						v14[1] += v12;
						v14[4] += a4;
						result = a4 * v13[18];
					LABEL_21:
						v14[5] += result;
					}
				}
			}
		}
	}
	return result;
}
// 14027444B: conditional instruction was optimized away because %arg_20.4!=0
// 140AE5178: using guessed type int dword_140AE5178[];
// 140AE57A8: using guessed type int dword_140AE57A8[40];
// 140AE7968: using guessed type int dword_140AE7968[6];

