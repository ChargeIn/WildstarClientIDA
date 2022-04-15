#include "../winhttp.h"

//----- (00000001407E5B18) ----------------------------------------------------
__int64 __fastcall sub_1407E5B18(__int64 a1)
{
	void** v2; // rax
	void** v3; // rbx
	__int64 v5; // rax

	if (*(_QWORD*)(a1 + 336))
	{
		v2 = (void**)sub_1407E2BB0(1ui64, 0x2C0ui64);
		v3 = v2;
		if (!v2)
			return 1i64;
		if ((unsigned int)sub_1407E5BB8((__int64)v2, a1))
		{
			sub_1407E571C(v3);
			sub_1407E14C0(v3);
			return 1i64;
		}
		*((_DWORD*)v3 + 87) = 1;
	}
	else
	{
		v3 = &off_140C10020;
	}
	v5 = *(_QWORD*)(a1 + 288);
	if ((void**)v5 != &off_140C10020)
		_InterlockedDecrement((volatile signed __int32*)(v5 + 348));
	*(_QWORD*)(a1 + 288) = v3;
	return 0i64;
}
// 140C10020: using guessed type void *off_140C10020;

