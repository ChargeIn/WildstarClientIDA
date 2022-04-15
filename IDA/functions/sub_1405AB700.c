#include "../winhttp.h"

//----- (00000001405AB700) ----------------------------------------------------
__int64 __fastcall sub_1405AB700(__int64 a1, unsigned int* a2)
{
	__int64 result; // rax
	__int64 v3; // rbx
	double v4; // xmm6_8
	double v5; // xmm7_8
	double v6; // xmm8_8
	float v7; // xmm10_4
	float v8; // xmm11_4
	float v9; // xmm9_4
	float v10; // xmm0_4
	float v11[4]; // [rsp+20h] [rbp-B8h] BYREF
	int v12[12]; // [rsp+30h] [rbp-A8h] BYREF
	__int128 v13; // [rsp+60h] [rbp-78h]

	result = qword_140C659F8;
	v3 = *(_QWORD*)(qword_140C659F8 + 200);
	if (v3)
	{
		*(_QWORD*)&v4 = *a2;
		*(_QWORD*)&v5 = a2[1];
		*(_QWORD*)&v6 = a2[2];
		v7 = sub_1408FE3D0(v4);
		v8 = sub_1408FC950(v4);
		LODWORD(v4) = sub_1408FE3D0(v5);
		v9 = sub_1408FC950(v5);
		LODWORD(v5) = sub_1408FE3D0(v6);
		v10 = sub_1408FC950(v6);
		v12[3] = 0;
		v12[7] = 0;
		v12[11] = 0;
		*(float*)&v12[1] = *(float*)&v5 * v9;
		*(float*)v12 = v10 * v9;
		*(float*)&v12[2] = -*(float*)&v4;
		*(float*)&v12[4] = (float)((float)(v10 * *(float*)&v4) * v7) - (float)(*(float*)&v5 * v8);
		*(float*)&v12[5] = (float)((float)(*(float*)&v5 * *(float*)&v4) * v7) + (float)(v10 * v8);
		*(float*)&v12[6] = v9 * v7;
		v13 = xmmword_140C78440;
		*(float*)&v12[8] = (float)(*(float*)&v5 * v7) + (float)((float)(v10 * *(float*)&v4) * v8);
		*(float*)&v12[9] = (float)((float)(*(float*)&v5 * *(float*)&v4) * v8) - (float)(v10 * v7);
		*(float*)&v12[10] = v9 * v8;
		sub_1401B1D60(v11, (float*)v12);
		return (*(__int64(__fastcall**)(__int64, float*))(*(_QWORD*)v3 + 24i64))(v3, v11);
	}
	return result;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C659F8: using guessed type __int64 qword_140C659F8;
// 140C78440: using guessed type __int128 xmmword_140C78440;
// 1405AB700: using guessed type float var_B8[4];

