#include "../winhttp.h"

//----- (00000001403451B0) ----------------------------------------------------
__int64 __fastcall sub_1403451B0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
	__int64 v5; // rcx

	v5 = 2147500037i64;
	if (a3 == 1)
		v5 = 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))a5)(v5, *(_QWORD*)(a5 + 8));
}

