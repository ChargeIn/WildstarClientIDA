//----- (00000001408B06F0) ----------------------------------------------------
__int64 __fastcall sub_1408B06F0(__int64 a1, __int64* a2)
{
	float v2; // xmm3_4
	unsigned int v3; // r8d
	__int64 result; // rax
	_QWORD* v7; // rcx
	__int64 v8; // rdx
	float v9; // xmm6_4
	__m128 v10; // xmm5
	__m128 v11; // xmm1
	float v12; // xmm2_4
	float v13; // xmm2_4
	__m128 v14; // xmm1
	float v15; // xmm2_4
	float v16; // xmm2_4
	__m128 v17; // xmm1
	float v18; // xmm3_4
	__int64 v19; // [rsp+88h] [rbp+10h]
	__int64 v20; // [rsp+90h] [rbp+18h]

	v2 = -1.5707964;
	v3 = *(_DWORD*)(a1 + 8) >> 1;
	v19 = *a2;
	result = a2[v3];
	v20 = result;
	if (v3 > 1)
	{
		v7 = a2 + 1;
		v8 = v3 - 1;
		do
		{
			result = *v7;
			v9 = COERCE_FLOAT(*v7);
			v10 = (__m128)(unsigned int)HIDWORD(*v7);
			v11 = v10;
			v11.m128_f32[0] = (float)(v10.m128_f32[0] * v10.m128_f32[0]) + (float)(v9 * v9);
			*(_DWORD*)v7 = _mm_sqrt_ps(v11).m128_u32[0];
			if (v9 == 0.0)
			{
				if (v10.m128_f32[0] <= 0.0)
				{
					if (v10.m128_f32[0] == 0.0)
						v13 = 0.0;
					else
						v13 = -1.5707964;
				}
				else
				{
					v13 = 1.5707964;
				}
			}
			else
			{
				v12 = v10.m128_f32[0] / v9;
				if (fabs(v10.m128_f32[0] / v9) >= 1.0)
				{
					v13 = 1.5707964 - (float)((float)(v10.m128_f32[0] / v9) / (float)((float)(v12 * v12) + 0.28));
					if (v10.m128_f32[0] < 0.0)
						v13 = v13 - 3.1415927;
				}
				else
				{
					v13 = v12 / (float)((float)((float)(v12 * 0.28) * v12) + 1.0);
					if (v9 < 0.0)
					{
						if (v10.m128_f32[0] >= 0.0)
							v13 = v13 + 3.1415927;
						else
							v13 = v13 - 3.1415927;
					}
				}
			}
			*((float*)++v7 - 1) = -v13;
			--v8;
		} while (v8);
	}
	v14 = (__m128)HIDWORD(v19);
	v14.m128_f32[0] = (float)(v14.m128_f32[0] * v14.m128_f32[0]) + (float)(*(float*)&v19 * *(float*)&v19);
	*(_DWORD*)a2 = _mm_sqrt_ps(v14).m128_u32[0];
	if (*(float*)&v19 == 0.0)
	{
		if (*((float*)&v19 + 1) <= 0.0)
		{
			if (*((float*)&v19 + 1) == 0.0)
				v16 = 0.0;
			else
				v16 = -1.5707964;
		}
		else
		{
			v16 = 1.5707964;
		}
	}
	else
	{
		v15 = *((float*)&v19 + 1) / *(float*)&v19;
		if (fabs(*((float*)&v19 + 1) / *(float*)&v19) >= 1.0)
		{
			v16 = 1.5707964 - (float)((float)(*((float*)&v19 + 1) / *(float*)&v19) / (float)((float)(v15 * v15) + 0.28));
			if (*((float*)&v19 + 1) < 0.0)
				v16 = v16 - 3.1415927;
		}
		else
		{
			v16 = v15 / (float)((float)((float)(v15 * 0.28) * v15) + 1.0);
			if (*(float*)&v19 < 0.0)
			{
				if (*((float*)&v19 + 1) >= 0.0)
					v16 = v16 + 3.1415927;
				else
					v16 = v16 - 3.1415927;
			}
		}
	}
	*((float*)a2 + 1) = v16;
	v17 = (__m128)HIDWORD(v20);
	v17.m128_f32[0] = (float)(v17.m128_f32[0] * v17.m128_f32[0]) + (float)(*(float*)&v20 * *(float*)&v20);
	LODWORD(a2[v3]) = _mm_sqrt_ps(v17).m128_u32[0];
	if (*(float*)&v20 == 0.0)
	{
		if (*((float*)&v20 + 1) <= 0.0)
		{
			if (*((float*)&v20 + 1) == 0.0)
				v2 = 0.0;
		}
		else
		{
			v2 = 1.5707964;
		}
	}
	else
	{
		v18 = *((float*)&v20 + 1) / *(float*)&v20;
		if (fabs(*((float*)&v20 + 1) / *(float*)&v20) >= 1.0)
		{
			v2 = 1.5707964 - (float)(v18 / (float)((float)(v18 * v18) + 0.28));
			if (*((float*)&v20 + 1) >= 0.0)
				goto LABEL_41;
			goto LABEL_36;
		}
		v2 = v18 / (float)((float)((float)(v18 * 0.28) * v18) + 1.0);
		if (*(float*)&v20 < 0.0)
		{
			if (*((float*)&v20 + 1) >= 0.0)
			{
				v2 = v2 + 3.1415927;
				goto LABEL_41;
			}
		LABEL_36:
			v2 = v2 - 3.1415927;
		}
	}
LABEL_41:
	*((float*)&a2[v3] + 1) = v2;
	*(_BYTE*)(a1 + 13) = 1;
	return result;
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

