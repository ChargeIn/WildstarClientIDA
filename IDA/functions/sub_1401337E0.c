#include "../winhttp.h"

//----- (00000001401337E0) ----------------------------------------------------
__int64 __fastcall sub_1401337E0(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rbx

	v1 = sub_1401334C0(a1, 1u);
	v2 = v1;
	if (v1)
	{
		sub_140195D70(v1 + 96);
		*(_DWORD*)(v2 + 72) = 0;
	}
	return 0i64;
}

