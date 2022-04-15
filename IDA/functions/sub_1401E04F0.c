#include "../winhttp.h"

//----- (00000001401E04F0) ----------------------------------------------------
__int64 __fastcall sub_1401E04F0(__int64 a1, int a2, int a3)
{
	_QWORD* v4; // rcx
	_QWORD* v5; // rax

	if ((unsigned __int64)a2 >= 0x48)
		return 0i64;
	v4 = *(_QWORD**)(a1 + 8i64 * a2 + 904);
	if (!v4)
		return 0i64;
	if (!a3)
	{
		v5 = v4 + 6;
		if (!v4[6])
			v5 = v4 + 9;
		return *v5;
	}
	if (a3 != 1)
		return 0i64;
	v5 = v4 + 7;
	if (!v4[7])
		return v4[10];
	return *v5;
}

