//----- (0000000140274590) ----------------------------------------------------
__int64 __fastcall sub_140274590(
	__int64 a1,
	int a2,
	int a3,
	unsigned int a4,
	unsigned int a5,
	int a6,
	unsigned int a7,
	int a8)
{
	__int64 v8; // r13
	unsigned int v10; // ecx
	int v11; // edx
	__int64 result; // rax
	unsigned int v15; // r12d
	_DWORD* v16; // rbp
	_DWORD* v17; // rcx
	int v18; // eax
	__int64 v19; // rbx
	unsigned int v20; // esi
	__int64 v21; // rdx
	_DWORD* v22; // rdx
	int v23; // ecx

	v8 = a2;
	v10 = dword_140AE57A8[a2];
	v11 = dword_140AE5178[a2];
	result = v11 + v10;
	if (a4 >= (unsigned int)result)
	{
		if (a8)
		{
			result = (a4 - v11) / v10;
			v15 = (a4 - v11) / v10;
			if (*(_DWORD*)(a1 + 7088) != 23)
			{
				sub_1402734B0(a1);
				v16 = (_DWORD*)(216i64 * *(int*)(a1 + 7088) + a1 + 1184);
				if (v16[36])
				{
					v19 = 0i64;
					if (v16[19])
					{
						v20 = a8 | 0x40000000;
						do
						{
							v21 = (unsigned int)v16[v19 + 20];
							if (*(_DWORD*)(a1 + 4 * v21 + 9968) != v20)
							{
								*(_DWORD*)(a1 + 4 * v21 + 9968) = v20;
								(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 6608) + 816i64))(
									*(_QWORD*)(a1 + 6608),
									v21,
									v20);
							}
							v19 = (unsigned int)(v19 + 1);
						} while ((unsigned int)v19 < v16[19]);
					}
					result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, int, int, unsigned int))(**(_QWORD**)(a1 + 6608) + 656i64))(
						*(_QWORD*)(a1 + 6608),
						(unsigned int)dword_140AE7968[v8],
						a7,
						a5,
						a6,
						*(_DWORD*)(a1 + 7136) + a3,
						v15);
					if ((int)result >= 0)
					{
						v22 = (_DWORD*)(a1 + 8 * (v8 + 2 * v8 + 133));
						v22[2] += a8 * a4;
						++* v22;
						v22[1] += a8 * v15;
						v23 = dword_140AE4ED8[*(int*)(a1 + 7140)];
						v22[4] += a8 * a6;
						v22[3] += a8 * a4 * v23;
						result = (unsigned int)(a8 * (v16[36] + a6 * v16[18]));
						v22[5] += result;
					}
				}
				else
				{
					result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, int, int, unsigned int))(**(_QWORD**)(a1 + 6608) + 656i64))(
						*(_QWORD*)(a1 + 6608),
						(unsigned int)dword_140AE7968[v8],
						a7,
						a5,
						a6,
						a3 + *(_DWORD*)(a1 + 7136),
						v15);
					if ((int)result >= 0)
					{
						v17 = (_DWORD*)(a1 + 8 * (v8 + 2 * v8 + 133));
						++* v17;
						v17[1] += v15;
						v17[2] += a4;
						v18 = dword_140AE4ED8[*(int*)(a1 + 7140)];
						v17[4] += a6;
						v17[3] += a4 * v18;
						result = (unsigned int)(a6 * v16[18]);
						v17[5] += result;
					}
				}
			}
		}
	}
	return result;
}
// 140AE4ED8: using guessed type int dword_140AE4ED8[19];
// 140AE5178: using guessed type int dword_140AE5178[];
// 140AE57A8: using guessed type int dword_140AE57A8[40];
// 140AE7968: using guessed type int dword_140AE7968[6];

