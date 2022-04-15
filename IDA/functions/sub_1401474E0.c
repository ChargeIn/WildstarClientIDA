#include "../winhttp.h"

//----- (00000001401474E0) ----------------------------------------------------
__int64 __fastcall sub_1401474E0(_QWORD* a1)
{
	float* v2; // rax

	v2 = (float*)sub_140056AB0(a1, 1u);
	sub_140058780((__int64)a1, (unsigned __int64*)"Vector3(%f, %f, %f)", *v2, v2[1], v2[2]);
	return 1i64;
}

