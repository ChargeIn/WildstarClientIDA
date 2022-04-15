#include "../winhttp.h"

//----- (00000001408F2B80) ----------------------------------------------------
__int64 __fastcall sub_1408F2B80(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rdi
	__int64 v4; // rsi
	float v5; // xmm1_4
	int v6; // eax
	float v7; // xmm1_4
	int v8; // eax
	float v9; // xmm2_4
	int v10; // eax
	double v11; // xmm0_8

	result = *(unsigned int*)(a1 + 292);
	if ((_DWORD)result)
	{
		v3 = 0i64;
		v4 = (unsigned int)result;
		do
		{
			v5 = *(float*)(*(_QWORD*)(a1 + 8) + 196i64);
			v6 = 214013 * *(_DWORD*)(a1 + 196) + 2531011;
			*(_DWORD*)(a1 + 196) = v6;
			*(float*)(*(_QWORD*)(a1 + 24) + v3 + 20) = (float)((float)((float)((float)v6 * 2.3283064e-10) * 2.0) - 1.0) * v5;
			v7 = *(float*)(*(_QWORD*)(a1 + 8) + 200i64);
			v8 = 214013 * *(_DWORD*)(a1 + 196) + 2531011;
			*(_DWORD*)(a1 + 196) = v8;
			*(float*)(*(_QWORD*)(a1 + 24) + v3 + 24) = (float)((float)((float)((float)v8 * 2.3283064e-10) * 2.0) - 1.0) * v7;
			v9 = *(float*)(*(_QWORD*)(a1 + 8) + 204i64);
			v10 = 214013 * *(_DWORD*)(a1 + 196) + 2531011;
			*(_DWORD*)(a1 + 196) = v10;
			v11 = sub_1408FBFC0(
				COERCE_DOUBLE(1092616192i64),
				(float)((float)((float)((float)((float)v10 * 2.3283064e-10) * 2.0) - 1.0) * v9) * 0.050000001);
			result = *(_QWORD*)(a1 + 24);
			v3 += 32i64;
			*(_DWORD*)(result + v3 - 4) = LODWORD(v11);
			--v4;
		} while (v4);
	}
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

