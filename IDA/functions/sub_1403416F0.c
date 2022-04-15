#include "../winhttp.h"

//----- (00000001403416F0) ----------------------------------------------------
__int64 __fastcall sub_1403416F0(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rbx

	v2 = *(_QWORD**)(a1 + 80);
	if (!v2)
		return 0i64;
	while (*v2 != a2 && !(unsigned int)sub_1403416F0(*v2, a2))
	{
		v2 = (_QWORD*)v2[3];
		if (!v2)
			return 0i64;
	}
	return 1i64;
}

