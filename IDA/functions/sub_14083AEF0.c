#include "../winhttp.h"

//----- (000000014083AEF0) ----------------------------------------------------
void __fastcall sub_14083AEF0(__int64 a1, int a2, __int64 a3)
{
	__int64* v3; // rbx
	__int64 v6; // rsi
	int v7; // eax
	int v8; // edi
	int v9; // edi

	v3 = *(__int64**)a3;
	while (v3 != *(__int64**)(a3 + 8))
	{
		v6 = *v3;
		v7 = *(_DWORD*)(*v3 + 68);
		if (v7 == 6)
		{
			sub_140868390(*v3);
			v8 = dword_140C10F20;
			nullsub_1(v6);
			sub_140881720(v8, v6);
			if ((unsigned int)((__int64)(*(_QWORD*)(a3 + 8) - *(_QWORD*)a3) >> 3) > 1)
				*v3 = *(_QWORD*)(*(_QWORD*)(a3 + 8) - 8i64);
			*(_QWORD*)(a3 + 8) -= 8i64;
		}
		else
		{
			if (v7 == 2)
			{
				*(_DWORD*)(v6 + 32) = a2;
				*(_DWORD*)(v6 + 68) = 3;
			}
			else if (v7 == 4)
			{
				*(_DWORD*)(v6 + 68) = 1;
				*(float*)(v6 + 20) = (float)(a2 - *(_DWORD*)(v6 + 32)) + *(float*)(v6 + 20);
			}
			if (*(_DWORD*)(v6 + 68) == 1 && (unsigned __int8)sub_140867FD0(v6, a2))
			{
				sub_140868390(v6);
				if ((unsigned int)((__int64)(*(_QWORD*)(a3 + 8) - *(_QWORD*)a3) >> 3) > 1)
					*v3 = *(_QWORD*)(*(_QWORD*)(a3 + 8) - 8i64);
				*(_QWORD*)(a3 + 8) -= 8i64;
				v9 = dword_140C10F20;
				nullsub_1(v6);
				sub_140881720(v9, v6);
			}
			else
			{
				++v3;
			}
		}
	}
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C10F20: using guessed type int dword_140C10F20;

