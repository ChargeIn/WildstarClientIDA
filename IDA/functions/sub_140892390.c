#include "../winhttp.h"

//----- (0000000140892390) ----------------------------------------------------
__int64 __fastcall sub_140892390(__int64 a1, unsigned int* a2, int a3)
{
	__int64 result; // rax
	unsigned int v5; // ebx
	unsigned int* v6; // rcx
	double v7; // xmm0_8
	double v8; // xmm1_8
	double v9; // xmm0_8
	unsigned int* v10; // rcx
	__int64 v11; // rsi
	__int64 v12; // rax
	__int64 v13; // r15
	unsigned int v14; // edi
	int** v15; // rbx
	int v16; // ecx
	int* v17; // xmm0_8
	unsigned int* v18; // rax
	__int64 v19; // rcx
	int* v20; // rbp
	__int64 v21; // r14
	int* v22; // rax
	double* v23; // [rsp+68h] [rbp+10h] BYREF
	int v24; // [rsp+70h] [rbp+18h] BYREF

	v24 = a3;
	v23 = (double*)a2;
	result = sub_140891280((_BYTE*)a1, (unsigned int**)&v23, &v24);
	v5 = result;
	if ((_DWORD)result != 1)
		return result;
	v6 = (unsigned int*)(v23 + 1);
	v7 = *v23++;
	v8 = (double)dword_140C110B4 * v7 * 0.001;
	if (v8 <= 0.0)
		v9 = -0.5;
	else
		v9 = 0.5;
	v10 = v6 + 1;
	*(_DWORD*)(a1 + 248) = (int)(v9 + v8);
	v11 = *(v10 - 1);
	v23 = (double*)v10;
	if (!(_DWORD)v11)
		return v5;
	v12 = sub_1408819F0(dword_140C10F20, 24 * v11);
	v13 = v12;
	if (!v12)
		return 52i64;
	v14 = 0;
	v15 = (int**)(v12 + 16);
	while (1)
	{
		v16 = *(_DWORD*)v23;
		v23 = (double*)((char*)v23 + 4);
		*((_DWORD*)v15 - 4) = v16;
		v17 = *(int**)v23++;
		*(v15 - 1) = v17;
		v18 = (unsigned int*)v23 + 1;
		v19 = *(unsigned int*)v23;
		v23 = (double*)((char*)v23 + 4);
		if (!(_DWORD)v19)
		{
			*v15 = 0i64;
			goto LABEL_14;
		}
		v20 = (int*)v18;
		v21 = (unsigned int)v19;
		v23 = (double*)((char*)v18 + v19);
		v22 = (int*)sub_1408819F0(dword_140C10F20, (unsigned int)(v19 + 1));
		*v15 = v22;
		if (!v22)
			break;
		sub_1407DB590(v22, v20, (unsigned int)v21);
		*((_BYTE*)*v15 + v21) = 0;
	LABEL_14:
		++v14;
		v15 += 3;
		if (v14 >= (unsigned int)v11)
		{
			v5 = sub_140892570(a1, v13, v11);
			goto LABEL_16;
		}
	}
	v5 = 2;
LABEL_16:
	sub_140881720(dword_140C10F20, v13);
	return v5;
}
// 140892483: conditional instruction was optimized away because esi.4!=0
// 140C10F20: using guessed type int dword_140C10F20;
// 140C110B4: using guessed type int dword_140C110B4;

