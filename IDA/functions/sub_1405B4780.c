#include "../winhttp.h"

//----- (00000001405B4780) ----------------------------------------------------
__m128 __fastcall sub_1405B4780(__int64 a1, int a2, int a3)
{
	__int64 v3; // rbx
	unsigned int* v4; // rdx
	int v7; // ebx
	int v8; // ebx
	__int128 v9; // xmm7
	__int128 v10; // xmm6
	int v11; // edx
	int v12; // eax
	__int128 v13; // xmm8
	__int64 v14; // rax
	__int128 v15; // xmm0
	__int64 v16; // rax
	int v17; // eax
	__int64 v18; // rax
	float v19; // xmm0_4
	__int64 v20; // rax
	float v21; // xmm1_4
	int v22; // eax
	unsigned int* v23; // rax
	int v24; // ebx
	int v25; // ebx
	int v26; // edi
	int v27; // edi
	int v28; // edi
	__int128 v30; // xmm2
	unsigned int v31; // [rsp+80h] [rbp+18h]

	v3 = a2;
	v4 = *(unsigned int**)(a1 + 3336);
	if (v4)
	{
		if ((_DWORD)v3)
		{
			v7 = v3 - 1;
			if (v7)
			{
				v8 = v7 - 1;
				if (v8)
				{
					if (v8 == 1)
					{
						v9 = v4[41];
						v10 = v4[37];
					}
					else
					{
						v9 = v31;
						v10 = v31;
					}
				}
				else
				{
					v9 = v4[43];
					v10 = v4[39];
				}
			}
			else
			{
				v9 = v4[42];
				v10 = v4[38];
			}
		}
		else
		{
			v9 = v4[40];
			v10 = v4[36];
		}
		if ((unsigned int)(*(_DWORD*)(a1 + 128) - 24) <= 1)
		{
			if (*(_DWORD*)(a1 + 684))
			{
				v11 = *(_DWORD*)(a1 + 688);
				if (v11)
				{
					if (sub_1403D90D0(qword_140C65898, v11))
					{
						v12 = dword_140DC34B0;
						v13 = 0x3F800000u;
						if ((dword_140DC34B0 & 1) != 0)
						{
							v15 = (unsigned int)dword_140DC34B4;
						}
						else
						{
							dword_140DC34B0 |= 1u;
							v14 = sub_140200220(0x4FFu);
							if (v14)
							{
								v15 = *(unsigned int*)(v14 + 28);
								v12 = dword_140DC34B0;
								dword_140DC34B4 = v15;
							}
							else
							{
								v12 = dword_140DC34B0;
								v15 = 0x3F800000u;
								dword_140DC34B4 = 1065353216;
							}
						}
						if ((v12 & 2) != 0)
						{
							v13 = (unsigned int)dword_140DC34B8;
						}
						else
						{
							dword_140DC34B0 = v12 | 2;
							v16 = sub_140200220(0x4FFu);
							if (v16)
								v13 = *(unsigned int*)(v16 + 32);
							v15 = (unsigned int)dword_140DC34B4;
							dword_140DC34B8 = v13;
						}
						if (*(float*)&v13 > 0.0)
							v9 = v13;
						if (*(float*)&v15 > 0.0)
							v10 = v15;
					}
				}
			}
		}
	}
	else
	{
		v9 = (unsigned int)dword_140B21328[v3];
		v10 = (unsigned int)dword_140B21338[v3];
		if (*(int*)(a1 + 84) > 1)
		{
			v17 = dword_140DC34B0;
			if ((dword_140DC34B0 & 4) != 0)
			{
				v19 = *(float*)&dword_140DC34BC;
			}
			else
			{
				dword_140DC34B0 |= 4u;
				v18 = sub_140200220(0x2EBu);
				if (v18)
				{
					v19 = *(float*)(v18 + 24);
					v17 = dword_140DC34B0;
					dword_140DC34BC = LODWORD(v19);
				}
				else
				{
					v19 = 0.89999998;
					v17 = dword_140DC34B0;
					dword_140DC34BC = 1063675494;
				}
			}
			if ((v17 & 8) != 0)
			{
				v21 = *(float*)&dword_140DC34C0;
			}
			else
			{
				dword_140DC34B0 = v17 | 8;
				v20 = sub_140200220(0x2EBu);
				if (v20)
					v21 = *(float*)(v20 + 28);
				else
					v21 = 0.60000002;
				v19 = *(float*)&dword_140DC34BC;
				dword_140DC34C0 = LODWORD(v21);
			}
			v22 = *(_DWORD*)(a1 + 128);
			if (v22 == 20 || v22 == 23)
			{
				*(float*)&v9 = *(float*)&v9 * v19;
				*(float*)&v10 = *(float*)&v10 * v19;
			}
			else
			{
				*(float*)&v9 = *(float*)&v9 * v21;
				*(float*)&v10 = *(float*)&v10 * v21;
			}
		}
		v23 = (unsigned int*)sub_14022D500(*(_DWORD*)(a1 + 216));
		if (v23)
		{
			if ((_DWORD)v3)
			{
				v24 = v3 - 1;
				if (v24)
				{
					v25 = v24 - 1;
					if (v25)
					{
						if (v25 == 1)
							v10 = v23[14];
					}
					else
					{
						v10 = v23[16];
					}
				}
				else
				{
					v10 = v23[15];
				}
			}
			else
			{
				v10 = v23[13];
			}
		}
	}
	if (a3)
	{
		v26 = a3 - 1;
		if (!v26)
			return (__m128)v10;
		v27 = v26 - 2;
		if (!v27)
			return (__m128)v10;
		v28 = v27 - 1;
		if (v28)
		{
			if (v28 != 1)
				return (__m128)0i64;
			*(float*)&v9 = *(float*)&v9 * 1.5;
		}
	}
	else
	{
		*(float*)&v9 = *(float*)&v9 * 0.5;
	}
	v30 = v9;
	*(float*)&v30 = fmaxf(*(float*)&v9, *(float*)&v10);
	return (__m128)v30;
}
// 140B21328: using guessed type int dword_140B21328[4];
// 140B21338: using guessed type int dword_140B21338[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC34B0: using guessed type int dword_140DC34B0;
// 140DC34B4: using guessed type int dword_140DC34B4;
// 140DC34B8: using guessed type int dword_140DC34B8;
// 140DC34BC: using guessed type int dword_140DC34BC;
// 140DC34C0: using guessed type int dword_140DC34C0;

