#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A73C0) ----------------------------------------------------
__int64 __fastcall sub_1400A73C0(__int64 a1, int a2)
{
	__int64 v2; // rax

	v2 = *(_QWORD*)(a1 + 8);
	if (!v2 || (unsigned __int64)(8i64 * (*(_QWORD*)(v2 + 24) - *(_QWORD*)(v2 + 32)) - *(_QWORD*)(a1 + 16)) < 0x40)
		return sub_140336470(a1, a2, 4ui64);
	sub_1400A7540(v2 + 32, (_QWORD*)(a1 + 16), a2, 4ui64);
	return 0i64;
}

