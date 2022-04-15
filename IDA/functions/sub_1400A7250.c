#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A7250) ----------------------------------------------------
__int64 __fastcall sub_1400A7250(__int64 a1, unsigned __int8 a2, unsigned __int64 a3)
{
	__int64 v3; // rax

	v3 = *(_QWORD*)(a1 + 8);
	if (!v3 || (unsigned __int64)(8i64 * (*(_QWORD*)(v3 + 24) - *(_QWORD*)(v3 + 32)) - *(_QWORD*)(a1 + 16)) < 0x40)
		return sub_140336470(a1, a2, a3);
	sub_1400A7540(v3 + 32, (_QWORD*)(a1 + 16), a2, a3);
	return 0i64;
}

