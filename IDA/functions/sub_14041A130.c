#include "../winhttp.h"

//----- (000000014041A130) ----------------------------------------------------
__int64 __fastcall sub_14041A130(_QWORD* a1)
{
	int* v1; // rax
	__int64 v2; // rdx
	__int64 v3; // rcx

	v1 = sub_140417BF0(a1, 1u);
	if (v1)
	{
		v2 = (unsigned int)v1[121];
		if ((_DWORD)v2)
		{
			v3 = *(_QWORD*)(qword_140C63628 + 720);
			if (v3)
				(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v3 + 16i64))(
					v3,
					v2,
					0i64,
					0i64,
					0i64,
					0i64,
					0i64);
		}
	}
	return 0i64;
}
// 140C63628: using guessed type __int64 qword_140C63628;

