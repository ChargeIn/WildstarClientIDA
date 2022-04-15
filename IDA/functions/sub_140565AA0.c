//----- (0000000140565AA0) ----------------------------------------------------
__m128 __fastcall sub_140565AA0(__int64 a1, __int64 a2, __int64 a3, float a4, float a5)
{
	float v7; // xmm10_4
	__int64 v8; // rax
	float v9; // xmm6_4
	float v10; // xmm0_4
	__int128 v11; // xmm9
	float v12; // xmm10_4
	__int64 v13; // rax
	int v14; // eax
	__int128 v15; // xmm6
	float v16; // xmm8_4
	double v17; // xmm7_8
	float v18; // xmm0_4
	int v19; // eax
	float v20; // xmm9_4
	__int64 v21; // rax
	int v22; // xmm0_4
	__int64 v23; // rax
	int v24; // xmm0_4
	__int64 v25; // rax
	int v26; // xmm0_4
	__int64 v27; // rax
	int v28; // eax
	float v29; // xmm0_4
	float v30; // xmm9_4
	__int64 v31; // xmm7_8

	if (a2)
	{
		v7 = *(float*)(a2 + 1756);
		v8 = sub_140200220(0x4F2u);
		v9 = 0.25;
		if (v8)
			v10 = *(float*)(v8 + 24);
		else
			v10 = 0.25;
		v11 = *(unsigned int*)(a2 + 1764);
		v12 = (float)(v7 * v10) * a4;
		v13 = sub_140200220(0x4F2u);
		if (v13)
			v9 = *(float*)(v13 + 28);
		v14 = *(_DWORD*)(a2 + 128);
		*(float*)&v11 = (float)(*(float*)&v11 * v9) * a5;
		v15 = v11;
		*(float*)&v15 = *(float*)&v11 + v12;
		if (v14 != 20 && v14 != 23)
		{
			v16 = 2.0;
			v17 = 0.0;
			if (v12 == 0.0 || *(float*)&v11 == 0.0)
				v18 = 1.0;
			else
				v18 = 2.0;
			v19 = dword_140DC33EC;
			v20 = *(float*)&v15 / v18;
			if ((dword_140DC33EC & 1) == 0)
			{
				dword_140DC33EC |= 1u;
				v21 = sub_140200220(0x2C8u);
				if (v21)
					v22 = *(_DWORD*)(v21 + 24);
				else
					v22 = 1116471296;
				v19 = dword_140DC33EC;
				dword_140DC33F0 = v22;
			}
			if ((v19 & 2) == 0)
			{
				dword_140DC33EC = v19 | 2;
				v23 = sub_140200220(0x2C8u);
				if (v23)
					v24 = *(_DWORD*)(v23 + 28);
				else
					v24 = 1120403456;
				v19 = dword_140DC33EC;
				dword_140DC33F4 = v24;
			}
			if ((v19 & 4) == 0)
			{
				dword_140DC33EC = v19 | 4;
				v25 = sub_140200220(0x2C8u);
				if (v25)
					v26 = *(_DWORD*)(v25 + 32);
				else
					v26 = 1065353216;
				v19 = dword_140DC33EC;
				dword_140DC33F8 = v26;
			}
			if ((v19 & 8) != 0)
			{
				v16 = *(float*)&dword_140DC33FC;
			}
			else
			{
				dword_140DC33EC = v19 | 8;
				v27 = sub_140200220(0x2C8u);
				if (v27)
					v16 = *(float*)(v27 + 36);
				dword_140DC33FC = LODWORD(v16);
			}
			v28 = *(_DWORD*)(a2 + 60);
			if (!v28)
				v28 = *(_DWORD*)(a2 + 56);
			v29 = (float)((float)((float)v28 * *(float*)&dword_140DC33F0) + *(float*)&dword_140DC33F4) * v20;
			if (*(float*)&v15 <= v29)
			{
				if (v16 == 0.0)
					return (__m128)0i64;
				else
					*(float*)&v15 = *(float*)&v15 / v16;
			}
			else
			{
				if (v16 == 0.0)
					v30 = 0.0;
				else
					v30 = v29 / v16;
				if (v29 != 0.0)
				{
					HIDWORD(v31) = DWORD1(v15);
					*(float*)&v31 = (float)(*(float*)&v15 - v29) / v29;
					*(_QWORD*)&v17 = v31 ^ 0x8000000080000000ui64;
				}
				v15 = 0x3F800000u;
				*(float*)&v15 = (float)((float)((float)(1.0 - sub_1408FC7F0(v17)) * *(float*)&dword_140DC33F8) + 1.0) * v30;
			}
		}
		return (__m128)v15;
	}
	else
	{
		return (__m128)0i64;
	}
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140DC33EC: using guessed type int dword_140DC33EC;
// 140DC33F0: using guessed type int dword_140DC33F0;
// 140DC33F4: using guessed type int dword_140DC33F4;
// 140DC33F8: using guessed type int dword_140DC33F8;
// 140DC33FC: using guessed type int dword_140DC33FC;

