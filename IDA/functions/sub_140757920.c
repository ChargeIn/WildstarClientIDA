#include "../winhttp.h"

//----- (0000000140757920) ----------------------------------------------------
__int64 __fastcall sub_140757920(__int64 a1)
{
	_DWORD* v1; // rdx
	bool v2; // zf

	v1 = *(_DWORD**)(a1 + 16);
	v2 = dword_140C7DC68 == 0;
	v1[2] = 1;
	*v1 = !v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C7DC68: using guessed type int dword_140C7DC68;

