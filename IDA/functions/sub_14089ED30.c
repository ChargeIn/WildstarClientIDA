#include "../winhttp.h"

//----- (000000014089ED30) ----------------------------------------------------
__int64 __fastcall sub_14089ED30(int a1, unsigned int a2, __int64 a3, float* a4)
{
	__int64 result; // rax
	float v5; // r15d
	int v6; // r12d
	int v7; // r13d
	int v9; // edx
	int v11; // ecx
	unsigned int v12; // ebx
	__int64 v14; // rdi
	unsigned int v15; // r11d
	float* v16; // rdx
	unsigned int v17; // r8d
	unsigned int v18; // ecx
	float v19; // xmm1_4
	unsigned int v20; // eax
	__int64 v21; // r10
	float v22; // xmm1_4
	float v23; // xmm1_4
	float v24; // xmm1_4
	unsigned int v25; // r10d
	unsigned int v26; // ecx
	float v27; // xmm1_4
	__int64 v28; // r8
	int v29; // [rsp+0h] [rbp-48h]
	unsigned int v30; // [rsp+58h] [rbp+10h]
	int v31; // [rsp+68h] [rbp+20h]

	result = *((unsigned int*)a4 + 3);
	v5 = *a4;
	v6 = *((_DWORD*)a4 + 1);
	v7 = *((_DWORD*)a4 + 2);
	v9 = *((_DWORD*)a4 + 5);
	v11 = *((_DWORD*)a4 + 4);
	v12 = 0;
	v29 = v9;
	v30 = *((_DWORD*)a4 + 3);
	v31 = v11;
	if (a2)
	{
		v14 = 0i64;
		do
		{
			if (v12)
			{
				*a4 = v5;
				*((_DWORD*)a4 + 1) = v6;
				*((_DWORD*)a4 + 2) = v7;
				*((_DWORD*)a4 + 3) = result;
				*((_DWORD*)a4 + 4) = v11;
				*((_DWORD*)a4 + 5) = v9;
			}
			v15 = 0;
			v16 = (float*)(*(_QWORD*)a3 + 4 * v14 * *(unsigned __int16*)(a3 + 16));
			if (a1 >= 4)
			{
				v17 = *((_DWORD*)a4 + 5);
				v18 = *((_DWORD*)a4 + 4);
				v19 = a4[3];
				v20 = ((unsigned int)(a1 - 4) >> 2) + 1;
				v21 = v20;
				v15 = 4 * v20;
				do
				{
					if (v18 < v17)
					{
						v22 = v19 + a4[1];
						++v18;
					}
					else
					{
						v22 = a4[2];
					}
					*v16 = v22 * *v16;
					if (v18 < v17)
					{
						v23 = v22 + a4[1];
						++v18;
					}
					else
					{
						v23 = a4[2];
					}
					v16[1] = v23 * v16[1];
					if (v18 < v17)
					{
						v24 = v23 + a4[1];
						++v18;
					}
					else
					{
						v24 = a4[2];
					}
					v16[2] = v24 * v16[2];
					if (v18 < v17)
					{
						v19 = v24 + a4[1];
						++v18;
					}
					else
					{
						v19 = a4[2];
					}
					v16 += 4;
					*(v16 - 1) = v19 * *(v16 - 1);
					--v21;
				} while (v21);
				a4[3] = v19;
				*((_DWORD*)a4 + 4) = v18;
			}
			if (v15 < a1)
			{
				v25 = *((_DWORD*)a4 + 5);
				v26 = *((_DWORD*)a4 + 4);
				v27 = a4[3];
				v28 = a1 - v15;
				do
				{
					if (v26 < v25)
					{
						v27 = v27 + a4[1];
						++v26;
					}
					else
					{
						v27 = a4[2];
					}
					++v16;
					*(v16 - 1) = v27 * *(v16 - 1);
					--v28;
				} while (v28);
				a4[3] = v27;
				*((_DWORD*)a4 + 4) = v26;
			}
			result = v30;
			v11 = v31;
			v9 = v29;
			++v12;
			++v14;
		} while (v12 < a2);
	}
	return result;
}

