#include "../winhttp.h"

//----- (00000001408F5BD0) ----------------------------------------------------
__int64 __fastcall sub_1408F5BD0(__int64 a1, float a2)
{
	float v3; // xmm7_4
	__int64 result; // rax
	__int64 v5; // rdi
	__int64 v6; // r14
	__int64 v7; // rbp
	__int64 v8; // rbx
	double v9; // xmm0_8

	v3 = *(float*)(*(_QWORD*)(a1 + 8) + 48i64);
	result = *(unsigned int*)(a1 + 196);
	if ((_DWORD)result)
	{
		v5 = 0i64;
		v6 = (unsigned int)result;
		v7 = 0i64;
		do
		{
			v8 = *(_QWORD*)(a1 + 24);
			v9 = sub_1408FBFC0(COERCE_DOUBLE(0x40000000i64), (float)(v3 + *(float*)(v5 + v8 + 20)) + a2);
			result = *(_QWORD*)(a1 + 16);
			v5 += 32i64;
			v7 += 20i64;
			*(float*)(v5 + v8 - 24) = *(float*)&v9 * *(float*)(result + v7 - 12);
			--v6;
		} while (v6);
	}
	return result;
}

