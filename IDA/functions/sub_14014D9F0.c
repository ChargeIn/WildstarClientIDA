#include "../winhttp.h"

//----- (000000014014D9F0) ----------------------------------------------------
__int64 __fastcall sub_14014D9F0(_QWORD* a1)
{
	float* v2; // rax

	v2 = (float*)sub_140056AB0(a1, 1u);
	sub_140058780((__int64)a1, (unsigned __int64*)"EulerAngles(%f, %f, %f)", *v2, v2[1], v2[2]);
	return 1i64;
}

