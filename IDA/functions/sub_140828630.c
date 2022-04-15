#include "../winhttp.h"

//----- (0000000140828630) ----------------------------------------------------
__int64 __fastcall sub_140828630(__int64 a1, int a2)
{
	float v4; // xmm2_4
	float v5; // xmm0_4
	float v6; // xmm3_4
	int v7; // xmm1_4
	int v8; // xmm0_4
	int v9; // xmm1_4
	int v10; // xmm0_4
	int v11; // xmm1_4
	int v12; // xmm0_4
	unsigned __int16 v13; // ax
	int v15[3]; // [rsp+20h] [rbp-48h] BYREF
	int v16[3]; // [rsp+2Ch] [rbp-3Ch] BYREF
	int v17[12]; // [rsp+38h] [rbp-30h] BYREF

	HIWORD(v15[0]) = 16;
	v4 = sub_140829590((float*)a1, (float*)(a1 + 12));
	v5 = v4 * *(float*)(a1 + 20);
	v6 = v4 * *(float*)(a1 + 16);
	*(float*)v16 = *(float*)a1 - (float)(v4 * *(float*)(a1 + 12));
	*(float*)&v16[1] = *(float*)(a1 + 4) - v6;
	*(float*)&v7 = *(float*)(a1 + 8) - v5;
	v8 = *(_DWORD*)(a1 + 12);
	v16[2] = v7;
	v9 = *(_DWORD*)(a1 + 16);
	v17[0] = v8;
	v10 = *(_DWORD*)(a1 + 20);
	v17[1] = v9;
	v17[2] = v10;
	sub_140829630((float*)v16);
	sub_140829630((float*)v17);
	v15[2] = a2;
	v11 = *(_DWORD*)(a1 + 28);
	v17[3] = *(_DWORD*)(a1 + 24);
	v12 = *(_DWORD*)(a1 + 32);
	v17[4] = v11;
	v17[5] = v12;
	v13 = sub_1406F2420();
	return sub_14082BB30(qword_140C61B68, v15, v13);
}

