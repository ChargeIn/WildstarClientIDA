#include "../winhttp.h"

//----- (00000001408F48E0) ----------------------------------------------------
void __fastcall sub_1408F48E0(__int64 a1, unsigned int a2, float* a3, float* a4)
{
	__int64 v4; // rbx
	__int64 v5; // rdi
	double v8; // xmm0_8
	double v9; // xmm0_8
	double v10; // xmm7_8

	v4 = *(_QWORD*)(a1 + 16);
	v5 = 5i64 * a2;
	*(_QWORD*)&v8 = *(unsigned int*)(v4 + 20i64 * a2);
	*(float*)&v8 = *(float*)&v8 / *(float*)(*(_QWORD*)(a1 + 8) + 20i64);
	v9 = sub_1408FBFC0(v8, 0.16666667);
	HIDWORD(v10) = HIDWORD(v9);
	*(float*)&v10 = (float)((float)((float)(*(float*)&v9
		* sub_1408FC950(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(
			(float)((float)(90.0 - *(float*)(v4 + 4 * v5 + 4))
				* 3.1415927)
			* 0.0055555557))))
		* 3.1415927)
		* 0.25)
		+ 0.78539819;
	*a3 = sub_1408FC950(v10);
	*a4 = sub_1408FE3D0(v10);
}

