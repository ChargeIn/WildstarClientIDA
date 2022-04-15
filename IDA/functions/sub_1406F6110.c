#include "../winhttp.h"

//----- (00000001406F6110) ----------------------------------------------------
__int64 __fastcall sub_1406F6110(__int64 a1)
{
	__int64 v1; // rdx
	float v2; // xmm0_4
	__int64 v3; // rax

	v1 = *(_QWORD*)(qword_140C635F0 + 336);
	if (v1)
		v2 = *(float*)(v1 + 32);
	else
		v2 = 0.0;
	v3 = *(_QWORD*)(a1 + 16);
	*(double*)v3 = v2;
	*(_DWORD*)(v3 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;

