#include "../winhttp.h"

//----- (0000000140268120) ----------------------------------------------------
__int64 __fastcall sub_140268120(_QWORD* a1, char* a2, int a3)
{
	char* v5; // r9
	__int64 v6; // rax
	__int128 v7; // xmm0
	int v8; // ebx
	unsigned __int64 v9; // r11
	float* v10; // r8
	float* v11; // rbp
	float v12; // xmm1_4
	unsigned __int64 v13; // rsi
	int v14; // r9d
	unsigned __int64 v15; // rax
	float v16; // xmm1_4
	float v17; // xmm1_4
	unsigned __int64 v18; // rdi
	int v19; // r9d
	unsigned __int64 v20; // rax
	float v21; // xmm1_4
	float v22; // xmm1_4
	int v23; // r10d
	__int64 v24; // rax
	float v25; // xmm1_4
	float v26; // xmm1_4
	int v27; // r9d
	unsigned __int64 v28; // rax
	float v29; // xmm1_4
	float v30; // xmm1_4
	int v31; // r10d
	unsigned __int64 v32; // rsi
	float v33; // xmm1_4
	float v34; // xmm1_4
	int v35; // r10d
	unsigned __int64 v36; // rdi
	float v37; // xmm1_4
	float v38; // xmm1_4
	int v39; // r10d
	__int64 v40; // rax
	float v41; // xmm1_4
	float v42; // xmm1_4
	int v43; // r10d
	unsigned __int64 v44; // rax
	float v45; // xmm1_4
	int v47; // [rsp+30h] [rbp-1A8h] BYREF
	char v48; // [rsp+34h] [rbp-1A4h] BYREF
	char v49[28]; // [rsp+70h] [rbp-168h] BYREF
	char v50; // [rsp+8Ch] [rbp-14Ch] BYREF

	v5 = (char*)(v49 - a2);
	v6 = 16i64;
	do
	{
		v7 = *(_OWORD*)a2;
		a2 += 16;
		*(_OWORD*)&a2[(_QWORD)v5 - 16] = v7;
		--v6;
	} while (v6);
	*a1 = 0i64;
	v8 = a3 & 0x20000;
	if ((a3 & 0x20000) != 0)
		sub_1407E4830(&v47, 0i64, 0x40ui64);
	v9 = 3i64;
	v10 = (float*)&v48;
	v11 = (float*)&v50;
	do
	{
		v12 = *(v11 - 4);
		if (v8)
			v12 = v12 + *(v10 - 1);
		v13 = v9 - 3;
		v14 = (int)(float)((float)(v12 * 15.0) + 0.5);
		*((_DWORD*)a1 + ((v9 - 3) >> 3)) = (v14 << 28) | (*((_DWORD*)a1 + ((v9 - 3) >> 3)) >> 4);
		if (v8)
		{
			v15 = v13 & 3;
			v16 = v12 - (float)((float)v14 * 0.06666667);
			if (v15 != 3)
				*v10 = (float)(v16 * 0.4375) + *v10;
			if (v13 < 0xC)
			{
				if ((v13 & 3) != 0)
					v10[2] = (float)(v16 * 0.1875) + v10[2];
				v10[3] = (float)(v16 * 0.3125) + v10[3];
				if (v15 != 3)
					v10[4] = (float)(v16 * 0.0625) + v10[4];
			}
		}
		v17 = *v11;
		if (v8)
			v17 = v17 + *v10;
		v18 = v9 - 2;
		v19 = (int)(float)((float)(v17 * 15.0) + 0.5);
		*((_DWORD*)a1 + ((v9 - 2) >> 3)) = (v19 << 28) | (*((_DWORD*)a1 + ((v9 - 2) >> 3)) >> 4);
		if (v8)
		{
			v20 = v18 & 3;
			v21 = v17 - (float)((float)v19 * 0.06666667);
			if (v20 != 3)
				v10[1] = (float)(v21 * 0.4375) + v10[1];
			if (v18 < 0xC)
			{
				if ((v18 & 3) != 0)
					v10[3] = (float)(v21 * 0.1875) + v10[3];
				v10[4] = (float)(v21 * 0.3125) + v10[4];
				if (v20 != 3)
					v10[5] = (float)(v21 * 0.0625) + v10[5];
			}
		}
		v22 = v11[4];
		if (v8)
			v22 = v22 + v10[1];
		v23 = (int)(float)((float)(v22 * 15.0) + 0.5);
		*((_DWORD*)a1 + ((v9 - 1) >> 3)) = (*((_DWORD*)a1 + ((v9 - 1) >> 3)) >> 4) | (v23 << 28);
		if (v8)
		{
			v24 = ((_BYTE)v9 - 1) & 3;
			v25 = v22 - (float)((float)v23 * 0.06666667);
			if (v24 != 3)
				v10[2] = (float)(v25 * 0.4375) + v10[2];
			if (v9 - 1 < 0xC)
			{
				if ((((_BYTE)v9 - 1) & 3) != 0)
					v10[4] = (float)(v25 * 0.1875) + v10[4];
				v10[5] = (float)(v25 * 0.3125) + v10[5];
				if (v24 != 3)
					v10[6] = (float)(v25 * 0.0625) + v10[6];
			}
		}
		v26 = v11[8];
		if (v8)
			v26 = v26 + v10[2];
		v27 = (int)(float)((float)(v26 * 15.0) + 0.5);
		*((_DWORD*)a1 + (v9 >> 3)) = (*((_DWORD*)a1 + (v9 >> 3)) >> 4) | (v27 << 28);
		if (v8)
		{
			v28 = v9 & 3;
			v29 = v26 - (float)((float)v27 * 0.06666667);
			if (v28 != 3)
				v10[3] = (float)(v29 * 0.4375) + v10[3];
			if (v9 < 0xC)
			{
				if ((v9 & 3) != 0)
					v10[5] = (float)(v29 * 0.1875) + v10[5];
				v10[6] = (float)(v29 * 0.3125) + v10[6];
				if (v28 != 3)
					v10[7] = (float)(v29 * 0.0625) + v10[7];
			}
		}
		v30 = v11[12];
		if (v8)
			v30 = v30 + v10[3];
		v31 = (int)(float)((float)(v30 * 15.0) + 0.5);
		*((_DWORD*)a1 + ((v9 + 1) >> 3)) = (v31 << 28) | (*((_DWORD*)a1 + ((v9 + 1) >> 3)) >> 4);
		if (v8)
		{
			v32 = v13 & 3;
			v33 = v30 - (float)((float)v31 * 0.06666667);
			if (v32 != 3)
				v10[4] = (float)(v33 * 0.4375) + v10[4];
			if (v9 + 1 < 0xC)
			{
				if (v32)
					v10[6] = (float)(v33 * 0.1875) + v10[6];
				v10[7] = (float)(v33 * 0.3125) + v10[7];
				if (v32 != 3)
					v10[8] = (float)(v33 * 0.0625) + v10[8];
			}
		}
		v34 = v11[16];
		if (v8)
			v34 = v34 + v10[4];
		v35 = (int)(float)((float)(v34 * 15.0) + 0.5);
		*((_DWORD*)a1 + ((v9 + 2) >> 3)) = (v35 << 28) | (*((_DWORD*)a1 + ((v9 + 2) >> 3)) >> 4);
		if (v8)
		{
			v36 = v18 & 3;
			v37 = v34 - (float)((float)v35 * 0.06666667);
			if (v36 != 3)
				v10[5] = (float)(v37 * 0.4375) + v10[5];
			if (v9 + 2 < 0xC)
			{
				if (v36)
					v10[7] = (float)(v37 * 0.1875) + v10[7];
				v10[8] = (float)(v37 * 0.3125) + v10[8];
				if (v36 != 3)
					v10[9] = (float)(v37 * 0.0625) + v10[9];
			}
		}
		v38 = v11[20];
		if (v8)
			v38 = v38 + v10[5];
		v39 = (int)(float)((float)(v38 * 15.0) + 0.5);
		*((_DWORD*)a1 + ((v9 + 3) >> 3)) = (v39 << 28) | (*((_DWORD*)a1 + ((v9 + 3) >> 3)) >> 4);
		if (v8)
		{
			v40 = ((_BYTE)v9 - 1) & 3;
			v41 = v38 - (float)((float)v39 * 0.06666667);
			if (v40 != 3)
				v10[6] = (float)(v41 * 0.4375) + v10[6];
			if (v9 + 3 < 0xC)
			{
				if ((((_BYTE)v9 - 1) & 3) != 0)
					v10[8] = (float)(v41 * 0.1875) + v10[8];
				v10[9] = (float)(v41 * 0.3125) + v10[9];
				if (v40 != 3)
					v10[10] = (float)(v41 * 0.0625) + v10[10];
			}
		}
		v42 = v11[24];
		if (v8)
			v42 = v42 + v10[6];
		v43 = (int)(float)((float)(v42 * 15.0) + 0.5);
		*((_DWORD*)a1 + ((v9 + 4) >> 3)) = (*((_DWORD*)a1 + ((v9 + 4) >> 3)) >> 4) | (v43 << 28);
		if (v8)
		{
			v44 = v9 & 3;
			v45 = v42 - (float)((float)v43 * 0.06666667);
			if (v44 != 3)
				v10[7] = (float)(v45 * 0.4375) + v10[7];
			if (v9 + 4 < 0xC)
			{
				if ((v9 & 3) != 0)
					v10[9] = (float)(v45 * 0.1875) + v10[9];
				v10[10] = (float)(v45 * 0.3125) + v10[10];
				if (v44 != 3)
					v10[11] = (float)(v45 * 0.0625) + v10[11];
			}
		}
		v9 += 8i64;
		v11 += 32;
		v10 += 8;
	} while (v9 - 3 < 0x10);
	return sub_140267380(a1 + 1, (__int64)v49, 0, 0.0, a3);
}

