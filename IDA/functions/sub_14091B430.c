#include "../winhttp.h"

//----- (000000014091B430) ----------------------------------------------------
__int64 __fastcall sub_14091B430(__int64** a1)
{
	__int64** v2; // rbx
	__int64 v3; // rdi

	v2 = a1;
	v3 = 3i64;
	do
	{
		if (*v2)
			sub_140933390(*v2);
		++v2;
		--v3;
	} while (v3);
	return off_140C1B1E8(a1);
}
// 140C1B1E8: using guessed type __int64 (__fastcall *off_140C1B1E8)(_QWORD);

