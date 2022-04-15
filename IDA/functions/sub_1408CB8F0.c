//----- (00000001408CB8F0) ----------------------------------------------------
int* __fastcall sub_1408CB8F0(__int64 a1, unsigned int a2, unsigned int a3, int* a4, int a5, float a6, float a7)
{
	__m128 v7; // xmm0
	float v8; // xmm7_4
	__int64 v10; // rbp
	float v13; // xmm6_4
	int v14; // ebx
	float v15; // xmm1_4
	float v16; // xmm2_4
	float v17; // xmm3_4
	float v18; // xmm8_4
	int* result; // rax
	unsigned int v20; // r11d
	int v21; // r9d
	float v22; // xmm1_4
	unsigned int v23; // r8d
	int* v24; // rdx
	unsigned __int64 v25; // r10

	v7 = (__m128)0x3F800000u;
	v8 = a7;
	v10 = a3;
	if (a7 > 1.0)
		v8 = 1.0;
	v13 = a6;
	if (a6 > 1.0)
		v13 = 1.0;
	v14 = a5;
	v15 = 0.0;
	v16 = 0.0;
	v17 = 0.0;
	if ((a5 & 1) != 0)
		v15 = 1.0;
	if ((a5 & 2) != 0)
		v15 = v15 + 1.0;
	if ((a5 & 0x10) != 0)
		v15 = v15 + 1.0;
	if ((a5 & 0x20) != 0)
		v15 = v15 + 1.0;
	if ((a5 & 4) != 0)
		v16 = v13 * v13;
	if ((a5 & 8) != 0)
		v17 = v8 * v8;
	v7.m128_f32[0] = 1.0 / (float)((float)(v16 + v15) + v17);
	LODWORD(v18) = _mm_sqrt_ps(v7).m128_u32[0];
	result = sub_1407E4830(a4, 0i64, 4i64 * a2);
	v20 = 0;
	v21 = 1;
	if (a5)
	{
		do
		{
			if ((v21 & v14) != 0 || v14 == 8)
			{
				v22 = v18;
				if ((v21 & 4) != 0)
					v22 = v18 * v13;
				if (v14 == 8)
				{
					v14 = 0;
					v22 = v22 * v8;
				LABEL_25:
					v23 = a2;
					v24 = a4;
					if (a2)
					{
						v25 = *(_QWORD*)a1 + 4 * (v10 + v20 * (unsigned __int64)*(unsigned __int16*)(a1 + 16)) - (_QWORD)a4;
						do
						{
							++v24;
							*((float*)v24 - 1) = (float)(v22 * *(float*)((char*)v24 + v25 - 4)) + *((float*)v24 - 1);
							--v23;
						} while (v23);
					}
					result = (int*)(unsigned int)~v21;
					v14 &= (unsigned int)result;
					++v20;
					goto LABEL_29;
				}
				if ((v21 & 8) == 0)
					goto LABEL_25;
			}
		LABEL_29:
			v21 *= 2;
		} while (v14);
	}
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

