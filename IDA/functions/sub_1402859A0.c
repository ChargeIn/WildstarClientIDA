#include "../winhttp.h"

//----- (00000001402859A0) ----------------------------------------------------
__int64 __fastcall sub_1402859A0(__int64 a1, float a2)
{
	__int64 v2; // rax
	__int64 result; // rax

	**(float**)(*(_QWORD*)(a1 + 224) + 32i64) = fmaxf(0.0, fminf(a2, 1.0));
	v2 = *(_QWORD*)(a1 + 224);
	*(_DWORD*)(*(_QWORD*)(v2 + 32) + 4i64) = ++ * (_DWORD*)(a1 + 392);
	result = *(_QWORD*)(a1 + 224);
	*(_DWORD*)(*(_QWORD*)(result + 32) + 8i64) = 0;
	return result;
}

