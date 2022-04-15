#include "../winhttp.h"

//----- (0000000140539B50) ----------------------------------------------------
void __fastcall sub_140539B50(__int64 a1)
{
	__int64 v1; // rbx
	unsigned int v3; // ecx
	int v4; // edx
	__int64 v5; // rax
	int* v6; // rdx
	__int64 v7; // rcx
	__int128 v8; // xmm0
	__int128 v9; // xmm1
	__int128 v10; // xmm0
	__int128 v11; // xmm1
	__int128 v12; // xmm0
	__int128 v13; // xmm1
	__int128 v14; // xmm0
	__int128 v15; // xmm1
	__int128 v16; // xmm1
	__int128 v17; // xmm0
	float v18; // xmm3_4
	float v19; // xmm1_4
	float v20; // xmm4_4
	float v21; // xmm5_4
	float v22; // xmm6_4
	__int64 v23; // rbx
	float v24; // xmm3_4
	float v25; // xmm4_4
	float v26; // xmm5_4
	float v27; // xmm6_4
	float v28; // xmm0_4
	__int64 v29; // [rsp+20h] [rbp-E0h] BYREF
	__int64 v30; // [rsp+28h] [rbp-D8h]
	__int64 v31; // [rsp+30h] [rbp-D0h]
	__int64 v32; // [rsp+38h] [rbp-C8h]
	int v33[206]; // [rsp+40h] [rbp-C0h] BYREF
	int v34; // [rsp+378h] [rbp+278h]
	int v35; // [rsp+37Ch] [rbp+27Ch]
	int v36; // [rsp+380h] [rbp+280h]
	int v37; // [rsp+384h] [rbp+284h]
	int v38; // [rsp+390h] [rbp+290h]
	int v39; // [rsp+394h] [rbp+294h]
	int v40; // [rsp+398h] [rbp+298h]
	int v41; // [rsp+39Ch] [rbp+29Ch]
	int v42; // [rsp+3A8h] [rbp+2A8h]
	int v43; // [rsp+3ACh] [rbp+2ACh]
	int v44; // [rsp+3B0h] [rbp+2B0h]
	int v45; // [rsp+3B4h] [rbp+2B4h]
	int v46; // [rsp+3C0h] [rbp+2C0h]
	int v47; // [rsp+3C4h] [rbp+2C4h]
	int v48; // [rsp+3C8h] [rbp+2C8h]
	int v49; // [rsp+3CCh] [rbp+2CCh]
	int v50; // [rsp+3D8h] [rbp+2D8h]
	int v51; // [rsp+3DCh] [rbp+2DCh]
	int v52; // [rsp+3E0h] [rbp+2E0h]
	int v53; // [rsp+3E4h] [rbp+2E4h]

	v1 = 0i64;
	if ((dword_140DC3300 & 1) != 0)
	{
		v4 = dword_140DC330C;
		v3 = dword_140DC3308;
	}
	else
	{
		v3 = 15000;
		v4 = dword_140C636A8;
		dword_140DC3300 |= 1u;
		dword_140DC3308 = 15000;
		dword_140DC330C = dword_140C636A8;
		dword_140DC3310 = 0;
	}
	if (dword_140C636A8 - v4 > v3)
	{
		dword_140DC3310 = dword_140C636A8 - v4;
		dword_140DC330C = dword_140C636A8;
		v5 = (*(__int64 (**)(void))(*(_QWORD*)qword_140C65670 + 720i64))();
		v6 = v33;
		if ((((unsigned __int8)v33 | (unsigned __int8)v5) & 0xF) != 0)
		{
			sub_1407DB590(v33, (int*)v5, 0x3B0ui64);
		}
		else
		{
			v7 = 7i64;
			do
			{
				v8 = *(_OWORD*)v5;
				v9 = *(_OWORD*)(v5 + 16);
				v6 += 32;
				v5 += 128i64;
				*((_OWORD*)v6 - 8) = v8;
				v10 = *(_OWORD*)(v5 - 96);
				*((_OWORD*)v6 - 7) = v9;
				v11 = *(_OWORD*)(v5 - 80);
				*((_OWORD*)v6 - 6) = v10;
				v12 = *(_OWORD*)(v5 - 64);
				*((_OWORD*)v6 - 5) = v11;
				v13 = *(_OWORD*)(v5 - 48);
				*((_OWORD*)v6 - 4) = v12;
				v14 = *(_OWORD*)(v5 - 32);
				*((_OWORD*)v6 - 3) = v13;
				v15 = *(_OWORD*)(v5 - 16);
				*((_OWORD*)v6 - 2) = v14;
				*((_OWORD*)v6 - 1) = v15;
				--v7;
			} while (v7);
			v16 = *(_OWORD*)(v5 + 16);
			*(_OWORD*)v6 = *(_OWORD*)v5;
			v17 = *(_OWORD*)(v5 + 32);
			*((_OWORD*)v6 + 1) = v16;
			*((_OWORD*)v6 + 2) = v17;
		}
		v18 = *(float*)&dword_140C8AEE0;
		v19 = (float)v53 * 0.0009765625;
		if (*(float*)&dword_140C8AEE0 > 1000000000.0
			|| (v20 = *(float*)&dword_140C8AEDC, *(float*)&dword_140C8AEDC > 1000000000.0)
			|| (v21 = *(float*)&dword_140C8AEE8, *(float*)&dword_140C8AEE8 > 1000000000.0)
			|| (v22 = *(float*)&dword_140C8AEE4, *(float*)&dword_140C8AEE4 > 1000000000.0))
		{
			v18 = 0.0;
			v20 = 0.0;
			v21 = 0.0;
			v22 = 0.0;
		}
		else
		{
			v1 = qword_140C8AEF0;
		}
		v23 = v1 + 1;
		v24 = v18
			+ (float)((float)((float)((float)((float)((float)v34 * 0.001) + (float)((float)v38 * 0.001))
				+ (float)((float)v42 * 0.001))
				+ (float)((float)v46 * 0.001))
				+ (float)((float)v50 * 0.001));
		v25 = v20
			+ (float)((float)((float)((float)((float)((float)v35 * 0.001) + (float)((float)v39 * 0.001))
				+ (float)((float)v43 * 0.001))
				+ (float)((float)v47 * 0.001))
				+ (float)((float)v51 * 0.001));
		qword_140C8AEF0 = v23;
		v26 = v21
			+ (float)((float)((float)((float)((float)((float)v36 * 0.001) + (float)((float)v40 * 0.001))
				+ (float)((float)v44 * 0.001))
				+ (float)((float)v48 * 0.001))
				+ (float)((float)v52 * 0.001));
		v27 = v22
			+ (float)((float)((float)((float)((float)((float)v37 * 0.0009765625) + (float)((float)v41 * 0.0009765625))
				+ (float)((float)v45 * 0.0009765625))
				+ (float)((float)v49 * 0.0009765625))
				+ v19);
		dword_140C8AEE0 = LODWORD(v24);
		dword_140C8AEDC = LODWORD(v25);
		dword_140C8AEE8 = LODWORD(v26);
		dword_140C8AEE4 = LODWORD(v27);
		if ((v23 & 7) == 0)
		{
			v29 = 0i64;
			v30 = 0i64;
			v31 = 0i64;
			v28 = (float)(int)v23;
			v32 = 0i64;
			if (v23 < 0)
				v28 = v28 + 1.8446744e19;
			*(float*)&v31 = (float)((float)((float)((float)((float)v34 * 0.001) + (float)((float)v38 * 0.001))
				+ (float)((float)v42 * 0.001))
				+ (float)((float)v46 * 0.001))
				+ (float)((float)v50 * 0.001);
			*((float*)&v31 + 1) = (float)((float)((float)((float)((float)v35 * 0.001) + (float)((float)v39 * 0.001))
				+ (float)((float)v43 * 0.001))
				+ (float)((float)v47 * 0.001))
				+ (float)((float)v51 * 0.001);
			*(float*)&v32 = (float)((float)((float)((float)((float)v36 * 0.001) + (float)((float)v40 * 0.001))
				+ (float)((float)v44 * 0.001))
				+ (float)((float)v48 * 0.001))
				+ (float)((float)v52 * 0.001);
			*((float*)&v32 + 1) = (float)((float)((float)((float)((float)v37 * 0.0009765625)
				+ (float)((float)v41 * 0.0009765625))
				+ (float)((float)v45 * 0.0009765625))
				+ (float)((float)v49 * 0.0009765625))
				+ v19;
			*(float*)&v29 = (float)(1.0 / v28) * v24;
			*((float*)&v29 + 1) = (float)(1.0 / v28) * v25;
			*(float*)&v30 = (float)(1.0 / v28) * v26;
			*((float*)&v30 + 1) = (float)(1.0 / v28) * v27;
			sub_1403F4900(a1, 0x23Eu, (__int64)&v29);
		}
	}
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C8AEDC: using guessed type int dword_140C8AEDC;
// 140C8AEE0: using guessed type int dword_140C8AEE0;
// 140C8AEE4: using guessed type int dword_140C8AEE4;
// 140C8AEE8: using guessed type int dword_140C8AEE8;
// 140C8AEF0: using guessed type __int64 qword_140C8AEF0;
// 140DC3300: using guessed type int dword_140DC3300;
// 140DC3308: using guessed type int dword_140DC3308;
// 140DC330C: using guessed type int dword_140DC330C;
// 140DC3310: using guessed type int dword_140DC3310;
// 140539B50: using guessed type int var_410[206];

