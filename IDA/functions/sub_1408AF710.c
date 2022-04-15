//----- (00000001408AF710) ----------------------------------------------------
char __fastcall sub_1408AF710(unsigned int* a1, unsigned __int64 a2, int a3, _OWORD* a4)
{
	unsigned int v7; // ebp
	unsigned int v8; // r12d
	unsigned int v9; // r11d
	__int64 v10; // rsi
	__m128* v11; // r8
	__int64 v12; // rbx
	_OWORD* v13; // rdx
	unsigned int v14; // r10d
	unsigned int v15; // edi
	__int64 v16; // rax
	__m128 v17; // xmm0
	__m128 v18; // xmm1
	unsigned int v19; // eax
	__int64 v20; // rcx
	float v21; // xmm0_4
	float v22; // xmm1_4
	float v23; // xmm1_4
	float v24; // xmm0_4
	float v25; // xmm1_4
	signed __int64 v26; // r8
	__int64 v27; // rcx
	float v28; // xmm0_4
	unsigned int v29; // r11d
	unsigned __int64 v30; // rdx
	__int64 v31; // rax
	__m128 v32; // xmm0
	__m128 v33; // xmm1
	unsigned int v34; // eax
	__int64 v35; // rcx
	float v36; // xmm0_4
	float v37; // xmm1_4
	float v38; // xmm1_4
	float v39; // xmm0_4
	float v40; // xmm1_4
	unsigned __int64 v41; // rdx
	__int64 v42; // rax
	float v43; // xmm0_4
	char result; // al

	if (!a2)
		return 0;
	v7 = *a1;
	v8 = a1[3];
	v9 = a1[6];
	if (v9 > *a1 - v8)
		return 0;
	v10 = a1[1];
	v11 = (__m128*)a2;
	v12 = v7 - (unsigned int)v10;
	v13 = (_OWORD*)((char*)a4 + 4 * v10);
	if (v9 < (unsigned int)v12)
		v12 = v9;
	v14 = 0;
	v15 = 0;
	if ((_DWORD)v12)
	{
		if ((unsigned int)v12 >= 4)
		{
			v16 = (unsigned int)(v12 - 1);
			if ((unsigned __int64)v13 <= a2 + 4 * v16 && (unsigned __int64)v13 + 4 * v16 >= a2)
			{
				LODWORD(v10) = a1[1];
			}
			else
			{
				do
				{
					v17 = *(__m128*)v13;
					v18 = *v11;
					v15 += 4;
					++v13;
					++v11;
					*(v13 - 1) = _mm_add_ps(v18, v17);
				} while (v15 < (unsigned __int64)((unsigned int)v12 - (v12 & 3)));
				LODWORD(v10) = a1[1];
			}
		}
		if (v15 < (unsigned int)v12)
		{
			if ((int)(v12 - v15) >= 4)
			{
				v19 = (((unsigned int)v12 - v15 - 4) >> 2) + 1;
				v20 = v19;
				v15 += 4 * v19;
				do
				{
					v21 = *(float*)v13;
					v22 = v11->m128_f32[1];
					++v13;
					++v11;
					v23 = v22 + *((float*)v13 - 3);
					*((float*)v13 - 4) = v21 + v11[-1].m128_f32[0];
					v24 = v11[-1].m128_f32[2];
					*((float*)v13 - 3) = v23;
					v25 = v11[-1].m128_f32[3] + *((float*)v13 - 1);
					*((float*)v13 - 2) = v24 + *((float*)v13 - 2);
					*((float*)v13 - 1) = v25;
					--v20;
				} while (v20);
			}
			if (v15 < (unsigned int)v12)
			{
				v26 = (char*)v11 - (char*)v13;
				v27 = (int)(v12 - v15);
				do
				{
					v28 = *(float*)((char*)v13 + v26);
					v13 = (_OWORD*)((char*)v13 + 4);
					*((float*)v13 - 1) = v28 + *((float*)v13 - 1);
					--v27;
				} while (v27);
			}
		}
	}
	v29 = v9 - v12;
	if (v29)
	{
		v30 = a2 + 4 * v12;
		if (v29 >= 4)
		{
			v31 = v29 - 1;
			if ((unsigned __int64)a4 > v30 + 4 * v31 || (unsigned __int64)a4 + 4 * v31 < v30)
			{
				do
				{
					v32 = *(__m128*)a4;
					v33 = *(__m128*)v30;
					v14 += 4;
					++a4;
					v30 += 16i64;
					*(a4 - 1) = _mm_add_ps(v33, v32);
				} while (v14 < v29 - (v29 & 3));
			}
		}
		if (v14 < v29)
		{
			if ((int)(v29 - v14) >= 4)
			{
				v34 = ((v29 - v14 - 4) >> 2) + 1;
				v35 = v34;
				v14 += 4 * v34;
				do
				{
					v36 = *(float*)v30;
					v37 = *(float*)(v30 + 4);
					++a4;
					v30 += 16i64;
					v38 = v37 + *((float*)a4 - 3);
					*((float*)a4 - 4) = v36 + *((float*)a4 - 4);
					v39 = *(float*)(v30 - 8);
					*((float*)a4 - 3) = v38;
					v40 = *(float*)(v30 - 4) + *((float*)a4 - 1);
					*((float*)a4 - 2) = v39 + *((float*)a4 - 2);
					*((float*)a4 - 1) = v40;
					--v35;
				} while (v35);
			}
			if (v14 < v29)
			{
				v41 = v30 - (_QWORD)a4;
				v42 = (int)(v29 - v14);
				do
				{
					v43 = *(float*)((char*)a4 + v41);
					a4 = (_OWORD*)((char*)a4 + 4);
					*((float*)a4 - 1) = v43 + *((float*)a4 - 1);
					--v42;
				} while (v42);
			}
		}
	}
	a1[3] = v8 + a3;
	result = 1;
	a1[1] = ((int)v10 + a3) % v7;
	return result;
}
// 1408AF878: conditional instruction was optimized away because r11d.4!=0

