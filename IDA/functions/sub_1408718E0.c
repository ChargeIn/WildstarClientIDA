//----- (00000001408718E0) ----------------------------------------------------
void __fastcall sub_1408718E0(__m128* a1, __int64* a2)
{
	__m128* v2; // rbp
	__m128* v3; // r13
	int v5; // edx
	unsigned int v6; // r15d
	unsigned int i; // esi
	unsigned int v8; // r8d
	float v9; // xmm7_4
	unsigned int v10; // r12d
	float v11; // xmm8_4
	unsigned __int16 v12; // r9
	__int64 v13; // rcx
	__int64 v14; // r8
	__int64 v15; // rdx
	_DWORD* v16; // r8
	unsigned int v17; // r14d
	__int16 v18; // ax
	char v19; // dl
	unsigned __int16 v20; // ax
	float v21; // xmm0_4
	float v22; // xmm0_4
	float v23; // xmm0_4
	float v24; // xmm2_4
	float v25; // xmm4_4
	unsigned int v26; // ebx
	__int64 v27; // rbp
	__int64 v28; // rbx
	unsigned int v30; // [rsp+110h] [rbp+18h]
	__int64 v31; // [rsp+118h] [rbp+20h]

	v2 = a1 + 1;
	v3 = a1;
	v31 = (__int64)&a1[1];
	sub_1408722D0(a1 + 1);
	if (!v3[12].m128_i8[13])
	{
		v5 = *((_DWORD*)a2 + 2);
		v6 = 0;
		for (i = 0; v5; v5 &= v5 - 1)
			++i;
		v8 = *((unsigned __int16*)a2 + 9);
		v30 = v8;
		if (v3[12].m128_i16[4] >= 8u)
		{
			if (i)
			{
				v28 = 0i64;
				do
				{
					sub_140871D50((__int64)v2, (float*)(*a2 + 4 * v28 * *((unsigned __int16*)a2 + 8)), v8, v6);
					v8 = v30;
					++v6;
					++v28;
				} while (v6 < i);
			}
		}
		else
		{
			v9 = v3[12].m128_f32[0];
			v10 = 0;
			v11 = v3[12].m128_f32[1] - v9;
			if (v9 <= 0.1)
			{
				if (v8 < 2)
					return;
				v12 = 0;
				if (i)
				{
					do
					{
						v13 = *a2;
						v14 = v12++;
						v15 = v14 * *((unsigned __int16*)a2 + 8);
						v16 = (_DWORD*)(v3[11].m128_u64[0] + 16 * v14);
						v16[2] = *(_DWORD*)(*a2 + 4 * v15 + 4);
						v16[3] = *(_DWORD*)(v13 + 4 * v15);
						*v16 = *(_DWORD*)(v13 + 4 * v15 + 4);
						v16[1] = *(_DWORD*)(v13 + 4 * v15);
					} while (v12 < i);
					v8 = v30;
				}
				v10 = 2;
			}
			for (; v10 < v8; v10 += v17)
			{
				v17 = v8 - v10;
				if (dword_140C110C0 < v8 - v10)
					v17 = dword_140C110C0;
				v18 = v3[12].m128_i16[4];
				if ((unsigned __int16)v18 < 8u)
				{
					v19 = v3[12].m128_i8[12];
					v20 = v18 + 1;
					v3[12].m128_i16[4] = v20;
					v21 = (float)((float)((float)v20 * v11) * 0.125) + v9;
					v3[12].m128_f32[0] = v21;
					v22 = sub_14087C7E0(v21, v19) / (float)dword_140C110B4;
					if (v22 > 0.44999999)
						v22 = 0.44999999;
					v23 = sub_1408FD8A4(v22 * 3.1415927);
					v24 = (float)(1.0 / v23) * (float)(1.0 / v23);
					v25 = 1.0 / (float)((float)((float)((float)(1.0 / v23) * 1.4142135) + 1.0) + v24);
					sub_1408A8E90(
						v2,
						v25,
						v25 * 2.0,
						v25,
						(float)((float)(1.0 - v24) * 2.0) * v25,
						(float)((float)(1.0 - (float)((float)(1.0 / v23) * 1.4142135)) + v24) * v25);
					v8 = v30;
				}
				v26 = 0;
				if (i)
				{
					v27 = 0i64;
					do
					{
						sub_140871D50(v31, (float*)(*a2 + 4 * (v10 + v27 * *((unsigned __int16*)a2 + 8))), v17, v26++);
						++v27;
					} while (v26 < i);
					v3 = a1;
					v2 = (__m128*)v31;
					v8 = v30;
				}
			}
			if (v3[12].m128_i16[4] >= 8u)
				v3[12].m128_i8[13] = v3[12].m128_f32[1] <= 0.1;
		}
	}
}
// 140C110B4: using guessed type int dword_140C110B4;
// 140C110C0: using guessed type int dword_140C110C0;

