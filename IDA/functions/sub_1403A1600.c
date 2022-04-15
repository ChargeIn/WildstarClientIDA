#include "../winhttp.h"

//----- (00000001403A1600) ----------------------------------------------------
_BOOL8 __fastcall sub_1403A1600(__int64 a1)
{
	__int64 v1; // rax
	int v2; // eax
	_BOOL8 result; // rax

	v1 = *(_QWORD*)(a1 + 27880);
	result = 0;
	if (v1)
	{
		v2 = *(_DWORD*)(*(_QWORD*)(v1 + 112) + 124i64);
		if (v2 == 4 || (unsigned int)(v2 - 7) <= 1)
			return 1;
	}
	return result;
}

