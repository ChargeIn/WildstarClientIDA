#include "../winhttp.h"

//----- (0000000140295640) ----------------------------------------------------
__int64 __fastcall sub_140295640(__int64 a1, float a2, float a3, __int64 a4)
{
	float v5; // xmm7_4
	float v6; // xmm0_4
	__int64 result; // rax
	float v8; // xmm7_4
	float v9; // xmm9_4

	v5 = sub_1408FC950(COERCE_DOUBLE(1061752795i64));
	v6 = sub_1408FE3D0(COERCE_DOUBLE(1061752795i64));
	result = 0i64;
	*(_DWORD*)(a4 + 44) = -1082130432;
	*(_QWORD*)(a4 + 4) = 0i64;
	*(_QWORD*)(a4 + 12) = 0i64;
	*(_QWORD*)(a4 + 24) = 0i64;
	v8 = v5 / v6;
	*(_QWORD*)(a4 + 32) = 0i64;
	*(_QWORD*)(a4 + 48) = 0i64;
	*(_DWORD*)(a4 + 60) = 0;
	v9 = a3 / (float)(a2 - a3);
	*(float*)a4 = v8;
	*(float*)(a4 + 20) = v8;
	*(float*)(a4 + 40) = v9;
	*(float*)(a4 + 56) = v9 * a2;
	return result;
}

