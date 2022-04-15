#include "../winhttp.h"

//----- (0000000140873C60) ----------------------------------------------------
__int64 __fastcall sub_140873C60(__int64 a1, int* a2, unsigned int a3, unsigned int* a4, unsigned int a5)
{
	__int64 v6; // rdx
	unsigned int v7; // edi
	unsigned int v11; // ebp
	__int64 v12; // rdx
	int* v13; // rax
	__int64 v14; // rax
	unsigned int v15; // r9d
	__int64 v16; // rdx
	unsigned int* v17; // r8
	unsigned int v18; // r10d
	__int64 v19; // rcx
	__int64 v20; // r8

	v6 = *(_QWORD*)(a1 + 48);
	v7 = 0;
	v11 = 1;
	if (v6)
	{
		sub_140881720(dword_140C10F20, v6);
		*(_QWORD*)(a1 + 48) = 0i64;
	}
	v12 = *(_QWORD*)(a1 + 64);
	if (v12)
	{
		sub_140881720(dword_140C10F20, v12);
		*(_QWORD*)(a1 + 64) = 0i64;
	}
	*(_DWORD*)(a1 + 56) = 0;
	*(_DWORD*)(a1 + 72) = 0;
	if (a3 && a5 && a2 && a4)
	{
		v13 = (int*)sub_1408819F0(dword_140C10F20, 16 * a3);
		*(_QWORD*)(a1 + 48) = v13;
		if (v13
			&& (sub_1407DB590(v13, a2, 16 * a3),
				*(_DWORD*)(a1 + 56) = a3,
				v14 = sub_1408819F0(dword_140C10F20, 24 * a5),
				(*(_QWORD*)(a1 + 64) = v14) != 0i64))
		{
			*(_DWORD*)(a1 + 72) = a5;
			v15 = 0;
			v16 = 0i64;
			v17 = a4;
			while (1)
			{
				v18 = *a4;
				*(_DWORD*)(v16 + *(_QWORD*)(a1 + 64) + 8) = a4[1];
				a4 += 2;
				if (*v17 >= a3)
					break;
				++v15;
				v16 += 24i64;
				v17 += 2;
				*(_QWORD*)(v16 + *(_QWORD*)(a1 + 64) - 24) = *(_QWORD*)(a1 + 48) + 16i64 * v18;
				*(_DWORD*)(v16 + *(_QWORD*)(a1 + 64) - 12) = 0;
				*(_DWORD*)(v16 + *(_QWORD*)(a1 + 64) - 8) = 0;
				if (v15 >= a5)
					goto LABEL_19;
			}
			v11 = 2;
		}
		else
		{
			v11 = 52;
		}
	}
	else
	{
		v11 = 31;
	}
LABEL_19:
	if (*(_DWORD*)(a1 + 72))
	{
		do
		{
			v19 = *(_QWORD*)(a1 + 64);
			v20 = *(int*)(v19 + 24i64 * v7 + 8);
			if ((int)v20 > 0)
				*(_DWORD*)(*(_QWORD*)(v19 + 24i64 * v7) + 16 * v20 - 4) = *(_DWORD*)(a1 + 40);
			++v7;
		} while (v7 < *(_DWORD*)(a1 + 72));
	}
	return v11;
}
// 140873D4D: conditional instruction was optimized away because %arg_20.4!=0
// 140C10F20: using guessed type int dword_140C10F20;

