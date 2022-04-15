#include "../winhttp.h"

//----- (0000000140565600) ----------------------------------------------------
float __fastcall sub_140565600(__int64 a1, _DWORD* a2, __int64 a3, __int64 a4, float a5)
{
	float* v7; // rbp
	float v8; // xmm6_4
	__int16 v9; // ax
	int v10; // r9d
	__int64 v11; // r8
	__int16 v12; // r10
	int v13; // edx
	int* v14; // rcx
	int v15; // eax
	int v16; // eax
	int v17; // xmm7_4
	float v18; // xmm8_4
	int v19; // eax
	int v20; // eax
	int v21; // eax
	float v22; // xmm0_4
	float v23; // xmm10_4
	double v24; // xmm6_8
	int v25; // eax
	float v26; // xmm8_4
	int v27; // eax
	__int64 v28; // rax
	int v29; // xmm0_4
	__int64 v30; // rax
	int v31; // xmm0_4
	__int64 v32; // rax
	int v33; // xmm0_4
	__int64 v34; // rax
	float v35; // xmm9_4
	int v36; // eax
	float v37; // xmm0_4
	float v38; // xmm8_4
	int v39; // eax
	float v40; // xmm6_4
	int v41; // xmm2_4
	int v42; // eax

	v7 = (float*)(a4 + 152);
	LODWORD(v8) = sub_140566AD0((__int64)a2, a3, a5, a4 + 136, (float*)(a4 + 152)).m128_u32[0];
	v9 = sub_140566D40((__int64)a2, a4 + 136, v7);
	v10 = 0;
	v11 = 4i64;
	v12 = v9;
	v13 = 0;
	v14 = (int*)(a4 + 136);
	do
	{
		v15 = *v14;
		if (*v14 > 0 && (v15 <= 5 || (unsigned int)(v15 - 11) <= 2))
			++v13;
		++v14;
		--v11;
	} while (v11);
	v16 = *(_DWORD*)(a4 + 136);
	v17 = 0;
	v18 = 0.0;
	if (v16 > 0 && (v16 <= 5 || (unsigned int)(v16 - 11) <= 2))
		v18 = *v7;
	v19 = *(_DWORD*)(a4 + 140);
	if (v19 > 0 && (v19 <= 5 || (unsigned int)(v19 - 11) <= 2))
		v18 = v18 + *(float*)(a4 + 156);
	v20 = *(_DWORD*)(a4 + 144);
	if (v20 > 0 && (v20 <= 5 || (unsigned int)(v20 - 11) <= 2))
		v18 = v18 + *(float*)(a4 + 160);
	v21 = *(_DWORD*)(a4 + 148);
	if (v21 > 0 && (v21 <= 5 || (unsigned int)(v21 - 11) <= 2))
		v18 = v18 + *(float*)(a4 + 164);
	v22 = 1.0;
	switch (*(_DWORD*)(a4 + 16))
	{
	case 5:
		v22 = *(float*)(a4 + 72);
		v10 = *(_DWORD*)(a4 + 76);
		break;
	case 8:
	case 0xA:
	case 0xC:
	case 0x21:
	case 0x76:
	case 0x8A:
		v22 = *(float*)(a4 + 64);
		v10 = *(_DWORD*)(a4 + 68);
		break;
	default:
		break;
	}
	v23 = (float)((float)v10 + v8) * v22;
	*(_QWORD*)&v24 = COERCE_UNSIGNED_INT((float)v12);
	if (a2)
	{
		v25 = a2[32];
		if (v25 != 20 && v25 != 23)
		{
			if (v13)
				v26 = fabs(v18 / (float)v13);
			else
				v26 = 0.0;
			v27 = dword_140DC33D8;
			if ((dword_140DC33D8 & 1) == 0)
			{
				dword_140DC33D8 |= 1u;
				v28 = sub_140200220(0x2C8u);
				if (v28)
					v29 = *(_DWORD*)(v28 + 24);
				else
					v29 = 1116471296;
				v27 = dword_140DC33D8;
				dword_140DC33DC = v29;
			}
			if ((v27 & 2) == 0)
			{
				dword_140DC33D8 = v27 | 2;
				v30 = sub_140200220(0x2C8u);
				if (v30)
					v31 = *(_DWORD*)(v30 + 28);
				else
					v31 = 1120403456;
				v27 = dword_140DC33D8;
				dword_140DC33E0 = v31;
			}
			if ((v27 & 4) == 0)
			{
				dword_140DC33D8 = v27 | 4;
				v32 = sub_140200220(0x2C8u);
				if (v32)
					v33 = *(_DWORD*)(v32 + 32);
				else
					v33 = 1065353216;
				v27 = dword_140DC33D8;
				dword_140DC33E4 = v33;
			}
			if ((v27 & 8) != 0)
			{
				v35 = *(float*)&dword_140DC33E8;
			}
			else
			{
				dword_140DC33D8 = v27 | 8;
				v34 = sub_140200220(0x2C8u);
				if (v34)
				{
					v35 = *(float*)(v34 + 36);
					dword_140DC33E8 = LODWORD(v35);
				}
				else
				{
					v35 = 2.0;
					dword_140DC33E8 = 0x40000000;
				}
			}
			v36 = a2[15];
			if (!v36)
				v36 = a2[14];
			v37 = (float)((float)((float)v36 * *(float*)&dword_140DC33DC) + *(float*)&dword_140DC33E0) * v26;
			if (*(float*)&v24 <= v37)
			{
				if (v35 == 0.0)
					LODWORD(v24) = 0;
				else
					*(float*)&v24 = *(float*)&v24 / v35;
			}
			else
			{
				if (v35 == 0.0)
					v38 = 0.0;
				else
					v38 = v37 / v35;
				if (v37 == 0.0)
				{
					v24 = 0.0;
				}
				else
				{
					*(float*)&v24 = (float)(*(float*)&v24 - v37) / v37;
					*(_QWORD*)&v24 ^= 0x8000000080000000ui64;
				}
				*(float*)&v24 = (float)((float)((float)(1.0 - sub_1408FC7F0(v24)) * *(float*)&dword_140DC33E4) + 1.0) * v38;
			}
			if (v35 == 0.0)
				v23 = 0.0;
			else
				v23 = v23 / v35;
		}
	}
	v39 = *(_DWORD*)(a4 + 16);
	v40 = *(float*)&v24 + v23;
	v41 = 1065353216;
	if (v39 == 8 || v39 == 5 || v39 == 138)
		v41 = 0;
	if (a2)
	{
		v42 = *(_DWORD*)(a4 + 20) + 140;
		if ((unsigned int)v42 <= 0xC4)
			v17 = a2[2 * v42 + 369];
	}
	else
	{
		v17 = 1065353216;
	}
	return fmaxf(*(float*)&v41, *(float*)&v17) * v40;
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140DC33D8: using guessed type int dword_140DC33D8;
// 140DC33DC: using guessed type int dword_140DC33DC;
// 140DC33E0: using guessed type int dword_140DC33E0;
// 140DC33E4: using guessed type int dword_140DC33E4;
// 140DC33E8: using guessed type int dword_140DC33E8;

