#include "../winhttp.h"

//----- (00000001400012E0) ----------------------------------------------------
void __fastcall sub_1400012E0(__int64 a1)
{
	_QWORD* v2; // rcx

	v2 = *(_QWORD**)(a1 + 1056);
	if (v2 && !v2[2])
	{
		(*(void(__fastcall**)(_QWORD*))(*v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 1056) = 0i64;
	}
	sub_140001070(a1);
}
// 1400012FF: conditional instruction was optimized away because rcx.8!=0

