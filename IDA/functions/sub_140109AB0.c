//----- (0000000140109AB0) ----------------------------------------------------
double __fastcall sub_140109AB0(float* a1, int* a2, int* a3)
{
	_QWORD* v3; // r9
	double result; // xmm0_8
	double v8; // xmm6_8
	int v9; // edi
	__int64 v10; // rbx
	double v11; // xmm1_8
	__int64 v12; // rax
	double v13; // xmm0_8
	double v14; // xmm1_8
	__int64 v15; // rax
	float v16; // [rsp+60h] [rbp+8h] BYREF

	v3 = *(_QWORD**)a1;
	if (!*(_QWORD*)a1)
		return 0.0;
	if ((unsigned int)((v3[8] - v3[7]) / 304i64))
	{
		*(_QWORD*)&v14 = (unsigned int)dword_140C63664;
		*(float*)&v14 = (float)(*(float*)&dword_140C63664 - a1[2]) * a1[3];
		v15 = sub_140101180((__int64)v3, v14, &v16);
		return sub_1400FFA10(v15, a2, a3);
	}
	else
	{
		v8 = 0.0;
		v9 = 0;
		v10 = 0i64;
		if ((int)((__int64)(v3[12] - v3[11]) >> 3) <= 0)
		{
			return v8;
		}
		else
		{
			while (1)
			{
				if (v10 >= 0)
				{
					if (v9 < (int)((__int64)(v3[12] - v3[11]) >> 3))
						v3 = *(_QWORD**)(v3[11] + 8 * v10);
				}
				else
				{
					v3 = 0i64;
				}
				*(_QWORD*)&v11 = (unsigned int)dword_140C63664;
				*(float*)&v11 = (float)(*(float*)&dword_140C63664 - a1[2]) * a1[3];
				v12 = sub_140101180((__int64)v3, v11, &v16);
				v13 = sub_1400FFA10(v12, a2, a3);
				*(float*)&v8 = *(float*)&v8 + *(float*)&v13;
				if (*(float*)&v8 >= 1.0)
					break;
				v3 = *(_QWORD**)a1;
				++v9;
				++v10;
				if (v9 >= (int)((__int64)(*(_QWORD*)(*(_QWORD*)a1 + 96i64) - *(_QWORD*)(*(_QWORD*)a1 + 88i64)) >> 3))
					return v8;
			}
			*(_QWORD*)&result = 1065353216i64;
		}
	}
	return result;
}
// 140C63664: using guessed type int dword_140C63664;

