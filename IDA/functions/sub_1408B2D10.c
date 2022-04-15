#include "../winhttp.h"

//----- (00000001408B2D10) ----------------------------------------------------
__m128* __fastcall sub_1408B2D10(__m128* a1, __m128* a2, __int64 a3, int a4, int* a5, int* a6)
{
	__m128* v6; // rbx
	float* v7; // rsi
	__int64 v8; // r11
	__int64 v10; // rdx
	_DWORD* v11; // rcx
	__m128* v12; // r8
	__m128* result; // rax
	int* v14; // r10
	int v15; // eax
	unsigned __int64* v16; // rcx
	unsigned __int64* v17; // rdx
	float v18; // xmm1_4
	float v19; // xmm3_4
	unsigned __int64 v20; // rax
	unsigned __int64* v21; // rcx
	float v22; // xmm1_4
	float v23; // xmm3_4
	float v24; // xmm1_4
	float v25; // xmm3_4
	int v26; // ecx
	float v27; // xmm2_4
	float v28; // xmm3_4
	float v29; // xmm3_4
	int v30; // [rsp+30h] [rbp-30h]
	unsigned __int64 v31; // [rsp+38h] [rbp-28h]
	unsigned __int64 v32; // [rsp+38h] [rbp-28h]
	int v33; // [rsp+38h] [rbp-28h]
	__int64 v34; // [rsp+40h] [rbp-20h]
	__m128* v35; // [rsp+48h] [rbp-18h]
	int v36; // [rsp+50h] [rbp-10h]
	int v38; // [rsp+80h] [rbp+20h]
	int v40; // [rsp+98h] [rbp+38h]
	__int64 v41; // [rsp+A0h] [rbp+40h]
	unsigned __int64 v42; // [rsp+A0h] [rbp+40h]
	unsigned __int64 v43; // [rsp+A0h] [rbp+40h]
	unsigned __int64 v44; // [rsp+A0h] [rbp+40h]
	unsigned __int64 v45; // [rsp+A0h] [rbp+40h]

	v40 = a4;
	v6 = a1;
	v7 = (float*)a1;
	v8 = a3;
	v10 = a5[1];
	v11 = a5 + 2;
	v38 = *a5;
	v30 = v10;
	v41 = (__int64)(a5 + 2);
	v12 = (__m128*)((char*)v6 + 8 * v38 * (int)v10);
	v35 = v12;
	if ((_DWORD)v10 == 1)
	{
		do
		{
			result = (__m128*)a2->m128_u64[0];
			v6 = (__m128*)((char*)v6 + 8);
			a2 = (__m128*)((char*)a2 + 8 * (unsigned int)(a4 * v8));
			v6[-1].m128_u64[1] = (unsigned __int64)result;
		} while (v6 != v12);
		v14 = a6;
		goto LABEL_19;
	}
	v14 = a6;
	if (*a6 == 1024)
	{
		if (v11[1] != 1)
		{
		LABEL_14:
			v15 = v38;
		LABEL_15:
			v26 = v8 * v15;
			v33 = 8 * v8 * a4;
			v36 = v8 * v15;
			v34 = 8 * v10;
			do
			{
				result = (__m128*)sub_1408B2D10((_DWORD)v6, (_DWORD)a2, v26, a4, v41, (__int64)v14);
				v6 = (__m128*)((char*)v6 + v34);
				LODWORD(a2) = v33 + (_DWORD)a2;
				v14 = a6;
				a4 = v40;
				v26 = v36;
			} while (v6 != v35);
			v7 = (float*)a1;
			v8 = a3;
			goto LABEL_18;
		}
		if (*v11 == 4 && v8 == 64 && a4 == 1)
			return sub_1408B1F30(v6, a2, (__int64)a6);
	}
	if (v11[1] != 1)
		goto LABEL_14;
	v15 = v38;
	if (*v11 != 2 || v38 != 4)
		goto LABEL_15;
	v16 = (unsigned __int64*)a2 + v8;
	v42 = a2->m128_u64[0];
	v17 = &v16[v8];
	LODWORD(v18) = HIDWORD(a2->m128_u64[0]);
	v31 = a2[2 * v8].m128_u64[0];
	v19 = *(float*)&v31 + COERCE_FLOAT(a2->m128_u64[0]);
	v6->m128_f32[2] = COERCE_FLOAT(a2->m128_u64[0]) - *(float*)&v31;
	v6->m128_f32[3] = v18 - *((float*)&v31 + 1);
	v6->m128_f32[1] = *((float*)&v31 + 1) + *((float*)&v42 + 1);
	v6->m128_f32[0] = v19;
	v43 = *v16;
	v20 = v16[4 * v8];
	v21 = &v17[v8];
	v6[1].m128_f32[2] = *(float*)&v43 - *(float*)&v20;
	v6[1].m128_f32[3] = *((float*)&v43 + 1) - *((float*)&v20 + 1);
	v6[1].m128_f32[1] = *((float*)&v20 + 1) + *((float*)&v43 + 1);
	v6[1].m128_f32[0] = *(float*)&v20 + *(float*)&v43;
	v44 = *v17;
	v32 = v17[4 * v8];
	LODWORD(v22) = HIDWORD(*v17);
	v23 = *(float*)&v32 + COERCE_FLOAT(*v17);
	v6[2].m128_f32[2] = COERCE_FLOAT(*v17) - *(float*)&v32;
	v6[2].m128_f32[3] = v22 - *((float*)&v32 + 1);
	v6[2].m128_f32[1] = *((float*)&v32 + 1) + *((float*)&v44 + 1);
	v6[2].m128_f32[0] = v23;
	v45 = *v21;
	result = (__m128*)v21[4 * v8];
	LODWORD(v24) = HIDWORD(*v21);
	v25 = *(float*)&result + COERCE_FLOAT(*v21);
	v6[3].m128_f32[2] = COERCE_FLOAT(*v21) - *(float*)&result;
	v6[3].m128_f32[3] = v24 - *((float*)&result + 1);
	v6[3].m128_f32[0] = v25;
	v6[3].m128_f32[1] = *((float*)&result + 1) + *((float*)&v45 + 1);
LABEL_18:
	LODWORD(v10) = v30;
LABEL_19:
	switch (v38)
	{
	case 2:
		if ((_DWORD)v10 == 1)
		{
			v27 = v7[2];
			v28 = v7[3];
			v7[2] = *v7 - v27;
			v7[3] = v7[1] - v28;
			v29 = v28 + v7[1];
			*v7 = v27 + *v7;
			v7[1] = v29;
		}
		else
		{
			return (__m128*)sub_1408B1980((__int64)v7, v8, (__int64)v14, v10);
		}
		break;
	case 3:
		return (__m128*)sub_1408B2300((__int64)v7, v8, (__int64)v14, (int)v10);
	case 4:
		if ((_DWORD)v10 == 1 && v8 == 256)
		{
			return (__m128*)sub_1408B1A10((__int64)v7, (__int64)v14);
		}
		else if ((int)v10 % 2)
		{
			return (__m128*)sub_1408B2950(v7, v8, v14, v10, 4);
		}
		else
		{
			return (__m128*)sub_1408B1BC0((__int64)v7, v8, (__int64)v14, (int)v10);
		}
	case 5:
		return (__m128*)sub_1408B24C0((__int64)v7, v8, (__int64)v14, v10);
	default:
		return (__m128*)sub_1408B2950(v7, v8, v14, v10, v38);
	}
	return result;
}

