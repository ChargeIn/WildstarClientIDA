#include "../winhttp.h"

//----- (0000000140874400) ----------------------------------------------------
__int64 __fastcall sub_140874400(__int64 a1, unsigned __int64 a2)
{
	_QWORD* v3; // rax
	_QWORD* v4; // rbx

	v3 = sub_140873F00((__int64*)(a1 + 192), a2);
	v4 = v3;
	if (!v3)
		return 2i64;
	if (!*((_DWORD*)v3 + 2))
		sub_140865FB0(a2);
	++* ((_DWORD*)v4 + 2);
	return 1i64;
}

