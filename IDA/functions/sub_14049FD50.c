#include "../winhttp.h"

//----- (000000014049FD50) ----------------------------------------------------
__int64 __fastcall sub_14049FD50(__int64 a1, __int64 a2, int a3, int a4)
{
	unsigned int v4; // ecx
	unsigned int v5; // edx
	int v6; // r8d

	v4 = 0;
	v5 = 0;
	if (qword_140C65970)
		LOBYTE(v5) = *(_DWORD*)(qword_140C65970 + 8) == a4;
	v6 = a3 - 1;
	if (!v6)
		return v5;
	if (v6 == 1)
		LOBYTE(v4) = v5 == 0;
	return v4;
}
// 140C65970: using guessed type __int64 qword_140C65970;

