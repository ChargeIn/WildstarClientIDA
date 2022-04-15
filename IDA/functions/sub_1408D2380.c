#include "../winhttp.h"

//----- (00000001408D2380) ----------------------------------------------------
void __fastcall sub_1408D2380(_DWORD* a1, __int64 a2)
{
	float v4; // xmm0_4
	float v5; // xmm1_4
	int v6; // ebx
	int v7; // eax
	float v8; // xmm0_4
	float v9; // xmm1_4
	float v10; // xmm0_4
	float v11; // xmm1_4
	int v12; // eax
	float v13; // xmm0_4
	int v14; // ebx
	double v15; // xmm0_8
	double v16; // xmm1_8
	float v17; // xmm0_4
	float v18; // xmm1_4
	float v19; // xmm0_4
	double v20; // xmm1_8
	float v21; // xmm0_4
	double v22; // xmm1_8
	int v23; // eax
	int v24; // ebx
	float v25; // xmm0_4
	float v26; // xmm1_4
	float v27; // xmm0_4
	float v28; // xmm1_4
	double v29; // xmm0_8
	float v30; // xmm0_4
	int v31; // eax
	__int64 v32[2]; // [rsp+20h] [rbp-50h] BYREF
	int v33; // [rsp+30h] [rbp-40h]
	char v34; // [rsp+34h] [rbp-3Ch]
	double v35; // [rsp+38h] [rbp-38h] BYREF
	double v36; // [rsp+40h] [rbp-30h]
	double v37; // [rsp+48h] [rbp-28h]
	double v38; // [rsp+50h] [rbp-20h]
	double v39; // [rsp+58h] [rbp-18h]
	double v40; // [rsp+60h] [rbp-10h]
	char v41; // [rsp+68h] [rbp-8h]

	if (*(_BYTE*)(a2 + 25) && *(_BYTE*)(a2 + 24))
	{
		v4 = *(float*)(a2 + 4);
		v5 = *(float*)(a2 + 8);
		v6 = a1[76];
		v33 = *(_DWORD*)a2;
		v7 = *(_DWORD*)(a2 + 12);
		v34 = 0;
		*(double*)v32 = v4;
		v8 = *(float*)(a2 + 16);
		*(double*)&v32[1] = v5;
		LODWORD(v37) = v7;
		BYTE4(v37) = 0;
		v9 = *(float*)(a2 + 20);
		v35 = v8;
		v36 = v9;
		sub_1408D39D0((__int64)(a1 + 72), (__int64)&v35, (__int64)v32);
		a1[14] += a1[76] - v6;
	}
	if (*(_BYTE*)(a2 + 45) && *(_BYTE*)(a2 + 44))
	{
		v10 = *(float*)(a2 + 32);
		v11 = *(float*)(a2 + 36);
		v12 = *(_DWORD*)(a2 + 28);
		BYTE4(v38) = 0;
		LODWORD(v38) = v12;
		v35 = v10;
		v13 = *(float*)(a2 + 40);
		v36 = v11;
		v37 = v13;
		sub_1408D4DB0((__int64)(a1 + 78), (__int64)&v35);
	}
	if (*(_BYTE*)(a2 + 65) && *(_BYTE*)(a2 + 64))
	{
		v14 = a1[86];
		v15 = *(float*)(a2 + 52);
		v16 = *(float*)(a2 + 56);
		LODWORD(v38) = *(_DWORD*)(a2 + 48);
		BYTE4(v38) = 0;
		v35 = v15;
		LODWORD(v15) = *(_DWORD*)(a2 + 60);
		v36 = v16;
		v37 = *(float*)&v15;
		sub_1408D57D0((__int64)(a1 + 82), (__int64)&v35);
		a1[14] += a1[86] - v14;
	}
	if (*(_BYTE*)(a2 + 93) && *(_BYTE*)(a2 + 92))
	{
		v17 = *(float*)(a2 + 68);
		v18 = *(float*)(a2 + 76);
		v41 = 0;
		v35 = v17;
		v19 = *(float*)(a2 + 72);
		v36 = v18;
		v20 = *(float*)(a2 + 80);
		v37 = v19;
		v21 = *(float*)(a2 + 84);
		v38 = v20;
		v22 = *(float*)(a2 + 88);
		v39 = v21;
		v40 = v22;
		sub_1408D60D0((__int64)(a1 + 88), (__int64)&v35);
	}
	if (*(_BYTE*)(a2 + 129) && *(_BYTE*)(a2 + 128))
	{
		v23 = *(_DWORD*)(a2 + 120);
		v24 = a1[96];
		v36 = *(float*)(a2 + 124);
		LODWORD(v35) = v23;
		LOBYTE(v37) = 0;
		sub_1408D74F0((__int64)(a1 + 92), (__int64)&v35);
		a1[14] += a1[96] - v24;
	}
	if (*(_BYTE*)(a2 + 117) && *(_BYTE*)(a2 + 116))
	{
		v25 = *(float*)(a2 + 96);
		v26 = *(float*)(a2 + 100);
		LOBYTE(v40) = 0;
		v35 = v25;
		v27 = *(float*)(a2 + 104);
		v36 = v26;
		v28 = *(float*)(a2 + 108);
		v37 = v27;
		v29 = *(float*)(a2 + 112);
		v38 = v28;
		v39 = v29;
		sub_1408D6B30((__int64)(a1 + 98), (__int64)&v35);
	}
	if (*(_BYTE*)(a2 + 145))
	{
		if (*(_BYTE*)(a2 + 144))
		{
			v30 = *(float*)(a2 + 140);
			LODWORD(v35) = *(_DWORD*)(a2 + 132);
			v31 = *(_DWORD*)(a2 + 136);
			v36 = v30;
			LOBYTE(v37) = 0;
			HIDWORD(v35) = v31;
			sub_1408D8560((__int64)(a1 + 102), (int*)&v35);
		}
	}
}

