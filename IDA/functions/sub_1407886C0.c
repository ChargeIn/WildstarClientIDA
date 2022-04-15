#include "../winhttp.h"

//----- (00000001407886C0) ----------------------------------------------------
__int64 __fastcall sub_1407886C0(__int64 a1, int a2)
{
	_QWORD* v2; // r9
	_QWORD* v3; // rax

	v2 = *(_QWORD**)(a1 + 40);
	v3 = (_QWORD*)*v2;
	if ((_QWORD*)*v2 == v2)
		return 0i64;
	while (**(_DWORD**)(v3[3] + 8i64) != a2)
	{
		v3 = (_QWORD*)*v3;
		if (v3 == v2)
			return 0i64;
	}
	return v3[3];
}

