#include "../winhttp.h"

//----- (00000001405E6300) ----------------------------------------------------
__int64 __fastcall sub_1405E6300(__int64 a1, int a2, int a3, int a4, int a5)
{
	float v5; // xmm0_4
	__int64 v6; // rdi
	int* v9; // rsi
	float* v10; // rax
	float v11; // edx
	float v12; // xmm2_4
	float v13; // xmm1_4
	float v14; // xmm0_4
	__int64 v15; // rcx
	float* v16; // rax
	float v17; // xmm0_4
	float v18; // xmm1_4

	v6 = a2;
	if ((unsigned __int64)a2 >= 0x42)
		return 0i64;
	if (!*(_DWORD*)(a1 + 544))
	{
		sub_14079E410(*(int**)(a1 + 8i64 * a2 + 16), a3, a4, a5);
		return (unsigned int)(int)(float)(v5 + *(float*)&dword_140C4CCA8);
	}
	v9 = *(int**)(a1 + 8i64 * a2 + 16);
	sub_14079E410(v9, a3, a4, a5);
	v10 = *(float**)(a1 + 8 * v6 + 552);
	v11 = *v10;
	v12 = v5;
	if (*(_DWORD*)v10 == 2)
	{
		v13 = 0.0;
		goto LABEL_8;
	}
	v13 = 1.0;
	if (LODWORD(v11) == 3)
	{
	LABEL_8:
		v14 = v10[1];
		if (LODWORD(v11) == 3)
			v13 = v13 * v14;
		else
			v13 = v13 + v14;
		v15 = *((_QWORD*)v10 + 3);
		if (v15)
		{
			v16 = (float*)(*((_QWORD*)v10 + 2) + 12i64);
			do
			{
				v17 = *v16;
				if (LODWORD(v11) == 3)
					v13 = v13 * v17;
				else
					v13 = v13 + v17;
				v16 += 5;
				--v15;
			} while (v15);
		}
	}
	if (*v9 == 3)
		v18 = v13 * v12;
	else
		v18 = v13 + v12;
	return (unsigned int)(int)(float)(*(float*)&dword_140C4A7E8 + v18);
}
// 1405E635D: variable 'v5' is possibly undefined
// 140C4A7E8: using guessed type int dword_140C4A7E8;
// 140C4CCA8: using guessed type int dword_140C4CCA8;

