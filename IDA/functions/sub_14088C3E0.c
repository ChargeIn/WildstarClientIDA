#include "../winhttp.h"

//----- (000000014088C3E0) ----------------------------------------------------
__int64 __fastcall sub_14088C3E0(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 v6; // rax

	sub_14088B4A0((__int64)a1);
	v6 = a1[2];
	if (!v6)
		return sub_14088A1F0(qword_140C629C0, a1, a3, a2);
	a1[13] = *(_QWORD*)(v6 + 104);
	return 1i64;
}
// 140C629C0: using guessed type __int64 qword_140C629C0;

