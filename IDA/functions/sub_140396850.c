#include "../winhttp.h"

//----- (0000000140396850) ----------------------------------------------------
_BOOL8 __fastcall sub_140396850(__int64 a1, int a2)
{
	__int64 v2; // rax
	_BOOL8 result; // rax
	__int64 v4; // rax

	v2 = *(_QWORD*)(qword_140C65898 + 120);
	result = 1;
	if (!v2 || *(_DWORD*)(v2 + 8) != a2)
	{
		v4 = *(_QWORD*)(qword_140C65898 + 25744);
		if (!v4 || *(_DWORD*)(v4 + 8) != a2)
			return 0;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

