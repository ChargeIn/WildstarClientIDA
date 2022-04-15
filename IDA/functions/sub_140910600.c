#include "../winhttp.h"

//----- (0000000140910600) ----------------------------------------------------
__int64 __fastcall sub_140910600(__int64 a1)
{
	__int64** v2; // rcx
	__int64 result; // rax

	if (a1)
	{
		if ((*(_BYTE*)a1 & 0x40) != 0)
		{
			v2 = *(__int64***)(a1 + 56);
			if (v2)
				sub_14091B430(v2);
		}
		return off_140C1B1E8(a1);
	}
	return result;
}
// 140C1B1E8: using guessed type __int64 (__fastcall *off_140C1B1E8)(_QWORD);

