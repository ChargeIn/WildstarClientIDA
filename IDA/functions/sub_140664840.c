#include "../winhttp.h"

//----- (0000000140664840) ----------------------------------------------------
__int64 __fastcall sub_140664840(_QWORD* a1)
{
	int v1; // edx
	__int64 v4; // rax

	v1 = dword_140C65C38;
	if (dword_140C65C38)
	{
		v4 = sub_1405A8A40((__int64)a1, dword_140C65C38);
		return sub_140663030(a1, v4);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = dword_140C65C38;
		a1[2] += 16i64;
		return (unsigned int)(v1 + 1);
	}
}
// 140C65C38: using guessed type int dword_140C65C38;

