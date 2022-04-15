#include "../winhttp.h"

//----- (00000001408CB3C0) ----------------------------------------------------
__int64 __fastcall sub_1408CB3C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
	unsigned int v7; // ebx
	unsigned int v8; // edi
	float v9; // xmm6_4
	float v10; // xmm7_4
	float v11; // xmm8_4
	__int64 result; // rax
	unsigned int v13; // esi
	unsigned int v14; // ebp
	float v15; // xmm9_4
	__int64 v20; // rcx
	__int64 v21; // rdx
	__int64 v22; // r8
	__int64 v23; // r9
	__int64 v24; // r10
	float v25; // xmm1_4
	float v26; // xmm0_4
	float v27; // xmm5_4
	float v28; // xmm0_4
	__int64 v29; // [rsp+A0h] [rbp+28h]

	v7 = *(_DWORD*)(a1 + 16);
	v8 = *(_DWORD*)(a1 + 40);
	v9 = *(float*)(a1 + 120);
	v10 = *(float*)(a1 + 132);
	v11 = *(float*)(a1 + 96);
	result = a6;
	v13 = *(_DWORD*)(a1 + 64);
	v14 = *(_DWORD*)(a1 + 88);
	v15 = *(float*)(a1 + 108);
	if (a6)
	{
		v29 = a6;
		do
		{
			v20 = *(_QWORD*)(a1 + 8);
			v21 = v7;
			v22 = v8;
			v23 = v13;
			v24 = v14;
			v25 = *(float*)(v20 + 4i64 * v7++) * *(float*)(a1 + 100);
			a3 += 4i64;
			a4 += 4i64;
			a5 += 4i64;
			v11 = v25 - (float)(v11 * *(float*)(a1 + 104));
			a2 += 4i64;
			v15 = (float)(*(float*)(*(_QWORD*)(a1 + 32) + 4i64 * v8) * *(float*)(a1 + 112))
				- (float)(v15 * *(float*)(a1 + 116));
			v9 = (float)(*(float*)(*(_QWORD*)(a1 + 56) + 4i64 * v13) * *(float*)(a1 + 124))
				- (float)(v9 * *(float*)(a1 + 128));
			v10 = (float)(*(float*)(*(_QWORD*)(a1 + 80) + 4i64 * v14) * *(float*)(a1 + 136))
				- (float)(v10 * *(float*)(a1 + 140));
			v26 = (float)((float)((float)(v11 - v15) + v9) - v10) + *(float*)(a3 - 4);
			*(float*)(a5 - 4) = (float)((float)((float)(v11 - v15) - v9) + v10) + *(float*)(a5 - 4);
			*(float*)(a3 - 4) = v26;
			v27 = (float)((float)((float)(v15 + v11) + v9) + v10) * -0.5;
			*(float*)(a4 - 4) = (float)((float)((float)(v15 + v11) - v9) - v10) + *(float*)(a4 - 4);
			v28 = *(float*)(a2 - 4);
			*(float*)(v20 + 4 * v21) = (float)(v15 + v27) + v28;
			if (v7 == *(_DWORD*)a1)
				v7 = 0;
			++v8;
			*(float*)(*(_QWORD*)(a1 + 32) + 4 * v22) = (float)(v9 + v27) + v28;
			if (v8 == *(_DWORD*)(a1 + 24))
				v8 = 0;
			++v13;
			*(float*)(*(_QWORD*)(a1 + 56) + 4 * v23) = (float)(v10 + v27) + v28;
			result = *(_QWORD*)(a1 + 80);
			if (v13 == *(_DWORD*)(a1 + 48))
				v13 = 0;
			++v14;
			*(float*)(result + 4 * v24) = (float)(v11 + v27) + v28;
			if (v14 == *(_DWORD*)(a1 + 72))
				v14 = 0;
			--v29;
		} while (v29);
	}
	*(float*)(a1 + 96) = v11;
	*(float*)(a1 + 108) = v15;
	*(float*)(a1 + 120) = v9;
	*(_DWORD*)(a1 + 16) = v7;
	*(_DWORD*)(a1 + 64) = v13;
	*(_DWORD*)(a1 + 88) = v14;
	*(_DWORD*)(a1 + 40) = v8;
	*(float*)(a1 + 132) = v10;
	return result;
}

