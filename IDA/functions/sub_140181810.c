#include "../winhttp.h"

//----- (0000000140181810) ----------------------------------------------------
__int64 __fastcall sub_140181810(__int64 a1, int* a2)
{
	int v3; // r9d
	int v4; // r11d
	int v5; // ecx
	int v6; // eax
	int v7; // r8d
	unsigned int v8; // edx
	int v9; // eax
	int v10; // r11d
	int v11; // ecx
	__m128i v12; // xmm1
	float v13; // xmm1_4
	float v14; // xmm1_4
	float v15; // xmm0_4
	float v16; // xmm3_4
	int v17; // eax
	wchar_t* v18; // r9
	int v20; // eax
	unsigned int v21; // edx
	__m128i v22; // xmm0
	int v23; // ecx
	int v24; // r8d
	int v25; // [rsp+20h] [rbp-28h]
	int v26; // [rsp+30h] [rbp-18h]
	int v27; // [rsp+38h] [rbp-10h]

	if (*(_DWORD*)(a1 + 1192))
	{
		v3 = *(_DWORD*)(a1 + 720);
		v26 = *(_DWORD*)(a1 + 716);
		v4 = *(_DWORD*)(a1 + 728);
		v27 = *(_DWORD*)(a1 + 724) - *(_DWORD*)(a1 + 1104) - *(_DWORD*)(a1 + 1100);
		v5 = *a2 - v26;
		*(_DWORD*)(a1 + 1160) = v5;
		*(_DWORD*)(a1 + 1164) = a2[1] - v3;
		v6 = v27 - v26;
		if (v5 < v27 - v26)
			v6 = v5;
		v7 = 0;
		v8 = 0;
		if (v6 > 0)
			v8 = v6;
		v9 = *(_DWORD*)(a1 + 1164);
		v10 = v4 - v3;
		v11 = v10;
		*(_DWORD*)(a1 + 1160) = v8;
		v12 = _mm_cvtsi32_si128(v8);
		if (v9 < v10)
			v11 = v9;
		LODWORD(v13) = _mm_cvtepi32_ps(v12).m128_u32[0];
		if (v11 > 0)
			v7 = v11;
		*(_DWORD*)(a1 + 1164) = v7;
		v14 = (float)(v13 / (float)(v27 - v26)) * 360.0;
		*(float*)(a1 + 1168) = v14;
		v15 = *(float*)(a1 + 1084);
		v16 = (float)((float)v7 / (float)v10) * 360.0;
		*(float*)(a1 + 1172) = 360.0 - v16;
		v17 = sub_1401280F0(v15, v14 * 0.0027777778, (float)(360.0 - v16) * 0.0027777778);
		v18 = L"c";
		*(_DWORD*)(a1 + 1024) = v17;
	LABEL_11:
		v25 = v17;
		sub_1400D4070(a1, 0x4Au, (char*)a1, v18, v25);
		return 0i64;
	}
	if (*(_DWORD*)(a1 + 1096))
	{
		v20 = a2[1];
		v21 = *(_DWORD*)(a1 + 728) - *(_DWORD*)(a1 + 720);
		v22 = _mm_cvtsi32_si128(v21);
		v23 = v21 - 1;
		if (v20 < (int)(v21 - 1))
			v23 = v20;
		v24 = 0;
		if (v23 > 0)
			v24 = v23;
		*(_DWORD*)(a1 + 1080) = v24;
		*(float*)(a1 + 1084) = (float)((float)v24 / _mm_cvtepi32_ps(v22).m128_f32[0]) * 360.0;
		sub_1401810E0(a1);
		v17 = *(_DWORD*)(a1 + 1024);
		v18 = (wchar_t*)&unk_1409DF25C;
		goto LABEL_11;
	}
	return sub_1400D23B0(a1, a2);
}
// 1409DECF4: using guessed type wchar_t aC_14[2];

