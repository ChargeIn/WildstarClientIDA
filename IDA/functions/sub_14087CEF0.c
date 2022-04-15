#include "../winhttp.h"

//----- (000000014087CEF0) ----------------------------------------------------
__int64 __fastcall sub_14087CEF0(__int64 a1, __int64 a2, int a3, __int16* a4)
{
	unsigned int v4; // ebp
	unsigned int v5; // r11d
	unsigned int v6; // r13d
	__int64 v7; // r10
	__int64 v8; // r12
	unsigned int v10; // r8d
	__int16* v11; // rbx
	int v12; // ecx
	unsigned int v13; // r9d
	int v14; // esi
	unsigned int v15; // eax
	__int16* v16; // r14
	__int64 v17; // rdi
	unsigned int v18; // ecx
	int v19; // edx
	int v20; // r8d
	int v21; // r10d
	int v22; // edx
	int v23; // r15d
	int v24; // r8d
	__m128i v25; // xmm0
	int v26; // eax
	unsigned int v27; // r10d
	unsigned int v28; // r15d
	unsigned int v29; // r12d
	__int64 v30; // rbx
	__int64 v31; // r10
	int v32; // edx
	float v33; // xmm0_4
	int v34; // eax
	unsigned int v35; // r8d
	__int64 v36; // rdx
	__int16 v37; // ax
	unsigned int v38; // ecx
	unsigned int v40; // [rsp+0h] [rbp-58h]
	unsigned int v43; // [rsp+70h] [rbp+18h]

	v4 = *((_DWORD*)a4 + 9);
	v5 = *((_DWORD*)a4 + 8);
	v6 = *(unsigned __int16*)(a1 + 18);
	v7 = *((unsigned int*)a4 + 7);
	v8 = *(unsigned __int16*)(a2 + 16);
	v10 = a3 - v7;
	v11 = a4;
	v12 = *((_DWORD*)a4 + 6);
	v13 = HIWORD(v5);
	v40 = v10;
	v14 = (unsigned __int16)v5;
	v15 = (v4 - v5 + 0xFFFF) / v4;
	v16 = (__int16*)(*(_QWORD*)a1 + 2i64 * (unsigned int)(2 * v12));
	if (v10 < v15)
		v15 = v10;
	v17 = *(_QWORD*)a2 + 4 * v7;
	v18 = v15;
	v43 = v15;
	if (v15)
	{
		v19 = *v11;
		v20 = v11[1];
		v21 = *v16 - v19;
		v22 = v19 << 16;
		v23 = v16[1] - v20;
		v24 = v20 << 16;
		do
		{
			v5 += v4;
			v17 += 4i64;
			v13 = HIWORD(v5);
			v25 = _mm_cvtsi32_si128(v22 + v14 * v21);
			v26 = v14 * v23;
			v14 = (unsigned __int16)v5;
			*(float*)(v17 - 4) = _mm_cvtepi32_ps(v25).m128_f32[0] * 4.6566129e-10;
			*(float*)(v17 + 4 * v8 - 4) = (float)(v24 + v26) * 4.6566129e-10;
			--v18;
		} while (v18);
		v10 = v40;
	}
	v27 = v43;
	v28 = (v4 + (v6 << 16) - v5 - 1) / v4;
	if (v10 - v43 < v28)
		v28 = v10 - v43;
	v29 = v28;
	if (v28)
	{
		v30 = *(unsigned __int16*)(a2 + 16);
		do
		{
			v31 = 2 * v13;
			v5 += v4;
			v17 += 4i64;
			v32 = v16[(unsigned int)(v31 + 1) - 2] << 16;
			v13 = HIWORD(v5);
			v33 = (float)((v16[v31 - 2] << 16) + v14 * (v16[(unsigned int)(v31 + 2) - 2] - v16[v31 - 2]));
			v34 = v14 * (v16[(unsigned int)(v31 + 3) - 2] - v16[(unsigned int)(v31 + 1) - 2]);
			v14 = (unsigned __int16)v5;
			*(float*)(v17 - 4) = v33 * 4.6566129e-10;
			*(float*)(v17 + 4 * v30 - 4) = (float)(v32 + v34) * 4.6566129e-10;
			--v29;
		} while (v29);
		v11 = a4;
		v27 = v43;
	}
	v35 = v6;
	if (v13 < v6)
		v35 = v13;
	if (v35)
	{
		v36 = 2 * v35;
		v37 = v16[(unsigned int)(v36 + 1) - 2];
		*v11 = v16[v36 - 2];
		v11[1] = v37;
	}
	v38 = v28 + v27;
	*((_DWORD*)v11 + 8) = v5 - (v35 << 16);
	*(_WORD*)(a1 + 18) -= v35;
	*(_WORD*)(a2 + 18) = v11[14] + v28 + v27;
	if (v35 == v6)
		*((_DWORD*)v11 + 6) = 0;
	else
		*((_DWORD*)v11 + 6) += v35;
	if (v38 == v40)
		return 45i64;
	*((_DWORD*)v11 + 7) += v38;
	return 43i64;
}

