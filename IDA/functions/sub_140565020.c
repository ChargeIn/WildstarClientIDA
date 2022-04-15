#include "../winhttp.h"

//----- (0000000140565020) ----------------------------------------------------
__int64 __fastcall sub_140565020(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v4; // rax

	if (!a2 || !a3)
		return 0i64;
	v4 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(*(_QWORD*)(a2 + 112) + 404i64), a3);
	if (v4)
		LODWORD(v4) = sub_1403BAD30(
			qword_140C65898,
			*(_DWORD*)(*(_QWORD*)(v4 + 112) + 4i64),
			*(_BYTE*)(qword_140C65898 + 28140));
	return sub_1403ACD90(qword_140C65B70, v4, a3);
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

