#include "../winhttp.h"

//----- (00000001400655F0) ----------------------------------------------------
__int64 __fastcall sub_1400655F0(__int64 a1)
{
	bool v1; // zf
	__int64 v2; // rax

	v1 = *(_DWORD*)(a1 + 32) == 287;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (v1)
	{
		*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
	}
	else
	{
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
		v2 = *(_QWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 32) = 287;
		*(_QWORD*)(a1 + 24) = v2;
	}
	return 1i64;
}

