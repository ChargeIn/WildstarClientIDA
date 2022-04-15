#include "../winhttp.h"

//----- (000000014087D520) ----------------------------------------------------
__int64 __fastcall sub_14087D520(__int64 a1, __int64 a2, int a3, __int16* a4)
{
	__int64 v5; // r10
	unsigned int v6; // r12d
	unsigned int v7; // ebx
	int v8; // edi
	__int64 v9; // r9
	__int16* v10; // r15
	int v11; // ecx
	__int64 v12; // r8
	int v13; // r10d
	int v14; // edi
	int v15; // ecx
	__int64 v16; // r9
	__int64 v17; // r11
	int v18; // r14d
	__int64 v19; // rbp
	unsigned int v20; // edx
	int v21; // eax
	int v22; // ecx
	unsigned int v23; // ecx
	__int64 v24; // r9
	unsigned int v25; // r13d
	int v26; // ebp
	unsigned int v27; // edi
	int v28; // eax
	int v29; // edx
	__m128i v30; // xmm0
	__int64 v31; // rdx
	__int64 v32; // r8
	int v34; // [rsp+0h] [rbp-58h]
	__int64 v35; // [rsp+8h] [rbp-50h]
	unsigned int v38; // [rsp+70h] [rbp+18h]
	int v39; // [rsp+78h] [rbp+20h]

	v5 = *((unsigned int*)a4 + 7);
	v6 = *((_DWORD*)a4 + 12);
	v7 = *((_DWORD*)a4 + 8);
	v8 = *((_DWORD*)a4 + 10);
	v38 = *(unsigned __int16*)(a1 + 18);
	v9 = (unsigned int)(a3 - v5);
	v10 = (__int16*)(*(_QWORD*)a1 + 2i64 * *((unsigned int*)a4 + 6));
	v11 = *((_DWORD*)a4 + 9);
	v12 = *(_QWORD*)a2 + 4 * v5;
	v13 = *((_DWORD*)a4 + 11);
	v14 = v8 - v11;
	v15 = v11 << 10;
	v34 = v9;
	v16 = v12 + 4 * v9;
	v17 = HIWORD(v7);
	v18 = (unsigned __int16)v7;
	v35 = v12;
	v19 = (v16 - v12) >> 2;
	v39 = v15;
	if ((unsigned int)v19 >= (1024 - v13) / v6)
		LODWORD(v19) = (1024 - v13) / v6;
	if (!(_DWORD)v17)
	{
		v20 = v15 + v13 * v14;
		do
		{
			v21 = v19;
			LODWORD(v19) = v19 - 1;
			if (!v21)
				break;
			v20 += v6 * v14;
			v12 += 4i64;
			v13 += v6;
			v22 = (*a4 << 16) + v18 * (*v10 - *a4);
			v7 += v20 >> 10;
			v18 = (unsigned __int16)v7;
			v17 = HIWORD(v7);
			*(float*)(v12 - 4) = (float)v22 * 4.6566129e-10;
		} while (!(_DWORD)v17);
	}
	v23 = v38;
	v24 = (v16 - v12) >> 2;
	v25 = v38 - 1;
	if ((unsigned int)v24 >= (1024 - v13) / v6)
		LODWORD(v24) = (1024 - v13) / v6;
	if ((unsigned int)v17 <= v25)
	{
		v26 = v6 * v14;
		v27 = v39 + v13 * v14;
		do
		{
			v28 = v24;
			LODWORD(v24) = v24 - 1;
			if (!v28)
				break;
			v29 = v10[v17 - 1];
			v27 += v26;
			v12 += 4i64;
			v13 += v6;
			v30 = _mm_cvtsi32_si128((v29 << 16) + v18 * (v10[(unsigned int)(v17 + 1) - 1] - v29));
			v7 += v27 >> 10;
			v18 = (unsigned __int16)v7;
			v17 = HIWORD(v7);
			*(float*)(v12 - 4) = _mm_cvtepi32_ps(v30).m128_f32[0] * 4.6566129e-10;
		} while ((unsigned int)v17 <= v25);
	}
	v31 = v38;
	*((_DWORD*)a4 + 11) = v13;
	if ((unsigned int)v17 < v38)
		v31 = (unsigned int)v17;
	if ((_DWORD)v31)
	{
		*a4 = v10[v31 - 1];
		v23 = v38;
	}
	v32 = (v12 - v35) >> 2;
	*((_DWORD*)a4 + 8) = v7 - ((_DWORD)v31 << 16);
	*(_WORD*)(a1 + 18) -= v31;
	*(_WORD*)(a2 + 18) = a4[14] + v32;
	if ((_DWORD)v31 == v23)
		*((_DWORD*)a4 + 6) = 0;
	else
		*((_DWORD*)a4 + 6) += v31;
	if ((_DWORD)v32 == v34)
		return 45i64;
	*((_DWORD*)a4 + 7) += v32;
	return 43i64;
}

