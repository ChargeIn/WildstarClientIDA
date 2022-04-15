#include "../winhttp.h"

//----- (0000000140024D60) ----------------------------------------------------
__int64 __fastcall sub_140024D60(_QWORD* a1)
{
	unsigned __int64 v1; // rdx
	__int64 v2; // rdx

	if (!*(_DWORD*)(qword_140C66DA8 + 540) && !*(_DWORD*)(qword_140C66DA8 + 368))
	{
		v1 = (int)sub_140056D60(a1, 1u) - 1i64;
		if (v1 < *(_QWORD*)(qword_140C66DA8 + 272))
		{
			v2 = *(_QWORD*)(qword_140C66DA8 + 264) + 816 * v1;
			sub_140023400(
				qword_140C66DA8,
				*(_QWORD*)v2,
				v2 + 8,
				*(_DWORD*)(v2 + 88),
				*(_DWORD*)(v2 + 84),
				*(_DWORD*)(v2 + 76));
		}
	}
	return 0i64;
}
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

