#include "../winhttp.h"

//----- (00000001405C16D0) ----------------------------------------------------
void __fastcall sub_1405C16D0(__int64 a1, unsigned __int8* a2, unsigned int a3)
{
	__int64 v6; // r12
	unsigned __int64 v7; // rax
	int v8; // eax
	unsigned __int64 v9; // rbp
	int* v10; // r15
	unsigned __int64 v11; // rax
	int* v12; // rsi
	int* v13; // rdx
	__int64 v14; // rcx
	__int64 v15; // rdx
	int v16; // eax
	_DWORD* v17; // rdx

	if (a3)
	{
		v6 = a3;
		do
		{
			v7 = *a2;
			if (*(_QWORD*)(a1 + 160) <= v7)
			{
				v8 = v7 + 1;
				v9 = v8;
				if (*(_QWORD*)(a1 + 160) <= (unsigned __int64)v8)
				{
					v10 = sub_14018DB00(*(_QWORD*)(a1 + 152), v8, 16i64);
					v11 = *(_QWORD*)(a1 + 160);
					if (v11 < v9)
					{
						v12 = &v10[4 * v11];
						*(_QWORD*)v12 = 0i64;
						*((_QWORD*)v12 + 1) = 0i64;
						qmemcpy(v12 + 4, v12, 8 * ((16 * (v9 - v11) - 9) >> 3));
					}
					v13 = *(int**)(a1 + 152);
					if (v13 != v10)
					{
						sub_1407DB590(v10, v13, 16i64 * *(_QWORD*)(a1 + 160));
						v14 = *(_QWORD*)(a1 + 152);
						if (v14)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
						*(_QWORD*)(a1 + 152) = v10;
					}
				}
				*(_QWORD*)(a1 + 160) = v9;
			}
			v15 = *a2;
			v16 = *(_DWORD*)a2;
			a2 += 16;
			v17 = (_DWORD*)(*(_QWORD*)(a1 + 152) + 16 * v15);
			*v17 = v16;
			v17[1] = *((_DWORD*)a2 - 3);
			v17[2] = *((_DWORD*)a2 - 2);
			v17[3] = *((_DWORD*)a2 - 1);
			--v6;
		} while (v6);
	}
	if (a3)
		sub_1400A8020(*(_QWORD*)(qword_140C65898 + 29504) + 4944i64);
}
// 140C65898: using guessed type __int64 qword_140C65898;

