#include "../winhttp.h"

//----- (000000014084EB00) ----------------------------------------------------
__int64 __fastcall sub_14084EB00(__int64 a1)
{
	if (*(_QWORD*)(a1 + 120))
		return *(_QWORD*)(a1 + 120) + 88i64;
	while (1)
	{
		a1 = *(_QWORD*)(a1 + 64);
		if (!a1)
			break;
		if (*(_QWORD*)(a1 + 120))
			return *(_QWORD*)(a1 + 120) + 88i64;
	}
	return 0i64;
}

