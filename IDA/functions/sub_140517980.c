#include "../winhttp.h"

//----- (0000000140517980) ----------------------------------------------------
__int64 __fastcall sub_140517980(_QWORD* a1)
{
	unsigned __int64 v1; // rax
	unsigned __int64 v3; // rbp
	unsigned int v4; // ebx
	unsigned __int64 v5; // rdi
	__int64 v6; // r14
	int* v7; // rsi
	__int64 v8; // rax
	__int64 v9; // rcx
	int* v10; // rax
	int* v11; // rdx
	int v12; // eax
	int v13; // ecx
	int v14; // eax

	v1 = a1[21];
	if (v1 >= 0xF4240)
		return 1000i64;
	v3 = a1[19];
	v4 = 100;
	if (v1)
		v4 = 250;
	v5 = 0i64;
	if (v3)
	{
		v6 = qword_140C65898;
		v7 = (int*)a1[18];
		do
		{
			v8 = sub_1403AC780(v6 + 160, v7);
			if (v8)
			{
				v9 = *(_QWORD*)(v8 + 64);
				if (v9)
				{
					v10 = *(int**)(v8 + 72);
					v11 = v10;
					if (!v10)
						v11 = (int*)(v9 + 8);
					if (v11)
					{
						if (!v10)
							v10 = (int*)(v9 + 8);
						v12 = *v10;
						v13 = 1;
						if (v12 > 1)
							v13 = v12;
						v14 = 7;
						if (v13 < 7)
							v14 = v13;
						if (v14 != 1)
						{
							if (v14 > 3)
								return 1000;
							if (v4 < 0xFA)
								v4 = 250;
						}
					}
				}
			}
			++v5;
			v7 += 2;
		} while (v5 < v3);
	}
	return v4;
}
// 140517A5E: conditional instruction was optimized away because eax.4 is in (2..7)
// 140517A68: conditional instruction was optimized away because eax.4 is in (4..7)
// 140517A71: conditional instruction was optimized away because ebx.4 is in (==64|==FA)
// 140517AA7: conditional instruction was optimized away because ebx.4 is in (==64|==FA)
// 140C65898: using guessed type __int64 qword_140C65898;

