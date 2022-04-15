#include "../winhttp.h"

//----- (000000014076A980) ----------------------------------------------------
__int64 __fastcall sub_14076A980(__int64 a1)
{
	int v1; // eax
	char v3; // dl
	_DWORD* v4; // rcx

	v1 = 0;
	if (!*(_DWORD*)(qword_140C65B98 + 312) || (v3 = 1, !*(_QWORD*)(qword_140C65B98 + 320)))
		v3 = 0;
	v4 = *(_DWORD**)(a1 + 16);
	LOBYTE(v1) = v3 != 0;
	v4[2] = 1;
	*v4 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65B98: using guessed type __int64 qword_140C65B98;

