#include "../winhttp.h"

//----- (0000000140563AD0) ----------------------------------------------------
void __fastcall sub_140563AD0(__int64 a1, __int64 a2)
{
	__int64 v3; // rsi
	int v4; // ecx
	int v5; // eax
	int v6; // ecx
	float v7; // xmm1_4
	int v8; // ecx
	float v9; // xmm1_4
	int v10; // ebp
	_DWORD* v11; // rsi
	__int64 v12; // r14
	__int64 v13; // rbx
	__int64 v14; // rbx
	__int64 v15; // rbp
	__int64 v16; // [rsp+20h] [rbp-58h]
	int v17; // [rsp+28h] [rbp-50h]
	int v18; // [rsp+30h] [rbp-48h]
	__int64 v19; // [rsp+50h] [rbp-28h] BYREF
	__int64 v20; // [rsp+58h] [rbp-20h]
	__int64 v21; // [rsp+60h] [rbp-18h]

	v3 = sub_1403D90D0(qword_140C65898, *(_DWORD*)a2);
	sub_1403D90D0(qword_140C65898, *(_DWORD*)(a2 + 4));
	if (*(_DWORD*)(a2 + 8) == 10 || *(_DWORD*)(a2 + 8) == 118)
	{
		if (*(_DWORD*)(a2 + 8) == 118 && v3 && *(_DWORD*)(v3 + 5636))
		{
			v10 = *(_DWORD*)(a2 + 4);
			v11 = *(_DWORD**)(qword_140C7DF98 + 52168);
			v12 = *(_QWORD*)(a2 + 80);
			if (v11)
			{
				sub_1405648A0(*(unsigned int*)(a2 + 72), &v19, 326, v10, *(_DWORD*)(a2 + 72));
				v13 = v20;
				if (v20 != v21)
				{
					v18 = v10;
					v17 = v10;
					LODWORD(v16) = *v11;
					sub_1400EA3E0(
						*(_QWORD*)(qword_140C65898 + 29504),
						"SpellCastFailed",
						"iiUUSS",
						(unsigned int)v11[4],
						v16,
						v17,
						v18,
						v20,
						v12);
				}
				if (v13)
					sub_14018B900(v13, 0);
			}
		}
		else
		{
			v14 = *(_QWORD*)(qword_140C65898 + 27840);
			if (v14)
			{
				do
				{
					v15 = *(_QWORD*)(v14 + 40);
					*(_QWORD*)(v14 + 48) = v3;
					*(_QWORD*)(v14 + 56) = a2;
					if (*(_DWORD*)v14)
					{
						if (*(_DWORD*)v14 == 1)
							(*(void(__fastcall**)(_QWORD, _QWORD))(v14 + 16))(*(_QWORD*)(v14 + 8), *(_QWORD*)(v14 + 24));
					}
					else
					{
						(*(void(__fastcall**)(_QWORD))(v14 + 16))(*(_QWORD*)(v14 + 8));
					}
					*(_QWORD*)(v14 + 48) = 0i64;
					*(_QWORD*)(v14 + 56) = 0i64;
					v14 = v15;
				} while (v15);
			}
		}
	}
	else
	{
		v4 = *(_DWORD*)qword_140C63750;
		v5 = dword_140C4E040;
		if (*(_DWORD*)(a2 + 8) == 138)
		{
			if (v4 < dword_140C4E040)
				v5 = *(_DWORD*)qword_140C63750;
			if (!*((_BYTE*)&off_140C4E030 + v5 + 32))
			{
				v8 = *(_DWORD*)(a2 + 20);
				if (v8)
				{
					if (v3 && (*(_BYTE*)(v3 + 36) & 8) != 0)
					{
						v9 = (float)*(int*)(a2 + 16) / (float)v8;
						*(_DWORD*)(a2 + 32) = (int)(float)((float)*(int*)(a2 + 32) * v9);
						*(_DWORD*)(a2 + 28) = (int)(float)((float)*(int*)(a2 + 28) * v9);
						*(_DWORD*)(a2 + 24) = (int)(float)((float)*(int*)(a2 + 24) * v9);
					}
				}
			}
			*(_DWORD*)(a2 + 32) = 0;
			sub_1405A5BF0(0, v3, a2);
		}
		else
		{
			if (v4 < dword_140C4E040)
				v5 = *(_DWORD*)qword_140C63750;
			if (!*((_BYTE*)&off_140C4E030 + v5 + 32))
			{
				v6 = *(_DWORD*)(a2 + 20);
				if (v6)
				{
					if (v3 && (*(_BYTE*)(v3 + 36) & 8) != 0)
					{
						v7 = (float)*(int*)(a2 + 16) / (float)v6;
						*(_DWORD*)(a2 + 32) = (int)(float)((float)*(int*)(a2 + 32) * v7);
						*(_DWORD*)(a2 + 28) = (int)(float)((float)*(int*)(a2 + 28) * v7);
						*(_DWORD*)(a2 + 24) = (int)(float)((float)*(int*)(a2 + 24) * v7);
					}
				}
			}
			sub_1405A5BF0(0, v3, a2);
		}
	}
	sub_140569980(a2);
	sub_14018B900(a2, 0);
}
// 140563D0E: variable 'v16' is possibly undefined
// 140C4E030: using guessed type __int64 (__fastcall **off_140C4E030)();
// 140C4E040: using guessed type int dword_140C4E040;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DF98: using guessed type __int64 qword_140C7DF98;

