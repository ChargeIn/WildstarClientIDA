#include "../winhttp.h"

//----- (000000014001BE70) ----------------------------------------------------
char __fastcall sub_14001BE70(__int64 a1, __int64 a2)
{
	__int64 v2; // r10
	_WORD* v3; // rax
	unsigned __int64 v4; // r9
	unsigned __int64 v5; // rcx
	__int64 v6; // r10

	v2 = *(_QWORD*)(a1 + 8);
	v3 = *(_WORD**)(a2 + 8);
	v4 = (*(_QWORD*)(a1 + 16) - v2) >> 1;
	if (v4 == (__int64)(*(_QWORD*)(a2 + 16) - (_QWORD)v3) >> 1)
	{
		v5 = 0i64;
		if (!v4)
			return 1;
		v6 = v2 - (_QWORD)v3;
		while (*(_WORD*)((char*)v3 + v6) == *v3)
		{
			++v5;
			++v3;
			if (v5 >= v4)
				return 1;
		}
	}
	return 0;
}
// 14001BECF: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)

