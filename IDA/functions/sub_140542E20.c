#include "../winhttp.h"

//----- (0000000140542E20) ----------------------------------------------------
__int64 __fastcall sub_140542E20(__int64 a1, int a2, int a3)
{
	int v3; // r10d
	bool v4; // zf
	__int64 v5; // rcx
	int v6; // eax

	v3 = 0;
	v4 = a3 == *(_DWORD*)(a1 + 340);
	v5 = *(_QWORD*)(*(_QWORD*)(a1 + 312) + 8i64);
	if (v4)
		v6 = *(_DWORD*)(v5 + 20);
	else
		v6 = *(_DWORD*)(v5 + 24);
	LOBYTE(v3) = v4;
	return (unsigned int)(v3 + 2 * (3 * v6 + dword_140C38AC8[a2]));
}
// 140C38AC8: using guessed type _DWORD dword_140C38AC8[7];

