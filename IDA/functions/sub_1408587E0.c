#include "../winhttp.h"

//----- (00000001408587E0) ----------------------------------------------------
__int64 __fastcall sub_1408587E0(__int64 a1)
{
	__int64 v1; // rax

	v1 = qword_140C62428;
	if (!qword_140C62428)
		return sub_140858700(2u, a1);
	while (*(_QWORD*)(v1 + 8) != a1)
	{
		v1 = *(_QWORD*)v1;
		if (!v1)
			return sub_140858700(2u, a1);
	}
	if (*(_DWORD*)(v1 + 16) > 1u || *(_QWORD*)(a1 + 184))
		return sub_140858700(2u, a1);
	sub_140858590(a1);
	sub_14085E170(a1, 1);
	return 1i64;
}
// 140C62428: using guessed type __int64 qword_140C62428;

