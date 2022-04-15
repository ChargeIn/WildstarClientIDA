#include "../winhttp.h"

//----- (00000001405740B0) ----------------------------------------------------
_BOOL8 __fastcall sub_1405740B0(__int64 a1, __int64 a2, _DWORD* a3, __int64 a4)
{
	__int64 v4; // rax

	if (!a1)
		return 0i64;
	if (!a2)
		return 0i64;
	if (!a3)
		return 0i64;
	if (!a3[14])
		return 0i64;
	if (!*(_DWORD*)(a1 + 14164))
		return 0i64;
	v4 = *(_QWORD*)(a1 + 24);
	if (!v4 || !*(_QWORD*)(v4 + 392) && !*(_QWORD*)(v4 + 456))
		return 0i64;
	if ((*(_DWORD*)(a1 + 14160) & 0x10) != 0)
		return 0i64;
	if (a4 || !a3[5] && !a3[7])
		return !a3[4] && !a3[6] || (unsigned int)sub_140574C20(a2, a1, (__int64)a3);
	return (unsigned int)sub_140574B70(a2, a1, (__int64)a3) != 0;
}

