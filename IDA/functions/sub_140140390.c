#include "../winhttp.h"

//----- (0000000140140390) ----------------------------------------------------
void __fastcall sub_140140390(__int64 a1)
{
	int v1; // eax
	__m128 v3; // xmm6
	float v4; // xmm7_4
	unsigned int v5; // ebx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	float* v9; // rbx
	int v10; // ecx

	v1 = *(_DWORD*)(a1 + 776);
	v3.m128_i32[0] = 0;
	v4 = *(float*)(a1 + 672) - *(float*)(a1 + 800);
	if (!v1)
		v4 = 0.0;
	if (v1 == 1)
		v4 = v4 * 0.5;
	if (v4 != 0.0)
	{
		v5 = 0;
		if (*(_QWORD*)(a1 + 792))
		{
			v6 = 0i64;
			do
			{
				v7 = *(_QWORD*)(*(_QWORD*)(a1 + 784) + 8 * v6);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 120i64))(v7);
				v6 = ++v5;
			} while ((unsigned __int64)v5 < *(_QWORD*)(a1 + 792));
		}
	}
	v8 = *(_QWORD*)(a1 + 744);
	if (v8)
	{
		if (*(_QWORD*)(v8 + 96))
		{
			v9 = (float*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v8 + 96) + 32i64))(*(_QWORD*)(v8 + 96));
			v3 = (__m128) * (unsigned int*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 744) + 96i64)
				+ 24i64))(*(_QWORD*)(*(_QWORD*)(a1 + 744)
					+ 96i64))
				+ 12);
			v3.m128_f32[0] = v3.m128_f32[0] + *v9;
			v10 = (int)v3.m128_f32[0];
			if ((int)v3.m128_f32[0] != 0x80000000 && (float)v10 != v3.m128_f32[0])
				v3.m128_f32[0] = (float)(v10 - (_mm_movemask_ps(_mm_unpacklo_ps(v3, v3)) & 1));
		}
	}
	*(_DWORD*)(a1 + 688) = 0;
	*(float*)(a1 + 692) = fmaxf(v3.m128_f32[0], *(float*)(a1 + 804)) + *(float*)(a1 + 692);
	sub_1400523E0((__int64*)(a1 + 784));
	*(_QWORD*)(a1 + 800) = 0i64;
	*(_DWORD*)(a1 + 776) = 0;
}

