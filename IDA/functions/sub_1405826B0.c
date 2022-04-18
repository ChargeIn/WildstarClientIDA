#include "../winhttp.h"

//----- (00000001405826B0) ----------------------------------------------------
__int64 __fastcall sub_1405826B0(__int64 a1, __int64 a2)
{
	_DWORD* v3; // rax

	v3 = (_DWORD*)sub_1405845F0(a1, *(_QWORD*)(a2 + 8));
	if (v3)
	{
		v3[127] = *(_DWORD*)(a2 + 20);
		v3[128] = *(_DWORD*)(a2 + 16);
		v3[129] = *(_DWORD*)(a2 + 24);
		v3[130] = *(_DWORD*)(a2 + 28);
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "GuildPvp", byte_1409EA70C, v3);
	}
	return 0i64;
}
// 1409EA70C: using guessed type _BYTE byte_1409EA70C[40];
// 140C65898: using guessed type __int64 qword_140C65898;

