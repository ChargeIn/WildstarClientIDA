#include "../winhttp.h"

//----- (000000014087D730) ----------------------------------------------------
__int64 __fastcall sub_14087D730(__int64 a1, __int64 a2, int a3, __int16* a4)
{
	__int64 v4; // r10
	unsigned int v5; // edi
	__int16* v6; // rsi
	int v7; // ebp
	unsigned int v8; // r13d
	__int64 v9; // r8
	__int16* v10; // r14
	int v11; // ecx
	__int64 v12; // r11
	int v13; // r15d
	__int64 v14; // rbx
	int v15; // ecx
	unsigned int v16; // r9d
	__int64 v17; // r8
	int v18; // r12d
	unsigned int v19; // edx
	int v20; // eax
	float v21; // xmm0_4
	int v22; // ecx
	unsigned int v23; // r10d
	__int64 v24; // rbx
	int v25; // eax
	unsigned int v26; // r15d
	int v27; // esi
	int v28; // eax
	__int64 v29; // r10
	int v30; // r9d
	__m128i v31; // xmm0
	__int64 v32; // rax
	unsigned int v33; // r8d
	__int64 v34; // rdx
	__int16 v35; // ax
	__int64 v36; // r11
	__int16 v38; // [rsp+0h] [rbp-78h]
	unsigned int v39; // [rsp+4h] [rbp-74h]
	unsigned int v40; // [rsp+8h] [rbp-70h]
	int v41; // [rsp+10h] [rbp-68h]
	int v42; // [rsp+14h] [rbp-64h]
	__int64 v43; // [rsp+20h] [rbp-58h]
	__int16 v46; // [rsp+90h] [rbp+18h]

	v4 = *((unsigned int*)a4 + 7);
	v5 = *((_DWORD*)a4 + 8);
	v40 = *(unsigned __int16*)(a1 + 18);
	v6 = a4;
	v7 = *((_DWORD*)a4 + 11);
	v8 = *((_DWORD*)a4 + 12);
	v39 = *(unsigned __int16*)(a2 + 16);
	v9 = (unsigned int)(a3 - v4);
	v42 = v9;
	v10 = (__int16*)(*(_QWORD*)a1 + 2i64 * (unsigned int)(2 * *((_DWORD*)a4 + 6)));
	v11 = *((_DWORD*)a4 + 9);
	v12 = *(_QWORD*)a2 + 4 * v4;
	v13 = *((_DWORD*)a4 + 10) - v11;
	v46 = *a4;
	v14 = v12 + 4 * v9;
	v38 = a4[1];
	v15 = v11 << 10;
	v16 = HIWORD(v5);
	v17 = (4 * v9) >> 2;
	v18 = (unsigned __int16)v5;
	v43 = v12;
	if ((unsigned int)v17 >= (1024 - v7) / v8)
		LODWORD(v17) = (1024 - v7) / v8;
	v41 = v15;
	if (!v16)
	{
		v19 = v15 + v7 * v13;
		do
		{
			v20 = v17;
			LODWORD(v17) = v17 - 1;
			if (!v20)
				break;
			v19 += v8 * v13;
			v12 += 4i64;
			v7 += v8;
			v21 = (float)((v46 << 16) + v18 * (*v10 - v46));
			v22 = (v38 << 16) + v18 * (v10[1] - v38);
			v5 += v19 >> 10;
			v18 = (unsigned __int16)v5;
			v16 = HIWORD(v5);
			*(float*)(v12 - 4) = v21 * 4.6566129e-10;
			*(float*)(v12 + 4i64 * v39 - 4) = (float)v22 * 4.6566129e-10;
		} while (!HIWORD(v5));
		v6 = a4;
	}
	v23 = v40;
	v24 = (v14 - v12) >> 2;
	if ((unsigned int)v24 >= (1024 - v7) / v8)
		LODWORD(v24) = (1024 - v7) / v8;
	if (v16 <= v40 - 1)
	{
		v25 = v13;
		v26 = v41 + v7 * v13;
		v27 = v8 * v25;
		do
		{
			v28 = v24;
			LODWORD(v24) = v24 - 1;
			if (!v28)
				break;
			v29 = 2 * v16;
			v26 += v27;
			v12 += 4i64;
			v7 += v8;
			v30 = v10[(unsigned int)(v29 + 1) - 2];
			v31 = _mm_cvtsi32_si128((v10[v29 - 2] << 16) + v18 * (v10[(unsigned int)(v29 + 2) - 2] - v10[v29 - 2]));
			v32 = (unsigned int)(v29 + 3);
			v23 = v40;
			LODWORD(v32) = (v30 << 16) + v18 * (v10[v32 - 2] - v30);
			*(float*)(v12 - 4) = _mm_cvtepi32_ps(v31).m128_f32[0] * 4.6566129e-10;
			*(float*)(v12 + 4i64 * v39 - 4) = (float)(int)v32 * 4.6566129e-10;
			v5 += v26 >> 10;
			v18 = (unsigned __int16)v5;
			v16 = HIWORD(v5);
		} while (HIWORD(v5) <= v40 - 1);
		v6 = a4;
	}
	v33 = v23;
	*((_DWORD*)v6 + 11) = v7;
	if (v16 < v23)
		v33 = v16;
	if (v33)
	{
		v34 = 2 * v33;
		v35 = v10[(unsigned int)(v34 + 1) - 2];
		*v6 = v10[v34 - 2];
		v6[1] = v35;
	}
	v36 = (v12 - v43) >> 2;
	*((_DWORD*)v6 + 8) = v5 - (v33 << 16);
	*(_WORD*)(a1 + 18) -= v33;
	*(_WORD*)(a2 + 18) = v6[14] + v36;
	if (v33 == v23)
		*((_DWORD*)v6 + 6) = 0;
	else
		*((_DWORD*)v6 + 6) += v33;
	if ((_DWORD)v36 == v42)
		return 45i64;
	*((_DWORD*)v6 + 7) += v36;
	return 43i64;
}

