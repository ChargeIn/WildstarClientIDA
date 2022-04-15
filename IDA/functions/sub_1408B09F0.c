#include "../winhttp.h"

//----- (00000001408B09F0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1408B09F0(__int64 a1, __m128* a2)
{
	unsigned int v3; // edx
	__int64 v5; // rdi
	unsigned __int64 result; // rax
	float v7; // xmm1_4
	float v8; // xmm2_4
	float v9; // xmm3_4
	float v10; // xmm2_4
	float v11; // xmm2_4
	float v12; // xmm2_4
	unsigned __int64 v13; // [rsp+70h] [rbp+8h]
	unsigned __int64 v14; // [rsp+78h] [rbp+10h]

	v3 = *(_DWORD*)(a1 + 8) >> 1;
	v13 = a2->m128_u64[0];
	v5 = v3;
	v14 = a2->m128_u64[v3];
	result = sub_1408B1180(a2, v3);
	v7 = *((float*)&v13 + 1) + 1.5707964;
	if ((float)(*((float*)&v13 + 1) + 1.5707964) > 3.1415927)
		v7 = v7 + -6.2831855;
	v8 = (float)(v7 * 1.2732395) - (float)(fabs(v7) * (float)(v7 * 0.4052847));
	v9 = *((float*)&v14 + 1) + 1.5707964;
	a2->m128_f32[0] = (float)((float)((float)((float)(COERCE_FLOAT(LODWORD(v8) & 0x7FFFFFFF) * v8) - v8) * 0.22499999) + v8)
		* *(float*)&v13;
	v10 = (float)(*((float*)&v13 + 1) * 1.2732395)
		- (float)(fabs(*((float*)&v13 + 1)) * (float)(*((float*)&v13 + 1) * 0.4052847));
	a2->m128_f32[1] = (float)((float)((float)((float)(fabs(v10) * v10) - v10) * 0.22499999) + v10) * *(float*)&v13;
	if ((float)(*((float*)&v14 + 1) + 1.5707964) > 3.1415927)
		v9 = v9 + -6.2831855;
	*(_BYTE*)(a1 + 13) = 0;
	v11 = (float)(v9 * 1.2732395) - (float)(COERCE_FLOAT(LODWORD(v9) & 0x7FFFFFFF) * (float)(v9 * 0.4052847));
	a2->m128_f32[2 * v5] = (float)((float)((float)((float)(COERCE_FLOAT(LODWORD(v11) & 0x7FFFFFFF) * v11) - v11)
		* 0.22499999)
		+ v11)
		* *(float*)&v14;
	v12 = (float)(*((float*)&v14 + 1) * 1.2732395)
		- (float)(fabs(*((float*)&v14 + 1)) * (float)(*((float*)&v14 + 1) * 0.4052847));
	a2->m128_f32[2 * v5 + 1] = (float)((float)((float)((float)(fabs(v12) * v12) - v12) * 0.22499999) + v12)
		* *(float*)&v14;
	return result;
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;

