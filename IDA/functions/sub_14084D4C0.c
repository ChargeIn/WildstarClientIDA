#include "../winhttp.h"

//----- (000000014084D4C0) ----------------------------------------------------
__int64 __fastcall sub_14084D4C0(_QWORD* a1, __int64 a2)
{
	__int64 v2; // rbx

	v2 = a1[8];
	if (!v2)
		return (*(__int64(__fastcall**)(_QWORD*, __int64))(*a1 + 136i64))(a1, a2);
	while (!sub_140853640(v2, *(__int64**)(a2 + 8)))
	{
		v2 = *(_QWORD*)(v2 + 64);
		if (!v2)
			return (*(__int64(__fastcall**)(_QWORD*, __int64))(*a1 + 136i64))(a1, a2);
	}
	return 1i64;
}

