//----- (000000014084E600) ----------------------------------------------------
__m128 __fastcall sub_14084E600(__int64 a1, unsigned __int64 a2)
{
	__m128 result; // xmm0
	unsigned __int8* v4; // r8
	__m128 v5; // xmm6
	unsigned int v6; // r9d
	__int64 v7; // rcx
	__int64 v8; // rdx
	float* v9; // rbx
	float v10; // xmm0_4
	float v11; // xmm7_4

	result = sub_1408529A0(a1, a2);
	v4 = *(unsigned __int8**)(a1 + 128);
	v5 = result;
	if (v4)
	{
		v6 = *v4;
		v7 = 0i64;
		while (1)
		{
			v8 = (unsigned int)(v7 + 1);
			if (v4[v8] == 9)
				break;
			v7 = (unsigned int)v8;
			if ((unsigned int)v8 >= v6)
				return result;
		}
		v9 = (float*)&v4[8 * v7 + ((v6 + 4) & 0xFFFFFFFC)];
		if (v9)
		{
			v10 = 0.0;
			v11 = v9[1] - *v9;
			if (v11 != 0.0)
				v10 = (double)(int)sub_1407DDB28() * 0.00003051850947599719 * v11;
			v5.m128_f32[0] = v5.m128_f32[0] + (float)(v10 + *v9);
		}
	}
	return v5;
}

