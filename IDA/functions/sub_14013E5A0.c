#include "../winhttp.h"

//----- (000000014013E5A0) ----------------------------------------------------
__m128 __fastcall sub_14013E5A0(_QWORD* a1)
{
	unsigned __int64 v1; // r12
	__int64 v2; // r14
	__int128 i; // xmm15
	unsigned __int64 j; // rbp
	unsigned __int64 v6; // rsi
	__int64 v7; // rdi
	float v8; // xmm12_4
	float v9; // xmm13_4
	float v10; // xmm14_4
	__int64 v11; // rbx
	char v13[32]; // [rsp+40h] [rbp-D8h] BYREF

	v1 = 0i64;
	v2 = 0i64;
	for (i = 0i64; v1 < a1[9]; ++v1)
	{
		for (j = 0i64; j < *(_QWORD*)(a1[8] + 8 * v1); *(float*)&i = *(float*)&i + fmaxf(0.0, v8 - v9))
		{
			v6 = 0i64;
			v7 = *(_QWORD*)(a1[12] + 8 * v2);
			v8 = 0.0;
			v9 = *(float*)(v7 + 672);
			if (*(_QWORD*)(v7 + 816))
			{
				v10 = 0.0;
				do
				{
					v11 = *(_QWORD*)(*(_QWORD*)(v7 + 808) + 8 * v6);
					v9 = fminf(v9, *(float*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v11 + 16i64))(v11, v13));
					v8 = fmaxf(
						v8,
						*(float*)((*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v11 + 16i64))(v11, v13) + 16));
					++v6;
					v10 = fmaxf(
						v10,
						*(float*)((*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v11 + 16i64))(v11, v13) + 20));
				} while (v6 < *(_QWORD*)(v7 + 816));
			}
			++j;
			++v2;
		}
	}
	return (__m128)i;
}

